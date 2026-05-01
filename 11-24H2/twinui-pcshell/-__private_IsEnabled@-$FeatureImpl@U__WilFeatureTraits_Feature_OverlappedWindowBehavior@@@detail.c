/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OverlappedWindowBehavior@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802EF3B8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802EEC80 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@AE.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OverlappedWindowBehavior@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802EE4D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OverlappedWindowBehavior.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OverlappedWindowBehavior@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EF0A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OverlappedWindowBehavior@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_OverlappedWindowBehavior>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OverlappedWindowBehavior>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OverlappedWindowBehavior>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
