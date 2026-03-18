/*
 * XREFs of ?Release@CStereoRenderTargetBitmap@@WFA@EAAKXZ @ 0x1802E0150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStereoRenderTargetBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 80));
}
