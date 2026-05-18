/*
 * XREFs of sub_180040D18 @ 0x180040D18
 * Callers:
 *     sub_180040C1C @ 0x180040C1C (sub_180040C1C.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall sub_180040D18(__int64 a1, __int64 a2, __int64 a3, __int16 **a4)
{
  __int16 *result; // rax
  __int16 v5; // cx

  result = *a4;
  v5 = **a4;
  *(_DWORD *)(a2 + 4) = 0;
  *(_WORD *)a2 = v5;
  return result;
}
