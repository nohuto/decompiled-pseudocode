/*
 * XREFs of sub_180052CA4 @ 0x180052CA4
 * Callers:
 *     sub_180052BB8 @ 0x180052BB8 (sub_180052BB8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180052CA4(__int64 a1, _QWORD *a2, __int64 a3, _QWORD **a4)
{
  _QWORD *result; // rax

  result = *a4;
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *result;
  a2[1] = result[1];
  *result = 0LL;
  result[1] = 0LL;
  *(_QWORD *)((char *)a2 + 20) = 0LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  return result;
}
