/*
 * XREFs of MiScrubInterrupted @ 0x140489ED0
 * Callers:
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     MiScrubLargePageRegions @ 0x1406EC948 (MiScrubLargePageRegions.c)
 *     MiScrubActiveLargePage @ 0x1407EDB98 (MiScrubActiveLargePage.c)
 *     MiScrubNode @ 0x140A337C8 (MiScrubNode.c)
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
