/*
 * XREFs of ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1802DF110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::AddRef(__int64 a1)
{
  return CDDASwapChain::AddRef((CDDASwapChain *)(a1 - 40));
}
