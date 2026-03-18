/*
 * XREFs of ?GetFlipExSurfaceClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801E66E8
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016810 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CWindowNode::GetFlipExSurfaceClipShape(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( *(_QWORD *)(a1 + 808) )
  {
    CGeometry::GetShapeData(*(CGeometry **)(a1 + 808), (const struct D2D_SIZE_F *)(a1 + 144), (CRectanglesShape **)a2);
  }
  else
  {
    CShapePtr::~CShapePtr((CRectanglesShape **)a2);
    *(_BYTE *)(a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  return a2;
}
