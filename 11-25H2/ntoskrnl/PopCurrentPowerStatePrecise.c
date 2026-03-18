/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140A22BFC
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B4F470 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x140B5E254 (PopValidateRTCWake.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x140A22C30 (PopBatteryUpdateCurrentState.c)
 *     PopCurrentPowerState @ 0x140A22CB0 (PopCurrentPowerState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(__int64 a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
