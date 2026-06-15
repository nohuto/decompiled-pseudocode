/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18002D6E4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ImplVal@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180029CD8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ImplVal@@@details@wil@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180029614 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C31C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@QEAAX_NW4Repor.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestGateImp>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestGateImp>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestGateImp>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
