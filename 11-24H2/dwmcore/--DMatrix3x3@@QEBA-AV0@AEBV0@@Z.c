/*
 * XREFs of ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1801AEC30
 * Callers:
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180143A90 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D520 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801B2824 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall Matrix3x3::operator*(float *a1, float *a2, float *a3)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm14_4
  float v14; // xmm15_4
  float v15; // xmm13_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm5_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm6_4
  float v28; // xmm4_4
  float v29; // xmm6_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float *result; // rax

  v3 = a1[1];
  v4 = *a1;
  v5 = a1[2];
  v6 = a1[3];
  v7 = a3[2];
  v8 = a3[1];
  v9 = a3[5];
  v10 = a3[8];
  v11 = a3[4];
  v12 = *a3;
  v13 = a3[3];
  v14 = a3[6];
  v15 = a3[7];
  *a2 = (float)((float)(*a1 * *a3) + (float)(v3 * v13)) + (float)(v5 * v14);
  v16 = (float)(v8 * v4) + (float)(v11 * v3);
  v17 = v7 * v4;
  v18 = a1[4];
  v19 = v16 + (float)(v15 * v5);
  v20 = v10 * v5;
  v21 = a1[5];
  a2[1] = v19;
  v22 = v9 * v3;
  v23 = v6 * v8;
  a2[2] = (float)(v22 + v17) + v20;
  v24 = (float)(v6 * v12) + (float)(v18 * v13);
  v25 = v18;
  v26 = v21;
  v27 = (float)(v6 * v7) + (float)(v18 * v9);
  v28 = a1[7];
  v29 = v27 + (float)(v21 * v10);
  a2[3] = v24 + (float)(v21 * v14);
  v30 = a1[8];
  a2[5] = v29;
  v31 = a1[6];
  a2[4] = (float)(v23 + (float)(v25 * v11)) + (float)(v26 * v15);
  result = a2;
  a2[6] = (float)((float)(v31 * v12) + (float)(v28 * v13)) + (float)(v30 * v14);
  a2[8] = (float)((float)(v31 * v7) + (float)(v28 * v9)) + (float)(v30 * v10);
  a2[7] = (float)((float)(v31 * v8) + (float)(v28 * v11)) + (float)(v30 * v15);
  return result;
}
