/*
 * XREFs of ?IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801EF750
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800D85C0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180285860 (-IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802DC000 (-IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawListBitmap::IsMatchingColorSpace(CDrawListBitmap *this, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, a2);
  else
    return 0;
}
