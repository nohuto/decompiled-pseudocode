/*
 * XREFs of ProcLibTracePccErrata @ 0x14002C008
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140041B80 (ProcLibTraceControlCallback.c)
 *     ProcLibGlobalInit @ 0x14004A9C8 (ProcLibGlobalInit.c)
 * Callees:
 *     ProcLibTraceNoPayloadEvent @ 0x14002BFB4 (ProcLibTraceNoPayloadEvent.c)
 */

BOOLEAN __fastcall ProcLibTracePccErrata(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PCC_ERRATA;
  if ( !v1 )
    v2 = &PPM_ETW_PCC_ERRATA_RUNDOWN;
  return ProcLibTraceNoPayloadEvent(v2);
}
