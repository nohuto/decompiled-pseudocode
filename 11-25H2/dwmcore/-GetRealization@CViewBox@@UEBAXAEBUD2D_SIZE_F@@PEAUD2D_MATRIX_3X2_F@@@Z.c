/*
 * XREFs of ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802B1D90
 * Callers:
 *     ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802AC160 (-GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x1801DE9D0 (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CViewBox::GetRealization(
        const struct D2D_SIZE_F *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  int v5; // xmm2_4
  int v6; // xmm1_4
  float *v7; // r8
  __int64 v8; // xmm0_8
  struct D2D_RECT_F v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  float v11[6]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]

  if ( COERCE_FLOAT(LODWORD(this[29].width) & _xmm) < 0.0000011920929
    || COERCE_FLOAT(LODWORD(this[29].height) & _xmm) < 0.0000011920929 )
  {
    *(_QWORD *)&a3->m11 = 1065353216LL;
    a3->m21 = 0.0;
    *(_QWORD *)&a3->m[1][1] = 1065353216LL;
    a3->dy = 0.0;
  }
  else
  {
    StretchAlign::Arrange((StretchAlign *)&this[30], &v9, this + 29, a2, 0LL);
    v5 = LODWORD(this[28].width) ^ _xmm;
    v6 = LODWORD(this[28].height) ^ _xmm;
    v11[1] = 0.0;
    v11[2] = 0.0;
    v12 = _xmm;
    v14 = v6;
    v13 = v5;
    v11[4] = v9.left;
    v11[0] = (float)(v9.right - v9.left) / *v7;
    v11[5] = v9.top;
    v11[3] = (float)(v9.bottom - v9.top) / this[29].height;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v9,
      (const struct D2D1::Matrix3x2F *)&v12,
      (const struct D2D1::Matrix3x2F *)v11);
    v8 = v10;
    *(struct D2D_RECT_F *)&a3->m11 = v9;
    *(_QWORD *)&a3->m[2][0] = v8;
  }
}
