/*
 * XREFs of sub_180094060 @ 0x180094060
 * Callers:
 *     sub_180094A00 @ 0x180094A00 (sub_180094A00.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180093F34 @ 0x180093F34 (sub_180093F34.c)
 */

_QWORD *__fastcall sub_180094060(__int64 a1)
{
  *(_BYTE *)(a1 + 440) = 1;
  sub_180093F34((__int64 *)(a1 + 8), a1 + 264);
  sub_18001254C((__int64 *)(a1 + 392), (_QWORD *)(a1 + 424));
  return sub_180093FCC(a1);
}
