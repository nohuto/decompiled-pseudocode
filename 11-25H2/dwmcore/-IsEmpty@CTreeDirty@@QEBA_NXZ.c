/*
 * XREFs of ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x1800C4D58
 * Callers:
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z @ 0x180096BA0 (-EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180096CC0 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ @ 0x1800C4BD0 (-ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ.c)
 *     ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1802289A0 (-UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTreeDirty::IsEmpty(CTreeDirty *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 2324) )
    return *((_DWORD *)this + 4) == 0;
  return result;
}
