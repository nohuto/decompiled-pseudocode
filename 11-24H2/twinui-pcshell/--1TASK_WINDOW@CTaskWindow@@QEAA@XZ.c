/*
 * XREFs of ??1TASK_WINDOW@CTaskWindow@@QEAA@XZ @ 0x1802C3B90
 * Callers:
 *     ??1CTaskWindow@@UEAA@XZ @ 0x1802C3B5C (--1CTaskWindow@@UEAA@XZ.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall CTaskWindow::TASK_WINDOW::~TASK_WINDOW(CTaskWindow::TASK_WINDOW *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
}
