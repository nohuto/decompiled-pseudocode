/*
 * XREFs of RaspRectangleDestroy @ 0x1404F8680
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140BB7CE8 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x14045EC60 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, _QWORD *a2)
{
  return RaspFreeMemory(a1, a2);
}
