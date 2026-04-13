/*
 * XREFs of _FXp_addh @ 0x18000C5B8
 * Callers:
 *     _FXp_addx @ 0x18000C910 (_FXp_addx.c)
 *     _FXp_mulh @ 0x18000CA34 (_FXp_mulh.c)
 *     _FXp_setn @ 0x18000CD40 (_FXp_setn.c)
 * Callees:
 *     _FDscale @ 0x18000C3DC (_FDscale.c)
 *     _Feraise @ 0x1800214E8 (_Feraise.c)
 *     _FDtest @ 0x18002151C (_FDtest.c)
 *     _FDint @ 0x18002156C (_FDint.c)
 *     _FDunscale @ 0x180021648 (_FDunscale.c)
 */

float *__fastcall FXp_addh(float *a1, int a2, float a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // r15
  float *v11; // r12
  __int16 v12; // ax
  float v13; // xmm1_4
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // edx
  __int64 i; // rdx
  float v19; // xmm1_4
  __int64 v20; // rax
  float v21; // xmm0_4
  __int64 v22; // rdx
  float v23; // xmm0_4
  __int64 v24; // rax
  float v25; // xmm0_4
  int v26; // r15d
  unsigned __int16 *v27; // rbx
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v31[4]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v32; // [rsp+90h] [rbp+48h] BYREF
  __int16 v33; // [rsp+98h] [rbp+50h] BYREF
  float v34; // [rsp+A0h] [rbp+58h] BYREF
  float v35; // [rsp+A8h] [rbp+60h] BYREF

  v34 = a3;
  v3 = 0LL;
  v35 = a3;
  v5 = a2;
  v32 = 0;
  if ( !a2 )
    return a1;
  v6 = FDunscale(&v32, &v35);
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      return a1;
    v8 = 256;
    v9 = 0;
    v10 = v5;
    if ( (int)v5 <= 0 )
      return a1;
    v11 = a1 - 1;
    while ( 1 )
    {
      v31[0] = a1[v3];
      v33 = 0;
      v12 = FDunscale(&v33, v31);
      if ( v12 > 0 )
        return a1;
      if ( !v12 )
      {
        a1[v9] = v34;
        if ( v9 + 1 < (int)v5 )
          a1[v9 + 1] = 0.0;
        return a1;
      }
      v13 = v34;
      v14 = v33 - v32;
      if ( v14 <= -12 )
        break;
      if ( v14 < 12 || v34 == 0.0 )
        goto LABEL_31;
      v8 = v33;
      ++v9;
LABEL_50:
      ++v3;
      ++v11;
LABEL_51:
      if ( v9 >= (int)v5 )
        return a1;
    }
    if ( v34 != 0.0 )
    {
      v15 = v9;
      v16 = v3;
      do
      {
        v17 = v15;
        ++v16;
        ++v15;
      }
      while ( v16 < v10 && a1[v16] != 0.0 );
      if ( v15 >= (int)v5 - 1 )
      {
        if ( v15 == (_DWORD)v5 )
          v15 = v17;
      }
      else
      {
        ++v15;
      }
      for ( i = v15; i > v3; --i )
        a1[i] = a1[i - 1];
      v34 = 0.0;
      a1[v3] = v13;
      goto LABEL_51;
    }
LABEL_31:
    v19 = v34 + a1[v3];
    a1[v3] = v19;
    if ( v19 == 0.0 )
    {
      v20 = v3;
      do
      {
        if ( ++v20 >= v10 )
          break;
        v21 = a1[v20];
        a1[v20 - 1] = v21;
      }
      while ( v21 != 0.0 );
      a1[v10 - 1] = 0.0;
      v19 = a1[v3];
      if ( v19 == 0.0 )
        return a1;
    }
    v34 = v19;
    FDunscale(&v32, &v34);
    v22 = (unsigned int)v32;
    if ( v8 - 12 < (int)v22 )
    {
      LOWORD(v22) = v32 - v8 + 12;
      FDint(&v34, v22);
      FDscale((unsigned __int16 *)&v34, (unsigned int)v32);
      v23 = a1[v3] - v34;
      a1[v3] = v23;
      if ( v23 == 0.0 )
      {
        v24 = v3;
        do
        {
          if ( ++v24 >= v10 )
            break;
          v25 = a1[v24];
          a1[v24 - 1] = v25;
        }
        while ( v25 != 0.0 );
        a1[v10 - 1] = 0.0;
      }
      --v3;
      --v11;
      if ( --v9 )
      {
        v35 = *v11;
        FDunscale(&v33, &v35);
        v8 = v33;
      }
      else
      {
        v8 = 256;
      }
      goto LABEL_51;
    }
    v26 = v9 + 1;
    if ( v9 + 1 == (_DWORD)v5 )
      return a1;
    v34 = a1[v3];
    v27 = (unsigned __int16 *)&a1[v9];
    FDunscale(&v33, v27);
    FDint(v27, 12LL);
    FDscale(v27, (unsigned int)v33);
    v28 = a1[v3];
    v8 = v33;
    v29 = v34 - v28;
    v34 = v34 - v28;
    if ( v34 == 0.0 )
      v35 = v28;
    else
      v35 = v29;
    FDunscale(&v32, &v35);
    v9 = v26;
    v10 = v5;
    goto LABEL_50;
  }
  if ( v6 == 2 || (v7 = FDtest(a1), v7 <= 0) )
  {
    *a1 = v34;
  }
  else if ( v7 != 2 && ((*((_WORD *)a1 + 1) ^ HIWORD(v34)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = FNan._Float;
    if ( (int)v5 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}
