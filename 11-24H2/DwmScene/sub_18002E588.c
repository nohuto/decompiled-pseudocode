/*
 * XREFs of sub_18002E588 @ 0x18002E588
 * Callers:
 *     sub_18002DFFC @ 0x18002DFFC (sub_18002DFFC.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_18002E588(__int64 a1, _QWORD *a2, __int64 a3, __int64 **a4)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = *a4;
  v5 = **a4;
  a2[1] = 0LL;
  *a2 = v5;
  return result;
}
