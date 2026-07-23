/*
 * XREFs of RaspDestroyCachedBitmap @ 0x140BB7CE8
 * Callers:
 *     BgpRasPrintGlyph @ 0x14046EF8C (BgpRasPrintGlyph.c)
 *     RaspAddCacheEntry @ 0x140BB4E0C (RaspAddCacheEntry.c)
 *     RaspClearCache @ 0x140BB7C90 (RaspClearCache.c)
 * Callees:
 *     RaspFreeMemory @ 0x14045EC60 (RaspFreeMemory.c)
 *     RaspRectangleDestroy @ 0x1404F8680 (RaspRectangleDestroy.c)
 */

__int64 __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  v5 = 0LL;
  RaspRectangleDestroy(v2, &v4);
  return RaspFreeMemory(a1, &v4);
}
