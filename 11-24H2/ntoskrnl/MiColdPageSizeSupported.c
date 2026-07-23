/*
 * XREFs of MiColdPageSizeSupported @ 0x1404444AC
 * Callers:
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiLockMultipleZeroChunks @ 0x140332A40 (MiLockMultipleZeroChunks.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiColdPageSizeSupported(unsigned int a1, __int64 a2)
{
  if ( (HvlEnlightenments & 0x8400000) == 0 || a1 > 1 && (HvlEnlightenments & 0x8000000) != 0 )
    return 0LL;
  if ( a2 )
    return (*(_DWORD *)(a2 + 15184) & 2) == 0;
  return 1LL;
}
