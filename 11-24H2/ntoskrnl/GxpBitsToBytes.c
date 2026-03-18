/*
 * XREFs of GxpBitsToBytes @ 0x1404BC490
 * Callers:
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 *     BgpGxRectangleCreate @ 0x140BB3E78 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
