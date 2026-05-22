/*
 * XREFs of ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801BF9DC
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801BEF30 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C2820 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C31AC (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x18009D52C (_o_sqrtf_0.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1801C0CE0 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 */

__int128 *__fastcall MPCMath::OrientToGravity(__int128 *a1, float *a2, float a3)
{
  __m128 v6; // xmm6
  __int64 v7; // rcx
  float v8; // xmm5_4
  __m128 v9; // xmm4
  __m128 v10; // xmm4
  __m128 v11; // xmm3
  __m128 v12; // xmm1
  __m128 v13; // xmm4
  float v14; // xmm1_4
  __m128 v15; // xmm2
  __m128 v16; // xmm4
  __m128 v17; // xmm1
  __m128 v18; // xmm4
  __m128 v19; // xmm2
  __m128 v20; // xmm4
  __m128 v21; // xmm4
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm4
  float v25; // xmm7_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm8_4
  float v29; // xmm6_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  __m128 v32; // xmm3
  __m128 v33; // xmm3
  __m128 v34; // xmm2
  __m128 v35; // xmm1
  __m128 v36; // xmm3
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 *result; // rax
  float v42; // [rsp+28h] [rbp-89h]
  float v43; // [rsp+40h] [rbp-71h]
  _BYTE v44[64]; // [rsp+48h] [rbp-69h]
  _OWORD v45[8]; // [rsp+88h] [rbp-29h] BYREF

  *a1 = *(_OWORD *)a2;
  a1[1] = *((_OWORD *)a2 + 1);
  a1[2] = *((_OWORD *)a2 + 2);
  a1[3] = *((_OWORD *)a2 + 3);
  v6 = (__m128)*((unsigned int *)a2 + 9);
  v43 = a2[10];
  v8 = o_sqrtf_0((float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) + (float)(a2[8] * a2[8])) + (float)(v43 * v43));
  v9 = 0LL;
  v9.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)a2 + 8), v6).m128_u64[0];
  v10 = _mm_movelh_ps(v9, (__m128)LODWORD(v43));
  v11 = _mm_mul_ps(v10, v10);
  v12 = _mm_shuffle_ps(v11, v11, 102);
  v11.m128_f32[0] = (float)(v11.m128_f32[0] + v12.m128_f32[0]) + _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  v13 = _mm_div_ps(v10, _mm_sqrt_ps(_mm_shuffle_ps(v11, v11, 0)));
  v42 = v13.m128_f32[0];
  v15 = (__m128)v13.m128_u32[0];
  v14 = v13.m128_f32[1];
  v15.m128_f32[0] = v13.m128_f32[0] * 0.0;
  v16 = _mm_shuffle_ps(v13, v13, 170);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v15.m128_f32[0] + v14) + (float)(v16.m128_f32[0] * 0.0)) & _xmm) <= a3 )
  {
    v15.m128_f32[0] = v15.m128_f32[0] - (float)(v16.m128_f32[0] * 0.0);
    v31 = v14 * 0.0;
    v32 = 0LL;
    v16.m128_f32[0] = v16.m128_f32[0] - v31;
    v32.m128_u64[0] = _mm_unpacklo_ps(v16, v15).m128_u64[0];
    v33 = _mm_movelh_ps(v32, (__m128)COERCE_UNSIGNED_INT(v31 - v42));
    v34 = _mm_mul_ps(v33, v33);
    v35 = _mm_shuffle_ps(v34, v34, 102);
    v34.m128_f32[0] = (float)(v34.m128_f32[0] + v35.m128_f32[0]) + _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
    v36 = _mm_div_ps(v33, _mm_sqrt_ps(_mm_shuffle_ps(v34, v34, 0)));
    v28 = v36.m128_f32[0];
    v30 = v36.m128_f32[1];
    v29 = _mm_shuffle_ps(v36, v36, 170).m128_f32[0];
    v25 = (float)(v36.m128_f32[1] * 0.0) - v29;
    v26 = (float)(v29 * 0.0) - (float)(v36.m128_f32[0] * 0.0);
    v27 = v28 - (float)(v36.m128_f32[1] * 0.0);
  }
  else
  {
    v17 = (__m128)*((unsigned int *)a2 + 1);
    v18 = (__m128)*((unsigned int *)a2 + 2);
    v17.m128_f32[0] = v17.m128_f32[0] * 0.0;
    v19 = v17;
    v19.m128_f32[0] = v17.m128_f32[0] - v18.m128_f32[0];
    v18.m128_f32[0] = (float)(v18.m128_f32[0] * 0.0) - (float)(*a2 * 0.0);
    v19.m128_u64[0] = _mm_unpacklo_ps(v19, v18).m128_u64[0];
    v20 = 0LL;
    v20.m128_u64[0] = v19.m128_u64[0];
    v21 = _mm_movelh_ps(v20, (__m128)COERCE_UNSIGNED_INT(*a2 - v17.m128_f32[0]));
    v22 = _mm_mul_ps(v21, v21);
    v23 = _mm_shuffle_ps(v22, v22, 102);
    v22.m128_f32[0] = (float)(v22.m128_f32[0] + v23.m128_f32[0]) + _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
    v24 = _mm_div_ps(v21, _mm_sqrt_ps(_mm_shuffle_ps(v22, v22, 0)));
    v25 = v24.m128_f32[0];
    v26 = v24.m128_f32[1];
    v22.m128_i32[0] = v24.m128_i32[0];
    v27 = _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
    v28 = v27 - (float)(v24.m128_f32[1] * 0.0);
    v29 = (float)(v24.m128_f32[1] * 0.0) - v25;
    v30 = (float)(v22.m128_f32[0] * 0.0) - (float)(v27 * 0.0);
  }
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 6) = 0;
  *((float *)a1 + 1) = v30;
  *(_OWORD *)&v44[4] = 0LL;
  *((_DWORD *)a1 + 5) = 1065353216;
  *(_OWORD *)&v44[24] = 0LL;
  *(_DWORD *)&v44[60] = 1065353216;
  *(_OWORD *)&v44[44] = 0LL;
  *((float *)a1 + 2) = v29;
  *((float *)a1 + 8) = v25;
  *((float *)a1 + 9) = v26;
  *((float *)a1 + 10) = v27;
  *(float *)a1 = v28;
  v37 = a1[2];
  v38 = a1[3];
  *(float *)v44 = v8;
  v45[0] = *(_OWORD *)v44;
  *(float *)&v44[20] = v8;
  v45[1] = *(_OWORD *)&v44[16];
  *(float *)&v44[40] = v8;
  v45[2] = *(_OWORD *)&v44[32];
  v39 = a1[1];
  v45[3] = *(_OWORD *)&v44[48];
  v40 = *a1;
  *(double *)&v40 = DirectX::XMMatrixMultiply(v7, v45);
  *a1 = v40;
  result = a1;
  a1[1] = v39;
  a1[2] = v37;
  a1[3] = v38;
  *((float *)a1 + 12) = a2[12];
  *((float *)a1 + 13) = a2[13];
  *((float *)a1 + 14) = a2[14];
  return result;
}
