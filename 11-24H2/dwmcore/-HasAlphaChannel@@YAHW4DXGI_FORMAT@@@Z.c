/*
 * XREFs of ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180025638
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180024684 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1800265E8 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x18005D224 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18006D978 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18015A618 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x1802C8A94 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasAlphaChannel(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 > 61 )
  {
    v6 = a1 - 65;
    if ( v6 )
    {
      v7 = v6 - 22;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 0LL;
      }
    }
    return 1LL;
  }
  if ( a1 != 61 )
  {
    if ( a1 )
    {
      v1 = a1 - 2;
      if ( !v1 )
        return 1LL;
      v2 = v1 - 8;
      if ( !v2 )
        return 1LL;
      v4 = v2 - 1;
      if ( !v4 )
        return 1LL;
      v5 = v4 - 13;
      if ( !v5 || (unsigned int)(v5 - 4) < 2 )
        return 1LL;
    }
  }
  return 0LL;
}
