/*
 * XREFs of ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1802DF9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::Release(__int64 a1)
{
  return CHolographicFrameProcessor::Release((CHolographicFrameProcessor *)(a1 - 8));
}
