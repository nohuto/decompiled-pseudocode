/*
 * XREFs of ?QueryInterface@CWICBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E00C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CGDISectionBitmapRealization *)(a1 - 88), a2, a3);
}
