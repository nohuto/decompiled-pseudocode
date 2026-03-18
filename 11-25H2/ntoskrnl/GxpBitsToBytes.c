/*
 * XREFs of GxpBitsToBytes @ 0x1404BD330
 * Callers:
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     BgpGxRectangleCreate @ 0x140BA3E78 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
