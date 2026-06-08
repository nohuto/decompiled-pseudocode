/*
 * XREFs of ProcLibTracePccErrata @ 0x140024638
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14003EA10 (ProcLibTraceControlCallback.c)
 *     ProcLibGlobalInit @ 0x140044504 (ProcLibGlobalInit.c)
 * Callees:
 *     ProcLibTraceNoPayloadEvent @ 0x1400245E4 (ProcLibTraceNoPayloadEvent.c)
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
