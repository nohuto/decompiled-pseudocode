/*
 * XREFs of ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x180257540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::AddRef(__int64 a1)
{
  return CDDASwapChain::AddRef((CDDASwapChain *)(a1 - 8));
}
