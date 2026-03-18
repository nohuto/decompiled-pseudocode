/*
 * XREFs of ?AddRef@CDDASwapChain@@UEAAKXZ @ 0x18021F760
 * Callers:
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x180257540 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1802D5E60 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1802D5E70 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::AddRef(CDDASwapChain *this)
{
  return CMILRefCountImpl::AddReference((CDDASwapChain *)((char *)this + 16));
}
