/*
 * XREFs of sub_180082C90 @ 0x180082C90
 * Callers:
 *     sub_180082A54 @ 0x180082A54 (sub_180082A54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180082C90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)a3;
  result = *(unsigned int *)(a3 + 8);
  *(_DWORD *)(a2 + 8) = result;
  return result;
}
