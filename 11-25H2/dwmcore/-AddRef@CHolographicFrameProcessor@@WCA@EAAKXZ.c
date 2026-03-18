/*
 * XREFs of ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1802DF100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::AddRef(__int64 a1)
{
  return CDDASwapChain::AddRef((CDDASwapChain *)(a1 - 32));
}
