/*
 * XREFs of ?QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6E70
 * Callers:
 *     ?GetPixelColor@CGdiSpriteBitmap@@QEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x18005AFF0 (-GetPixelColor@CGdiSpriteBitmap@@QEBA-AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDISectionBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CGDISectionBitmapRealization *)(a1 - 392), a2, a3);
}
