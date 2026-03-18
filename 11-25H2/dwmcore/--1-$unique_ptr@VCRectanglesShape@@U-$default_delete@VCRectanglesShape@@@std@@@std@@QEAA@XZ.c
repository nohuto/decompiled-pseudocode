/*
 * XREFs of ??1?$unique_ptr@VCRectanglesShape@@U?$default_delete@VCRectanglesShape@@@std@@@std@@QEAA@XZ @ 0x180227EE4
 * Callers:
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180263E30 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 * Callees:
 *     <none>
 */

CRectanglesShape *__fastcall std::unique_ptr<CRectanglesShape>::~unique_ptr<CRectanglesShape>(CRectanglesShape **a1)
{
  CRectanglesShape *v1; // rcx
  CRectanglesShape *result; // rax

  v1 = *a1;
  if ( v1 )
    return CRectanglesShape::`scalar deleting destructor'(v1, 1);
  return result;
}
