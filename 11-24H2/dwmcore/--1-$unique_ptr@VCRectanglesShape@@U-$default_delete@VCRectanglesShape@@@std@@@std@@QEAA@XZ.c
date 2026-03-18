/*
 * XREFs of ??1?$unique_ptr@VCRectanglesShape@@U?$default_delete@VCRectanglesShape@@@std@@@std@@QEAA@XZ @ 0x18021C4E4
 * Callers:
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180258EF0 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 * Callees:
 *     <none>
 */

CRectanglesShape *__fastcall std::unique_ptr<CRectanglesShape>::~unique_ptr<CRectanglesShape>(
        CRectanglesShape **a1,
        __int64 a2,
        __int64 a3)
{
  CRectanglesShape *v3; // rcx
  CRectanglesShape *result; // rax

  v3 = *a1;
  if ( v3 )
    return CRectanglesShape::`scalar deleting destructor'(v3, 1, a3);
  return result;
}
