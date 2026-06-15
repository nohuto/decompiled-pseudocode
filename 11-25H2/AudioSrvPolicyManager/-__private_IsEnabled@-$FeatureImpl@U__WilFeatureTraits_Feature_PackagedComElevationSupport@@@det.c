/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18003C3EC
 * Callers:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180038F60 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003954C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupp.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003B81C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
