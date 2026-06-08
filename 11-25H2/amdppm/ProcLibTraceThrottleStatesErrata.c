/*
 * XREFs of ProcLibTraceThrottleStatesErrata @ 0x14002376C
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14003D7C0 (ProcLibTraceControlCallback.c)
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     ProcLibTraceNoPayloadEvent @ 0x140023498 (ProcLibTraceNoPayloadEvent.c)
 */

BOOLEAN __fastcall ProcLibTraceThrottleStatesErrata(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_THROTTLE_STATES_ERRATA;
  if ( !v1 )
    v2 = &PPM_ETW_THROTTLE_STATES_ERRATA_RUNDOWN;
  return ProcLibTraceNoPayloadEvent(v2);
}
