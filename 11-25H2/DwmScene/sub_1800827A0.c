/*
 * XREFs of sub_1800827A0 @ 0x1800827A0
 * Callers:
 *     sub_180082AE0 @ 0x180082AE0 (sub_180082AE0.c)
 * Callees:
 *     sub_180082B20 @ 0x180082B20 (sub_180082B20.c)
 */

__int64 __fastcall sub_1800827A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_180082B20(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 12LL;
  return result;
}
