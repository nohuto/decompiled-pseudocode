/*
 * XREFs of sub_180093F00 @ 0x180093F00
 * Callers:
 *     sub_1800948A0 @ 0x1800948A0 (sub_1800948A0.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180093DD4 @ 0x180093DD4 (sub_180093DD4.c)
 */

_QWORD *__fastcall sub_180093F00(__int64 a1)
{
  *(_BYTE *)(a1 + 440) = 1;
  sub_180093DD4((__int64 *)(a1 + 8), a1 + 264);
  sub_18001244C((__int64 *)(a1 + 392), (_QWORD *)(a1 + 424));
  return sub_180093E6C(a1);
}
