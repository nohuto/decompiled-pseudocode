/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C2964
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh@@@details@wil@@QEAA_NXZ @ 0x1800C3030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPrope.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180067878 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C1990 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSes.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  v5 = a2;
  LODWORD(v6) = *(_DWORD *)Feature_Servicing_EnableAudioSessionPropertyStoreRefresh__descriptor;
  if ( (*(_DWORD *)Feature_Servicing_EnableAudioSessionPropertyStoreRefresh__descriptor & 4) == 0 )
  {
    v6 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh>::GetCachedFeatureEnabledState(
            a1,
            v8);
    v11 = v6;
  }
  v9 = 0;
  v10 = 2;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x3A53A49u,
           ((unsigned int)v6 >> 10) & 1,
           ((unsigned int)v6 >> 11) & 1,
           (__int64)&v9,
           v5,
           3u);
}
