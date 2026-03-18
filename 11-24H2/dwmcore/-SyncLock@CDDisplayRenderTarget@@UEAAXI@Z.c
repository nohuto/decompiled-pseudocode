/*
 * XREFs of ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x180097250
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180098EA4 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800584AC (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     ?NotifySyncLock@CTargetStats@@QEAAXI@Z @ 0x1802044D4 (-NotifySyncLock@CTargetStats@@QEAAXI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayInkBlackFlash@@@details@wil@@QEAA_NXZ @ 0x18027FD0C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayInkBlackFlash@@@details@w.c)
 */

void __fastcall CDDisplayRenderTarget::SyncLock(CDDisplayRenderTarget *this, unsigned int a2)
{
  char IsEnabled; // al

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayInkBlackFlash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplayInkBlackFlash>::GetImpl'::`2'::impl);
  if ( *((_DWORD *)this + 8308)
    && (!IsEnabled || !*(_BYTE *)(*((_QWORD *)this + 6) + 665LL))
    && (int)COverlayContext::SyncLock(
              (CDDisplayRenderTarget *)((char *)this + 64),
              (struct IOverlaySwapChain *)((*((_QWORD *)this + 6) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 6) >> 64)),
              a2,
              *((_DWORD *)this + 8298),
              0) >= 0 )
  {
    CTargetStats::NotifySyncLock((CDDisplayRenderTarget *)((char *)this + 32984), a2);
  }
}
