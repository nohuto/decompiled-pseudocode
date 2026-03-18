/*
 * XREFs of ?UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x18024F660
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1802289A0 (-UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IndirectSwapchainDirty@@@details@wil@@QEAA_NXZ @ 0x18024F6BC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IndirectSwapchainDirty@@@details@.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::UpdateTargetDirty(
        CIndirectSwapchainRenderTarget *this,
        const struct CTreeDirty *a2)
{
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_IndirectSwapchainDirty>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_IndirectSwapchainDirty>::GetImpl'::`2'::impl) )
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 320);
  else
    COffScreenRenderTarget::UpdateTargetDirty(this, a2);
}
