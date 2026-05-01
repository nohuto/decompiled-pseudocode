/*
 * XREFs of ?GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18029B7A4
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011CD10 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z @ 0x18023A100 (-SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18029B8A0 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18029B8E0 (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

HWND __fastcall XamlSnapAssistViewHost::GetSnapAssistZOrder(
        XamlSnapAssistViewHost *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  float v2; // xmm1_4
  float v4; // xmm0_4
  int v5; // r10d
  float v6; // xmm1_4
  int v7; // r9d
  float v8; // xmm0_4
  char v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  XamlSwitcherTelemetry *v14; // rcx
  HWND v16; // [rsp+20h] [rbp-50h] BYREF
  HWND v17; // [rsp+28h] [rbp-48h] BYREF
  LPARAM lParam[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v19; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((float *)a2 + 1);
  v4 = *(float *)a2;
  v16 = 0LL;
  v17 = 0LL;
  v5 = (int)v2;
  lParam[0] = (LPARAM)this;
  v6 = v2 + *((float *)a2 + 3);
  v7 = (int)v4;
  v8 = v4 + *((float *)a2 + 2);
  *(_QWORD *)&v19.left = __PAIR64__(v5, v7);
  v19.bottom = (int)v6;
  lParam[1] = (LPARAM)&v19;
  lParam[2] = (LPARAM)&v17;
  lParam[3] = (LPARAM)&v16;
  v19.right = (int)v8;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_b90ba3034bff2a6798db754b0e1f537a___,
    (LPARAM)lParam);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v9,
    v10);
  if ( !v16 )
    v16 = (HWND)*((_QWORD *)this + 89);
  if ( XamlSwitcherTelemetry::IsEnabled(v12, v11) )
  {
    wil::details::static_lazy<XamlSwitcherTelemetry>::get(
      v13,
      _lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    XamlSwitcherTelemetry::SnapAssistZOrder_(v14, &v19, v16, v17);
  }
  return v16;
}
