/*
 * XREFs of sub_18004AD10 @ 0x18004AD10
 * Callers:
 *     sub_18004AB4C @ 0x18004AB4C (sub_18004AB4C.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_18004AD10(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_180017054(a2, *a4);
  result = 0LL;
  *(_WORD *)(a2 + 32) = 0;
  return result;
}
