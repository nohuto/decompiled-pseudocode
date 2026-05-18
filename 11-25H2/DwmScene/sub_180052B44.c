/*
 * XREFs of sub_180052B44 @ 0x180052B44
 * Callers:
 *     sub_180052A58 @ 0x180052A58 (sub_180052A58.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180052B44(__int64 a1, _QWORD *a2, __int64 a3, _QWORD **a4)
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
