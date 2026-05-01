/*
 * XREFs of _lambda_02ea2976da830b140e60944cbaaa9176_::operator() @ 0x18054C920
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176___::RunTask @ 0x18054FE00 (CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BCDCC (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ @ 0x18054F8A4 (-RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18054FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_QuickSwitchTest@@@tip@@QEAA?AV?$test_watcher@U_tip_QuickSwitchTest@@@2@XZ @ 0x180551030 (-start_and_watch_errors@-$tip_test@U_tip_QuickSwitchTest@@@tip@@QEAA-AV-$test_watcher@U_tip_Quic.c)
 *     ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAHIIH@Z @ 0x18055D48C (-PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAHIIH@Z.c)
 *     ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z @ 0x18055D4D8 (-PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z.c)
 *     ?SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUHWND__@@@Z @ 0x18055DBF4 (-SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_02ea2976da830b140e60944cbaaa9176_::operator()(__int64 *a1, __int64 a2)
{
  HWND v4; // r9
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 (__fastcall *v7)(__int64, __int64, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // r9d
  __int64 (__fastcall *v12)(__int64, __int64, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64, GUID *, __int64 *); // rbx
  unsigned int v16; // r14d
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // eax
  int v21; // r9d
  HWND WindowW; // rax
  BOOL v23; // eax
  int v24; // r9d
  const char *v25; // r9
  __int64 v26; // rdx
  unsigned int v27; // eax
  int v28; // r9d
  __int64 (__fastcall *v30)(__int64, __int64, GUID *, __int64 *); // rbx
  int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // eax
  int v34; // r9d
  __int64 (__fastcall *v35)(__int64, __int64, GUID *, __int64 *); // rbx
  unsigned int v36; // eax
  int v37; // r9d
  std::_Ref_count_base *v38[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v39[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v40[24]; // [rsp+48h] [rbp-38h] BYREF
  int v41; // [rsp+60h] [rbp-20h]
  __int64 v42; // [rsp+70h] [rbp-10h]
  std::_Ref_count_base *v43; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v45; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v46; // [rsp+B0h] [rbp+30h] BYREF

  switch ( *((_DWORD *)a1 + 6) )
  {
    case 1:
      v45 = 0LL;
      v35 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
      v31 = v35(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v45);
      v5 = v31;
      if ( v31 >= 0 )
      {
        v36 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v45 + 48LL))(
                v45,
                a1[1],
                a1[2],
                *((_DWORD *)a1 + 10) == 2);
        v31 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                *((_DWORD *)a1 + 10),
                v36,
                v37);
        v5 = v31;
        if ( v31 >= 0 )
        {
LABEL_54:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
          return v5;
        }
        v32 = 673LL;
      }
      else
      {
        v32 = 664LL;
      }
LABEL_53:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v31);
      goto LABEL_54;
    case 2:
      v45 = 0LL;
      v30 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
      v31 = v30(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v45);
      v5 = v31;
      if ( v31 >= 0 )
      {
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 64LL))(v45);
        v31 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                *((_DWORD *)a1 + 10),
                v33,
                v34);
        v5 = v31;
        if ( v31 >= 0 )
        {
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
          return 0LL;
        }
        v32 = 683LL;
      }
      else
      {
        v32 = 680LL;
      }
      goto LABEL_53;
    case 3:
      v27 = MultitaskingViewGestureHandlerHelpers::RaiseDesktop((MultitaskingViewGestureHandlerHelpers *)a1);
      if ( (unsigned int)MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                           (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                           *((_DWORD *)a1 + 10),
                           v27,
                           v28) )
        return 0LL;
      v26 = 691LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v26,
               (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
               v25);
    case 4:
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      v23 = PostMessageW(WindowW, 0x579u, 2uLL, 0LL);
      if ( (unsigned int)MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                           (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                           *((_DWORD *)a1 + 10),
                           v23,
                           v24) )
        return 0LL;
      v26 = 699LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v26,
               (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
               v25);
    case 5:
      v45 = 0LL;
      v15 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
      v16 = 1;
      v17 = v15(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v45);
      v5 = v17;
      if ( v17 >= 0 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
          1u,
          3u,
          v18);
        if ( *((_DWORD *)a1 + 10) != 2 )
          v16 = 4;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v45 + 48LL))(
                v45,
                a1[2],
                v16,
                a1[4]);
        v17 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                *((_DWORD *)a1 + 10),
                v20,
                v21);
        v5 = v17;
        if ( v17 >= 0 )
          break;
        v19 = 715LL;
      }
      else
      {
        v19 = 706LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v17);
      break;
    case 6:
      v45 = 0LL;
      v12 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
      v13 = v12(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v45);
      v5 = v13;
      if ( v13 >= 0 )
      {
        v46 = *a1;
        v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 72LL))(v45, &v46);
        v5 = v13;
        if ( v13 >= 0 )
          break;
        v14 = 724LL;
      }
      else
      {
        v14 = 722LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v13);
      break;
    case 7:
      v45 = 0LL;
      v7 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
      v8 = v7(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v45);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 731LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v8);
        break;
      }
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 64LL))(v45);
      v8 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
             (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
             *((_DWORD *)a1 + 10),
             v10,
             v11);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 734LL;
        goto LABEL_22;
      }
      break;
    case 8:
      *(_OWORD *)v38 = 0LL;
      tip::tip_test<_tip_QuickSwitchTest>::start_and_watch_errors(v38, v39);
      if ( v38[1] )
        std::_Ref_count_base::_Decref(v38[1]);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
        1LL);
      v5 = MultitaskingViewGestureHandlerHelpers::SwitchToWindow(
             (MultitaskingViewGestureHandlerHelpers *)a1[8],
             (struct IApplicationViewCollection *)a1[7],
             (struct IApplicationViewSwitcher *)a1[9],
             v4);
      MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
        (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
        *((_DWORD *)a1 + 10),
        v5,
        v6);
      if ( (v5 & 0x80000000) == 0 )
        tip::details::test_common_data<0>::complete(v42 + 8);
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FC,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)v5);
      if ( v43 )
        std::_Ref_count_base::_Decref(v43);
      if ( v41 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v40);
      return v5;
    default:
      return 0LL;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
  return v5;
}
