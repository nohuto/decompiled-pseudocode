/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@wil@@QEAA_NXZ @ 0x18026678C
 * Callers:
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x1802310B0 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 *     ?UpdatePowerNotifications@CComposition@@QEAAJXZ @ 0x180254B48 (-UpdatePowerNotifications@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180265BEC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802664AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
