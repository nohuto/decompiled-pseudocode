/*
 * XREFs of ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x180021DBC
 * Callers:
 *     ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z @ 0x18001E4B0 (-AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z.c)
 *     ?AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180020930 (-AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z @ 0x180021C9C (-EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z.c)
 *     ?Optimize@CTreeDirty@@QEAAXXZ @ 0x180021F70 (-Optimize@CTreeDirty@@QEAAXXZ.c)
 *     ?AddWorldBoundsToDirtyRegion@SubTreeContext@CPreComputeContext@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022A18 (-AddWorldBoundsToDirtyRegion@SubTreeContext@CPreComputeContext@@AEAAJPEAVCVisual@@AEBV-$TMilRect.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180032808 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039D50 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18003D370 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTreeDirty::SetFullDirty(CTreeDirty *this)
{
  __int64 v1; // rdx
  char v2; // r8
  __int64 v3; // rax
  __int128 v4; // xmm0

  if ( !*((_BYTE *)this + 2324) )
  {
    v1 = *((_QWORD *)this + 1);
    v2 = *((_BYTE *)this + 2325);
    *((_QWORD *)this + 1) = 0LL;
    *(_WORD *)((char *)this + 2327) = 0;
    v3 = *(_QWORD *)this;
    *((_WORD *)this + 1162) = 1;
    v4 = *(_OWORD *)(v3 + 2504);
    *((_BYTE *)this + 2325) = v2;
    *((_QWORD *)this + 1) = v1;
    *(_OWORD *)((char *)this + 2308) = v4;
  }
}
