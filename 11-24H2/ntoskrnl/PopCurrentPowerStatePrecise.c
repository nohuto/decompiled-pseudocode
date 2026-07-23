/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140A2006C
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B61630 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x140B6EBD4 (PopValidateRTCWake.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x140A200A0 (PopBatteryUpdateCurrentState.c)
 *     PopCurrentPowerState @ 0x140A20120 (PopCurrentPowerState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(__int64 a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
