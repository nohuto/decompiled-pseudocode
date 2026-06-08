/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x140023498
 * Callers:
 *     ProcLibTraceIdleStatesErrata @ 0x14002346C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1400234EC (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x140023740 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x14002376C (ProcLibTraceThrottleStatesErrata.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptor, 0LL, (ULONG)0, 0LL);
  return result;
}
