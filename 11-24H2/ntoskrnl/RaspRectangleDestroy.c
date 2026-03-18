/*
 * XREFs of RaspRectangleDestroy @ 0x1404FADA0
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140BB5CE8 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x140467304 (RaspFreeMemory.c)
 */

void __fastcall RaspRectangleDestroy(__int64 a1, _QWORD *a2)
{
  RaspFreeMemory(a1, a2);
}
