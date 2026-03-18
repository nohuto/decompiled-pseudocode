/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1402677D8
 * Callers:
 *     Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x1402677BC (Feature_DesktopDWMCursor__private_IsEnabledFallback.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x14026E54C (Feature_Win32ProcessCapabilities__private_IsEnabledFallback.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledFallback @ 0x14026FB1C (Feature_ApplyWindowActionConvergence__private_IsEnabledFallback.c)
 *     Feature_FixMaxWindowClipWhenMoved__private_IsEnabledFallback @ 0x14026FB70 (Feature_FixMaxWindowClipWhenMoved__private_IsEnabledFallback.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledFallback @ 0x140270ED8 (Feature_DispBrokerOptimizations__private_IsEnabledFallback.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback @ 0x140272554 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback @ 0x140274C10 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback @ 0x140274C64 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback.c)
 *     Feature_Bugfix_57240160__private_IsEnabledFallback @ 0x140274CB8 (Feature_Bugfix_57240160__private_IsEnabledFallback.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledFallback @ 0x140274D0C (Feature_EliminateMitRitHandoff2__private_IsEnabledFallback.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback @ 0x140274D60 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledFallback @ 0x140274DB4 (Feature_InputInjectionDoInputCheck__private_IsEnabledFallback.c)
 *     Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledFallback @ 0x140274E08 (Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledFallback.c)
 *     Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledFallback @ 0x140274E5C (Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledFallback.c)
 *     Feature_TouchpadHaptics__private_IsEnabledFallback @ 0x140274EB0 (Feature_TouchpadHaptics__private_IsEnabledFallback.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledFallback @ 0x140274F04 (Feature_UIPIAlwaysOn2__private_IsEnabledFallback.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback @ 0x140277A78 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback.c)
 *     Feature_ResponsiblePid__private_IsEnabledFallback @ 0x140277ACC (Feature_ResponsiblePid__private_IsEnabledFallback.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledFallback @ 0x14027A038 (Feature_DpiMetricsInUserMode__private_IsEnabledFallback.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledFallback @ 0x14027F264 (Feature_TouchpadPublicApis3__private_IsEnabledFallback.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback @ 0x14027F2B8 (Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback.c)
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledFallback @ 0x1402808D0 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledFallback.c)
 *     Feature_UserJobImprovement__private_IsEnabledFallback @ 0x140280924 (Feature_UserJobImprovement__private_IsEnabledFallback.c)
 *     Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback @ 0x140280CF8 (Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback.c)
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback @ 0x140285C88 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback.c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback @ 0x140286270 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback.c)
 *     Feature_DpiMetricsFixes__private_IsEnabledFallback @ 0x140287740 (Feature_DpiMetricsFixes__private_IsEnabledFallback.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x140288264 (Feature_PackagedComElevationSupport__private_IsEnabledFallback.c)
 *     Feature_C2DCancelOnNonModifierUp__private_IsEnabledFallback @ 0x1402897A8 (Feature_C2DCancelOnNonModifierUp__private_IsEnabledFallback.c)
 *     Feature_ShellHKeyAndLockScreen__private_IsEnabledFallback @ 0x1402897FC (Feature_ShellHKeyAndLockScreen__private_IsEnabledFallback.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback @ 0x140289A28 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback.c)
 *     Feature_4038020409__private_IsEnabledFallback @ 0x140292464 (Feature_4038020409__private_IsEnabledFallback.c)
 *     Feature_656357688__private_IsEnabledFallback @ 0x1402924B8 (Feature_656357688__private_IsEnabledFallback.c)
 *     Feature_ConvertPointerToDragApiFollowup__private_IsEnabledFallback @ 0x14029250C (Feature_ConvertPointerToDragApiFollowup__private_IsEnabledFallback.c)
 *     Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledFallback @ 0x140292560 (Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledFallback.c)
 *     Feature_GrantJobUIRestrictionException__private_IsEnabledFallback @ 0x1402925B4 (Feature_GrantJobUIRestrictionException__private_IsEnabledFallback.c)
 *     Feature_LowLatencyProfile__private_IsEnabledFallback @ 0x140292608 (Feature_LowLatencyProfile__private_IsEnabledFallback.c)
 *     Feature_NoEndTaskCriticalProcess__private_IsEnabledFallback @ 0x14029265C (Feature_NoEndTaskCriticalProcess__private_IsEnabledFallback.c)
 *     Feature_SetWindowBandViaBroker__private_IsEnabledFallback @ 0x1402926B0 (Feature_SetWindowBandViaBroker__private_IsEnabledFallback.c)
 *     Feature_SysSetJobUILimits__private_IsEnabledFallback @ 0x140292704 (Feature_SysSetJobUILimits__private_IsEnabledFallback.c)
 *     Feature_Bugfix_58938704__private_IsEnabledFallback @ 0x1402A4160 (Feature_Bugfix_58938704__private_IsEnabledFallback.c)
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback @ 0x1402AAA30 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback @ 0x1402B17DC (Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback.c)
 *     Feature_Bugfix_58999946__private_IsEnabledFallback @ 0x1402B46E4 (Feature_Bugfix_58999946__private_IsEnabledFallback.c)
 *     Feature_CreateWindowInBandCapabilities__private_IsEnabledFallback @ 0x1402B4738 (Feature_CreateWindowInBandCapabilities__private_IsEnabledFallback.c)
 *     Feature_Scoobe_ShellHost__private_IsEnabledFallback @ 0x1402B478C (Feature_Scoobe_ShellHost__private_IsEnabledFallback.c)
 *     Feature_TouchpadHapticsFollowUps__private_IsEnabledFallback @ 0x1402DB8E8 (Feature_TouchpadHapticsFollowUps__private_IsEnabledFallback.c)
 *     Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback @ 0x1402F2834 (Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback.c)
 *     Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledFallback @ 0x1402FEF98 (Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledFallback.c)
 *     Feature_Servicing_AddWppToGre__private_IsEnabledFallback @ 0x14030E81C (Feature_Servicing_AddWppToGre__private_IsEnabledFallback.c)
 *     Feature_3983481146__private_IsEnabledFallback @ 0x14030FEFC (Feature_3983481146__private_IsEnabledFallback.c)
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback @ 0x14031D4CC (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback.c)
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback @ 0x1403226F0 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback.c)
 *     Feature_Servicing_AlpcDwm__private_IsEnabledFallback @ 0x140324500 (Feature_Servicing_AlpcDwm__private_IsEnabledFallback.c)
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledFallback @ 0x140325598 (Feature_Servicing_GdiMsrc99105__private_IsEnabledFallback.c)
 *     Feature_Servicing_MSRC101271__private_IsEnabledFallback @ 0x1403306B4 (Feature_Servicing_MSRC101271__private_IsEnabledFallback.c)
 *     Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledFallback @ 0x140336D34 (Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledFallback.c)
 *     Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback @ 0x140336D88 (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401A5404 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026CD5C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14026E954 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2, 1LL);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}
