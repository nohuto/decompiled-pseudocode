/*
 * XREFs of RtlGetSuiteMask @ 0x140A0BA60
 * Callers:
 *     RtlGetVersion @ 0x140A0B990 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[80].Blink[1].Flink);
  else
    return MEMORY[0xFFFFF780000002D0];
}
