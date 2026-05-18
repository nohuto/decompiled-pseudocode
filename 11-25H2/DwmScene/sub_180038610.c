/*
 * XREFs of sub_180038610 @ 0x180038610
 * Callers:
 *     sub_180037B7C @ 0x180037B7C (sub_180037B7C.c)
 *     sub_180037E6C @ 0x180037E6C (sub_180037E6C.c)
 *     sub_180038360 @ 0x180038360 (sub_180038360.c)
 *     sub_180038490 @ 0x180038490 (sub_180038490.c)
 * Callees:
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

_QWORD *__fastcall sub_180038610(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a2; i != a1; sub_180011010(a3, i) )
  {
    i -= 2;
    a3 -= 2;
  }
  return a3;
}
