/*
 * XREFs of sub_1800950A4 @ 0x1800950A4
 * Callers:
 *     sub_180094F2C @ 0x180094F2C (sub_180094F2C.c)
 * Callees:
 *     sub_18002C59C @ 0x18002C59C (sub_18002C59C.c)
 *     sub_1800950E8 @ 0x1800950E8 (sub_1800950E8.c)
 */

__int64 __fastcall sub_1800950A4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 56 )
  {
    sub_1800950E8(a1, a3, v4, i);
    a3 += 56LL;
  }
  sub_18002C59C(a3, a3);
  return a3;
}
