/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x180104FD0
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180104810 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?SetDirtyFromAccumulation@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@Z @ 0x180233C00 (-SetDirtyFromAccumulation@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@.c)
 * Callees:
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z @ 0x1800614F4 (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180105228 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  FastRegion::CRegion *v2; // [rsp+20h] [rbp-68h] BYREF
  int v3; // [rsp+28h] [rbp-60h] BYREF

  v3 = 0;
  v2 = (FastRegion::CRegion *)&v3;
  if ( (int)CRedirectedGDISurface::GetDirtyRegionFromAccum(
              *((CRedirectedGDISurface **)this + 16),
              (struct CRegion *)&v2) >= 0 )
  {
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v2, *((_BYTE *)this + 153));
    *((_BYTE *)this + 153) = 0;
  }
  FastRegion::CRegion::FreeMemory(&v2);
}
