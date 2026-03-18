/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C01392B4
 * Callers:
 *     Feature_3578843448__private_IsEnabledFallback @ 0x1C0138AE0 (Feature_3578843448__private_IsEnabledFallback.c)
 *     Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledFallback @ 0x1C0139438 (Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback @ 0x1C0139848 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback.c)
 *     Feature_Backport_MitRitReliability__private_IsEnabledFallback @ 0x1C01398EC (Feature_Backport_MitRitReliability__private_IsEnabledFallback.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledFallback @ 0x1C0139A48 (Feature_Backport_UserModeTooltips__private_IsEnabledFallback.c)
 *     Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback @ 0x1C0139A9C (Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback.c)
 *     Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback @ 0x1C0139D8C (Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback.c)
 *     Feature_AlwaysWakeTargetThread_2__private_IsEnabledFallback @ 0x1C0139DE0 (Feature_AlwaysWakeTargetThread_2__private_IsEnabledFallback.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledFallback @ 0x1C0139E34 (Feature_IMRespectWTDToggle__private_IsEnabledFallback.c)
 *     Feature_LParamOlmapi32CompatTweak__private_IsEnabledFallback @ 0x1C0139E88 (Feature_LParamOlmapi32CompatTweak__private_IsEnabledFallback.c)
 *     Feature_MTestAbSh1__private_IsEnabledFallback @ 0x1C0139EDC (Feature_MTestAbSh1__private_IsEnabledFallback.c)
 *     Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback @ 0x1C0139F30 (Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledFallback @ 0x1C0139F84 (Feature_WebThreatDefenseToggle__private_IsEnabledFallback.c)
 *     Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback @ 0x1C013A340 (Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback.c)
 *     Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback @ 0x1C013B2F4 (Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback.c)
 *     Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback @ 0x1C013BD14 (Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback.c)
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback @ 0x1C013BD68 (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback.c)
 *     Feature_MissingShowWinEventOnUnGhost__private_IsEnabledFallback @ 0x1C013BF58 (Feature_MissingShowWinEventOnUnGhost__private_IsEnabledFallback.c)
 *     Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledFallback @ 0x1C013C330 (Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledFallback.c)
 *     Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledFallback @ 0x1C013C384 (Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledFallback.c)
 *     Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledFallback @ 0x1C013C874 (Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledFallback.c)
 *     Feature_1519700280__private_IsEnabledFallback @ 0x1C013E21C (Feature_1519700280__private_IsEnabledFallback.c)
 *     Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback @ 0x1C013F7F0 (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback.c)
 *     Feature_2461047098__private_IsEnabledFallback @ 0x1C0140110 (Feature_2461047098__private_IsEnabledFallback.c)
 *     Feature_178219323__private_IsEnabledFallback @ 0x1C0140388 (Feature_178219323__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0138E8C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0139004 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0139104 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
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
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
