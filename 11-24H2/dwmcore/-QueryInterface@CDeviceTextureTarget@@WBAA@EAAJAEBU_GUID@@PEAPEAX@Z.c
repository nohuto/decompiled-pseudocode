/*
 * XREFs of ?QueryInterface@CDeviceTextureTarget@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDCC0
 * Callers:
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x180055BA0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDeviceTextureTarget::QueryInterface((CD2DBitmap *)(a1 - 256), a2, a3);
}
