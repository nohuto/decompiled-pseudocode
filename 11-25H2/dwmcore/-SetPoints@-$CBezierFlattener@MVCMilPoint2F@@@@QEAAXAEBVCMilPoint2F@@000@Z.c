/*
 * XREFs of ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x1801C47E4
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18005D8D8 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x1801C4518 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall CBezierFlattener<float,CMilPoint2F>::SetPoints(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  float v5; // xmm3_4
  float v6; // xmm5_4
  float v7; // xmm2_4
  __m128 v8; // xmm4
  float v9; // xmm0_4
  float v10; // xmm7_4
  __m128 result; // xmm0
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  __m128d v19; // xmm0
  __int64 v20; // [rsp+30h] [rbp+8h]

  v20 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  *(_QWORD *)(a1 + 48) = v20;
  v5 = *(float *)(a1 + 24);
  *(float *)(a1 + 60) = *(float *)(a1 + 28) - *((float *)&v20 + 1);
  *(float *)(a1 + 56) = v5 - *(float *)&v20;
  v6 = *(float *)(a1 + 16);
  v7 = *(float *)(a1 + 8);
  v8 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v9 = (float)((float)(*(float *)(a1 + 12) - (float)(*(float *)(a1 + 20) + *(float *)(a1 + 20))) + *(float *)(a1 + 28))
     * 6.0;
  *(float *)(a1 + 64) = (float)((float)(v7 - (float)(v6 + v6)) + v5) * 6.0;
  *(float *)(a1 + 68) = v9;
  v10 = (float)(*((float *)&v20 + 1) - (float)(*(float *)(a1 + 12) + *(float *)(a1 + 12))) + *(float *)(a1 + 20);
  *(_DWORD *)(a1 + 84) = 0;
  *(float *)(a1 + 72) = (float)((float)(*(float *)&v20 - (float)(v7 + v7)) + v6) * 6.0;
  *(_DWORD *)(a1 + 88) = 1065353216;
  *(_DWORD *)(a1 + 80) = 1;
  *(float *)(a1 + 76) = v10 * 6.0;
  while ( 1 )
  {
    if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(a1 + 64) & _xmm), COERCE_FLOAT(*(_DWORD *)(a1 + 68) & _xmm)) <= *(float *)(a1 + 32) )
    {
      result = _mm_and_ps((__m128)*(unsigned int *)(a1 + 76), (__m128)(unsigned int)_xmm);
      if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(a1 + 72) & _xmm), result.m128_f32[0]) <= *(float *)(a1 + 32) )
        break;
    }
    result = (__m128)_mm_cvtps_pd(v8);
    if ( *(double *)result.m128_u64 <= 0.001 )
      break;
    v12 = *(float *)(a1 + 64) + *(float *)(a1 + 72);
    *(float *)(a1 + 64) = v12;
    v13 = *(float *)(a1 + 76) + *(float *)(a1 + 68);
    v14 = v12 * 0.125;
    *(float *)(a1 + 64) = v14;
    *(float *)(a1 + 68) = v13 * 0.125;
    v15 = *(float *)(a1 + 60);
    v16 = *(float *)(a1 + 56) - v14;
    *(float *)(a1 + 56) = v16;
    v17 = v15 - *(float *)(a1 + 68);
    *(float *)(a1 + 56) = v16 * 0.5;
    *(float *)(a1 + 60) = v17 * 0.5;
    v18 = *(float *)(a1 + 72) * 0.25;
    *(float *)(a1 + 76) = *(float *)(a1 + 76) * 0.25;
    *(float *)(a1 + 72) = v18;
    v19 = _mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 88));
    *(_DWORD *)(a1 + 80) *= 2;
    v19.m128d_f64[0] = v19.m128d_f64[0] * 0.5;
    v8 = _mm_cvtpd_ps(v19);
    *(_DWORD *)(a1 + 88) = v8.m128_i32[0];
  }
  return result;
}
