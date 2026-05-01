/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x18000D444
 * Callers:
 *     CanSetGamingFullScreenExperience @ 0x18000D920 (CanSetGamingFullScreenExperience.c)
 *     IsGamingFullScreenExperienceActive @ 0x18000DAB0 (IsGamingFullScreenExperienceActive.c)
 *     IsGamingFullScreenExperienceSupported @ 0x18000DC10 (IsGamingFullScreenExperienceSupported.c)
 *     SetGamingFullScreenExperience @ 0x18000DE60 (SetGamingFullScreenExperience.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180009FCC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000C564 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned int v2; // r8d
  unsigned __int8 v3; // di
  int v5; // [rsp+50h] [rbp+8h] BYREF
  __int16 v6; // [rsp+54h] [rbp+Ch]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::GetCachedFeatureEnabledState(a1, &v7);
  v2 = *(_DWORD *)a1;
  v3 = v7 & 1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v7 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::GetCachedFeatureEnabledState(a1, &v8);
    v2 = v7;
  }
  v5 = 0;
  v6 = 1;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x3225028u, (v2 >> 10) & 1, (v2 >> 11) & 1, (__int64)&v5, v3, 3);
  return v3;
}
