/*
 * XREFs of ?SetSurface@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z @ 0x1801A736C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180025ED0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z @ 0x1801A73E4 (-OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetSurface(
        CGdiSpriteBitmap *this,
        HLSURF a2)
{
  unsigned int v2; // edi
  int v6; // eax

  v2 = 0;
  if ( a2 != *((HLSURF *)this + 10) )
  {
    v6 = CGdiSpriteBitmap::OnSurfaceChanging(this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x496u, 0LL);
    }
    else
    {
      *((_QWORD *)this + 10) = a2;
      *((_BYTE *)this + 153) = 1;
      CGdiSpriteBitmap::EnsureBitmapRealization(this);
    }
  }
  return v2;
}
