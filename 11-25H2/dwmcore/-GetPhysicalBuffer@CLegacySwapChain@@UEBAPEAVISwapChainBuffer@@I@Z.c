/*
 * XREFs of ?GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x180066430
 * Callers:
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180065B10 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802D3930 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct ISwapChainBuffer *__fastcall CLegacySwapChain::GetPhysicalBuffer(CLegacySwapChain *this, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 44);
  if ( a2 >= (unsigned __int64)((*((_QWORD *)this + 45) - v2) >> 3) )
    return 0LL;
  else
    return *(struct ISwapChainBuffer **)(v2 + 8LL * a2);
}
