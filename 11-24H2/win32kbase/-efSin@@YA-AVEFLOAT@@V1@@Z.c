/*
 * XREFs of ?efSin@@YA?AVEFLOAT@@V1@@Z @ 0x14010E460
 * Callers:
 *     ?efCos@@YA?AVEFLOAT@@V1@@Z @ 0x14010E430 (-efCos@@YA-AVEFLOAT@@V1@@Z.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1401C34B0 (-bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     eFraction @ 0x14010E590 (eFraction.c)
 */

__int64 __fastcall efSin(unsigned int a1, __int64 a2)
{
  __m128 v2; // xmm1
  __int64 v3; // r9
  __int64 v4; // r8
  int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // r11d
  double v13; // xmm0_8
  __m128 v14; // xmm4
  int v15; // eax
  __int64 v16; // r8
  __m128 v17; // xmm3
  __m128 v18; // xmm3

  v2 = (__m128)_mm_cvtsi32_si128(a1);
  if ( v2.m128_f32[0] >= 0.0 )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = 1LL;
    v2 = _mm_xor_ps(v2, (__m128)(unsigned int)_xmm);
  }
  v2.m128_f32[0] = v2.m128_f32[0] * *(float *)&FP_SINE_FACTOR;
  v4 = 0LL;
  v5 = _mm_cvtsi128_si32((__m128i)v2);
  v6 = (unsigned __int8)(v5 >> 23);
  if ( (unsigned int)v6 <= 0x9E )
  {
    a2 = 118LL;
    v7 = v5 & 0x7FFFFF | 0x800000LL;
    if ( (unsigned int)v6 < 0x76 )
    {
      a2 = (unsigned int)(118 - v6);
      LOBYTE(v6) = a2;
      v8 = v7 >> a2;
    }
    else
    {
      v6 = (unsigned int)(v6 - 118);
      v8 = v7 << v6;
    }
    v9 = v8 >> 32;
    v4 = (unsigned int)-(int)v9;
    if ( v5 >= 0 )
      v4 = (unsigned int)v9;
  }
  v13 = eFraction(v6, a2, v4, v3);
  v15 = v10 >> 5;
  if ( ((v10 >> 5) & 2) != 0 )
    v11 = v12;
  v16 = v10 & 0x1F;
  if ( (v15 & 1) != 0 )
  {
    v17 = (__m128)*((unsigned int *)&unk_14029B360 - (unsigned int)v16);
    v17.m128_f32[0] = (float)(v17.m128_f32[0] - *((float *)&unk_14029B35C - v16)) * *(float *)&v13;
    v18 = _mm_xor_ps(v17, v14);
    v18.m128_f32[0] = v18.m128_f32[0] + *((float *)&unk_14029B360 - (unsigned int)v16);
  }
  else
  {
    v18 = (__m128)LODWORD(gaefSin[v16 + 1]);
    v18.m128_f32[0] = (float)((float)(v18.m128_f32[0] - gaefSin[v16]) * *(float *)&v13) + gaefSin[v16];
  }
  if ( v11 )
    v18 = _mm_xor_ps(v18, v14);
  return (unsigned int)_mm_cvtsi128_si32((__m128i)v18);
}
