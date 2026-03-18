/*
 * XREFs of ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ @ 0x1800C75D0
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180109DB8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x18021BD68 (-UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::DirectFlipEarlyWakeupReady(COverlayContext *this)
{
  CDirectFlipInfo *v2; // rcx
  struct IOverlaySwapChain *v4; // rax

  v2 = (CDirectFlipInfo *)*((_QWORD *)this + 2468);
  if ( !v2 || !CDirectFlipInfo::RenderingRealizationChanged(v2) )
    return 0;
  v4 = (struct IOverlaySwapChain *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
  return CDirectFlipInfo::UseSyncIntervalAndAllowTearing(*((CDirectFlipInfo **)this + 2468), v4);
}
