/*
 * XREFs of ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1802034D0
 * Callers:
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039C40 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x180146C68 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x180146C9C (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetAccumShape(__int64 a1, __int64 a2, char a3)
{
  FastRegion::CRegion **v3; // rdi
  _DWORD **v4; // r14
  int v9; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CShape *v11; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  v3 = (FastRegion::CRegion **)(a1 + 248);
  *(_BYTE *)(a2 + 8) = 0;
  v4 = (_DWORD **)(a1 + 176);
  if ( *(_BYTE *)(a1 + 154) )
  {
    CRegionShape::BuildFromCRegion(v3, (FastRegion::CRegion **)(a1 + 176));
    *(_BYTE *)(a1 + 154) = 0;
  }
  if ( a3 )
  {
    v11 = 0LL;
    v9 = CShape::CopyShape((CShape *)v3, 0LL, &v11);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT(v9, retaddr);
    CShapePtr::~CShapePtr((CRectanglesShape **)a2);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
    **v4 = 0;
    CRegionShape::SetEmpty((CRegionShape *)v3);
  }
  else
  {
    CShapePtr::~CShapePtr((CRectanglesShape **)a2);
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
