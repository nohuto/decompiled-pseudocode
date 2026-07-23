/*
 * XREFs of RtlGetNtSystemRoot @ 0x140A0AB50
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801BA0 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslEnvVarQuery @ 0x14080C6C0 (AslEnvVarQuery.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     MiCacheImageSymbols @ 0x140ABAE40 (MiCacheImageSymbols.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)&PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink + 3;
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
