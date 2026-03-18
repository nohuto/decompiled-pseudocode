/*
 * XREFs of MiColdPageSizeSupported @ 0x14044D5AC
 * Callers:
 *     MiLockMultipleZeroChunks @ 0x14020AC60 (MiLockMultipleZeroChunks.c)
 *     MiCoalesceFreeSmallPages @ 0x1402238B0 (MiCoalesceFreeSmallPages.c)
 *     MiFreeLargePageMemory @ 0x1403A3588 (MiFreeLargePageMemory.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
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
