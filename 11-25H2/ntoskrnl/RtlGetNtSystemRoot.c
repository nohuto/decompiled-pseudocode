/*
 * XREFs of RtlGetNtSystemRoot @ 0x140A08650
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x1407F15A0 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslEnvVarQuery @ 0x1407FC410 (AslEnvVarQuery.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     MiCacheImageSymbols @ 0x140ABB930 (MiCacheImageSymbols.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)&PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink + 3;
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
