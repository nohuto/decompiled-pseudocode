/*
 * XREFs of ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180142C00
 * Callers:
 *     ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x180135494 (-PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180141D90 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180142BA0 (-GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  float v5; // xmm10_4
  float v6; // xmm9_4
  float v7; // xmm1_4
  float v8; // xmm11_4
  __m128 v9; // xmm5
  __m128 v10; // xmm6
  float v11; // xmm12_4
  float v12; // xmm14_4
  float v13; // xmm13_4
  float v14; // xmm0_4
  FLOAT v15; // xmm10_4
  FLOAT v16; // xmm9_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  D2D1_MATRIX_3X2_F matrix; // [rsp+20h] [rbp-B8h] BYREF

  v5 = COERCE_FLOAT(*((_DWORD *)this + 40) ^ _xmm) * a2->width;
  v6 = COERCE_FLOAT(*((_DWORD *)this + 41) ^ _xmm) * a2->height;
  *(_QWORD *)&a3->m11 = 1065353216LL;
  a3->m21 = 0.0;
  a3->m22 = 1.0;
  a3->dx = v5;
  a3->dy = v6;
  v7 = *((float *)this + 46);
  v8 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v9 = (__m128)*((unsigned int *)this + 42);
  v10 = (__m128)*((unsigned int *)this + 43);
  if ( v7 != 1.0
    || (v11 = 0.0,
        v12 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
        v13 = 0.0,
        *((float *)this + 47) != 1.0) )
  {
    v8 = v7 + 0.0;
    v23 = v5;
    v24 = *((float *)this + 47);
    v12 = v24 + 0.0;
    a3->m11 = v7 + 0.0;
    v13 = (float)(v7 * 0.0) + 0.0;
    v11 = (float)(v24 * 0.0) + 0.0;
    v5 = (float)((float)(v5 * v7) + (float)(v6 * 0.0)) + (float)(v9.m128_f32[0] - (float)(v9.m128_f32[0] * v7));
    a3->m12 = v11;
    a3->m21 = v13;
    a3->m22 = v24 + 0.0;
    v6 = (float)((float)(v6 * v24) + (float)(v23 * 0.0)) + (float)(v10.m128_f32[0] - (float)(v10.m128_f32[0] * v24));
    a3->dx = v5;
    a3->dy = v6;
  }
  v14 = *((float *)this + 48);
  if ( v14 != 0.0 )
  {
    D2D1MakeRotateMatrix(v14 * 57.295776, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v9, v10), &matrix);
    v8 = (float)(matrix.m21 * a3->m12) + (float)(a3->m11 * matrix.m11);
    v11 = (float)(matrix.m12 * a3->m11) + (float)(matrix.m22 * a3->m12);
    v13 = (float)(matrix.m21 * a3->m22) + (float)(a3->m21 * matrix.m11);
    v12 = (float)(matrix.m12 * a3->m21) + (float)(matrix.m22 * a3->m22);
    v6 = (float)((float)(matrix.m12 * a3->dx) + (float)(matrix.m22 * a3->dy)) + matrix.dy;
    v5 = (float)((float)(matrix.m21 * a3->dy) + (float)(a3->dx * matrix.m11)) + matrix.dx;
    a3->m11 = v8;
    a3->m12 = v11;
    a3->m21 = v13;
    a3->m22 = v12;
    a3->dx = v5;
    a3->dy = v6;
  }
  v15 = v5 + *((float *)this + 44);
  a3->dx = v15;
  v16 = v6 + *((float *)this + 45);
  a3->dy = v16;
  v17 = *((float *)this + 51);
  v18 = *((float *)this + 49);
  v19 = *((float *)this + 52);
  v20 = *((float *)this + 50);
  v21 = *((float *)this + 53);
  v22 = *((float *)this + 54);
  a3->m11 = (float)(v17 * v11) + (float)(v18 * v8);
  a3->m12 = (float)(v19 * v11) + (float)(v20 * v8);
  a3->m21 = (float)(v17 * v12) + (float)(v18 * v13);
  a3->m22 = (float)(v19 * v12) + (float)(v20 * v13);
  a3->dx = (float)((float)(v18 * v15) + (float)(v17 * v16)) + v21;
  a3->dy = (float)((float)(v20 * v15) + (float)(v19 * v16)) + v22;
}
