/*
 * XREFs of sub_18003D29C @ 0x18003D29C
 * Callers:
 *     sub_18003D2CC @ 0x18003D2CC (sub_18003D2CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003D29C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *a3;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a2 = v3;
  a2[1] = a3[1];
  result = a3[2];
  a2[2] = result;
  a3[1] = 0LL;
  a3[2] = 0LL;
  return result;
}
