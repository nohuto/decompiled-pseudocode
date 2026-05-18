/*
 * XREFs of sub_180078B58 @ 0x180078B58
 * Callers:
 *     sub_180078610 @ 0x180078610 (sub_180078610.c)
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_180078B58(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_180016F54(a2, a3);
  *(_WORD *)(a2 + 32) = *(_WORD *)(a3 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a3 + 44);
  result = *(unsigned int *)(a3 + 48);
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
