/*
 * XREFs of ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1801049D8
 * Callers:
 *     ?OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180078398 (-OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801040AC (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1801042B8 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801044C0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1801888A8 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::UpdatePixelFormat(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  int v2; // eax
  CResource *v3; // r8
  enum DXGI_FORMAT v4; // edx

  if ( *((_BYTE *)this + 155) && *((_BYTE *)this + 408) && a2 == DXGI_FORMAT_B8G8R8X8_UNORM )
    a2 = DXGI_FORMAT_B8G8R8A8_UNORM;
  *((_DWORD *)this + 34) = a2;
  v2 = HasAlphaChannel(a2);
  *((_DWORD *)v3 + 35) = v2 != 0 ? 1 : 3;
  CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetPixelFormat(v3, v4);
}
