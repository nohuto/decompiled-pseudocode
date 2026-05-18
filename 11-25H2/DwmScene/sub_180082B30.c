/*
 * XREFs of sub_180082B30 @ 0x180082B30
 * Callers:
 *     sub_1800828F4 @ 0x1800828F4 (sub_1800828F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180082B30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)a3;
  result = *(unsigned int *)(a3 + 8);
  *(_DWORD *)(a2 + 8) = result;
  return result;
}
