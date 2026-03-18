/*
 * XREFs of PopComputeWatchdogTimeout @ 0x140441798
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x140359318 (PopDiagTraceIrpFinishTelemetry.c)
 *     PoQueryWatchdogTime @ 0x140441400 (PoQueryWatchdogTime.c)
 *     PopEnableIrpWatchdog @ 0x140441640 (PopEnableIrpWatchdog.c)
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
