/*
 * XREFs of PopInitializeTimer @ 0x14073D378
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1405CF764 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopPowerRequestInitialize @ 0x140C1CD8C (PopPowerRequestInitialize.c)
 *     PpmPerfInitialize @ 0x140C1D610 (PpmPerfInitialize.c)
 *     PopUserShutdownScenarioInitialize @ 0x140C1DBAC (PopUserShutdownScenarioInitialize.c)
 *     PopThermalInit @ 0x140C1DC0C (PopThermalInit.c)
 *     PopDripsWatchdogInitialize @ 0x140C224E0 (PopDripsWatchdogInitialize.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140C225C0 (PopDripsWatchdogInitializeCallbackTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14036F140 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopInitializeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  KeInitializeTimer2(a1, a2, a3, 8LL);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  return result;
}
