/*
 * XREFs of ??1CTaskWindow@@UEAA@XZ @ 0x1802C3B5C
 * Callers:
 *     ??_GCTaskWindow@@UEAAPEAXI@Z @ 0x180235C10 (--_GCTaskWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1TASK_WINDOW@CTaskWindow@@QEAA@XZ @ 0x1802C3B90 (--1TASK_WINDOW@CTaskWindow@@QEAA@XZ.c)
 */

void __fastcall CTaskWindow::~CTaskWindow(CTaskWindow *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
  CTaskWindow::TASK_WINDOW::~TASK_WINDOW((CTaskWindow *)((char *)this + 40));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>((__int64)this);
}
