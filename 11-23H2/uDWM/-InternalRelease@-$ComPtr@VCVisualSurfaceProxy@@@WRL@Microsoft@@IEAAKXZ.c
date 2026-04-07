/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4
 * Callers:
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x1800066F0 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180009638 (-OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??4?$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z @ 0x180010984 (--4-$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z.c)
 *     ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180020D50 (-SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ??0CGlobalLightSet@@AEAA@_K@Z @ 0x18002B9E4 (--0CGlobalLightSet@@AEAA@_K@Z.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18002D0E4 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800325B4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18003B464 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180053CA0 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ??1?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A22A8 (--1-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800C0D2C (--1CGlobalLightSet@@EEAA@XZ.c)
 *     ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800C116C (-RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x180105340 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18010609C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180108658 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(CBaseObject **a1)
{
  CBaseObject *v1; // rdx
  unsigned int result; // eax

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CBaseObject::Release(v1);
  }
  return result;
}
