/*
 * XREFs of sub_18006A17C @ 0x18006A17C
 * Callers:
 *     sub_18006A130 @ 0x18006A130 (sub_18006A130.c)
 *     sub_18006A17C @ 0x18006A17C (sub_18006A17C.c)
 * Callees:
 *     sub_180016890 @ 0x180016890 (sub_180016890.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18006A17C @ 0x18006A17C (sub_18006A17C.c)
 */

void __fastcall sub_18006A17C(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v7; // rbx
  _BYTE *v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *i; // rbx
  int v11; // [rsp+20h] [rbp-18h]
  _QWORD *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = (_QWORD *)a2;
  v7 = (_QWORD *)a2;
  sub_18003BCDC(a2);
  if ( (v7[56] & a3[66]) == a3[65] )
  {
    sub_18003BCDC((__int64)v7);
    if ( (v7[56] & a3[64]) == a3[63] )
    {
      v8 = *(_BYTE **)(a4 + 8);
      if ( v8 == *(_BYTE **)(a4 + 16) )
      {
        sub_180016890(a4, v8, &v12);
        v7 = v12;
      }
      else
      {
        *(_QWORD *)v8 = v7;
        *(_QWORD *)(a4 + 8) += 8LL;
      }
    }
    sub_18003BCDC((__int64)v7);
    v9 = (_QWORD *)v7[5];
    for ( i = (_QWORD *)v7[4]; i != v9; i += 2 )
      sub_18006A17C(a1, *i, a3, a4, v11);
  }
}
