/*
 * XREFs of ?QueryInterface@CCompressedSourceBitmap@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCompoundBitmapLock::QueryInterface((CCompoundBitmapLock *)(a1 - 248), a2, a3);
}
