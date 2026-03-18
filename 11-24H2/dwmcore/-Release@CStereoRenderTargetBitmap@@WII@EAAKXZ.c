/*
 * XREFs of ?Release@CStereoRenderTargetBitmap@@WII@EAAKXZ @ 0x1802DAA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStereoRenderTargetBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 136));
}
