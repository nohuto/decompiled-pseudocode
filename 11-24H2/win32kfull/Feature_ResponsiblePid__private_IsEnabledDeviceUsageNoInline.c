/*
 * XREFs of Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140277A94
 * Callers:
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1400F5C38 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     xxxConsoleControl @ 0x14015D510 (xxxConsoleControl.c)
 *     GetConsoleDesktop @ 0x14019468C (GetConsoleDesktop.c)
 *     xxxWaitForInputIdle @ 0x1401F488C (xxxWaitForInputIdle.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140240DA0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserDwmValidateWindow @ 0x140241330 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x140245820 (NtUserSetActiveProcessForMonitor.c)
 *     xxxActivateDebugger @ 0x140256810 (xxxActivateDebugger.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028E6F0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x140295CB0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     NtUserGetWindowProcessHandle @ 0x140297C90 (NtUserGetWindowProcessHandle.c)
 * Callees:
 *     Feature_ResponsiblePid__private_IsEnabledFallback @ 0x140277ACC (Feature_ResponsiblePid__private_IsEnabledFallback.c)
 */

__int64 Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ResponsiblePid__private_featureState & 0x10) != 0 )
    return Feature_ResponsiblePid__private_featureState & 1;
  else
    return Feature_ResponsiblePid__private_IsEnabledFallback(
             (unsigned int)Feature_ResponsiblePid__private_featureState,
             3LL);
}
