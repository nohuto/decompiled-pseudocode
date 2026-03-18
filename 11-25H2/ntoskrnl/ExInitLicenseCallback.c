/*
 * XREFs of ExInitLicenseCallback @ 0x1407A8C64
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x140A62280 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS result; // eax

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  result = ExCreateCallback((PCALLBACK_OBJECT *)&Blink[2928], (POBJECT_ATTRIBUTES)&stru_140B2D350, 1u, 1u);
  if ( result < 0 )
    Blink[2928].Flink = 0LL;
  return result;
}
