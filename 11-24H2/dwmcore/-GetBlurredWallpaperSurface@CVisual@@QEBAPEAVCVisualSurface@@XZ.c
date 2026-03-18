/*
 * XREFs of ?GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ @ 0x1800491FC
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x1802168C8 (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

struct CVisualSurface *__fastcall CVisual::GetBlurredWallpaperSurface(CVisual *this)
{
  unsigned int Slot; // eax
  __int64 v2; // r10
  __int64 v3; // rdx

  if ( (**((_DWORD **)this + 29) & 0x10000) == 0 )
    return 0LL;
  Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)this + 29), 16);
  if ( Slot >= *(_DWORD *)(v2 + 4) )
    v3 = 0LL;
  else
    v3 = *(unsigned int *)(v2 + 4) + 15LL + v2 + 8LL * Slot - (((unsigned __int8)*(_DWORD *)(v2 + 4) + 15) & 7);
  return *(struct CVisualSurface **)v3;
}
