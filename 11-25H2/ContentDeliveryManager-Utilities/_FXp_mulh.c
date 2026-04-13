/*
 * XREFs of _FXp_mulh @ 0x18000CA34
 * Callers:
 *     _FXp_mulx @ 0x18000CC34 (_FXp_mulx.c)
 *     _FXp_setn @ 0x18000CD40 (_FXp_setn.c)
 * Callees:
 *     _FDscale @ 0x18000C3DC (_FDscale.c)
 *     _FXp_addh @ 0x18000C5B8 (_FXp_addh.c)
 *     _Feraise @ 0x1800214E8 (_Feraise.c)
 *     _FDtest @ 0x18002151C (_FDtest.c)
 *     _FDint @ 0x18002156C (_FDint.c)
 *     _FDunscale @ 0x180021648 (_FDunscale.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

float *__fastcall FXp_mulh(float *a1, int a2, float a3)
{
  __int64 v3; // r15
  __int16 v5; // ax
  int v6; // eax
  int v7; // r14d
  __int64 v8; // r13
  signed __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // edx
  float *v12; // rcx
  float v13; // xmm0_4
  __int64 i; // rax
  float v15; // xmm0_4
  _WORD v17[2]; // [rsp+20h] [rbp-50h] BYREF
  float v18; // [rsp+24h] [rbp-4Ch] BYREF
  int v19; // [rsp+28h] [rbp-48h]
  float v21[4]; // [rsp+30h] [rbp-40h] BYREF

  v3 = a2;
  if ( a2 <= 0 )
  {
LABEL_9:
    v6 = 0;
    v19 = 0;
    v7 = 1;
    if ( (int)v3 > 0 )
    {
      v8 = 0LL;
      v9 = (char *)v21 - (char *)a1;
      v10 = 1LL;
      do
      {
        if ( v10 < 4 )
        {
          v11 = v6 + v7;
          v12 = &a1[v10 + v8];
          while ( v11 < (int)v3 )
          {
            v13 = *v12;
            if ( *v12 == 0.0 )
              break;
            ++v7;
            *v12 = 0.0;
            ++v11;
            ++v10;
            *(float *)((char *)v12++ + v9) = v13 * a3;
            if ( v10 >= 4 )
              goto LABEL_18;
          }
          v21[v10] = 0.0;
          v10 = 8LL;
          v7 = 8;
        }
LABEL_18:
        if ( v21[0] == 0.0 )
          break;
        v18 = v21[0];
        v17[0] = 0;
        FDunscale(v17, &v18);
        FDint(&v18, 12LL);
        FDscale((unsigned __int16 *)&v18, v17[0]);
        FXp_addh(a1, v3, v18);
        FXp_addh(a1, v3, v21[0] - v18);
        for ( i = 1LL; i < v10; ++i )
        {
          v15 = v21[i];
          v21[i - 1] = v15;
          if ( v15 == 0.0 )
            break;
        }
        ++v8;
        v6 = v19 + 1;
        v9 -= 4LL;
        --v7;
        ++v19;
        --v10;
      }
      while ( v8 < v3 );
    }
    return a1;
  }
  v21[0] = a3 * *a1;
  v5 = FDtest(v21);
  if ( v5 < 0 )
  {
    *a1 = 0.0;
    goto LABEL_9;
  }
  if ( v5 == 2 )
  {
    Feraise(1);
    *a1 = v21[0];
  }
  else
  {
    *a1 = v21[0];
    if ( v5 <= 0 )
      return a1;
  }
  if ( (int)v3 > 1 )
    a1[1] = 0.0;
  return a1;
}
