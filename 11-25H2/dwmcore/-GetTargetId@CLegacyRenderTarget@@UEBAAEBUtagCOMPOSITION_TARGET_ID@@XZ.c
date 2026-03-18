/*
 * XREFs of ?GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1801C0B90
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801BF400 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1801BF7C0 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281DC0 (-GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281DD0 (-GetTargetId@CLegacyRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CLegacyRenderTarget::GetTargetId(CLegacyRenderTarget *this)
{
  return (CLegacyRenderTarget *)((char *)this + 33416);
}
