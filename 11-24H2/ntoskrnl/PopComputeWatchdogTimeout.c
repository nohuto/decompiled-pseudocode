/*
 * XREFs of PopComputeWatchdogTimeout @ 0x140314F34
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x1402E66B0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopEnableIrpWatchdog @ 0x140314DDC (PopEnableIrpWatchdog.c)
 *     PoQueryWatchdogTime @ 0x140437AB0 (PoQueryWatchdogTime.c)
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
