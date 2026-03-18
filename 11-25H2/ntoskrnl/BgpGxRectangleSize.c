/*
 * XREFs of BgpGxRectangleSize @ 0x1404B7A7C
 * Callers:
 *     AnFwConfigureProgressResources @ 0x140BA1CFC (AnFwConfigureProgressResources.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     BgpGxReservePoolRectangleSize @ 0x140BA5C70 (BgpGxReservePoolRectangleSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
