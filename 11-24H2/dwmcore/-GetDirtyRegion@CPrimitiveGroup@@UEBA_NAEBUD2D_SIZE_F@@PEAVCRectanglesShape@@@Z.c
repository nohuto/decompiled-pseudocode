/*
 * XREFs of ?GetDirtyRegion@CPrimitiveGroup@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1801738E0
 * Callers:
 *     ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180173764 (-GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD.c)
 * Callees:
 *     ?Copy@CRectanglesShape@@QEAAXAEBV1@@Z @ 0x180173910 (-Copy@CRectanglesShape@@QEAAXAEBV1@@Z.c)
 */

char __fastcall CPrimitiveGroup::GetDirtyRegion(
        CPrimitiveGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CRectanglesShape *a3)
{
  const struct CRectanglesShape *v3; // rdx

  v3 = (const struct CRectanglesShape *)*((_QWORD *)this + 59);
  if ( !v3 )
    return 0;
  CRectanglesShape::Copy(a3, v3);
  return 1;
}
