/*
 * XREFs of ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18014FD54
 * Callers:
 *     ?Copy@?$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180288F0C (-Copy@-$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180150F64 (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1801D7374 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

void __fastcall D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  const struct D2D_MATRIX_3X2_F *v8; // rdx
  D2DMatrixHelper *v9; // rcx
  float *v10; // r8
  float *v11; // r9
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm2_4
  float v16; // xmm5_4
  int v17; // xmm3_4
  int v18; // xmm4_4
  struct D2D_MATRIX_3X2_F *v19; // [rsp+20h] [rbp-28h]

  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(this, a2, a3, a4, v19) )
  {
    D2DMatrixHelper::GetScaleDimensions(v9, v8, v10, v11);
    v12 = *((float *)this + 1);
    v13 = 1.0 / a2->m11;
    v14 = 1.0 / *a3;
    v15 = *((float *)this + 2);
    v16 = *((float *)this + 3);
    v17 = *((_DWORD *)this + 4);
    v18 = *((_DWORD *)this + 5);
    *a4 = v13 * *(float *)this;
    a4[1] = v12 * v13;
    a4[2] = v15 * v14;
    a4[3] = v16 * v14;
    *((_DWORD *)a4 + 4) = v17;
    *((_DWORD *)a4 + 5) = v18;
  }
}
