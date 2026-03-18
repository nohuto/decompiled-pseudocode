/*
 * XREFs of ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802AC160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800169A0 (-GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802B1D90 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

void __fastcall CProxyGeometry::GetShapeTransformRealization(
        CProxyGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  bool v5; // zf
  __int128 v7; // xmm1
  CViewBox *v8; // rcx
  __int64 v9; // xmm0_8
  struct D2D_SIZE_F v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  struct D2D_MATRIX_3X2_F v13; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_MATRIX_3X2_F v14; // [rsp+58h] [rbp-28h] BYREF

  *(_QWORD *)&v13.m[2][0] = 0LL;
  v5 = *((_QWORD *)this + 10) == 0LL;
  v7 = _xmm;
  *(_OWORD *)&v13.m11 = _xmm;
  if ( !v5 )
  {
    CGeometry::GetShapeTransformRealization(this, a2, &v13);
    v7 = *(_OWORD *)&v13.m11;
  }
  v8 = (CViewBox *)*((_QWORD *)this + 18);
  if ( v8 )
  {
    v10 = 0LL;
    memset(&v14, 0, sizeof(v14));
    if ( a2 )
      v10 = *a2;
    CViewBox::GetRealization(v8, &v10, &v14);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v11,
      (const struct D2D1::Matrix3x2F *)&v14,
      (const struct D2D1::Matrix3x2F *)&v13);
    v9 = v12;
    *(_OWORD *)&a3->m11 = v11;
  }
  else
  {
    v9 = *(_QWORD *)&v13.m[2][0];
    *(_OWORD *)&a3->m11 = v7;
  }
  *(_QWORD *)&a3->m[2][0] = v9;
}
