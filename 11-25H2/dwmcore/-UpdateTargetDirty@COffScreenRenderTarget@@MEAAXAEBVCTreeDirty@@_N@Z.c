/*
 * XREFs of ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1802289A0
 * Callers:
 *     ?UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x18024F660 (-UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x1800C4D58 (-IsEmpty@CTreeDirty@@QEBA_NXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x1800C68D4 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::UpdateTargetDirty(COffScreenRenderTarget *this, const struct CTreeDirty *a2)
{
  __int64 v2; // r8

  if ( *((_DWORD *)this + 44) )
  {
    CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 320, (__int64)a2);
  }
  else if ( !CTreeDirty::IsEmpty(a2) )
  {
    CTargetDirtyBase<8>::SetFullDirty(v2 + 320);
  }
}
