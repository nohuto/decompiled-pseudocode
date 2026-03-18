/*
 * XREFs of ?GetPhysicalBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x18002C4A0
 * Callers:
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002C7D0 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x180067518 (-PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z.c)
 *     ?HasPendingScribble@CScribbleSwapChain@@UEBA_NXZ @ 0x1801BD2B0 (-HasPendingScribble@CScribbleSwapChain@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

struct ISwapChainBuffer *__fastcall CDDisplaySwapChain::GetPhysicalBuffer(CDDisplaySwapChain *this, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 55);
  if ( a2 >= (unsigned __int64)((*((_QWORD *)this + 56) - v2) >> 3) )
    return 0LL;
  else
    return *(struct ISwapChainBuffer **)(v2 + 8LL * a2);
}
