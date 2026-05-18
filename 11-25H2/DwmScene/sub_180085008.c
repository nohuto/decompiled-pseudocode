/*
 * XREFs of sub_180085008 @ 0x180085008
 * Callers:
 *     sub_180084C80 @ 0x180084C80 (sub_180084C80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180085008(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)(a2 + 12) = 1065353216;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  return result;
}
