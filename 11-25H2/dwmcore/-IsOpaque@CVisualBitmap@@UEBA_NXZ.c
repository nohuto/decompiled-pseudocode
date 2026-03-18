/*
 * XREFs of ?IsOpaque@CVisualBitmap@@UEBA_NXZ @ 0x180282670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CVisualBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18029DFE0 (-GetPixelFormatInfo@CVisualBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 */

bool __fastcall CVisualBitmap::IsOpaque(CVisualBitmap *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(_DWORD *)(CVisualBitmap::GetPixelFormatInfo(this, v2) + 4) == 3;
}
