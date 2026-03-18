/*
 * XREFs of ?AddRef@CDDASwapChain@@UEAAKXZ @ 0x18022AC90
 * Callers:
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x180262690 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1802DF100 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1802DF110 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::AddRef(CDDASwapChain *this)
{
  return CMILRefCountImpl::AddReference((CDDASwapChain *)((char *)this + 16));
}
