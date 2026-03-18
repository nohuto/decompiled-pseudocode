/*
 * XREFs of ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x180252F60
 * Callers:
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180252E48 (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 *     ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180252ED8 (-SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1802B2340 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002E7F0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

float __fastcall ValidateSDRBoost(float a1, enum DXGI_COLOR_SPACE_TYPE *a2)
{
  if ( IsDXGIColorSpaceHDR(a2[2]) )
    return fmaxf(1.0, a1);
  else
    return 0.0;
}
