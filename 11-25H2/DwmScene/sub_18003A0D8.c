/*
 * XREFs of sub_18003A0D8 @ 0x18003A0D8
 * Callers:
 *     sub_180099248 @ 0x180099248 (sub_180099248.c)
 * Callees:
 *     sub_18003B924 @ 0x18003B924 (sub_18003B924.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     copysignf @ 0x1800D4E34 (copysignf.c)
 */

float *__fastcall sub_18003A0D8(__int64 a1, float *a2)
{
  float v4; // edi
  __m128 v5; // xmm2
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  float v8; // xmm8_4
  __m128 v9; // xmm2
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  float v12; // xmm7_4
  __m128 v13; // xmm3
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  float v16; // xmm0_4
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-48h]
  float Sign[8]; // [rsp+40h] [rbp-40h]

  sub_18003BCDC(a1);
  v4 = *(float *)(a1 + 180);
  *(_QWORD *)Sign = *(_QWORD *)(a1 + 172);
  v18 = 1065353216LL;
  v19 = 0;
  sub_18003B924(a1, &v20, &v18);
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v20, (__m128)v21);
  v6 = _mm_mul_ps(v5, v5);
  v21 = 0;
  v7 = _mm_shuffle_ps(v6, v6, 102);
  v6.m128_f32[0] = (float)(v6.m128_f32[0] + v7.m128_f32[0]) + _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  v20 = 0x3F80000000000000LL;
  LODWORD(v8) = _mm_sqrt_ps(_mm_shuffle_ps(v6, v6, 0)).m128_u32[0];
  sub_18003B924(a1, &v18, &v20);
  v21 = 1065353216;
  v9 = _mm_movelh_ps((__m128)(unsigned __int64)v18, (__m128)v19);
  v10 = _mm_mul_ps(v9, v9);
  v11 = _mm_shuffle_ps(v10, v10, 102);
  v10.m128_f32[0] = (float)(v10.m128_f32[0] + v11.m128_f32[0]) + _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  v20 = 0LL;
  LODWORD(v12) = _mm_sqrt_ps(_mm_shuffle_ps(v10, v10, 0)).m128_u32[0];
  sub_18003B924(a1, &v18, &v20);
  v13 = _mm_movelh_ps((__m128)(unsigned __int64)v18, (__m128)v19);
  v14 = _mm_mul_ps(v13, v13);
  v15 = _mm_shuffle_ps(v14, v14, 102);
  v14.m128_f32[0] = (float)(v14.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
  v16 = copysignf(v8, Sign[0]);
  v11.m128_f32[0] = Sign[1];
  *a2 = v16;
  a2[1] = copysignf(v12, v11.m128_f32[0]);
  a2[2] = copysignf(_mm_sqrt_ps(_mm_shuffle_ps(v14, v14, 0)).m128_f32[0], v4);
  return a2;
}
