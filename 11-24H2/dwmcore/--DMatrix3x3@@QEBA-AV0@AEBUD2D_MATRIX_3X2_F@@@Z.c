/*
 * XREFs of ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18004AA90
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000A7D0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180033CD4 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800498DC (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x18004A12C (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18004A6B4 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x18004AD84 (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006B114 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     <none>
 */

float *__fastcall Matrix3x3::operator*(float *a1, float *a2, float *a3)
{
  float v3; // xmm5_4
  float *result; // rax
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm2_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm5_4

  v3 = a1[2];
  result = a2;
  v5 = a1[1];
  v6 = *a1;
  v7 = a3[1];
  v8 = a3[3];
  v9 = *a3;
  v10 = *a1 * *a3;
  v11 = a3[5];
  v12 = a3[2];
  a2[2] = v3;
  v13 = a3[4];
  v14 = v10 + (float)(v5 * v12);
  v15 = v8 * v5;
  v16 = a1[5];
  v17 = v14 + (float)(v3 * v13);
  a2[5] = v16;
  v18 = v11 * v3;
  v19 = a1[3];
  *a2 = v17;
  v20 = (float)(v7 * v6) + v15;
  v21 = a1[4] * v12;
  v22 = a1[4] * v8;
  v23 = v20 + v18;
  v24 = v16 * v13;
  a2[1] = v23;
  v25 = (float)(v19 * v9) + v21;
  v26 = v16;
  v27 = a1[8];
  v28 = (float)(v19 * v7) + v22;
  v29 = a1[7];
  a2[8] = v27;
  a2[3] = v25 + v24;
  a2[4] = v28 + (float)(v26 * v11);
  v30 = a1[6] * v7;
  a2[6] = (float)((float)(a1[6] * v9) + (float)(v29 * v12)) + (float)(v27 * v13);
  a2[7] = (float)(v30 + (float)(v29 * v8)) + (float)(v27 * v11);
  return result;
}
