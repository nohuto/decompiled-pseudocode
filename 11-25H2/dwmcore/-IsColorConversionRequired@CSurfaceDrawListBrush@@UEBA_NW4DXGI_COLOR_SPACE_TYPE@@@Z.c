/*
 * XREFs of ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180290E00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801FB9F0 (-IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

bool __fastcall CSurfaceDrawListBrush::IsColorConversionRequired(CSurfaceDrawListBrush *this, __int64 a2)
{
  return !CDrawListBitmap::IsMatchingColorSpace((CSurfaceDrawListBrush *)((char *)this + 56), a2);
}
