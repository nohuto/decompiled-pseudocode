/*
 * XREFs of ?TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayout@@@Z @ 0x1805A7320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800AA8E4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180186520 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018698C (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1802C2730 (-_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV-$.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAA@XZ @ 0x1805A5C8C (--1SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAAXXZ @ 0x1805A6DA8 (-StartActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A7D70 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSnapAssistControllerBase::TriggerSnapAssistFromAppLayout(
        CSnapAssistControllerBase *this,
        struct IImmersiveMonitor *a2,
        struct IAppLayout *a3)
{
  __int64 (__fastcall *v6)(struct IAppLayout *, __int64 *, _QWORD); // rbx
  int v7; // ebx
  __int64 v8; // r9
  int SnappedWindowsForMonitor; // edi
  __int64 v10; // rdx
  void *v11; // rbx
  DWORD v12; // edx
  void *v13; // rbx
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  __int128 v18; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[42]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"SnapAssistTabletModeProcessing");
  v19[0] = &CSnapComponentTelemetry::SnapAssistTabletModeProcessing::`vftable';
  CSnapComponentTelemetry::SnapAssistTabletModeProcessing::StartActivity((CSnapComponentTelemetry::SnapAssistTabletModeProcessing *)v19);
  v15 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IAppLayout *, __int64 *, _QWORD))(*(_QWORD *)a3 + 168LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v7 = v6(a3, &v15, 0LL);
  if ( v7 < 0 )
    goto LABEL_12;
  v18 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v15 + 56LL))(v15, 0LL, &v18);
  v16 = 0LL;
  v17 = 0LL;
  SnappedWindowsForMonitor = CSnapAssistControllerBase::_RetrieveSnappedWindowsForMonitor(
                               (__int64)this,
                               (__int64)a2,
                               (__int64)&v16,
                               v8);
  if ( SnappedWindowsForMonitor < 0 )
  {
    v10 = 264LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)SnappedWindowsForMonitor);
    v11 = (void *)v16;
    if ( (_QWORD)v16 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
        (__int64 *)v16,
        *((__int64 **)&v16 + 1));
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)((v17 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    v7 = SnappedWindowsForMonitor;
    goto LABEL_12;
  }
  SnappedWindowsForMonitor = CSnapAssistControllerBase::_SnapAssistTriggered(
                               (_DWORD)this,
                               (unsigned int)&v18,
                               (_DWORD)a2,
                               (unsigned int)&v16,
                               (unsigned __int8)a3,
                               2,
                               0,
                               0LL);
  if ( SnappedWindowsForMonitor < 0 )
  {
    v10 = 265LL;
    goto LABEL_4;
  }
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19, v12);
  v13 = (void *)v16;
  if ( (_QWORD)v16 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
      (__int64 *)v16,
      *((__int64 **)&v16 + 1));
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)((v17 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  v7 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  CSnapComponentTelemetry::SnapAssistTabletModeProcessing::~SnapAssistTabletModeProcessing((CSnapComponentTelemetry::SnapAssistTabletModeProcessing *)v19);
  return (unsigned int)v7;
}
