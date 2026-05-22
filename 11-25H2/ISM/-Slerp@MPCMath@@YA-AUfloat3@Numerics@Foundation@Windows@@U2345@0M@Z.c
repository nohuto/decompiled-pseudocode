/*
 * XREFs of ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x1800C92D4
 * Callers:
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C8B88 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     acosf @ 0x18009D2C0 (acosf.c)
 *     cosf @ 0x18009D2FC (cosf.c)
 *     _o_sinf_0 @ 0x18009D344 (_o_sinf_0.c)
 */

float *__fastcall MPCMath::Slerp(float *a1, float *a2, float *a3, float a4)
{
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm11_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float *result; // rax
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm9_4
  float v21; // xmm1_4

  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  v9 = FLOAT_N1_0;
  v10 = (float)((float)(*a3 * *a2) + (float)(v7 * a2[1])) + (float)(v8 * a2[2]);
  if ( v10 >= -1.0 )
    v9 = (float)((float)(*a3 * *a2) + (float)(a3[1] * a2[1])) + (float)(a3[2] * a2[2]);
  v11 = FLOAT_1_0;
  if ( v10 <= 1.0 )
    v11 = v9;
  v12 = acosf(v11) * a4;
  v13 = o_sinf_0(v12);
  v14 = cosf(v12);
  v15 = v14 * a2[2];
  result = a1;
  v17 = a2[1] * v11;
  v18 = v14 * *a2;
  v19 = v14 * a2[1];
  v20 = (float)((float)(v6 - (float)(*a2 * v11)) * v13) + v18;
  v21 = a2[2] * v11;
  *a1 = v20;
  a1[1] = (float)((float)(v7 - v17) * v13) + v19;
  a1[2] = (float)((float)(v8 - v21) * v13) + v15;
  return result;
}
