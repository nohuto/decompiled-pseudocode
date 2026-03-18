/*
 * XREFs of ?GetPixelFormatInfo@CLegacyRenderTarget@@WFA@EBA?AUPixelFormatInfo@@XZ @ 0x180281770
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18002E0FC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CLegacyRenderTarget::GetPixelFormatInfo(a1 - 80, a2);
}
