/*
 * XREFs of ?OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z @ 0x1801A73E4
 * Callers:
 *     ?SetSurface@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z @ 0x1801A736C (-SetSurface@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1801A747C (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 */

__int64 __fastcall CGdiSpriteBitmap::OnSurfaceChanging(CGdiSpriteBitmap *this, HLSURF a2)
{
  CGlobalComposition *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx

  if ( *((_QWORD *)this + 16) || !a2 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x3Bu, 0LL);
  }
  else
  {
    v2 = g_pComposition;
    *((_DWORD *)this + 111) = *(_DWORD *)(*((_QWORD *)this + 7) + 24LL);
    v3 = CRedirectedGDISurface::Create(
           a2,
           this,
           (struct CLegacySurfaceManager *)(*((_QWORD *)v2 + 78) + 152LL),
           (struct CRedirectedGDISurface **)this + 16);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x45u, 0LL);
  }
  return v4;
}
