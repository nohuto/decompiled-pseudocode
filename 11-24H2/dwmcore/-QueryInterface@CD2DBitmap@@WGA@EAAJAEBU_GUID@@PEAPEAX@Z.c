/*
 * XREFs of ?QueryInterface@CD2DBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CD6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDeviceTextureTarget::QueryInterface((CD2DBitmap *)(a1 - 96), a2, a3);
}
