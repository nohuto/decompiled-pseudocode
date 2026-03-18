/*
 * XREFs of ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z @ 0x1801D86F4
 * Callers:
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x1802929EC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180025ED0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801D8754 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::NeedsTiling(CGdiSpriteBitmap *this, unsigned int a2)
{
  unsigned int v4; // edx
  unsigned int v5; // r8d

  if ( *((_DWORD *)this + 108) <= a2 && *((_DWORD *)this + 109) <= a2 )
    return 0;
  if ( *((_QWORD *)this + 57) != *((_QWORD *)this + 58) )
    return 1;
  if ( !*((_QWORD *)this + 45) || !CGdiSpriteBitmap::EnsureBitmapRealization(this) )
    return 0;
  return (int)CGdiSpriteBitmap::CreateSectionBitmapSubRects(this, v4, v5) >= 0;
}
