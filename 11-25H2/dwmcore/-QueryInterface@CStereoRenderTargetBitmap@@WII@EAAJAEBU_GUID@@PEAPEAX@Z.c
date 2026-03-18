/*
 * XREFs of ?QueryInterface@CStereoRenderTargetBitmap@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E3CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStereoRenderTargetBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CGDISectionBitmapRealization *)(a1 - 136), a2, a3);
}
