/*
 * XREFs of ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180109DB8
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ @ 0x1800C75D0 (-DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800C95D0 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800C9F20 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801C1748 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x1801E8580 (-GetClearMode@CLegacyRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetLastPresentCount@CGlobalCompositionSurfaceInfo@@UEBAIXZ @ 0x18010A810 (-GetLastPresentCount@CGlobalCompositionSurfaceInfo@@UEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDirectFlipInfo::RenderingRealizationChanged(CDirectFlipInfo *this)
{
  __int64 v2; // rcx
  unsigned __int64 CurrentFrameId; // rdi
  CGlobalCompositionSurfaceInfo *v4; // rcx
  __int64 (*v5)(void); // rax
  unsigned int LastPresentCount; // eax
  bool v7; // zf

  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v2 + 96) != CurrentFrameId )
  {
    v4 = *(CGlobalCompositionSurfaceInfo **)(v2 + 16);
    v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 320LL);
    if ( (char *)v5 == (char *)CGlobalCompositionSurfaceInfo::GetLastPresentCount )
      LastPresentCount = CGlobalCompositionSurfaceInfo::GetLastPresentCount(v4);
    else
      LastPresentCount = v5();
    v7 = *((_DWORD *)this + 23) == LastPresentCount;
    *((_DWORD *)this + 23) = LastPresentCount;
    *((_QWORD *)this + 12) = CurrentFrameId;
    *((_BYTE *)this + 104) = !v7;
  }
  return *((_BYTE *)this + 104);
}
