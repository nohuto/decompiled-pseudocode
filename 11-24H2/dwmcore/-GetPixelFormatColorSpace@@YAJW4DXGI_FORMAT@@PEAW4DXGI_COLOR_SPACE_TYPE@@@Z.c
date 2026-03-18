/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18005D350
 * Callers:
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x18005D224 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C7C60 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x1802C8A94 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, enum DXGI_COLOR_SPACE_TYPE *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  v2 = 0;
  if ( a1 > 65 )
  {
    v11 = a1 - 87;
    if ( !v11 )
      goto LABEL_6;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_6;
    v13 = v12 - 3;
    if ( !v13 )
      goto LABEL_6;
    v14 = v13 - 12;
    if ( !v14 )
      goto LABEL_6;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_6;
    v16 = v15 - 2;
    if ( !v16 )
      goto LABEL_6;
    v10 = v16 == 1;
  }
  else
  {
    if ( a1 == 65 )
      goto LABEL_6;
    v3 = a1 - 2;
    if ( !v3 || (v4 = v3 - 8) == 0 )
    {
      *a2 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
      return v2;
    }
    v5 = v4 - 1;
    if ( !v5 )
      goto LABEL_6;
    v7 = v5 - 13;
    if ( !v7 )
      goto LABEL_6;
    v8 = v7 - 4;
    if ( !v8 )
      goto LABEL_6;
    v9 = v8 - 21;
    if ( !v9 )
      goto LABEL_6;
    v10 = v9 == 12;
  }
  if ( !v10 )
    return (unsigned int)-2003292344;
LABEL_6:
  *a2 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  return v2;
}
