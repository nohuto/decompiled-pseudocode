/*
 * XREFs of sub_1800CCF78 @ 0x1800CCF78
 * Callers:
 *     sub_1800CD0F0 @ 0x1800CD0F0 (sub_1800CD0F0.c)
 *     sub_1800CD140 @ 0x1800CD140 (sub_1800CD140.c)
 * Callees:
 *     sub_1800CCFA8 @ 0x1800CCFA8 (sub_1800CCFA8.c)
 */

__int64 __fastcall sub_1800CCF78(void **a1, __int64 a2)
{
  sub_1800CCFA8(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x30uLL);
}
