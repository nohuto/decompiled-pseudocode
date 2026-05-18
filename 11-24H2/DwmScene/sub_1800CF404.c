/*
 * XREFs of sub_1800CF404 @ 0x1800CF404
 * Callers:
 *     sub_1800D0520 @ 0x1800D0520 (sub_1800D0520.c)
 * Callees:
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_18001D7D8 @ 0x18001D7D8 (sub_18001D7D8.c)
 *     sub_18001D8FC @ 0x18001D8FC (sub_18001D8FC.c)
 *     sub_18001DE9C @ 0x18001DE9C (sub_18001DE9C.c)
 *     unknown_libname_84 @ 0x18001E108 (unknown_libname_84.c)
 *     sub_18001E4C0 @ 0x18001E4C0 (sub_18001E4C0.c)
 *     sub_18001E564 @ 0x18001E564 (sub_18001E564.c)
 *     sub_1800CF988 @ 0x1800CF988 (sub_1800CF988.c)
 */

void __fastcall sub_1800CF404(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
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
        a1[1] = sub_18001DE9C(a2, v4, v15 + a2);
        v17 = v4;
      }
      else
      {
        v16 = v4 - v15;
        a1[1] = sub_18001DE9C(v4 - v15, a1[1], a1[1]);
        while ( v16 != a2 )
        {
          v16 -= 32LL;
          unknown_libname_84((_OWORD *)(v15 + v16), v16);
        }
        v17 = v15 + a2;
      }
      sub_18001D8FC(a2, v17);
      sub_1800CF988(a3, a4, a2);
    }
    else
    {
      v10 = (v4 - v7) >> 5;
      if ( a4 > 0x7FFFFFFFFFFFFFFLL - v10 )
        sub_180013278();
      v19 = v10 + a4;
      v18 = sub_18001E4C0(a1, v10 + a4);
      v12 = sub_18001D7D8(v11, &v18);
      sub_1800CF988(a3, a4, v12 + 32 * ((a2 - v7) >> 5));
      if ( a4 == 1 && a2 == v4 )
      {
        v13 = v12;
        v14 = v7;
      }
      else
      {
        sub_18001DE9C(v7, a2, v12);
        v14 = a2;
        v13 = v12 + 32 * (a4 + ((a2 - v7) >> 5));
      }
      sub_18001DE9C(v14, v4, v13);
      sub_18001E564((__int64)a1, v12, v19, v18);
    }
  }
}
