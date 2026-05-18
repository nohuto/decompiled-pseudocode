/*
 * XREFs of sub_18004E710 @ 0x18004E710
 * Callers:
 *     sub_18004D674 @ 0x18004D674 (sub_18004D674.c)
 *     sub_180084A9C @ 0x180084A9C (sub_180084A9C.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001C9D8 @ 0x18001C9D8 (sub_18001C9D8.c)
 */

__int64 __fastcall sub_18004E710(__int64 a1)
{
  _BYTE *v2; // rax

  sub_18001C9D8(a1, 0LL);
  v2 = (_BYTE *)sub_1800137F8(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *v2 = 0;
  return a1;
}
