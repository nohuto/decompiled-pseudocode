/*
 * XREFs of MiIsPageSecured @ 0x140395B74
 * Callers:
 *     MiCopySinglePage @ 0x140395C54 (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x14067287C (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x140676ECC (MiAddNonSecuredPagesToDump.c)
 *     MiFilterCrashDumpPte @ 0x1406775B0 (MiFilterCrashDumpPte.c)
 * Callees:
 *     MiIsFreeSlabPage @ 0x1404FB1F4 (MiIsFreeSlabPage.c)
 */

__int64 __fastcall MiIsPageSecured(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // r10

  if ( (MiFlags & 0x4000) == 0 || ((*(_QWORD *)(a1 + 40) >> 60) & 7) != 3 || *(__int64 *)(a1 + 40) < 0 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 8) || (unsigned int)MiIsFreeSlabPage(a1, a2, a3, 0LL) && v4 == -2LL )
    return 1LL;
  if ( v4 > 0xFFFFF6BFFFFFFF78uLL )
    return 0LL;
  LOBYTE(v3) = v4 >= 0xFFFFF68000000000uLL;
  return v3;
}
