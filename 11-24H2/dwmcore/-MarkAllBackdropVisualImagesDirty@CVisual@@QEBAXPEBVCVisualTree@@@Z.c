/*
 * XREFs of ?MarkAllBackdropVisualImagesDirty@CVisual@@QEBAXPEBVCVisualTree@@@Z @ 0x1801FFDC8
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180032808 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180230200 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18000C2D4 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

void __fastcall CVisual::MarkAllBackdropVisualImagesDirty(CVisual *this, const struct CVisualTree *a2)
{
  __int64 **TreeData; // rax
  CCachedVisualImage **v3; // rbx
  CCachedVisualImage **v4; // rdi

  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
  {
    v3 = (CCachedVisualImage **)TreeData[18];
    v4 = (CCachedVisualImage **)TreeData[19];
    while ( v3 != v4 )
      CCachedVisualImage::MarkAllTargetsDirty(*v3++);
  }
}
