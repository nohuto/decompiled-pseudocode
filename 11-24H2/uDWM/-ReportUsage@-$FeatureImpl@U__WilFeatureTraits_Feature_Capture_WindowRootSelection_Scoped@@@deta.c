/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AFE78
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@QEAA_NXZ @ 0x1800B53C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scope.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007EA0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800ADC14 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelect.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 1;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x341CE6Fu,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v8,
    v6,
    3);
}
