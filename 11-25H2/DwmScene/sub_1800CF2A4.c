/*
 * XREFs of sub_1800CF2A4 @ 0x1800CF2A4
 * Callers:
 *     sub_1800D03C0 @ 0x1800D03C0 (sub_1800D03C0.c)
 * Callees:
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_18001D678 @ 0x18001D678 (sub_18001D678.c)
 *     sub_18001D79C @ 0x18001D79C (sub_18001D79C.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     unknown_libname_84 @ 0x18001DFA8 (unknown_libname_84.c)
 *     sub_18001E360 @ 0x18001E360 (sub_18001E360.c)
 *     sub_18001E404 @ 0x18001E404 (sub_18001E404.c)
 *     sub_1800CF828 @ 0x1800CF828 (sub_1800CF828.c)
 */

void __fastcall sub_1800CF2A4(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h]

  if ( a4 )
  {
    v4 = a1[1];
    v7 = *a1;
    if ( a4 <= (a1[2] - v4) >> 5 )
    {
      v15 = 32 * a4;
      if ( a4 >= (v4 - a2) >> 5 )
      {
        a1[1] = sub_18001DD3C(a2, v4, v15 + a2);
        v17 = v4;
      }
      else
      {
        v16 = v4 - v15;
        a1[1] = sub_18001DD3C(v4 - v15, a1[1], a1[1]);
        while ( v16 != a2 )
        {
          v16 -= 32LL;
          unknown_libname_84((_OWORD *)(v15 + v16), v16);
        }
        v17 = v15 + a2;
      }
      sub_18001D79C(a2, v17);
      sub_1800CF828(a3, a4, a2);
    }
    else
    {
      v10 = (v4 - v7) >> 5;
      if ( a4 > 0x7FFFFFFFFFFFFFFLL - v10 )
        sub_180013178();
      v19 = v10 + a4;
      v18 = sub_18001E360(a1, v10 + a4);
      v12 = sub_18001D678(v11, &v18);
      sub_1800CF828(a3, a4, v12 + 32 * ((a2 - v7) >> 5));
      if ( a4 == 1 && a2 == v4 )
      {
        v13 = v12;
        v14 = v7;
      }
      else
      {
        sub_18001DD3C(v7, a2, v12);
        v14 = a2;
        v13 = v12 + 32 * (a4 + ((a2 - v7) >> 5));
      }
      sub_18001DD3C(v14, v4, v13);
      sub_18001E404((__int64)a1, v12, v19, v18);
    }
  }
}
