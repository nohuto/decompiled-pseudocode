/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEars@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180129644
 * Callers:
 *     ?GetStaticMaskPC@SpatialAudio@@YA?AW4AudioObjectType@@AEBU_GUID@@@Z @ 0x1800A28C0 (-GetStaticMaskPC@SpatialAudio@@YA-AW4AudioObjectType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180067878 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEars@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009BC5C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEars.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiChannelDirectToEars>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // r8d
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int16 v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v5 = a3;
  v6 = a2;
  v7 = *(_DWORD *)Feature_MultiChannelDirectToEars__descriptor;
  if ( (*(_DWORD *)Feature_MultiChannelDirectToEars__descriptor & 4) == 0 )
  {
    v12 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiChannelDirectToEars>::GetCachedFeatureEnabledState(
             a1,
             v9);
    v7 = v12;
  }
  v10 = 0;
  v11 = 3;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x29C6DD1u,
           (v7 >> 10) & 1,
           (v7 >> 11) & 1,
           (__int64)&v10,
           v6,
           v5);
}
