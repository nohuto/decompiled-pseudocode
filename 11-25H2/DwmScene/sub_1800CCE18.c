/*
 * XREFs of sub_1800CCE18 @ 0x1800CCE18
 * Callers:
 *     sub_1800CCF90 @ 0x1800CCF90 (sub_1800CCF90.c)
 *     sub_1800CCFE0 @ 0x1800CCFE0 (sub_1800CCFE0.c)
 * Callees:
 *     sub_1800CCE48 @ 0x1800CCE48 (sub_1800CCE48.c)
 */

__int64 __fastcall sub_1800CCE18(void **a1, __int64 a2)
{
  sub_1800CCE48(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x30uLL);
}
