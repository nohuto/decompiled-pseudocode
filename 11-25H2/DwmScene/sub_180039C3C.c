/*
 * XREFs of sub_180039C3C @ 0x180039C3C
 * Callers:
 *     sub_180039D50 @ 0x180039D50 (sub_180039D50.c)
 *     sub_18003BA44 @ 0x18003BA44 (sub_18003BA44.c)
 *     sub_18003BAF0 @ 0x18003BAF0 (sub_18003BAF0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_180039B90 @ 0x180039B90 (sub_180039B90.c)
 *     sub_180039C00 @ 0x180039C00 (sub_180039C00.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180039C3C(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  bool v7; // si
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v4 = 0;
  sub_18003BD1C();
  sub_180039B90(a2, &v8);
  v5 = v8;
  if ( v8 )
  {
    if ( v9 )
      sub_18001050C(v9);
    return v5;
  }
  else
  {
    do
    {
      v7 = 0;
      if ( a2 != a1 )
      {
        v4 |= 1u;
        if ( !*sub_180039C00(a2, &v10) )
          v7 = 1;
      }
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        if ( v11 )
          sub_18001050C(v11);
      }
      if ( !v7 )
        break;
      a2 = *sub_180012554(a2, &v12);
      if ( v13 )
        sub_18001050C(v13);
    }
    while ( a2 );
    if ( a2 )
    {
      LOBYTE(v4) = v4 | 2;
      a2 = *sub_180039C00(a2, &v10);
    }
    if ( (v4 & 2) != 0 && v11 )
      sub_18001050C(v11);
    if ( v9 )
      sub_18001050C(v9);
    return a2;
  }
}
