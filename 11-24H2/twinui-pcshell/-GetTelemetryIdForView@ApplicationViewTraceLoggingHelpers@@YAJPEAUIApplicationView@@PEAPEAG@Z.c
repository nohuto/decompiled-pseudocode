/*
 * XREFs of ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800B88BC
 * Callers:
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x1800B8058 (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180186108 (-StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW.c)
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x18051A8BC (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18051DCA4 (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x18051E0FC (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x18051E2AC (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18051E3D0 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18051E510 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x180520054 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805201C0 (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805203C4 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180016930 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800B734C (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800B73E4 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x1800B75E8 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(
        ApplicationViewTraceLoggingHelpers *this,
        struct IApplicationView *a2,
        unsigned __int16 **a3)
{
  _WORD *v5; // rbx
  __int64 v6; // rsi
  _WORD *v7; // rax
  int v8; // edi
  _WORD *i; // rcx
  __int16 v10; // dx
  _WORD *v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // eax
  int (__fastcall **v21)(ApplicationViewTraceLoggingHelpers *, GUID *, int *); // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25[2]; // [rsp+20h] [rbp-E0h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-D8h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  LPVOID v30[3]; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR ClassName[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v5 = 0LL;
  pv = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  *(_QWORD *)v25 = 0LL;
  if ( (**(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, int *))this)(
         this,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         v25) >= 0 )
  {
    v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (__int64)&pv,
            (__int64)L"WinRT: ",
            0xFFFFFFFFFFFFFFFFuLL);
    v16 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE,
        (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
        (const char *)(unsigned int)v20);
      v24 = *(_QWORD *)v25;
      if ( *(_QWORD *)v25 )
      {
        *(_QWORD *)v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      if ( pv )
        CoTaskMemFree(pv);
      return v16;
    }
    v30[0] = 0LL;
    v21 = *(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, int *))this;
    v30[1] = (LPVOID)-1LL;
    v30[2] = (LPVOID)-1LL;
    if ( ((int (__fastcall *)(ApplicationViewTraceLoggingHelpers *, LPVOID *))v21[17])(this, v30) >= 0 )
    {
      v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
              &pv,
              (__int64 *)v30);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13,
          (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
          (const char *)(unsigned int)v22);
    }
    if ( v30[0] )
      CoTaskMemFree(v30[0]);
LABEL_18:
    v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
            (__int64 *)&pv,
            a2);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v17 = *(_QWORD *)v25;
      if ( *(_QWORD *)v25 )
      {
        *(_QWORD *)v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( pv )
        CoTaskMemFree(pv);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v25);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
    return v16;
  }
  hWnd = 0LL;
  v6 = 8LL;
  if ( is_mul_ok(8uLL, 2uLL) )
  {
    v7 = CoTaskMemAlloc(0x10uLL);
    if ( v7 )
    {
      v29 = 8LL;
      v5 = v7;
      pv = v7;
      *v7 = 0;
      v8 = 0;
    }
    else
    {
      v8 = -2147024882;
    }
  }
  else
  {
    v8 = -2147024362;
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
      (const char *)(unsigned int)v8);
    v19 = *(_QWORD *)v25;
    if ( *(_QWORD *)v25 )
    {
      *(_QWORD *)v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  else
  {
    for ( i = v5; v6 != 1; ++i )
    {
      v10 = *(_WORD *)((char *)i + (char *)L"Win32: " - (char *)v5);
      if ( !v10 )
        break;
      *i = v10;
      --v6;
    }
    v11 = i - 1;
    if ( v6 )
      v11 = i;
    *v11 = 0;
    v28 = 7LL;
    hWnd = 0LL;
    v12 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, HWND *))(*(_QWORD *)this + 72LL))(
            this,
            &hWnd);
    v8 = v12;
    if ( v12 >= 0 )
    {
      if ( GetClassNameW(hWnd, ClassName, 260) )
      {
        v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
                &pv,
                L"Class[%s] ",
                ClassName);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x20,
            (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
            (const char *)(unsigned int)v13);
      }
      v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
              &pv,
              L"Window[%lx]",
              (unsigned int)hWnd);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x23,
          (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
          (const char *)(unsigned int)v14);
      goto LABEL_18;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
      (const char *)(unsigned int)v12);
    v23 = *(_QWORD *)v25;
    if ( *(_QWORD *)v25 )
    {
      *(_QWORD *)v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return (unsigned int)v8;
}
