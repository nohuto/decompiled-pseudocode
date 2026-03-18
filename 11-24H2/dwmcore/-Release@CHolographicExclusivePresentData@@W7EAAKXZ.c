/*
 * XREFs of ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1802D6700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::Release(__int64 a1)
{
  return CHolographicFrameProcessor::Release((CHolographicFrameProcessor *)(a1 - 8));
}
