/*
 * XREFs of sub_18002E374 @ 0x18002E374
 * Callers:
 *     sub_18002E084 @ 0x18002E084 (sub_18002E084.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002E374(__int64 a1, _QWORD *a2, __int64 a3, _QWORD **a4)
{
  _QWORD *result; // rax

  result = *a4;
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *result;
  a2[1] = result[1];
  *result = 0LL;
  result[1] = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  return result;
}
