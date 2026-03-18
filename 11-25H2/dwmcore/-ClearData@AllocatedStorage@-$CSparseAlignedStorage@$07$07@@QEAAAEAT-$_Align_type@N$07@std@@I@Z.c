/*
 * XREFs of ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x180134930
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800680E0 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800C0058 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1801093C8 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x180131CB0 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180133CBC (--1CVisualTree@@UEAA@XZ.c)
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z @ 0x1801340C0 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1801ABF24 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x1801F8ABC (-SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x180216A8C (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z @ 0x180222494 (-SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x1802299C0 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(_DWORD *a1, int a2)
{
  __int64 v3; // rcx
  unsigned __int8 *v4; // r10
  unsigned int v5; // r9d

  v3 = 0LL;
  *a1 &= ~__ROR4__(1, a2);
  v4 = (unsigned __int8 *)(a1 + 2);
  v5 = a1[1];
  if ( v5 )
  {
    do
    {
      if ( *v4 == a2 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v4;
    }
    while ( (unsigned int)v3 < v5 );
  }
  if ( (unsigned int)v3 >= v5 )
    return 0LL;
  *((_BYTE *)a1 + v3 + 8) = 0;
  return (char *)a1 + (unsigned int)a1[1] + 8 * v3 - (((unsigned __int8)a1[1] + 15) & 7) + 15;
}
