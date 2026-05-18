/*
 * XREFs of sub_1800828E8 @ 0x1800828E8
 * Callers:
 *     sub_180082948 @ 0x180082948 (sub_180082948.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800828E8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  result = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
