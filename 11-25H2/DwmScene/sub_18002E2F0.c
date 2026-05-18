/*
 * XREFs of sub_18002E2F0 @ 0x18002E2F0
 * Callers:
 *     sub_18002C55C @ 0x18002C55C (sub_18002C55C.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_18002E2F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_180016F54(a2, a3);
  result = *(unsigned int *)(a3 + 32);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
