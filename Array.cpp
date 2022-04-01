#include <iostream>
using namespace std;

int maksimal = 5;
string arraybuku[5];
int top = 0;


bool isfull()
{
    if( top == maksimal ){
        return true;
    }else{
        return false;
    }
}

bool isempty()
{
    if( top == 0 ){
        return true;
    }else{
        return false;
    }
}

void pushArray(string data){
    if (isfull() ) {
        cout << "Data Penuh" <<endl;
    }else{
        arraybuku[top] = data;
        top++;
    }
}

void popArray(){
    if( isempty() ){
        cout << "Data kosong" << endl;
    }else{
        arraybuku[top-1]= "";
        top--;
    }
}

void displayArray(){
    if( isempty() ){
        cout << "Data kosong" << endl;
    }else
    cout << "Data stack array : " << endl;
    for(int i = maksimal - 1; i >=0; i--){
        if (arraybuku[i] !=""){
            cout << "Data :" << arraybuku[i] << endl;
        }
    }
    cout << "\n" << endl;
    }


void peekArray(int posisi){
    if(isempty() ){
        cout << "Data kosong" << endl;
    }else {
        int index = top;
        for(int i = 0; i < posisi; i++){
            index--;
        }
        cout << "Data posisi ke-" << posisi << ":" << arraybuku[index] << endl;
    }
}

int main(){

    pushArray("Matematika");
    displayArray();
    pushArray("Fisika");
    displayArray();
    pushArray("Biologi");
    displayArray();
    pushArray("Sejarah");
    displayArray();
    pushArray("Bindo");
    displayArray();

    pushArray("Binggris");
    displayArray();

    popArray();
    displayArray();

    cout << "apakah data full ? :" << isfull() << endl;
    cout << "apakah data kosong ? :" << isempty() << endl;

    peekArray(3);

}