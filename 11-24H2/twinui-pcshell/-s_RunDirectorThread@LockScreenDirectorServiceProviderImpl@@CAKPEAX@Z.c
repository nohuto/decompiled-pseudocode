/*
 * XREFs of ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x180249020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800D334C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z @ 0x18014DFD0 (-s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U?$default_delete@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@wistd@@@wistd@@QEAAXPEAUINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@Z @ 0x1802CBA98 (-reset@-$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U-$default_delete@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LockScreenDirectorServiceProviderImpl::s_RunDirectorThread(CMarshaledInterface *Parameter)
{
  int v2; // ebx
  void *v3; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v6; // [rsp+50h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp+28h] BYREF
  CMarshaledInterface *v8; // [rsp+60h] [rbp+30h] BYREF

  v8 = Parameter;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(
         &GUID_637118f4_0e4e_4c90_bc39_161165f55b6e,
         0LL,
         0x17u,
         &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb,
         &ppv);
  if ( v2 >= 0 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
    v2 = CMarshaledInterface::_Unmarshal(Parameter, &GUID_c853771a_f336_4cf8_9a27_1570293ab52d, &v6, 0);
    if ( v2 >= 0 )
      v2 = (*(__int64 (__fastcall **)(void *, LPVOID))(*(_QWORD *)v6 + 24LL))(v6, ppv);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  }
  v3 = (void *)*((_QWORD *)Parameter + 1);
  *((_QWORD *)Parameter + 1) = 0LL;
  v6 = v3;
  wistd::unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>::reset(&v8);
  if ( v2 >= 0 )
    LockScreenDirectorServiceProviderImpl::s_RunMessageLoop(v3);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFE,
      (int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v2);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  wistd::unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>::reset(&v8);
  return 0LL;
}
