/*
 * XREFs of _LXp_setw @ 0x18000E5B0
 * Callers:
 *     _Stoldx @ 0x18000607C (_Stoldx.c)
 *     _LXp_setn @ 0x18000E588 (_LXp_setn.c)
 *     _LDtento @ 0x18000E6D0 (_LDtento.c)
 * Callees:
 *     _LDscale @ 0x18000DE88 (_LDscale.c)
 *     _LDint @ 0x180021AA0 (_LDint.c)
 *     _LDunscale @ 0x180021AAC (_LDunscale.c)
 */

__int64 __fastcall LXp_setw(__int64 a1, int a2, double a3)
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
  v6 = LDunscale(&v13, &v12);
  if ( !v6 )
  {
    v3 = v12;
    goto LABEL_13;
  }
  v7 = (double *)(a1 + 8);
  if ( v6 <= 0 )
  {
    LDint(&v12, 26LL);
    LDscale((unsigned __int16 *)&v12, (unsigned int)v13);
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
        LDunscale(&v13, a1 + 8);
        LDint(a1 + 8, 26LL);
        LDscale((unsigned __int16 *)(a1 + 8), (unsigned int)v13);
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
