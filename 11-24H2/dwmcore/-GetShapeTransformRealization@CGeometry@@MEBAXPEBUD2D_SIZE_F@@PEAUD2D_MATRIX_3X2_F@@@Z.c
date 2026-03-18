/*
 * XREFs of ?GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180142BA0
 * Callers:
 *     ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802A2640 (-GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180142C00 (-GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGeometry::GetShapeTransformRealization(
        CGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  CComponentTransform2D *v3; // rcx
  void (__fastcall *v4)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *); // rax
  struct D2D_SIZE_F v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( a2 )
    v5 = *a2;
  v3 = (CComponentTransform2D *)*((_QWORD *)this + 10);
  v4 = *(void (__fastcall **)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v3 + 208LL);
  if ( v4 == CComponentTransform2D::GetRealization )
    CComponentTransform2D::GetRealization(v3, &v5, a3);
  else
    v4(v3, &v5, a3);
}
