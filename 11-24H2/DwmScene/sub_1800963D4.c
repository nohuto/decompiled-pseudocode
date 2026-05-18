/*
 * XREFs of sub_1800963D4 @ 0x1800963D4
 * Callers:
 *     sub_1800954CC @ 0x1800954CC (sub_1800954CC.c)
 * Callees:
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 */

__int64 __fastcall sub_1800963D4(__int64 a1)
{
  __int64 result; // rax

  result = 0x666666666666666LL;
  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    sub_18001CD64();
  return result;
}
