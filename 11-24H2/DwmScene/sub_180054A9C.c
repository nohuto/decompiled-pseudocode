/*
 * XREFs of sub_180054A9C @ 0x180054A9C
 * Callers:
 *     sub_180054430 @ 0x180054430 (sub_180054430.c)
 * Callees:
 *     sub_180054CB0 @ 0x180054CB0 (sub_180054CB0.c)
 */

__int64 __fastcall sub_180054A9C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180054CB0(a2, a3);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(a3 + 40);
  return result;
}
