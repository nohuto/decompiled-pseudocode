/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA_NXZ @ 0x1803C1C58
 * Callers:
 *     ?StartPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180247538 (-StartPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B9180 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BEA48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
