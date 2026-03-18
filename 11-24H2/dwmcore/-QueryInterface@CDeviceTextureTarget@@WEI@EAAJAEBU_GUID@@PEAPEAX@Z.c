/*
 * XREFs of ?QueryInterface@CDeviceTextureTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CD6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDeviceTextureTarget::QueryInterface((CD2DBitmap *)(a1 - 72), a2, a3);
}
