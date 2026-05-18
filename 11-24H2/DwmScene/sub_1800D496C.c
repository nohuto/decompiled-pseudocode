/*
 * XREFs of sub_1800D496C @ 0x1800D496C
 * Callers:
 *     sub_1800D3CCC @ 0x1800D3CCC (sub_1800D3CCC.c)
 *     sub_1800D4140 @ 0x1800D4140 (sub_1800D4140.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D496C(__m128 *a1, unsigned int a2, __int64 a3, unsigned __int64 *a4, __int64 a5, char a6)
{
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  __m128 v9; // xmm7
  __int64 result; // rax
  __m128 v11; // xmm3
  __m128 v12; // xmm5
  __m128 v13; // xmm2
  __m128 v14; // xmm6
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm5
  __m128 v20; // xmm3
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm0
  __m128 v24; // xmm2
  __m128 v25; // xmm2
  __m128 v26; // xmm2
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm6
  __m128 v31; // xmm4
  __m128 v32; // xmm1
  float v33; // xmm0_4
  unsigned int v34; // [rsp+50h] [rbp-9h]

  if ( a2 )
  {
    v6 = a3 - (_QWORD)a4;
    v7 = a5 - (_QWORD)a4;
    v8 = a2;
    do
    {
      v9 = (__m128)*(unsigned __int64 *)((char *)a4 + v7);
      result = *(unsigned int *)((char *)a4 + v7 + 8);
      v11 = _mm_movelh_ps((__m128)*a4, (__m128)*((unsigned int *)a4 + 2));
      v12 = _mm_movelh_ps(
              (__m128)*(unsigned __int64 *)((char *)a4 + v6),
              (__m128)*(unsigned int *)((char *)a4 + v6 + 8));
      v34 = *(_DWORD *)((char *)a4 + v7 + 8);
      v13 = _mm_mul_ps(v12, v11);
      v14 = _mm_shuffle_ps(v11, v11, 210);
      v15 = _mm_shuffle_ps(v13, v13, 153);
      v13.m128_f32[0] = (float)(v13.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
      v16 = _mm_shuffle_ps(v13, v13, 0);
      v17 = 0LL;
      v18 = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v12);
      v19 = _mm_shuffle_ps(v12, v12, 201);
      v17.m128_u64[0] = v18.m128_u64[0];
      v20 = _mm_sub_ps(v11, _mm_movelh_ps(v17, (__m128)_mm_shuffle_ps(v18, v18, 170).m128_u32[0]));
      a1->m128_i32[0] = v20.m128_i32[0];
      a1->m128_i32[1] = v20.m128_i32[1];
      a1->m128_i32[2] = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
      v21 = 0LL;
      v22 = _mm_mul_ps(*a1, *a1);
      v23 = _mm_shuffle_ps(v22, v22, 238);
      v24 = _mm_add_ps(v22, v23);
      v25 = _mm_shuffle_ps(v24, v24, 64);
      v26 = _mm_add_ps(v25, _mm_shuffle_ps(v23, v25, 240));
      v27 = _mm_shuffle_ps(v26, v26, 170);
      v28 = _mm_sqrt_ps(v27);
      v29 = _mm_cmpneq_ps(v27, (__m128)xmmword_1800F7F80);
      *a1 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(*a1, v28), _mm_cmpneq_ps((__m128)0LL, v28)), v29),
              _mm_andnot_ps(v29, (__m128)xmmword_1800F7FD0));
      v30 = _mm_and_ps(
              _mm_sub_ps(_mm_mul_ps(v14, v19), _mm_mul_ps(_mm_shuffle_ps(v14, v14, 210), _mm_shuffle_ps(v19, v19, 201))),
              (__m128)xmmword_1800F8040);
      v21.m128_u64[0] = v30.m128_u64[0];
      v31 = _mm_mul_ps(
              _mm_movelh_ps(v9, (__m128)v34),
              _mm_movelh_ps(v21, (__m128)_mm_shuffle_ps(v30, v30, 170).m128_u32[0]));
      v32 = _mm_shuffle_ps(v31, v31, 153);
      if ( (float)((float)(v31.m128_f32[0] + v32.m128_f32[0]) + _mm_shuffle_ps(v32, v32, 85).m128_f32[0]) >= 0.0 )
        v33 = 1.0;
      else
        v33 = -1.0;
      if ( a6 )
        v33 = -v33;
      a1->m128_f32[3] = v33;
      a4 = (unsigned __int64 *)((char *)a4 + 12);
      ++a1;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
