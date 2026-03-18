/*
 * XREFs of ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x18009B4E8
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180099730 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EnsureWNFHandles@CFSVPProvider@@AEAAJXZ @ 0x18009B5D0 (-EnsureWNFHandles@CFSVPProvider@@AEAAJXZ.c)
 *     ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x18009B660 (-IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x18009B8A0 (-SignalSEB@CFSVPProvider@@AEAAX_N0@Z.c)
 *     ?FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x18009B920 (-FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType.c)
 *     ?GetOverlayContext@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x18009B9D0 (-GetOverlayContext@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 *     ?IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18009CEE0 (-IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CFSVPProvider::CheckForFullscreenVideoNotifications(CDDisplayRenderTarget **this)
{
  CDDisplayRenderTarget *v2; // rcx
  CGlobalCompositionSurfaceInfo *MajorityScreenContent; // rbx
  __int64 (*v4)(void); // rax
  char IsPrimaryMonitor; // al
  __int64 (*v6)(void); // rax
  struct COverlayContext *OverlayContext; // rax
  bool v8; // r8
  bool v9; // dl
  bool (__fastcall *v10)(CGlobalCompositionSurfaceInfo *__hidden); // rax
  bool IsHDR; // al

  v2 = *this;
  MajorityScreenContent = 0LL;
  v4 = *(__int64 (**)(void))(*(_QWORD *)v2 + 32LL);
  if ( (char *)v4 == (char *)CDDisplayRenderTarget::IsPrimaryMonitor )
    IsPrimaryMonitor = CDDisplayRenderTarget::IsPrimaryMonitor(v2);
  else
    IsPrimaryMonitor = v4();
  if ( IsPrimaryMonitor
    && *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL )
  {
    v6 = *(__int64 (**)(void))(*(_QWORD *)*this + 72LL);
    if ( (char *)v6 == (char *)CDDisplayRenderTarget::GetOverlayContext )
      OverlayContext = CDDisplayRenderTarget::GetOverlayContext(*this);
    else
      OverlayContext = (struct COverlayContext *)v6();
    MajorityScreenContent = (CGlobalCompositionSurfaceInfo *)COverlayContext::FindMajorityScreenContent(OverlayContext);
  }
  if ( (int)CFSVPProvider::EnsureWNFHandles((CFSVPProvider *)this) >= 0 )
  {
    if ( MajorityScreenContent )
    {
      v10 = *(bool (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden))(*(_QWORD *)MajorityScreenContent + 440LL);
      if ( v10 == CGlobalCompositionSurfaceInfo::IsHDR )
        IsHDR = CGlobalCompositionSurfaceInfo::IsHDR(MajorityScreenContent);
      else
        IsHDR = v10(MajorityScreenContent);
      v8 = IsHDR;
      v9 = 1;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    CFSVPProvider::SignalSEB((CFSVPProvider *)this, v9, v8);
  }
}
