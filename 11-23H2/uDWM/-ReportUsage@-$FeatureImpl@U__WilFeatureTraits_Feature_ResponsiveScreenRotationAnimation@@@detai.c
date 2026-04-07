/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800245AC
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18002E66C (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x180105060 (-OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ.c)
 *     ?ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ @ 0x180105174 (-ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ.c)
 *     ?SetTransitionHandlerResponsive@CGlobalTimeTrackVisual@@QEAAXUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@Z @ 0x1801051EC (-SetTransitionHandlerResponsive@CGlobalTimeTrackVisual@@QEAAXUScreenRotationResponsiveTransition.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180024630 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotation.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180036B20 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           35001794LL,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           &v9,
           v6,
           3);
}
