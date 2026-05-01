/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57666987@@@details@wil@@QEAA_NXZ @ 0x180592A50
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180591634 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57666987@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805908C8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57666987@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57666987@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805922B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57666987@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57666987>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57666987>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57666987>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
