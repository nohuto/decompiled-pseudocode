/*
 * XREFs of PopInitializeTimer @ 0x1407476B8
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1405D1934 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopPowerRequestInitialize @ 0x140C2FFAC (PopPowerRequestInitialize.c)
 *     PpmPerfInitialize @ 0x140C30834 (PpmPerfInitialize.c)
 *     PopUserShutdownScenarioInitialize @ 0x140C30DD0 (PopUserShutdownScenarioInitialize.c)
 *     PopThermalInit @ 0x140C30E28 (PopThermalInit.c)
 *     PopDripsWatchdogInitialize @ 0x140C3585C (PopDripsWatchdogInitialize.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140C3593C (PopDripsWatchdogInitializeCallbackTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1403ADE80 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopInitializeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  KeInitializeTimer2(a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  return result;
}
