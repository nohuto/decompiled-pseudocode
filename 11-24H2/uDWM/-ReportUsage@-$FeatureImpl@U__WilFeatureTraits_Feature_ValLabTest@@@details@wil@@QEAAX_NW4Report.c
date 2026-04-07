/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ValLabTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AB12C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2509@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B9E24 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2509@@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007EA0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ValLabTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A9E74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ValLabTest@@@details@wil.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ValLabTest>::ReportUsage(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r8d
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+60h] [rbp+8h] BYREF
  __int16 v8; // [rsp+64h] [rbp+Ch]
  __int64 v9; // [rsp+78h] [rbp+20h]

  v9 = a4;
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v9 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_ValLabTest>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            v6);
    v4 = v9;
  }
  v8 = 3;
  v7 = 0;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 2),
    0x3667CA2u,
    (v4 >> 10) & 1,
    (v4 >> 11) & 1,
    (__int64)&v7,
    1u,
    0);
}
