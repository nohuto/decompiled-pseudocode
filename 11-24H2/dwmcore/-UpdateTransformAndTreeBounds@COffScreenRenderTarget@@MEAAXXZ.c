/*
 * XREFs of ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x1801592B0
 * Callers:
 *     ?Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801591D0 (-Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM@@@Z @ 0x1802203E0 (-ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERREN.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180283380 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x1802836EC (-ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x180283F28 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 * Callees:
 *     ?CalcTransform@COffScreenRenderTarget@@IEAAXXZ @ 0x1801592D4 (-CalcTransform@COffScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::UpdateTransformAndTreeBounds(COffScreenRenderTarget *this)
{
  __int64 v2; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v3; // r8

  COffScreenRenderTarget::CalcTransform(this);
  COffScreenRenderTarget::CalcTreeBounds(this, v2, v3);
}
