/*
 * XREFs of ?GetProjectionMatrix@ShadowHelpers@@YA?AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z @ 0x1801EA330
 * Callers:
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1801E9854 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ShadowHelpers::GetProjectionMatrix(__int64 a1, float *a2, float *a3, char a4)
{
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  __int64 result; // rax
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm11_4
  float v18; // xmm0_4
  float v19; // xmm12_4
  float v20; // xmm0_4
  float v21; // xmm10_4

  v4 = *a3;
  v5 = a3[1];
  v6 = a3[2];
  v7 = *a2;
  v8 = a2[1];
  v9 = a2[2];
  if ( a4 )
    v10 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  else
    v10 = 0.0;
  v11 = a3[3] * v10;
  result = a1;
  *(float *)(a1 + 8) = v9 * v4;
  *(float *)(a1 + 36) = v8 * v6;
  LODWORD(v13) = COERCE_UNSIGNED_INT((float)((float)((float)(v7 * v4) + (float)(v8 * v5)) + (float)(v9 * v6)) + v11) ^ _xmm;
  v14 = (float)(v8 * v5) + v13;
  v15 = (float)(v9 * v6) + v13;
  *(float *)a1 = (float)(v7 * v4) + v13;
  v16 = v8;
  v17 = v8 * a3[3];
  *(float *)(a1 + 4) = v16 * v4;
  *(float *)(a1 + 12) = v4 * v10;
  *(float *)(a1 + 16) = v7 * v5;
  v18 = v9;
  v19 = v9 * a3[3];
  *(float *)(a1 + 24) = v18 * v5;
  v20 = v7;
  v21 = v7 * a3[3];
  *(float *)(a1 + 28) = v5 * v10;
  *(float *)(a1 + 44) = v6 * v10;
  *(float *)(a1 + 48) = v21;
  *(float *)(a1 + 52) = v17;
  *(float *)(a1 + 56) = v19;
  *(float *)(a1 + 20) = v14;
  *(float *)(a1 + 32) = v20 * v6;
  *(float *)(a1 + 40) = v15;
  *(float *)(a1 + 60) = v11 + v13;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
