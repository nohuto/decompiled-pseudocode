/*
 * XREFs of ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18005E150
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058AB0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18005F120 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x1801E9740 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CRegionGeometry::GetShapeDataCore(
        CRegionGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v4; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8

  v4 = 0;
  v6 = operator new(0x60uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x60uLL);
    *v7 = &CRegionShape::`vftable';
    v7[2] = v7 + 3;
    *((_DWORD *)v7 + 6) = 0;
    v7[11] = 0LL;
    v8 = *((_QWORD *)this + 17);
    v9 = (*((_QWORD *)this + 18) - v8) >> 4;
    if ( v9 )
      CRegionShape::BuildFromRects(v7, v8, v9);
    else
      CRegionShape::SetEmpty((CRegionShape *)v7);
    CShapePtr::~CShapePtr(a3);
    *(_QWORD *)a3 = v7;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v4;
}
