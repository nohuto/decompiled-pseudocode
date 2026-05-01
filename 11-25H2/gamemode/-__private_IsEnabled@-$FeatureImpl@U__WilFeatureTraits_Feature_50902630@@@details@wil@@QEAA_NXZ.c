/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ @ 0x18000D404
 * Callers:
 *     IsGamingFullScreenExperienceSupported @ 0x18000DC10 (IsGamingFullScreenExperienceSupported.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180009EE8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000C4D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
