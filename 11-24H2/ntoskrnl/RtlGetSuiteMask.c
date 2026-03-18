/*
 * XREFs of RtlGetSuiteMask @ 0x140A08AD0
 * Callers:
 *     RtlGetVersion @ 0x140A08A00 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 RtlGetSuiteMask()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[80].Blink[1].Flink);
  else
    return MEMORY[0xFFFFF780000002D0];
}
