/*
 * XREFs of sub_180040BB8 @ 0x180040BB8
 * Callers:
 *     sub_180040ABC @ 0x180040ABC (sub_180040ABC.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall sub_180040BB8(__int64 a1, __int64 a2, __int64 a3, __int16 **a4)
{
  __int16 *result; // rax
  __int16 v5; // cx

  result = *a4;
  v5 = **a4;
  *(_DWORD *)(a2 + 4) = 0;
  *(_WORD *)a2 = v5;
  return result;
}
