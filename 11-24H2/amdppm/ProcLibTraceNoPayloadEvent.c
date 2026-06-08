/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1400245E4
 * Callers:
 *     ProcLibTraceIdleStatesErrata @ 0x1400245B8 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x140024638 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x14002488C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1400248B8 (ProcLibTraceThrottleStatesErrata.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
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
