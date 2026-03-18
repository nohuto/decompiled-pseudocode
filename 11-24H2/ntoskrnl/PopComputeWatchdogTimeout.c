/*
 * XREFs of PopComputeWatchdogTimeout @ 0x1404410D4
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x140377FD4 (PopDiagTraceIrpFinishTelemetry.c)
 *     PoQueryWatchdogTime @ 0x140440D30 (PoQueryWatchdogTime.c)
 *     PopEnableIrpWatchdog @ 0x140440F7C (PopEnableIrpWatchdog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopComputeWatchdogTimeout(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 188) < 2u && *(_DWORD *)(a1 + 192) == 1 )
    return (unsigned int)PopWatchdogResumeTimeout;
  else
    return (unsigned int)PopWatchdogSleepTimeout;
}
