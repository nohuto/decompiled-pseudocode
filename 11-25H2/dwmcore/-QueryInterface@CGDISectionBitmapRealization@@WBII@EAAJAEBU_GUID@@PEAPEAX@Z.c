/*
 * XREFs of ?QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E0110
 * Callers:
 *     ?GetPixelColor@CGdiSpriteBitmap@@QEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x180040B18 (-GetPixelColor@CGdiSpriteBitmap@@QEBA-AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDISectionBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CGDISectionBitmapRealization *)(a1 - 392), a2, a3);
}
