/*
 * XREFs of _lambda_279b59b1da187398d137b7ca9bd87eac_::operator() @ 0x1802D8824
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::Run @ 0x1802D8C30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B5108 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1802D7468 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ??1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802D87F8 (--1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??$?0H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAH@Z @ 0x1804D4094 (--$-0H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant@D$0A@@w.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_279b59b1da187398d137b7ca9bd87eac_::operator()(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 *v4; // r14
  __int64 *i; // rbx
  const char *v6; // r9
  LPVOID v7; // rbx
  int (__fastcall *v8)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  int (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-198h] BYREF
  __int64 v13; // [rsp+38h] [rbp-190h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-188h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-180h] BYREF
  __int128 v16; // [rsp+50h] [rbp-178h] BYREF
  __int64 v17; // [rsp+60h] [rbp-168h]
  __int64 *v18; // [rsp+68h] [rbp-160h]
  volatile signed __int32 *v19[40]; // [rsp+70h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v2 = a1;
  v18 = a1;
  v3 = *a1;
  *(_BYTE *)(v3 + 32) = *((_DWORD *)a1 + 6) == 1;
  LODWORD(v12) = *(_BYTE *)(v3 + 32) != 0;
  ViewManagerInteropTraceLogging::PdcNotificationCallback::PdcNotificationCallback(v19, a2, &v12);
  try
  {
    v16 = 0LL;
    v17 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v3 + 24) + 48LL))(*(_QWORD *)(v3 + 24), &v16);
    v4 = (__int64 *)*((_QWORD *)&v16 + 1);
    for ( i = (__int64 *)v16; i != v4; ++i )
    {
      v12 = *i;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v3 + 24) + 56LL))(
        *(_QWORD *)(v3 + 24),
        v12,
        *(_BYTE *)(v3 + 32) != 0 ? 2 : 0);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19, 0);
    if ( (_QWORD)v16 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
        (__int64 *)v16,
        *((__int64 **)&v16 + 1));
      std::_Deallocate<16,0>((void *)v16, (v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x59,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      v6);
    v2 = v18;
  }
  ppv = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  if ( CoCreateInstance(
         &CLSID_ShellServiceHostBrokerProvider,
         0LL,
         4u,
         &GUID_0f4accb1_d8f9_4011_ba37_2557925a78cf,
         &ppv) >= 0 )
  {
    v7 = ppv;
    v8 = *(int (__fastcall **)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
    if ( v8(
           v7,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v14) >= 0 )
    {
      v9 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14;
      v10 = **v14;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
      if ( v10(v9, &GUID_23030752_8e7c_4225_8c88_28211f93ddf7, &v13) >= 0 )
      {
        v11 = *v2;
        LOBYTE(v11) = *(_BYTE *)(*v2 + 32) == 0;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 72LL))(v13, v11);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  ViewManagerInteropTraceLogging::PdcNotificationCallback::~PdcNotificationCallback(v19);
}
