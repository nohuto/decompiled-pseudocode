/*
 * XREFs of ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180519370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B6B84 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B7C3C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800EB4F0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801F0760 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ @ 0x180517EA8 (--1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x180518EFC (-CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18051A0DC (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x18051B87C (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x18051CBA8 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18051E3D0 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18051F858 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x18051FADC (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TabletModePositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, struct IUnknown **); // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, __int64, struct IUnknown **); // rbx
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v16; // rax
  int v17; // eax
  bool v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rsi
  int (__fastcall *v22)(__int64, struct IUnknown **); // rdi
  struct IApplicationView *v23; // rdx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdx
  struct IApplicationView *v27; // rdx
  int inited; // eax
  __int64 v29; // rsi
  int (__fastcall *v30)(__int64, struct IUnknown **); // rdi
  int v31; // eax
  int ScaleFactor; // eax
  int v33; // eax
  wil::details::in1diag3 *v34; // rcx
  __int64 v35; // rdx
  bool IsEmpty; // al
  struct tagRECT *p_rc; // r9
  struct IUnknown *v38; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v39; // [rsp+38h] [rbp-C8h] BYREF
  enum DEVICE_SCALE_FACTOR v40[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+4Ch] [rbp-B4h] BYREF
  struct IUnknown *v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v46[42]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v46,
    (__int64)"TMPControlGained");
  v46[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  TabletModeTraceLogging::TMPControlGained::StartActivity(v46, a2, a3);
  v41 = 0;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v41);
  v6 = *(_DWORD *)(a1 + 108);
  v38 = 0LL;
  if ( v41 == v6 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v38);
    v17 = v15(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v16);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x41F,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v17);
LABEL_53:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
      goto LABEL_54;
    }
    v42 = 0;
    if ( ((int (__fastcall *)(struct IUnknown *, int *))v38->lpVtbl[9].QueryInterface)(v38, &v42) < 0 || !v42 )
      goto LABEL_53;
    v18 = 1;
    v19 = 0LL;
    v44 = 0LL;
    rc = 0LL;
    if ( a3 != 4 )
    {
      if ( a3 != 7 )
        goto LABEL_47;
      v39 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)(a1 - 128),
                 v27,
                 (struct IApplicationViewOperation **)&v39);
      if ( inited >= 0 )
      {
        v43 = 0LL;
        v29 = *(_QWORD *)(a1 + 208);
        v30 = *(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v29 + 72LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
        if ( v30(v29, &v43) >= 0 )
          v18 = SHIsSameObject(v43, v38);
        ((void (__fastcall *)(struct IUnknown *, _QWORD))v39->lpVtbl[4].QueryInterface)(v39, 0LL);
        v31 = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown *))v38->lpVtbl[13].AddRef)(v38, v39);
        if ( v31 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x45E,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v31);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x451,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
      }
      ((void (__fastcall *)(struct IUnknown *, struct tagRECT *))v38->lpVtbl[5].AddRef)(v38, &rc);
      OffsetRect(&rc, -rc.left, -rc.top);
      v40[0] = SCALE_100_PERCENT;
      ScaleFactor = TabletModePositioner::GetScaleFactor((IUnknown **)(a1 - 128), v40);
      if ( ScaleFactor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x469,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)ScaleFactor);
      rc.right -= 2 * (int)(float)((float)(v40[0] * GetSystemMetrics(5)) / 100.0);
      rc.bottom -= 2 * (int)(float)((float)(v40[0] * GetSystemMetrics(6)) / 100.0);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
LABEL_43:
      if ( !v18 )
        goto LABEL_52;
      if ( v19 )
      {
        v33 = TabletModePositioner::SwitchToCustomLayoutHelper(a1 - 128, v19);
        v34 = retaddr;
        if ( v33 < 0 )
        {
          v35 = 1138LL;
LABEL_51:
          wil::details::in1diag3::_Log_Hr(
            v34,
            (void *)v35,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v33);
        }
LABEL_52:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v44);
        goto LABEL_53;
      }
LABEL_47:
      IsEmpty = Geometry::CRect::IsEmpty((Geometry::CRect *)&rc);
      p_rc = &rc;
      if ( IsEmpty )
        p_rc = 0LL;
      v33 = TabletModePositioner::SwitchToAppHelper(a1 - 128, v38, 2LL, p_rc, 0LL);
      v34 = retaddr;
      if ( v33 >= 0 )
        goto LABEL_52;
      v35 = 1145LL;
      goto LABEL_51;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 144), &v38);
    v20 = *(_QWORD *)(a1 + 136);
    if ( v20 && (*(unsigned int (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v20 + 184LL))(v20, v38) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v44, (_QWORD *)(a1 + 136));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 136));
      v19 = v44;
    }
    v39 = 0LL;
    v21 = *(_QWORD *)(a1 + 208);
    v22 = *(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v21 + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
    if ( v22(v21, &v39) < 0 || SHIsSameObject(v39, v38) )
    {
LABEL_31:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
      goto LABEL_43;
    }
    v18 = 0;
    *(_QWORD *)v40 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v40);
    v24 = TabletModePositioner::CreateAndInitApplicationViewOperation(
            (TabletModePositioner *)(a1 - 128),
            v23,
            (struct IApplicationViewOperation **)v40);
    v25 = retaddr;
    if ( v24 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v40 + 96LL))(*(_QWORD *)v40, 0LL);
      v24 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v38->lpVtbl[13].AddRef)(v38, *(_QWORD *)v40);
      v25 = retaddr;
      if ( v24 >= 0 )
      {
LABEL_30:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v40);
        goto LABEL_31;
      }
      v26 = 1097LL;
    }
    else
    {
      v26 = 1091LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v25,
      (void *)v26,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_30;
  }
  v7 = *(_QWORD *)(a1 + 320);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v7 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
  v9 = v8(v7, 2LL, &v38);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F2,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v9);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v38->lpVtbl[1].Release)(v38, 3LL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F3,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v10);
  if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
    DwmpEndTransitionRequest(91LL);
  TabletModePositioner::SetTabletMode(a1 - 128, v41);
  if ( (int)TabletModePositioner::CancelMoveSizeOperationForOperableView((TabletModePositioner *)(a1 - 128)) < 0 )
  {
    v11 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry((TabletModePositioner *)(a1 - 128));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x403,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = *(_QWORD *)(a1 + 320);
  v13 = *(int (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v12 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
  if ( v13(v12, 1LL, &v38) >= 0 )
  {
    v14 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v38->lpVtbl[1].Release)(v38, 0LL);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x40A,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v14);
  }
  *(_BYTE *)(a1 + 112) = 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
LABEL_54:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v46);
  TabletModeTraceLogging::TMPControlGained::~TMPControlGained((TabletModeTraceLogging::TMPControlGained *)v46);
}
