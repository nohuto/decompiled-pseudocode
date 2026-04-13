/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18003DD88
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800312A4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800309DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@de.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039890 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@QEAAX_.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
