/*
 * XREFs of sub_18002E450 @ 0x18002E450
 * Callers:
 *     sub_18002C6BC @ 0x18002C6BC (sub_18002C6BC.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_18002E450(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_180017054(a2, a3);
  result = *(unsigned int *)(a3 + 32);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
