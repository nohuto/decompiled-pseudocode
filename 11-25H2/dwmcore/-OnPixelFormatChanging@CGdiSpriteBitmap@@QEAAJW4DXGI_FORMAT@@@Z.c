/*
 * XREFs of ?OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180078398
 * Callers:
 *     ?SetPixelFormat@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJW4DXGI_FORMAT@@@Z @ 0x18007832C (-SetPixelFormat@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJW4DXGI_FORMAT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801040AC (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1801049D8 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::OnPixelFormatChanging(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  unsigned int v2; // edi
  int Bitmap; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 16) )
  {
    if ( *((_DWORD *)this + 34) != a2 )
    {
      *((_BYTE *)this + 153) = 1;
      CGdiSpriteBitmap::UpdatePixelFormat(this, a2);
      Bitmap = CGdiSpriteBitmap::CreateBitmap(this, (enum DXGI_FORMAT)*((_DWORD *)this + 34));
      v2 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bitmap, 0x48u, 0LL);
    }
  }
  return v2;
}
