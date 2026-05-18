/*
 * XREFs of sub_1800D44E8 @ 0x1800D44E8
 * Callers:
 *     sub_1800D2AFC @ 0x1800D2AFC (sub_1800D2AFC.c)
 *     sub_1800D2CD0 @ 0x1800D2CD0 (sub_1800D2CD0.c)
 *     sub_1800D2E98 @ 0x1800D2E98 (sub_1800D2E98.c)
 *     sub_1800D30A4 @ 0x1800D30A4 (sub_1800D30A4.c)
 *     sub_1800D34A8 @ 0x1800D34A8 (sub_1800D34A8.c)
 *     sub_1800D35B8 @ 0x1800D35B8 (sub_1800D35B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D44E8(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r10
  __int64 result; // rax
  __int64 v10; // r8
  float v11; // xmm7_4
  __int64 v12; // r9
  __m128 v13; // xmm3
  float v14; // xmm7_4
  __m128 v15; // xmm2
  float v16; // xmm6_4
  float v17; // xmm12_4
  float v18; // xmm13_4
  float v19; // xmm8_4
  float v20; // xmm10_4
  float v21; // xmm9_4
  float v22; // xmm11_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  __m128 v26; // xmm4
  float v27; // xmm0_4
  __m128 v28; // xmm5
  __m128 v29; // xmm7
  __m128 v30; // xmm8
  __m128 v31; // xmm0
  __m128 v33; // xmm3
  __m128 v34; // xmm3
  __m128 v35; // xmm2
  __m128 v36; // xmm2
  __m128 v37; // xmm2
  __m128 v38; // xmm3
  __m128 v39; // xmm3
  __m128 v40; // xmm2
  __m128 v41; // xmm2
  __m128 v42; // xmm2
  __int64 v43; // [rsp+8h] [rbp-79h]
  float v44; // [rsp+10h] [rbp-71h]
  float v45[4]; // [rsp+18h] [rbp-69h]
  __int64 v46; // [rsp+28h] [rbp-59h]
  float v47; // [rsp+30h] [rbp-51h]

  v8 = a3;
  result = a5;
  v10 = a4;
  v43 = *(_QWORD *)(a1 + 12 * v8);
  v13 = (__m128)*(unsigned int *)(a2 + 8LL * a5 + 4);
  v11 = *(float *)(a2 + 8LL * a4 + 4);
  v12 = 3LL * a4;
  v13.m128_f32[0] = v13.m128_f32[0] - *(float *)(a2 + 8 * v8 + 4);
  v15 = (__m128)*(unsigned int *)(a2 + 8 * v10);
  v14 = v11 - *(float *)(a2 + 8 * v8 + 4);
  v15.m128_f32[0] = v15.m128_f32[0] - *(float *)(a2 + 8 * v8);
  v16 = *(float *)(a2 + 8LL * a5) - *(float *)(a2 + 8 * v8);
  v17 = *(float *)(a1 + 4 * v12 + 8) - *(float *)(a1 + 12 * v8 + 8);
  v18 = *(float *)(a1 + 12LL * a5 + 8) - *(float *)(a1 + 12 * v8 + 8);
  *(_QWORD *)v45 = *(_QWORD *)(a1 + 4 * v12);
  v19 = v45[0] - *(float *)&v43;
  v20 = v45[1] - *((float *)&v43 + 1);
  v46 = *(_QWORD *)(a1 + 12LL * a5);
  v21 = *(float *)&v46 - *(float *)&v43;
  v22 = *((float *)&v46 + 1) - *((float *)&v43 + 1);
  v23 = (float)(v13.m128_f32[0] * v15.m128_f32[0]) - (float)(v14 * v16);
  if ( v23 != 0.0 )
  {
    v28 = v13;
    v24 = 1.0 / v23;
    v26 = v13;
    v28.m128_f32[0] = v13.m128_f32[0] * v20;
    v26.m128_f32[0] = (float)(v13.m128_f32[0] * v19) - (float)(v14 * v21);
    v25 = (float)(v13.m128_f32[0] * v17) - (float)(v14 * v18);
    v26.m128_f32[0] = v26.m128_f32[0] * v24;
    v28.m128_f32[0] = v28.m128_f32[0] - (float)(v14 * v22);
    v29 = v15;
    v27 = v16 * v19;
    v30 = v15;
    v28.m128_f32[0] = v28.m128_f32[0] * v24;
    v44 = v25 * v24;
    v29.m128_f32[0] = (float)((float)(v15.m128_f32[0] * v21) - v27) * v24;
    v47 = (float)((float)(v15.m128_f32[0] * v18) - (float)(v16 * v17)) * v24;
    v30.m128_f32[0] = (float)((float)(v15.m128_f32[0] * v22) - (float)(v16 * v20)) * v24;
    if ( a6 )
    {
      v31 = _mm_sub_ps(
              (__m128)0LL,
              _mm_movelh_ps((__m128)__PAIR64__(v28.m128_u32[0], v26.m128_u32[0]), (__m128)LODWORD(v44)));
      v26 = (__m128)v31.m128_u32[0];
      v28 = (__m128)v31.m128_u32[1];
      LODWORD(v44) = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
    }
    v33 = 0LL;
    v33.m128_u64[0] = _mm_unpacklo_ps(v26, v28).m128_u64[0];
    v34 = _mm_movelh_ps(v33, (__m128)LODWORD(v44));
    v35 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a7 + 12 * v8), (__m128)*(unsigned int *)(a7 + 12 * v8 + 8)),
            v34);
    *(_QWORD *)(a7 + 12 * v8) = v35.m128_u64[0];
    *(_DWORD *)(a7 + 12 * v8 + 8) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
    v36 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a7 + 4 * v12), (__m128)*(unsigned int *)(a7 + 4 * v12 + 8)),
            v34);
    *(_QWORD *)(a7 + 4 * v12) = v36.m128_u64[0];
    *(_DWORD *)(a7 + 4 * v12 + 8) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
    v37 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a7 + 12LL * a5), (__m128)*(unsigned int *)(a7 + 12LL * a5 + 8)),
            v34);
    v38 = 0LL;
    v38.m128_u64[0] = _mm_unpacklo_ps(v29, v30).m128_u64[0];
    v39 = _mm_movelh_ps(v38, (__m128)LODWORD(v47));
    *(_QWORD *)(a7 + 12LL * a5) = v37.m128_u64[0];
    *(_DWORD *)(a7 + 12LL * a5 + 8) = _mm_shuffle_ps(v37, v37, 170).m128_u32[0];
    result = a8;
    v40 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a8 + 12 * v8), (__m128)*(unsigned int *)(a8 + 12 * v8 + 8)),
            v39);
    *(_QWORD *)(a8 + 12 * v8) = v40.m128_u64[0];
    *(_DWORD *)(a8 + 12 * v8 + 8) = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
    v41 = _mm_add_ps(
            _mm_movelh_ps(
              (__m128)*(unsigned __int64 *)(result + 4 * v12),
              (__m128)*(unsigned int *)(result + 4 * v12 + 8)),
            v39);
    *(_QWORD *)(a8 + 4 * v12) = v41.m128_u64[0];
    *(_DWORD *)(a8 + 4 * v12 + 8) = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
    v42 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a8 + 12LL * a5), (__m128)*(unsigned int *)(a8 + 12LL * a5 + 8)),
            v39);
    *(_QWORD *)(a8 + 12LL * a5) = v42.m128_u64[0];
    *(_DWORD *)(a8 + 12LL * a5 + 8) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
  }
  return result;
}
