/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc02@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180039BF4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport_v2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800373F8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSup.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc02@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180037050 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc02@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc02>::__private_IsEnabled(wil::details *a1)
{
  char v1; // bl
  wil::details *v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc02>::GetCachedFeatureEnabledState(a1, &v3);
  v1 = (unsigned __int8)v3 & 1;
  if ( (*(_DWORD *)Feature_TestLoc02__descriptor & 4) == 0 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc02>::GetCachedFeatureEnabledState(
      (wil::details *)Feature_TestLoc02__descriptor,
      &v4);
  return v1;
}
