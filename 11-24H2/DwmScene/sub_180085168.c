/*
 * XREFs of sub_180085168 @ 0x180085168
 * Callers:
 *     sub_180084DE0 @ 0x180084DE0 (sub_180084DE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180085168(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)(a2 + 12) = 1065353216;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  return result;
}
