/*
 * XREFs of RtlGetNtSystemRoot @ 0x140A0B910
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801460 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslEnvVarQuery @ 0x14080BF80 (AslEnvVarQuery.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     MiCacheImageSymbols @ 0x140ABFD60 (MiCacheImageSymbols.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 */

char *RtlGetNtSystemRoot()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (char *)&PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink + 6;
  else
    return (char *)0xFFFFF78000000030LL;
}
