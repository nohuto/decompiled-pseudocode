/*
 * XREFs of sub_180010C7C @ 0x180010C7C
 * Callers:
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_18002C978 @ 0x18002C978 (sub_18002C978.c)
 *     sub_18002D5E0 @ 0x18002D5E0 (sub_18002D5E0.c)
 *     sub_1800527B4 @ 0x1800527B4 (sub_1800527B4.c)
 * Callees:
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 *     sub_180010CC0 @ 0x180010CC0 (sub_180010CC0.c)
 */

__int64 __fastcall sub_180010C7C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_180010CC0(a1, a3, v4);
      a3 += 16LL;
      v4 = v5 + 16;
    }
    while ( v4 != v6 );
  }
  sub_180010AA8(a3, a3);
  return a3;
}
