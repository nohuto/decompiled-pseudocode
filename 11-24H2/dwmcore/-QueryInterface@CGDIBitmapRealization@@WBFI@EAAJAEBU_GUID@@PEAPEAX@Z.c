/*
 * XREFs of ?QueryInterface@CGDIBitmapRealization@@WBFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D8100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDIBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CGDISectionBitmapRealization *)(a1 - 344), a2, a3);
}
