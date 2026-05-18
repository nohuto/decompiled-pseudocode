/*
 * XREFs of sub_18001DD3C @ 0x18001DD3C
 * Callers:
 *     sub_1800544F4 @ 0x1800544F4 (sub_1800544F4.c)
 *     sub_1800CF2A4 @ 0x1800CF2A4 (sub_1800CF2A4.c)
 *     sub_1800D1320 @ 0x1800D1320 (sub_1800D1320.c)
 * Callees:
 *     sub_18001D79C @ 0x18001D79C (sub_18001D79C.c)
 *     sub_18001DD80 @ 0x18001DD80 (sub_18001DD80.c)
 */

__int64 __fastcall sub_18001DD3C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 32 )
  {
    sub_18001DD80(a1, a3, v4, i);
    a3 += 32LL;
  }
  sub_18001D79C(a3, a3);
  return a3;
}
