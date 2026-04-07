/*
 * XREFs of ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180020F48
 * Callers:
 *     ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180006390 (-CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18005A3D0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18005A6C0 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18010EE0C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18010F618 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall GetPixelFormatSize(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  if ( a1 <= 61 )
  {
    if ( a1 != 61 )
    {
      v5 = a1 - 2;
      if ( !v5 )
        return 0x80;
      v6 = v5 - 8;
      if ( !v6 )
        return 64;
      v7 = v6 - 1;
      if ( !v7 )
        return 64;
      v8 = v7 - 13;
      if ( !v8 )
        return 32;
      v9 = v8 - 4;
      if ( !v9 )
        return 32;
      if ( v9 == 21 )
        return 16;
      return 0;
    }
    return 8;
  }
  v1 = a1 - 65;
  if ( !v1 )
    return 8;
  v2 = v1 - 22;
  if ( !v2 )
    return 32;
  v3 = v2 - 1;
  if ( !v3 )
    return 32;
  v10 = v3 - 15;
  if ( v10 && (unsigned int)(v10 - 3) >= 2 )
    return 0;
  return 12;
}
