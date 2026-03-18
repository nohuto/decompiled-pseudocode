/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x140BB5C70
 * Callers:
 *     BgpTxtRegionSize @ 0x1406987FC (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x1404B7350 (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32;
}
