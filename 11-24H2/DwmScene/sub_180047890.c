/*
 * XREFs of sub_180047890 @ 0x180047890
 * Callers:
 *     sub_180047604 @ 0x180047604 (sub_180047604.c)
 * Callees:
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 *     sub_180047968 @ 0x180047968 (sub_180047968.c)
 */

__int64 __fastcall sub_180047890(__int64 a1, __int64 a2, __int64 a3)
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
      sub_180047968(a1, v3, v4 + v3);
      v3 += 88LL;
    }
    while ( v5 != 1 );
  }
  sub_180047740(v3, v3);
  return v3;
}
