/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x14002BFB4
 * Callers:
 *     ProcLibTraceIdleStatesErrata @ 0x14002BF88 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x14002C008 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x14002C25C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x14002C288 (ProcLibTraceThrottleStatesErrata.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor, 0LL, (ULONG)0, 0LL);
  return result;
}
