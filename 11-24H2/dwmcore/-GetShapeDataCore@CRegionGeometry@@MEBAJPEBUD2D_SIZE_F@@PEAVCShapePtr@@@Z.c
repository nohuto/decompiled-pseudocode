/*
 * XREFs of ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801E9D10
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C42D0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x180146C68 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CRegionGeometry::GetShapeDataCore(
        CRegionGeometry *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  unsigned int v4; // esi
  void *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8

  v4 = 0;
  v6 = operator new(0x60uLL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x60uLL);
    *(_QWORD *)v7 = &CRegionShape::`vftable';
    *(_QWORD *)(v7 + 16) = v7 + 24;
    *(_DWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 88) = 0LL;
    v8 = *((_QWORD *)this + 17);
    v9 = (*((_QWORD *)this + 18) - v8) >> 4;
    if ( v9 )
      CRegionShape::BuildFromRects(v7, v8, v9);
    else
      CRegionShape::SetEmpty((CRegionShape *)v7);
    CShapePtr::~CShapePtr(a3);
    *a3 = (CRectanglesShape *)v7;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v4;
}
