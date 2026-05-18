/*
 * XREFs of sub_1800D21C4 @ 0x1800D21C4
 * Callers:
 *     sub_1800D22B0 @ 0x1800D22B0 (sub_1800D22B0.c)
 * Callees:
 *     sub_1800D2008 @ 0x1800D2008 (sub_1800D2008.c)
 */

_QWORD *__fastcall sub_1800D21C4(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = (unsigned __int64)a3 - *a1;
  sub_1800D2008(a1, a3, a4, (a5 - a4) >> 4);
  result = a2;
  *a2 = *a1 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
