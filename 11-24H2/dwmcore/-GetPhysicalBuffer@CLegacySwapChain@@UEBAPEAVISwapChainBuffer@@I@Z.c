/*
 * XREFs of ?GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x18002D0F0
 * Callers:
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002C7D0 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C7654 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802CA6B0 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
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
