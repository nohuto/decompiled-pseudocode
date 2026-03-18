/*
 * XREFs of ?Merge@CTreeDirty@@AEAAXII@Z @ 0x1802491C0
 * Callers:
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180096CC0 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?Optimize@CTreeDirty@@QEAAXXZ @ 0x180097060 (-Optimize@CTreeDirty@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180248DB0 (-_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?Merge@?$CRectangleCollection@$07@@QEAA_NII@Z @ 0x1802492E8 (-Merge@-$CRectangleCollection@$07@@QEAA_NII@Z.c)
 *     ?MergeDirtyRegionLists@CTreeDirty@@AEAAXII@Z @ 0x1802497DC (-MergeDirtyRegionLists@CTreeDirty@@AEAAXII@Z.c)
 */

void __fastcall CTreeDirty::Merge(CTreeDirty *this, unsigned int a2, unsigned int a3)
{
  _QWORD *v4; // r10

  v4 = (_QWORD *)((char *)this + 16 * a3 + 456);
  if ( (_QWORD *)*v4 != v4 )
  {
    **((_QWORD **)this + 2 * a2 + 58) = *v4;
    *(_QWORD *)(*v4 + 8LL) = *((_QWORD *)this + 2 * a2 + 58);
    **((_QWORD **)this + 2 * a3 + 58) = (char *)this + 16 * a2 + 456;
    *((_QWORD *)this + 2 * a2 + 58) = *((_QWORD *)this + 2 * a3 + 58);
    v4[1] = v4;
    *v4 = v4;
  }
  if ( (unsigned __int8)CRectangleCollection<8>::Merge((char *)this + 16, a2, a3) )
    CTreeDirty::MergeDirtyRegionLists(this, a3, *((_DWORD *)this + 4));
}
