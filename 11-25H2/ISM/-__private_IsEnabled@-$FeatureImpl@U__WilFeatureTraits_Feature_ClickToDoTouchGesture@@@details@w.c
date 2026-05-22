/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoTouchGesture@@@details@wil@@QEAA_NXZ @ 0x180159CA0
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180087F00 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoTouchGesture@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180159320 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoTouchGesture@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoTouchGesture@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180159A10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoTouchGesture@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoTouchGesture>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoTouchGesture>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoTouchGesture>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
