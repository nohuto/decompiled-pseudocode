/*
 * XREFs of ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x1801B13E0
 * Callers:
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B0F38 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B10F4 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1284 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1802242A0 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::unique_ptr<CShape>::reset(CRectanglesShape **a1, CRectanglesShape *a2)
{
  CRectanglesShape *v2; // rbx
  CRectanglesShape *(__fastcall *v3)(CRectanglesShape *, char, __int64); // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    v3 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v2;
    if ( v3 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(v2);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v2);
    }
    else
    {
      ((void (__fastcall *)(CRectanglesShape *, __int64))v3)(v2, 1LL);
    }
  }
}
