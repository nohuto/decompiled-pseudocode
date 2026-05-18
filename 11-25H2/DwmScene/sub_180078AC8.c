/*
 * XREFs of sub_180078AC8 @ 0x180078AC8
 * Callers:
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 * Callees:
 *     sub_1800785B8 @ 0x1800785B8 (sub_1800785B8.c)
 *     sub_180078C18 @ 0x180078C18 (sub_180078C18.c)
 */

__int64 __fastcall sub_180078AC8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 40 )
  {
    sub_180078C18(a1, a3, v4, i);
    a3 += 40LL;
  }
  sub_1800785B8(a3, a3);
  return a3;
}
