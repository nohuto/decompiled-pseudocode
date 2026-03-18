/*
 * XREFs of MiScrubInterrupted @ 0x1404898E0
 * Callers:
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 *     MiScrubLargePageRegions @ 0x1406F80D4 (MiScrubLargePageRegions.c)
 *     MiScrubActiveLargePage @ 0x1407FDA28 (MiScrubActiveLargePage.c)
 *     MiScrubNode @ 0x140A38DD4 (MiScrubNode.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1440LL) & 1) == 0 )
    return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL) != 0;
  return result;
}
