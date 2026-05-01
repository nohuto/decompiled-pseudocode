/*
 * XREFs of ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804086F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18002CBE4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18007DA98 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802116FC (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804076F8 (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ??1ControlGained@HolographicPositionerTelemetry@@QEAA@XZ @ 0x180407E3C (--1ControlGained@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18040B9F8 (-StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18040BD3C (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x18040CBFC (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18040D118 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040DEDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct IApplicationView *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v13[8]; // [rsp+20h] [rbp-E0h] BYREF
  struct IApplicationView *v14; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  struct IApplicationView *v16[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v21[42]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v17,
    a2);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v15,
    (__int64)&v17,
    0);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v19,
    (__int64)&v17,
    v18);
  while ( v15 != v19 || v16[1] != (struct IApplicationView *)v20[1] )
  {
    v7 = v16[0];
    v14 = v16[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v21,
      (__int64)"ControlGained");
    v21[0] = &HolographicPositionerTelemetry::ControlGained::`vftable';
    HolographicPositionerTelemetry::ControlGained::StartActivity(v21, v7, a3, a4);
    v13[0] = 0;
    v8 = HolographicPositioner::_EnsureShellStateForView((HolographicPositioner *)(a1 - 168), v7, v13);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D3,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
    if ( v13[0] )
    {
      v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v7 + 432LL))(v7, 0LL);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D9,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v9);
      v10 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)(a1 - 168), v7, 0LL);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3DD,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v10);
      v11 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 168), v7);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3E0,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v11);
    }
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
    HolographicPositionerTelemetry::ControlGained::~ControlGained((HolographicPositionerTelemetry::ControlGained *)v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    ++v15;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v15);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v16);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
}
