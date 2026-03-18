/*
 * XREFs of ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18006D5B4
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x18006D538 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 * Callees:
 *     <none>
 */

void __fastcall MILMatrix3x2::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  double v3; // xmm3_8
  float v4; // xmm0_4
  float v5; // xmm0_4
  double v6; // xmm3_8
  float v7; // xmm0_4

  *(_QWORD *)(a1 + 12) = 1065353216LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = 1065353216LL;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = (a3[2] - *a3) / (a2[2] - *a2);
  v4 = v3;
  *(float *)a1 = v4;
  v5 = *a3 - *a2 * v3;
  *(float *)(a1 + 16) = v5;
  v6 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v7 = v6;
  *(float *)(a1 + 12) = v7;
  *(float *)(a1 + 20) = a3[1] - a2[1] * v6;
}
