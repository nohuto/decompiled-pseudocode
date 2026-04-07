/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AFD5C
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800B5348 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowData.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAA_NXZ @ 0x1800B5388 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCapt_ea_1800B5388.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007EA0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AD9F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureW.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::ReportUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v11 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::GetCachedFeatureEnabledState(
             (wil::details *)a1,
             v8);
    v6 = v11;
  }
  v9 = 0;
  v10 = 2;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 2),
    0x3720035u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v9,
    v7,
    v4);
}
