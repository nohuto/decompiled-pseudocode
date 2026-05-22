/*
 * XREFs of ??1ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAA@XZ @ 0x18016B150
 * Callers:
 *     ??_EConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z @ 0x18016BE30 (--_EConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006934C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::~ConstantChangedEventArgs(
        Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *this)
{
  volatile int *v2; // rdx

  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 11);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 10);
  WindowsDeleteString(*((HSTRING *)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v2);
}
