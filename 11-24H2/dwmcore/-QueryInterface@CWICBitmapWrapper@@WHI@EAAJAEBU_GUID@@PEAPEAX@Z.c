/*
 * XREFs of ?QueryInterface@CWICBitmapWrapper@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180255900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWICBitmapWrapper::QueryInterface((CSystemMemoryBitmap *)(a1 - 120), a2, a3);
}
