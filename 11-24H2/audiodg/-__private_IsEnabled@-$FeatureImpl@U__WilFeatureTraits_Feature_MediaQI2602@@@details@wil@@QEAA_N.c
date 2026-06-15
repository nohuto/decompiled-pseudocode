/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2602@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1400854C0
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2605@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x14008293C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2605@@@details@w.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2602@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1400820FC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2602@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2602@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140084B48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2602@@@details@wil@@QEAAX_NW4Repor.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MediaQI2602>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MediaQI2602>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MediaQI2602>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
