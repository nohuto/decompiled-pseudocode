/*
 * XREFs of sub_180038770 @ 0x180038770
 * Callers:
 *     sub_180037CDC @ 0x180037CDC (sub_180037CDC.c)
 *     sub_180037FCC @ 0x180037FCC (sub_180037FCC.c)
 *     sub_1800384C0 @ 0x1800384C0 (sub_1800384C0.c)
 *     sub_1800385F0 @ 0x1800385F0 (sub_1800385F0.c)
 * Callees:
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

_QWORD *__fastcall sub_180038770(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a2; i != a1; sub_180011110(a3, i) )
  {
    i -= 2;
    a3 -= 2;
  }
  return a3;
}
