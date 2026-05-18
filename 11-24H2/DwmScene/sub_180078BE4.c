/*
 * XREFs of sub_180078BE4 @ 0x180078BE4
 * Callers:
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 * Callees:
 *     sub_1800786E0 @ 0x1800786E0 (sub_1800786E0.c)
 *     sub_180078D08 @ 0x180078D08 (sub_180078D08.c)
 */

__int64 __fastcall sub_180078BE4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 56 )
  {
    sub_180078D08(a1, a3, v4, i);
    a3 += 56LL;
  }
  sub_1800786E0(a3, a3);
  return a3;
}
