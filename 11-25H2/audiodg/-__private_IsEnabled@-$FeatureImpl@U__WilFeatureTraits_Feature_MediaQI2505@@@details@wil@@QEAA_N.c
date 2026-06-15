/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2505@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x140071EC4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140070990 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioEx.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2505@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14006FDB4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2505@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2505@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1400717D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2505@@@details@wil@@QEAAX_NW4Repor.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MediaQI2505>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MediaQI2505>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MediaQI2505>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
