/*
 * XREFs of sub_18005493C @ 0x18005493C
 * Callers:
 *     sub_1800542D0 @ 0x1800542D0 (sub_1800542D0.c)
 * Callees:
 *     sub_180054B50 @ 0x180054B50 (sub_180054B50.c)
 */

__int64 __fastcall sub_18005493C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180054B50(a2, a3);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(a3 + 40);
  return result;
}
