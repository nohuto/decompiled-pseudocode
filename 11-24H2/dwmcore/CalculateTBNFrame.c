/*
 * XREFs of CalculateTBNFrame @ 0x18015B904
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x18015B56C (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall CalculateTBNFrame(_QWORD *a1, _QWORD *a2, float *a3, float *a4, __int64 a5)
{
  float *v5; // rax
  float v6; // xmm9_4
  float v7; // xmm12_4
  float *v8; // rax
  float v9; // xmm9_4
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm14_4
  float *v13; // rax
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm5_4
  float *result; // rax
  __m128 v18; // xmm10
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm7_4
  float v22; // xmm3_4
  __m128 v23; // xmm11
  __m128 v24; // xmm6
  float v25; // xmm8_4
  float v26; // xmm10_4
  float v27; // xmm9_4
  float v28; // xmm7_4
  float v29; // xmm3_4
  float v30; // xmm9_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm0_4
  float v34; // xmm9_4

  v5 = (float *)a1[1];
  v6 = *v5;
  v7 = v5[1];
  v8 = (float *)a1[2];
  v9 = v6 - *(float *)*a1;
  v10 = v7 - *(float *)(*a1 + 4LL);
  v11 = *v8;
  v12 = v8[1];
  v13 = (float *)a2[1];
  v14 = v11 - *(float *)*a1;
  v15 = v12 - *(float *)(*a1 + 4LL);
  v18 = (__m128)*(unsigned int *)v13;
  v16 = v13[1];
  result = (float *)a2[2];
  v18.m128_f32[0] = v18.m128_f32[0] - *(float *)*a2;
  v19 = v16 - *(float *)(*a2 + 4LL);
  v20 = *result - *(float *)*a2;
  v21 = result[1] - *(float *)(*a2 + 4LL);
  v22 = (float)(v21 * v18.m128_f32[0]) - (float)(v20 * v19);
  if ( COERCE_FLOAT(LODWORD(v22) & _xmm) >= 0.0000011920929 )
  {
    v24 = v18;
    v23 = v18;
    v23.m128_f32[0] = v18.m128_f32[0] * v15;
    v32 = v21 * v9;
    v33 = v20 * v9;
    v34 = v21 * v10;
    v24.m128_f32[0] = (float)((float)(v18.m128_f32[0] * v14) - v33) * (float)(1.0 / v22);
    v26 = (float)((float)(v18.m128_f32[0] * 0.0) - (float)(v20 * 0.0)) * (float)(1.0 / v22);
    v23.m128_f32[0] = (float)(v23.m128_f32[0] - (float)(v20 * v10)) * (float)(1.0 / v22);
    v25 = (float)(v32 - (float)(v19 * v14)) * (float)(1.0 / v22);
    v28 = (float)((float)(v21 * 0.0) - (float)(v19 * 0.0)) * (float)(1.0 / v22);
    v27 = (float)(v34 - (float)(v19 * v15)) * (float)(1.0 / v22);
  }
  else
  {
    v23 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v24 = 0LL;
    v25 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v26 = 0.0;
    v27 = 0.0;
    v28 = 0.0;
  }
  v29 = (float)((float)(*a3 * v25) + (float)(a3[1] * v27)) + (float)(a3[2] * v28);
  v30 = v27 - (float)(a3[1] * v29);
  v31 = v28 - (float)(a3[2] * v29);
  *a4 = v25 - (float)(*a3 * v29);
  a4[1] = v30;
  a4[2] = v31;
  *(_QWORD *)a5 = _mm_unpacklo_ps(v24, v23).m128_u64[0];
  *(float *)(a5 + 8) = v26;
  return result;
}
