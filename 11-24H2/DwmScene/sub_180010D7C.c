/*
 * XREFs of sub_180010D7C @ 0x180010D7C
 * Callers:
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_18002CAD8 @ 0x18002CAD8 (sub_18002CAD8.c)
 *     sub_18002D740 @ 0x18002D740 (sub_18002D740.c)
 *     sub_180052914 @ 0x180052914 (sub_180052914.c)
 * Callees:
 *     sub_180010BA8 @ 0x180010BA8 (sub_180010BA8.c)
 *     sub_180010DC0 @ 0x180010DC0 (sub_180010DC0.c)
 */

__int64 __fastcall sub_180010D7C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_180010DC0(a1, a3, v4);
      a3 += 16LL;
      v4 = v5 + 16;
    }
    while ( v4 != v6 );
  }
  sub_180010BA8(a3, a3);
  return a3;
}
