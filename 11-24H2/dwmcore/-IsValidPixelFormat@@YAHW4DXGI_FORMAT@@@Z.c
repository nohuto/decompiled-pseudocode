/*
 * XREFs of ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800246E8
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180024684 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180158D2C (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18015A618 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidPixelFormat(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v14; // ecx

  if ( a1 <= 65 )
  {
    if ( a1 == 65 )
      return 1LL;
    v7 = a1 - 2;
    if ( !v7 )
      return 1LL;
    v8 = v7 - 8;
    if ( !v8 )
      return 1LL;
    v9 = v8 - 1;
    if ( !v9 )
      return 1LL;
    v10 = v9 - 13;
    if ( !v10 )
      return 1LL;
    v11 = v10 - 4;
    if ( !v11 )
      return 1LL;
    v12 = v11 - 21;
    if ( !v12 )
      return 1LL;
    return v12 == 12;
  }
  else
  {
    v1 = a1 - 87;
    if ( !v1 )
      return 1LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 3;
    if ( !v3 )
      return 1LL;
    v4 = v3 - 12;
    if ( !v4 )
      return 1LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 1LL;
    v14 = v5 - 2;
    if ( !v14 )
      return 1LL;
    return v14 == 1;
  }
}
