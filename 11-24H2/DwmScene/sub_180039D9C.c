/*
 * XREFs of sub_180039D9C @ 0x180039D9C
 * Callers:
 *     sub_180039EB0 @ 0x180039EB0 (sub_180039EB0.c)
 *     sub_18003BBA4 @ 0x18003BBA4 (sub_18003BBA4.c)
 *     sub_18003BC50 @ 0x18003BC50 (sub_18003BC50.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_180039CF0 @ 0x180039CF0 (sub_180039CF0.c)
 *     sub_180039D60 @ 0x180039D60 (sub_180039D60.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180039D9C(__int64 a1, __int64 a2)
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
  sub_18003BE7C();
  sub_180039CF0(a2, &v8);
  v5 = v8;
  if ( v8 )
  {
    if ( v9 )
      sub_18001060C(v9);
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
        if ( !*sub_180039D60(a2, &v10) )
          v7 = 1;
      }
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        if ( v11 )
          sub_18001060C(v11);
      }
      if ( !v7 )
        break;
      a2 = *sub_180012654(a2, &v12);
      if ( v13 )
        sub_18001060C(v13);
    }
    while ( a2 );
    if ( a2 )
    {
      LOBYTE(v4) = v4 | 2;
      a2 = *sub_180039D60(a2, &v10);
    }
    if ( (v4 & 2) != 0 && v11 )
      sub_18001060C(v11);
    if ( v9 )
      sub_18001060C(v9);
    return a2;
  }
}
