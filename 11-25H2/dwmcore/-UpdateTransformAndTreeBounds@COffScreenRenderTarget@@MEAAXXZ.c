/*
 * XREFs of ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x1800C4400
 * Callers:
 *     ?Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C4320 (-Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM@@@Z @ 0x18022B450 (-ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERREN.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18028E930 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x18028EC9C (-ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x18028F4C8 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 * Callees:
 *     ?CalcTransform@COffScreenRenderTarget@@IEAAXXZ @ 0x1800C4424 (-CalcTransform@COffScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::UpdateTransformAndTreeBounds(COffScreenRenderTarget *this)
{
  COffScreenRenderTarget::CalcTransform(this);
  COffScreenRenderTarget::CalcTreeBounds(this);
}
