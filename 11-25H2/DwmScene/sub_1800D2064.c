/*
 * XREFs of sub_1800D2064 @ 0x1800D2064
 * Callers:
 *     sub_1800D2150 @ 0x1800D2150 (sub_1800D2150.c)
 * Callees:
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 */

_QWORD *__fastcall sub_1800D2064(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = (unsigned __int64)a3 - *a1;
  sub_1800D1EA8(a1, a3, a4, (a5 - a4) >> 4);
  result = a2;
  *a2 = *a1 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
