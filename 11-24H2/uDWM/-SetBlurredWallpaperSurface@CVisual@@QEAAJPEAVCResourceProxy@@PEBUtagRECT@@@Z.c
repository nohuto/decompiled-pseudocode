/*
 * XREFs of ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z @ 0x180077090
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x180044A98 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z.c)
 *     ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180076F00 (-SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?DestroyRootVisualForDesktop@CWindowList@@AEAAXPEAUCDesktop@@@Z @ 0x1800EF1FC (-DestroyRootVisualForDesktop@CWindowList@@AEAAXPEAUCDesktop@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::SetBlurredWallpaperSurface(
        CVisualProxy **this,
        struct CResourceProxy *a2,
        const struct tagRECT *a3)
{
  return CVisualProxy::SetBlurredWallpaperSurface(this[2], a2, a3);
}
