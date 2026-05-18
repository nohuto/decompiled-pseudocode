/*
 * XREFs of sub_18007AF10 @ 0x18007AF10
 * Callers:
 *     sub_18007AC94 @ 0x18007AC94 (sub_18007AC94.c)
 * Callees:
 *     sub_1800785B8 @ 0x1800785B8 (sub_1800785B8.c)
 *     sub_180078C04 @ 0x180078C04 (sub_180078C04.c)
 */

__int64 __fastcall sub_18007AF10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // r11

  v3 = a3;
  if ( a2 )
  {
    v4 = a1 - a3;
    do
    {
      sub_180078C04(a1, v3, v4 + v3);
      v3 += 40LL;
    }
    while ( v5 != 1 );
  }
  sub_1800785B8(v3, v3);
  return v3;
}
