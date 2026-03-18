/*
 * XREFs of ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FCE2C
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x180033910 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801D30B0 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C6240 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x1800C6EF0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 */

char __fastcall CGeometry::TryGetAxisAlignedRectangle(CGeometry *a1, const struct D2D_SIZE_F *a2, _DWORD *a3)
{
  CRectanglesShape *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  a3[3] = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( (int)CGeometry::GetShapeData(a1, a2, &v5) >= 0
    && CShapePtr::IsAxisAlignedRectangle(&v5)
    && (int)CShapePtr::GetTightBounds(&v5, (__int64)a3, 0LL) >= 0 )
  {
    CShapePtr::~CShapePtr(&v5);
    return 1;
  }
  else
  {
    CShapePtr::~CShapePtr(&v5);
    return 0;
  }
}
