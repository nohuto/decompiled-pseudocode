/*
 * XREFs of sub_1800733F0 @ 0x1800733F0
 * Callers:
 *     sub_180073088 @ 0x180073088 (sub_180073088.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_1800733F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180017054(a2, a3);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 48);
  return result;
}
