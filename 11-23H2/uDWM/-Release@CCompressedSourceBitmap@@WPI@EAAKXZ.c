/*
 * XREFs of ?Release@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x180066960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::Release(__int64 a1)
{
  return CWICBitmapWrapper::Release((CWICBitmapWrapper *)(a1 - 248));
}
