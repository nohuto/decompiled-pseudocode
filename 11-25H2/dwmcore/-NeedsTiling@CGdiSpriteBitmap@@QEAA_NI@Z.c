/*
 * XREFs of ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z @ 0x180103048
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x18029E26C (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x180102D80 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1801042B8 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 */

bool __fastcall CGdiSpriteBitmap::NeedsTiling(CGdiSpriteBitmap *this, unsigned int a2)
{
  if ( *((_DWORD *)this + 108) <= a2 && *((_DWORD *)this + 109) <= a2 )
    return 0;
  if ( *((_QWORD *)this + 57) != *((_QWORD *)this + 58) )
    return 1;
  if ( !*((_QWORD *)this + 45) || !CGdiSpriteBitmap::EnsureBitmapRealization(this) )
    return 0;
  return (int)CGdiSpriteBitmap::CreateSectionBitmapSubRects(this) >= 0;
}
