/*
 * XREFs of sub_18006A2DC @ 0x18006A2DC
 * Callers:
 *     sub_18006A290 @ 0x18006A290 (sub_18006A290.c)
 *     sub_18006A2DC @ 0x18006A2DC (sub_18006A2DC.c)
 * Callees:
 *     sub_180016990 @ 0x180016990 (sub_180016990.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18006A2DC @ 0x18006A2DC (sub_18006A2DC.c)
 */

void __fastcall sub_18006A2DC(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v7; // rbx
  _BYTE *v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *i; // rbx
  int v11; // [rsp+20h] [rbp-18h]
  _QWORD *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = (_QWORD *)a2;
  v7 = (_QWORD *)a2;
  sub_18003BE3C(a2);
  if ( (v7[56] & a3[66]) == a3[65] )
  {
    sub_18003BE3C((__int64)v7);
    if ( (v7[56] & a3[64]) == a3[63] )
    {
      v8 = *(_BYTE **)(a4 + 8);
      if ( v8 == *(_BYTE **)(a4 + 16) )
      {
        sub_180016990(a4, v8, &v12);
        v7 = v12;
      }
      else
      {
        *(_QWORD *)v8 = v7;
        *(_QWORD *)(a4 + 8) += 8LL;
      }
    }
    sub_18003BE3C((__int64)v7);
    v9 = (_QWORD *)v7[5];
    for ( i = (_QWORD *)v7[4]; i != v9; i += 2 )
      sub_18006A2DC(a1, *i, a3, a4, v11);
  }
}
