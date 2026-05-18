/*
 * XREFs of sub_180037FCC @ 0x180037FCC
 * Callers:
 *     sub_180037A28 @ 0x180037A28 (sub_180037A28.c)
 * Callees:
 *     sub_180030C00 @ 0x180030C00 (sub_180030C00.c)
 *     sub_180038770 @ 0x180038770 (sub_180038770.c)
 *     unknown_libname_6 @ 0x1800387C0 (unknown_libname_6.c)
 *     sub_180038A44 @ 0x180038A44 (sub_180038A44.c)
 *     sub_180038A84 @ 0x180038A84 (sub_180038A84.c)
 */

unsigned __int64 __fastcall sub_180037FCC(
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
      v12 = sub_180038A44(a1, a2, a6);
      v9 = unknown_libname_6(a2, v13, v9);
      unknown_libname_6(a6, v12, v9);
      while ( v11 != v12 )
      {
        sub_180030C00(v11);
        v11 += 16LL;
      }
      return v9;
    }
    if ( a5 <= a7 )
    {
      v14 = a6;
      v15 = sub_180038A44(a2, a3, a6);
      sub_180038770(v9, a2, v16);
      v9 = unknown_libname_6(a6, v15, v9);
      while ( v14 != v15 )
      {
        sub_180030C00(v14);
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
        ((void (*)(void))sub_180038A84)();
        sub_180038A84(a2, v17);
        sub_180038A84(v9, v18);
        return v9 + ((v19 - a2) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  return v7;
}
