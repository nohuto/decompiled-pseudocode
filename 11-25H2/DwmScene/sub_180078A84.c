/*
 * XREFs of sub_180078A84 @ 0x180078A84
 * Callers:
 *     sub_180078610 @ 0x180078610 (sub_180078610.c)
 * Callees:
 *     sub_180078580 @ 0x180078580 (sub_180078580.c)
 *     sub_180078BA8 @ 0x180078BA8 (sub_180078BA8.c)
 */

__int64 __fastcall sub_180078A84(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 56 )
  {
    sub_180078BA8(a1, a3, v4, i);
    a3 += 56LL;
  }
  sub_180078580(a3, a3);
  return a3;
}
