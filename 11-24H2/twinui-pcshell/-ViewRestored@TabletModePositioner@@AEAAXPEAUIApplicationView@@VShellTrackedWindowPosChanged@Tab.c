/*
 * XREFs of ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180520704
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18051CF60 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180231DC8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804BE8CC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x180517E50 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x18051A42C (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?FullScreenAppIgnored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x18051A6AC (-FullScreenAppIgnored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x18051AD68 (-GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18051BCF4 (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z @ 0x18051BE24 (-IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x18051C824 (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?Restored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x18051C8F4 (-Restored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?RestoredAppAddedToLayout@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x18051C930 (-RestoredAppAddedToLayout@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18051F858 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x180520054 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805201C0 (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805203C4 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TabletModePositioner::ViewRestored(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *a3)
{
  bool v6; // bl
  struct IApplicationView *v7; // rdx
  HRESULT Service; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), struct tagRECT *, _QWORD); // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  int (__fastcall *v19)(__int64, void **); // rbx
  int v20; // eax
  void *ppvOut[2]; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-30h] BYREF
  TabletModeTraceLogging::ShellTrackedWindowPosChanged *v23; // [rsp+50h] [rbp-20h]
  struct tagRECT v24; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v23 = a3;
  TabletModeTraceLogging::ShellTrackedWindowPosChanged::Restored(a3);
  v6 = 0;
  if ( TabletModePositioner::IsOldFullScreenView((TabletModePositioner *)a1, (struct IUnknown *)a2) )
  {
    ppvOut[0] = 0LL;
    v24 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
    Service = IUnknown_QueryService(
                *(IUnknown **)(a1 + 16),
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                ppvOut);
    v9 = retaddr;
    if ( Service >= 0 )
    {
      Service = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut[0] + 72LL))(ppvOut[0], &v24);
      v9 = retaddr;
      if ( Service >= 0 )
      {
        v22 = 0LL;
        TabletModePositioner::GetFrameRectForView(a2, &v22);
        v6 = Geometry::operator==(&v22, &v24);
        if ( v6 )
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::FullScreenAppIgnored(a3);
LABEL_9:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
        if ( v6 )
          goto LABEL_29;
        goto LABEL_10;
      }
      v10 = 2004LL;
    }
    else
    {
      v10 = 2003LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v9,
      (void *)v10,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_9;
  }
LABEL_10:
  if ( TabletModePositionerHelpers::IsOperableView(a2, v7) )
  {
    *(_QWORD *)&v22.left = 0LL;
    v11 = *(_QWORD *)(a1 + 248);
    v12 = *(int (__fastcall **)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), struct tagRECT *, _QWORD))(*(_QWORD *)v11 + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22.left);
    if ( v12(v11, a2, &v22, 0LL) < 0 )
    {
      ppvOut[0] = 0LL;
      v18 = *(_QWORD *)(a1 + 336);
      v19 = *(int (__fastcall **)(__int64, void **))(*(_QWORD *)v18 + 72LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppvOut);
      if ( v19(v18, ppvOut) >= 0 && SHIsSameObject((struct IUnknown *)ppvOut[0], (struct IUnknown *)a2) )
      {
        TabletModeTraceLogging::ShellTrackedWindowPosChanged::RestoredAppAddedToLayout(a3);
        v20 = TabletModePositioner::SwitchToAppHelper(a1, (struct IApplicationView *)a2, 1u, 0LL, 0LL);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x81E,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v20);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppvOut);
      goto LABEL_28;
    }
    v24 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct tagRECT *))(**(_QWORD **)&v22.left + 56LL))(
      *(_QWORD *)&v22.left,
      0LL,
      &v24);
    *(_OWORD *)ppvOut = 0LL;
    TabletModePositioner::GetFrameRectForView(a2, (struct tagRECT *)ppvOut);
    if ( TabletModePositioner::IsViewRectValid((TabletModePositioner *)a1, (const struct tagRECT *)ppvOut, &v24) )
      goto LABEL_28;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(**(_QWORD **)(a1 + 320) + 24LL))(
            *(_QWORD *)(a1 + 320),
            a2);
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceMaximized(
          a3,
          (struct IApplicationView *)a2,
          &v24,
          (const struct tagRECT *)ppvOut);
        v15 = TabletModePositioner::SwitchToAppHelper(a1, (struct IApplicationView *)a2, 4u, 0LL, 0LL);
        v16 = retaddr;
        if ( v15 < 0 )
        {
          v17 = 2057LL;
          goto LABEL_22;
        }
LABEL_28:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22.left);
        goto LABEL_29;
      }
      if ( v14 == 1 )
      {
        TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceEvicted(
          a3,
          (struct IApplicationView *)a2,
          &v24,
          (const struct tagRECT *)ppvOut);
        v15 = TabletModePositioner::EvictAppHelper((IUnknown *)a1, (__int64)a2, 8u);
        v16 = retaddr;
        if ( v15 < 0 )
        {
          v17 = 2064LL;
LABEL_22:
          wil::details::in1diag3::_Log_Hr(
            v16,
            (void *)v17,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_28;
        }
        goto LABEL_28;
      }
    }
    TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewPositionAdjusted(
      a3,
      (struct IApplicationView *)a2,
      &v24,
      (const struct tagRECT *)ppvOut);
    v15 = TabletModePositioner::ResizeViewHelper(
            (IUnknown *)a1,
            (struct IApplicationView *)a2,
            LODWORD(ppvOut[1]) - LODWORD(ppvOut[0]));
    v16 = retaddr;
    if ( v15 < 0 )
    {
      v17 = 2048LL;
      goto LABEL_22;
    }
    goto LABEL_28;
  }
LABEL_29:
  TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged(a3);
}
