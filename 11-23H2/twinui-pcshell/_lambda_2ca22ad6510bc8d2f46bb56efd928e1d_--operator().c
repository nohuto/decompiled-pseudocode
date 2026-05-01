/*
 * XREFs of _lambda_2ca22ad6510bc8d2f46bb56efd928e1d_::operator() @ 0x1804E5F70
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2ca22ad6510bc8d2f46bb56efd928e1d___::Run @ 0x1804EBAB0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2ca22ad6510bc8d2f46bb56efd928e1d___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x18006B878 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1804E59D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IAsyncOperationComplet_ea_1804E59D8.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_2ca22ad6510bc8d2f46bb56efd928e1d_::operator()(__int64 **a1)
{
  PSRWLOCK v2; // r14
  __int64 v3; // rbx
  int AgileReference; // ebx
  __int64 *v5; // rdi
  void (__fastcall *v7)(__int64 *, __int64 *); // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  int v16; // [rsp+20h] [rbp-38h]
  int v17[2]; // [rsp+20h] [rbp-38h]
  __int64 v18[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  PSRWLOCK v22; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v23; // [rsp+78h] [rbp+20h]

  try
  {
    v2 = 0LL;
    v22 = 0LL;
    v3 = **a1;
    if ( v3 )
    {
      SRWLock = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&SRWLock);
      AgileReference = RoGetAgileReference(0LL, &GUID_6723b702_a620_59ad_be1b_dbb8d6f48dd4, v3, &SRWLock);
      v2 = SRWLock;
      SRWLock = 0LL;
      v22 = v2;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&SRWLock);
      if ( AgileReference < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x373,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)AgileReference,
          v16);
    }
    v21 = 0LL;
    (*(void (__fastcall **)(__int64, PSRWLOCK *))(*(_QWORD *)a1[1][35] + 200LL))(a1[1][35], &SRWLock);
    v5 = a1[1];
    if ( !v5[13] )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x379,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL,
        v16);
    if ( *((_BYTE *)v5 + 184) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x37C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8000000ALL,
        v16);
    if ( *((_DWORD *)v5 + 120) != 4 || *((_DWORD *)v5 + 121) != 4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x385,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL,
        v16);
    v7 = *(void (__fastcall **)(__int64 *, __int64 *))(*v5 + 216);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v21);
    v7(v5, &v21);
    v8 = a1[1];
    *((_BYTE *)v8 + 184) = 1;
    v22 = 0LL;
    v9 = v8[24];
    v8[24] = (__int64)v2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
      &SRWLock,
      (__int64)a1[1]);
    *(_QWORD *)v17 = a1[1];
    wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
      v18,
      (__int64)SRWLock);
    v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>((__int64)v10);
      v11[2] = *(_QWORD *)v17;
      v12 = v18[0];
      v18[0] = 0LL;
      v11[3] = v12;
      *v11 = off_1807DFCD0;
    }
    else
    {
      v11 = 0LL;
    }
    v23 = v11;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 48LL))(v21, v11);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3A2,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v13,
        v17[0]);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&SRWLock);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v21);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3A4,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v14);
  }
  return result;
}
