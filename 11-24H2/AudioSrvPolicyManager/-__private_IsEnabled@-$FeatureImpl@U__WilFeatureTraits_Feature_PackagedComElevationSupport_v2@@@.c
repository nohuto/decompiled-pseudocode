/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport_v2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180039BB0
 * Callers:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180036580 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport_v2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036A38 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupp.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport_v2>::__private_IsEnabled(
        wil::details *a1)
{
  char v1; // bl
  wil::details *v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport_v2>::GetCachedFeatureEnabledState(
    a1,
    &v3);
  v1 = (unsigned __int8)v3 & 1;
  if ( (*(_DWORD *)Feature_PackagedComElevationSupport_v2__descriptor & 4) == 0 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport_v2>::GetCachedFeatureEnabledState(
      (wil::details *)Feature_PackagedComElevationSupport_v2__descriptor,
      &v4);
  return v1;
}
