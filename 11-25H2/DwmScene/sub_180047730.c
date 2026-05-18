/*
 * XREFs of sub_180047730 @ 0x180047730
 * Callers:
 *     sub_1800474A4 @ 0x1800474A4 (sub_1800474A4.c)
 * Callees:
 *     sub_1800475E0 @ 0x1800475E0 (sub_1800475E0.c)
 *     sub_180047808 @ 0x180047808 (sub_180047808.c)
 */

__int64 __fastcall sub_180047730(__int64 a1, __int64 a2, __int64 a3)
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
      sub_180047808(a1, v3, v4 + v3);
      v3 += 88LL;
    }
    while ( v5 != 1 );
  }
  sub_1800475E0(v3, v3);
  return v3;
}
