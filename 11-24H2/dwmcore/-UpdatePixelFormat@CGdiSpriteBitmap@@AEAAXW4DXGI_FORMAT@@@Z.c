/*
 * XREFs of ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1800265E8
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180025CC4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180025ED0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800260D0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z @ 0x1801FC254 (-OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180025638 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::UpdatePixelFormat(CGdiSpriteBitmap *this, int a2)
{
  int v2; // eax
  CResource *v3; // r8

  if ( *((_BYTE *)this + 155) && *((_BYTE *)this + 408) && a2 == 88 )
    a2 = 87;
  *((_DWORD *)this + 34) = a2;
  v2 = HasAlphaChannel(a2);
  *((_DWORD *)v3 + 35) = v2 != 0 ? 1 : 3;
  CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetPixelFormat(v3);
}
