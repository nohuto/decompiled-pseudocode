/*
 * XREFs of sub_180078C28 @ 0x180078C28
 * Callers:
 *     sub_1800788D0 @ 0x1800788D0 (sub_1800788D0.c)
 * Callees:
 *     sub_180078718 @ 0x180078718 (sub_180078718.c)
 *     sub_180078D78 @ 0x180078D78 (sub_180078D78.c)
 */

__int64 __fastcall sub_180078C28(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 40 )
  {
    sub_180078D78(a1, a3, v4, i);
    a3 += 40LL;
  }
  sub_180078718(a3, a3);
  return a3;
}
