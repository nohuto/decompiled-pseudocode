/*
 * XREFs of ?FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z @ 0x1801F6638
 * Callers:
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014CBC0 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801C9A10 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ID2D1Geometry::FillContainsPoint(
        ID2D1Geometry *this,
        struct D2D_POINT_2F a2,
        const struct D2D_MATRIX_3X2_F *a3,
        int *a4)
{
  return (*(__int64 (__fastcall **)(ID2D1Geometry *, struct D2D_POINT_2F, _QWORD))(*(_QWORD *)this + 56LL))(
           this,
           a2,
           0LL);
}
