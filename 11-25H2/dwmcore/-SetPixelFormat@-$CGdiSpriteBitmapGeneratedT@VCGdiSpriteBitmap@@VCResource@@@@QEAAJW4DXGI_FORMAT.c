/*
 * XREFs of ?SetPixelFormat@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJW4DXGI_FORMAT@@@Z @ 0x18007832C
 * Callers:
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1801049D8 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180078398 (-OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetPixelFormat(
        CResource *this,
        enum DXGI_FORMAT a2)
{
  unsigned int v2; // ebx
  int v6; // eax

  v2 = 0;
  if ( a2 != *((_DWORD *)this + 18) )
  {
    v6 = CGdiSpriteBitmap::OnPixelFormatChanging(this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x44Cu, 0LL);
    }
    else
    {
      *((_DWORD *)this + 18) = a2;
      CResource::OnPropertyChanged(this);
    }
  }
  return v2;
}
