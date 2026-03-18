/*
 * XREFs of ?QueryInterface@CDeviceTextureTarget@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDeviceTextureTarget::QueryInterface((CD2DBitmap *)(a1 - 264), a2, a3);
}
