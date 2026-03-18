/*
 * XREFs of ?GetDirtyRegion@CGenericInk@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1801730D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CRectanglesShape@@QEAAXAEBV1@@Z @ 0x180173910 (-Copy@CRectanglesShape@@QEAAXAEBV1@@Z.c)
 */

char __fastcall CGenericInk::GetDirtyRegion(
        CGenericInk *this,
        const struct D2D_SIZE_F *a2,
        struct CRectanglesShape *a3)
{
  const struct CRectanglesShape *v3; // rdx

  v3 = (const struct CRectanglesShape *)*((_QWORD *)this + 18);
  if ( !v3 )
    return 0;
  CRectanglesShape::Copy(a3, v3);
  return 1;
}
