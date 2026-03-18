/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140A2C144
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B5F5B0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x140B6D334 (PopValidateRTCWake.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x140A2C178 (PopBatteryUpdateCurrentState.c)
 *     PopCurrentPowerState @ 0x140A2C1F8 (PopCurrentPowerState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(__int64 a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
