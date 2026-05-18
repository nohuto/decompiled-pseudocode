/*
 * XREFs of sub_180082900 @ 0x180082900
 * Callers:
 *     sub_180082C40 @ 0x180082C40 (sub_180082C40.c)
 * Callees:
 *     sub_180082C80 @ 0x180082C80 (sub_180082C80.c)
 */

__int64 __fastcall sub_180082900(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_180082C80(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 12LL;
  return result;
}
