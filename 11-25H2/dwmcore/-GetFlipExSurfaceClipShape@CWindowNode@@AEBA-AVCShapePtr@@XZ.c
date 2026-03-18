/*
 * XREFs of ?GetFlipExSurfaceClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F3698
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E4C0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 */

struct CShapePtr *__fastcall CWindowNode::GetFlipExSurfaceClipShape(__int64 a1, struct CShapePtr *a2)
{
  *(_QWORD *)a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  if ( *(_QWORD *)(a1 + 800) )
  {
    CGeometry::GetShapeData(*(CGeometry **)(a1 + 800), (const struct D2D_SIZE_F *)(a1 + 144), a2);
  }
  else
  {
    CShapePtr::~CShapePtr((CRectanglesShape **)a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  return a2;
}
