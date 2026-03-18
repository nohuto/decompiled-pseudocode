/*
 * XREFs of ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180024684
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18002432C (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802DCD78 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800246E8 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180025638 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

char __fastcall IsValidPixelFormatInfo(enum DXGI_FORMAT *a1)
{
  enum DXGI_FORMAT *v1; // rdx
  int v2; // eax
  _DWORD *v3; // rdx
  char v4; // cl
  unsigned int v6; // eax

  if ( !(unsigned int)IsValidPixelFormat(*a1) )
    return 0;
  v2 = HasAlphaChannel(*v1);
  v4 = 1;
  if ( v2 )
  {
    if ( *v3 == 24 && v3[1] == 1 )
      return 0;
  }
  else if ( (unsigned int)(v3[1] - 1) <= 1 )
  {
    return 0;
  }
  v6 = v3[2];
  if ( v6 >= 0x12 || v6 == 4 )
    return 0;
  return v4;
}
