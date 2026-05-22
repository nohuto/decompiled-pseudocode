/*
 * XREFs of ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800C942C
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C88A0 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C8B88 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x1800C8F30 (-ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z.c)
 * Callees:
 *     acosf @ 0x18009D2C0 (acosf.c)
 *     _o_asinf_0 @ 0x18009D2CC (_o_asinf_0.c)
 */

char __fastcall RayStabilizer::TransformRay(_DWORD *a1, __int64 a2)
{
  int v2; // xmm3_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm2_4
  float v8; // xmm0_4
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  __m128 v12; // xmm3
  float v13; // xmm0_4
  unsigned int v14; // [rsp+28h] [rbp-20h]

  v2 = a1[5];
  if ( COERCE_FLOAT(v2 & _xmm) >= 0.99000001 )
    return 0;
  v5 = a1[1];
  v6 = a1[2];
  *(_DWORD *)a2 = *a1;
  *(_DWORD *)(a2 + 4) = v5;
  *(_DWORD *)(a2 + 8) = v6;
  v7 = a1[4];
  *(_DWORD *)(a2 + 12) = a1[3];
  *(_DWORD *)(a2 + 16) = v7;
  *(_DWORD *)(a2 + 20) = v2;
  v8 = o_asinf_0(*(float *)(a2 + 16));
  v14 = *(_DWORD *)(a2 + 20);
  *(float *)(a2 + 24) = (float)(v8 * 180.0) / 3.142;
  v9 = _mm_movelh_ps((__m128)(unsigned int)*(_QWORD *)(a2 + 12), (__m128)v14);
  v10 = _mm_mul_ps(v9, v9);
  v11 = _mm_shuffle_ps(v10, v10, 102);
  v10.m128_f32[0] = (float)(v10.m128_f32[0] + v11.m128_f32[0]) + _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  v12 = _mm_div_ps(v9, _mm_sqrt_ps(_mm_shuffle_ps(v10, v10, 0)));
  v13 = (float)(acosf(
                  (float)((float)(v12.m128_f32[1] * -0.0) + (float)(v12.m128_f32[0] * -0.0))
                - _mm_shuffle_ps(v12, v12, 170).m128_f32[0])
              * 180.0)
      / 3.142;
  *(float *)(a2 + 28) = v13;
  if ( v12.m128_f32[0] > 0.0 )
    *(float *)(a2 + 28) = v13 * -1.0;
  return 1;
}
