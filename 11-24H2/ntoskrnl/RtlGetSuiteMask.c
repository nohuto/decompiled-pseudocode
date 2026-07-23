/*
 * XREFs of RtlGetSuiteMask @ 0x140A05000
 * Callers:
 *     RtlGetVersion @ 0x140A04F30 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[80].Blink[1].Flink);
  else
    return MEMORY[0xFFFFF780000002D0];
}
