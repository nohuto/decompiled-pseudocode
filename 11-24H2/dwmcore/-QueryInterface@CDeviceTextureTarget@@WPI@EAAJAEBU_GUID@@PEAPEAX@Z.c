/*
 * XREFs of ?QueryInterface@CDeviceTextureTarget@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDeviceTextureTarget::QueryInterface((CD2DBitmap *)(a1 - 248), a2, a3);
}
