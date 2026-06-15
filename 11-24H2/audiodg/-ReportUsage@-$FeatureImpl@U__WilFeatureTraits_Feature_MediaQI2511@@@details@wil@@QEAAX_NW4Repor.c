/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2511@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140084ABC
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2511@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x140085484 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2511@@@details@wil@@QEAA_N.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2511@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x140081FC4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2511@@@details@wi.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x140084DF8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MediaQI2511>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  __int64 v6; // r8
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  v5 = a2;
  LODWORD(v6) = *(_DWORD *)Feature_MediaQI2511__descriptor;
  if ( (*(_DWORD *)Feature_MediaQI2511__descriptor & 4) == 0 )
  {
    v6 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_MediaQI2511>::GetCachedFeatureEnabledState(a1, v8);
    v11 = v6;
  }
  v10 = 2;
  v9 = 0;
  return wil::details::ReportUsageToService(
           (char *)a1 + 8,
           58156969LL,
           ((unsigned int)v6 >> 10) & 1,
           ((unsigned int)v6 >> 11) & 1,
           &v9,
           v5,
           0);
}
