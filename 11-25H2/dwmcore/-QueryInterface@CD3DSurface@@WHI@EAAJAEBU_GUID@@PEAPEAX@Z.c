/*
 * XREFs of ?QueryInterface@CD3DSurface@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D1FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDeviceTextureTarget::QueryInterface((CD2DBitmap *)(a1 - 120), a2, a3);
}
