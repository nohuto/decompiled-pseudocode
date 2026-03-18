/*
 * XREFs of ExInitLicenseCallback @ 0x1407B8114
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x140A64310 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS result; // eax

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  result = ExCreateCallback((PCALLBACK_OBJECT *)&Blink[2928], (POBJECT_ATTRIBUTES)&stru_140B3C620, 1u, 1u);
  if ( result < 0 )
    Blink[2928].Flink = 0LL;
  return result;
}
