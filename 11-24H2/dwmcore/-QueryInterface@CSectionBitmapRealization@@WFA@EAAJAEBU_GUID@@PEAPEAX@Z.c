/*
 * XREFs of ?QueryInterface@CSectionBitmapRealization@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CGDISectionBitmapRealization *)(a1 - 80), a2, a3);
}
