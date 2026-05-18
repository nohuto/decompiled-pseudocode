/*
 * XREFs of sub_18004E870 @ 0x18004E870
 * Callers:
 *     sub_18004D7D4 @ 0x18004D7D4 (sub_18004D7D4.c)
 *     sub_180084BFC @ 0x180084BFC (sub_180084BFC.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001CB38 @ 0x18001CB38 (sub_18001CB38.c)
 */

__int64 __fastcall sub_18004E870(__int64 a1)
{
  _BYTE *v2; // rax

  sub_18001CB38(a1, 0LL);
  v2 = (_BYTE *)sub_1800138F8(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *v2 = 0;
  return a1;
}
