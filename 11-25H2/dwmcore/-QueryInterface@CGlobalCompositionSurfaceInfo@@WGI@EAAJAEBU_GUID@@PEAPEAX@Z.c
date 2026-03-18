/*
 * XREFs of ?QueryInterface@CGlobalCompositionSurfaceInfo@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029CB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CGDISectionBitmapRealization *)(a1 - 104), a2, a3);
}
