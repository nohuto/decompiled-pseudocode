/*
 * XREFs of ?IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z @ 0x180197440
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180196DBC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180126910 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x18025B5E0 (-Is2DAffine@Matrix3x3@@QEBA_NXZ.c)
 */

bool __fastcall CEdgeFlagsMap::CRectangleMapStrategy::IsCompatibleTransform(const struct Matrix3x3 *a1)
{
  const struct D2D_MATRIX_3X2_F *v1; // rdx
  _DWORD *v3; // rcx
  int v4; // xmm1_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  _DWORD v9[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    goto LABEL_2;
  if ( Matrix3x3::Is2DAffine(a1) )
  {
    v4 = v3[1];
    v9[0] = *v3;
    v5 = v3[3];
    v9[1] = v4;
    v6 = v3[4];
    v9[2] = v5;
    v7 = v3[6];
    v9[3] = v6;
    v8 = v3[7];
    v9[4] = v7;
    v9[5] = v8;
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v9, v1) )
LABEL_2:
      LOBYTE(v1) = 1;
  }
  return (char)v1;
}
