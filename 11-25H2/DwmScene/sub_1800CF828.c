/*
 * XREFs of sub_1800CF828 @ 0x1800CF828
 * Callers:
 *     sub_1800CF2A4 @ 0x1800CF2A4 (sub_1800CF2A4.c)
 * Callees:
 *     sub_18001D79C @ 0x18001D79C (sub_18001D79C.c)
 *     sub_18001DD80 @ 0x18001DD80 (sub_18001DD80.c)
 */

__int64 __fastcall sub_1800CF828(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r9

  v3 = a3;
  if ( a2 )
  {
    v4 = a1 - a3;
    do
    {
      sub_18001DD80(v4, v3, v4 + v3);
      v3 += 32LL;
    }
    while ( v5 != 1 );
  }
  sub_18001D79C(v3, v3);
  return v3;
}
