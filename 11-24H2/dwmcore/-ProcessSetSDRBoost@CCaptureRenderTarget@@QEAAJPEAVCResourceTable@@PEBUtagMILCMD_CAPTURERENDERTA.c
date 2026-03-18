/*
 * XREFs of ?ProcessSetSDRBoost@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST@@@Z @ 0x180282A2C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801EC948 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetSDRBoost(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST *a3)
{
  float v3; // xmm1_4

  v3 = *((float *)a3 + 2);
  if ( *((float *)this + 736) != v3 )
  {
    *((float *)this + 736) = v3;
    CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts((enum DXGI_COLOR_SPACE_TYPE *)this);
  }
  return 0LL;
}
