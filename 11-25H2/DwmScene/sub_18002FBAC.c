/*
 * XREFs of sub_18002FBAC @ 0x18002FBAC
 * Callers:
 *     sub_18002FDF0 @ 0x18002FDF0 (sub_18002FDF0.c)
 *     sub_1800303A4 @ 0x1800303A4 (sub_1800303A4.c)
 *     sub_18006985C @ 0x18006985C (sub_18006985C.c)
 *     sub_1800BC9D0 @ 0x1800BC9D0 (sub_1800BC9D0.c)
 * Callees:
 *     sub_18002CD98 @ 0x18002CD98 (sub_18002CD98.c)
 */

__int64 __fastcall sub_18002FBAC(void **a1)
{
  sub_18002CD98((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x30uLL);
}
