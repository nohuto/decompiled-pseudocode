/*
 * XREFs of sub_180037E6C @ 0x180037E6C
 * Callers:
 *     sub_1800378C8 @ 0x1800378C8 (sub_1800378C8.c)
 * Callees:
 *     sub_180030AA0 @ 0x180030AA0 (sub_180030AA0.c)
 *     sub_180038610 @ 0x180038610 (sub_180038610.c)
 *     unknown_libname_6 @ 0x180038660 (unknown_libname_6.c)
 *     sub_1800388E4 @ 0x1800388E4 (sub_1800388E4.c)
 *     sub_180038924 @ 0x180038924 (sub_180038924.c)
 */

unsigned __int64 __fastcall sub_180037E6C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r11
  __int64 v9; // rbx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r11
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r11
  __int64 v17; // r11
  __int64 v18; // r11
  __int64 v19; // r11

  v7 = a3;
  v9 = a1;
  if ( a4 )
  {
    if ( !a5 )
      return v9;
    if ( a4 <= a5 && a4 <= a7 )
    {
      v11 = a6;
      v12 = sub_1800388E4(a1, a2, a6);
      v9 = unknown_libname_6(a2, v13, v9);
      unknown_libname_6(a6, v12, v9);
      while ( v11 != v12 )
      {
        sub_180030AA0(v11);
        v11 += 16LL;
      }
      return v9;
    }
    if ( a5 <= a7 )
    {
      v14 = a6;
      v15 = sub_1800388E4(a2, a3, a6);
      sub_180038610(v9, a2, v16);
      v9 = unknown_libname_6(a6, v15, v9);
      while ( v14 != v15 )
      {
        sub_180030AA0(v14);
        v14 += 16LL;
      }
      return v9;
    }
    if ( a1 != a2 )
    {
      if ( a2 == a3 )
      {
        return a1;
      }
      else
      {
        ((void (*)(void))sub_180038924)();
        sub_180038924(a2, v17);
        sub_180038924(v9, v18);
        return v9 + ((v19 - a2) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  return v7;
}
