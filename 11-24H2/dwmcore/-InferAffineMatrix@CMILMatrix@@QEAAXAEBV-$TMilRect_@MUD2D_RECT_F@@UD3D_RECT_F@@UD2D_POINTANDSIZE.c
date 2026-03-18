/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@@Z @ 0x1800620E8
 * Callers:
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180061F90 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUD.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm8_4
  float v4; // xmm9_4
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm15_4
  float v8; // xmm14_4
  float v9; // xmm0_4
  float v10; // xmm10_4
  float v11; // xmm7_4
  char v12; // al
  char result; // al
  float v14; // xmm2_4
  float v15; // xmm13_4
  float v16; // [rsp+B0h] [rbp+8h]
  float v17; // [rsp+B8h] [rbp+10h]
  float v18; // [rsp+C8h] [rbp+20h]

  v3 = a2[3];
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v17 = a3[1];
  v16 = a3[3];
  v7 = *a3;
  v8 = a3[2];
  v18 = a3[4];
  v9 = a3[5];
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v10 = (float)(v3 * v6) - (float)(v5 * v4);
  v11 = 1.0 / (float)((float)((float)((float)(v5 - v3) * v4) - (float)((float)(v6 - v4) * v5)) + v10);
  *(float *)(a1 + 4) = (float)((float)((float)((float)(v3 - v5) * v16) + (float)((float)(v5 - v3) * v17))
                             + (float)((float)(v5 - v5) * v9))
                     * v11;
  *(float *)a1 = (float)((float)((float)((float)(v3 - v5) * v8) + (float)((float)(v5 - v3) * v7))
                       + (float)((float)(v5 - v5) * v18))
               * v11;
  v12 = *(_BYTE *)(a1 + 65) & 0xE8;
  *(_BYTE *)(a1 + 64) = 8;
  result = v12 | 0x28;
  *(_BYTE *)(a1 + 65) = result;
  *(float *)(a1 + 16) = (float)((float)((float)((float)(v4 - v4) * v8) + (float)((float)(v4 - v6) * v7))
                              + (float)((float)(v6 - v4) * v18))
                      * v11;
  v14 = (float)(v5 * v4) - (float)(v3 * v4);
  v15 = (float)(v5 * v4) - (float)(v6 * v5);
  *(float *)(a1 + 20) = (float)((float)((float)((float)(v4 - v4) * v16) + (float)((float)(v4 - v6) * v17))
                              + (float)((float)(v6 - v4) * v9))
                      * v11;
  *(float *)(a1 + 52) = (float)((float)((float)(v14 * v16) + (float)(v10 * v17)) + (float)(v15 * v9)) * v11;
  *(float *)(a1 + 48) = (float)((float)((float)(v14 * v8) + (float)(v10 * v7)) + (float)(v15 * v18)) * v11;
  return result;
}
