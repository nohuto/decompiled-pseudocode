/*
 * XREFs of ?GetDirtyRegion@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x18004B820
 * Callers:
 *     ?GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x18004BAB0 (-GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 * Callees:
 *     ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x180173340 (-TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CSurfaceBrush::GetDirtyRegion(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CRectanglesShape *a3)
{
  __int64 v3; // rax
  const struct CRectanglesShape *v4; // r9
  bool (*v6)(CPrimitiveGroupRenderStrategy *__hidden, const struct CSurfaceBrush *, const struct D2D_SIZE_F *, struct CRectanglesShape *); // rax
  const struct CSurfaceBrush *v9; // rdx
  CPrimitiveGroupRenderStrategy *v10; // rcx

  v3 = *((_QWORD *)this + 3);
  if ( !v3 )
    return 0;
  if ( *((_QWORD *)this - 2) )
  {
    if ( *((_QWORD *)this - 2) != v3 )
      return 0;
    v6 = *(bool (**)(CPrimitiveGroupRenderStrategy *__hidden, const struct CSurfaceBrush *, const struct D2D_SIZE_F *, struct CRectanglesShape *))(**((_QWORD **)this + 4) + 64LL);
    v9 = (CSurfaceBrush *)((char *)this - 104);
    v10 = (CPrimitiveGroupRenderStrategy *)*((_QWORD *)this + 4);
    if ( v6 == CPrimitiveGroupRenderStrategy::GetDirtyRegion )
      return CPrimitiveGroupRenderStrategy::GetDirtyRegion(v10, v9, a2, a3);
    else
      return ((__int64 (__fastcall *)(CPrimitiveGroupRenderStrategy *, const struct CSurfaceBrush *, const struct D2D_SIZE_F *, struct CRectanglesShape *))v6)(
               v10,
               v9,
               a2,
               a3);
  }
  else
  {
    v4 = (const struct CRectanglesShape *)*((_QWORD *)this + 11);
    if ( !v4 )
      return 0;
    return CSurfaceBrush::TransformDirtyRegion((CSurfaceBrush *)((char *)this - 104), 0LL, a2, v4, a3);
  }
}
