/*
 * XREFs of sub_18004ACE8 @ 0x18004ACE8
 * Callers:
 *     sub_18004AA58 @ 0x18004AA58 (sub_18004AA58.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_18004ACE8(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  result = sub_180017054(a2, *a4);
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}
