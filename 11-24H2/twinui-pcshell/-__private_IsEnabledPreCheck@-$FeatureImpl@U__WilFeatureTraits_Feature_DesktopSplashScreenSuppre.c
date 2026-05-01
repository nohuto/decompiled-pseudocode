/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180017B40
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1800149A4 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180016EEC (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180193250 (-GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1801F2D3C (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@@Z @ 0x1803051B0 (-SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801CFA78 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppr.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::__private_IsEnabledPreCheck(
        _DWORD *a1,
        unsigned __int8 a2)
{
  __int64 v2; // r8
  int v4; // edi
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int16 v7; // [rsp+54h] [rbp+Ch]
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(v2) = *a1;
  v4 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v2 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState(
                      a1,
                      &v8);
    v8 = v2;
  }
  v6 = 0;
  v7 = 3;
  wil::details::ReportUsageToService(
    a1 + 2,
    783899LL,
    ((unsigned int)v2 >> 10) & 1,
    ((unsigned int)v2 >> 11) & 1,
    &v6,
    1,
    v4);
  return 1;
}
