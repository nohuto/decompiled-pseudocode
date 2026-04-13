/*
 * XREFs of _Xp_setw @ 0x18000DAE0
 * Callers:
 *     _Stodx @ 0x1800059EC (_Stodx.c)
 *     _Xp_setn @ 0x18000DAB8 (_Xp_setn.c)
 *     _Dtento @ 0x18000DC00 (_Dtento.c)
 * Callees:
 *     _Dscale @ 0x18000D054 (_Dscale.c)
 *     _Dint @ 0x1800218C8 (_Dint.c)
 *     _Dunscale @ 0x1800219E4 (_Dunscale.c)
 */

__int64 __fastcall Xp_setw(__int64 a1, int a2, double a3)
{
  double v3; // xmm6_8
  __int16 v6; // ax
  double *v7; // rdi
  double v8; // xmm0_8
  double v9; // xmm6_8
  double v10; // xmm6_8
  double v12; // [rsp+50h] [rbp+20h] BYREF
  __int16 v13; // [rsp+58h] [rbp+28h] BYREF

  v12 = a3;
  v3 = a3;
  v13 = 0;
  if ( a2 <= 0 )
    return a1;
  if ( a2 == 1 )
  {
LABEL_13:
    *(double *)a1 = v3;
    return a1;
  }
  v6 = Dunscale(&v13, &v12);
  if ( !v6 )
  {
    v3 = v12;
    goto LABEL_13;
  }
  v7 = (double *)(a1 + 8);
  if ( v6 <= 0 )
  {
    Dint(&v12, 26LL);
    Dscale((unsigned __int16 *)&v12, (unsigned int)v13);
    v8 = v12;
    *(double *)a1 = v12;
    v9 = a3 - v8;
    *v7 = a3 - v8;
    if ( a2 > 2 )
    {
      if ( v9 == 0.0 )
      {
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      else
      {
        Dunscale(&v13, a1 + 8);
        Dint(a1 + 8, 26LL);
        Dscale((unsigned __int16 *)(a1 + 8), (unsigned int)v13);
        v10 = v9 - *v7;
        *(double *)(a1 + 16) = v10;
        if ( a2 > 3 && v10 != 0.0 )
          *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
  }
  else
  {
    *(double *)a1 = v12;
    *v7 = 0.0;
  }
  return a1;
}
