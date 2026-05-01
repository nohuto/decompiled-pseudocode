/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60704660@@@details@wil@@QEAA_NXZ @ 0x18000E894
 * Callers:
 *     ?HasHandheldScreenSize@@YA_NXZ @ 0x18000B7C4 (-HasHandheldScreenSize@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60704660@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000AE90 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60704660@@@details@wil@@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000D8F4 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_60704660>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned int v2; // r8d
  unsigned __int8 v3; // di
  int v5; // [rsp+50h] [rbp+8h] BYREF
  __int16 v6; // [rsp+54h] [rbp+Ch]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60704660>::GetCachedFeatureEnabledState(a1, &v7);
  v2 = *(_DWORD *)a1;
  v3 = v7 & 1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v7 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_60704660>::GetCachedFeatureEnabledState(a1, &v8);
    v2 = v7;
  }
  v5 = 0;
  v6 = 2;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x39E4794u, (v2 >> 10) & 1, (v2 >> 11) & 1, (__int64)&v5, v3, 3);
  return v3;
}
