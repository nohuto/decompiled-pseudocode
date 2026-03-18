/*
 * XREFs of ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x180159B40
 * Callers:
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z @ 0x180021C9C (-EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18003D370 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x180158B90 (-UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ @ 0x1801599D0 (-ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ.c)
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
