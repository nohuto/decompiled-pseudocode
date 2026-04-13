/*
 * XREFs of _LXp_mulh @ 0x18000E260
 * Callers:
 *     _LXp_mulx @ 0x18000E468 (_LXp_mulx.c)
 * Callees:
 *     _LDscale @ 0x18000DE78 (_LDscale.c)
 *     _LXp_addh @ 0x18000DE84 (_LXp_addh.c)
 *     _Feraise @ 0x1800214E8 (_Feraise.c)
 *     _LDtest @ 0x180021A84 (_LDtest.c)
 *     _LDint @ 0x180021A90 (_LDint.c)
 *     _LDunscale @ 0x180021A9C (_LDunscale.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

long double *__fastcall LXp_mulh(long double *a1, int a2, double a3)
{
  __int64 v3; // r15
  __int16 v5; // ax
  int v6; // eax
  int v7; // r14d
  __int64 v8; // r13
  signed __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // edx
  double *v12; // rcx
  double v13; // xmm0_8
  __int64 i; // rax
  double v15; // xmm0_8
  _WORD v17[2]; // [rsp+20h] [rbp-60h] BYREF
  int v18; // [rsp+24h] [rbp-5Ch]
  double v19; // [rsp+28h] [rbp-58h] BYREF
  long double v20[4]; // [rsp+30h] [rbp-50h] BYREF

  v3 = a2;
  if ( a2 <= 0 )
  {
LABEL_9:
    v6 = 0;
    v18 = 0;
    v7 = 1;
    if ( (int)v3 > 0 )
    {
      v8 = 0LL;
      v9 = (char *)v20 - (char *)a1;
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
            *(double *)((char *)v12++ + v9) = v13 * a3;
            if ( v10 >= 4 )
              goto LABEL_18;
          }
          v20[v10] = 0.0;
          v10 = 8LL;
          v7 = 8;
        }
LABEL_18:
        if ( v20[0] == 0.0 )
          break;
        v19 = v20[0];
        v17[0] = 0;
        LDunscale(v17, &v19);
        LDint(&v19, 26LL);
        LDscale((unsigned __int16 *)&v19, v17[0]);
        LXp_addh(a1, v3, v19);
        LXp_addh(a1, v3, v20[0] - v19);
        for ( i = 1LL; i < v10; ++i )
        {
          v15 = v20[i];
          v20[i - 1] = v15;
          if ( v15 == 0.0 )
            break;
        }
        ++v8;
        v6 = v18 + 1;
        v9 -= 8LL;
        --v7;
        ++v18;
        --v10;
      }
      while ( v8 < v3 );
    }
    return a1;
  }
  v20[0] = a3 * *a1;
  v5 = LDtest(v20);
  if ( v5 < 0 )
  {
    *a1 = 0.0;
    goto LABEL_9;
  }
  if ( v5 == 2 )
  {
    Feraise(1);
    *a1 = v20[0];
  }
  else
  {
    *a1 = v20[0];
    if ( v5 <= 0 )
      return a1;
  }
  if ( (int)v3 > 1 )
    a1[1] = 0.0;
  return a1;
}
