/*
 * XREFs of ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800C9618
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EnsureWNFHandles@CFSVPProvider@@AEAAJXZ @ 0x1800C9790 (-EnsureWNFHandles@CFSVPProvider@@AEAAJXZ.c)
 *     ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1800C9820 (-IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x1800C9B80 (-FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType.c)
 *     ?GetOverlayContext@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x1800C9C30 (-GetOverlayContext@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 *     ?IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800CB010 (-IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x1801FB8A0 (-SignalSEB@CFSVPProvider@@AEAAX_N0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QEAA_NXZ @ 0x18024B7E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QE.c)
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1802502D0 (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 *     McTemplateU0zttq_EventWriteTransfer @ 0x18025745C (McTemplateU0zttq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180259200 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 *     ?RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ @ 0x1802894E0 (-RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CFSVPProvider::CheckForFullscreenVideoNotifications(CFSVPProvider *this)
{
  CDDisplayRenderTarget *v2; // rcx
  CGlobalCompositionSurfaceInfo *MajorityScreenContent; // rdi
  __int64 (*v4)(void); // rax
  char IsPrimaryMonitor; // al
  __int64 (*v6)(void); // rax
  struct COverlayContext *OverlayContext; // rax
  int v8; // edx
  int v9; // r8d
  struct _SEB_RPC_PUBLISH_DATA *v10; // rcx
  bool (__fastcall *v11)(CGlobalCompositionSurfaceInfo *__hidden); // rax
  bool IsHDR; // al
  struct _SEB_RPC_PUBLISH_DATA *v13; // rcx

  v2 = *(CDDisplayRenderTarget **)this;
  MajorityScreenContent = 0LL;
  v4 = *(__int64 (**)(void))(*(_QWORD *)v2 + 32LL);
  if ( (char *)v4 == (char *)CDDisplayRenderTarget::IsPrimaryMonitor )
    IsPrimaryMonitor = CDDisplayRenderTarget::IsPrimaryMonitor(v2);
  else
    IsPrimaryMonitor = v4();
  if ( IsPrimaryMonitor
    && *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL )
  {
    v6 = *(__int64 (**)(void))(**(_QWORD **)this + 72LL);
    if ( (char *)v6 == (char *)CDDisplayRenderTarget::GetOverlayContext )
      OverlayContext = CDDisplayRenderTarget::GetOverlayContext(*(CDDisplayRenderTarget **)this);
    else
      OverlayContext = (struct COverlayContext *)v6();
    MajorityScreenContent = (CGlobalCompositionSurfaceInfo *)COverlayContext::FindMajorityScreenContent(OverlayContext);
  }
  if ( (int)CFSVPProvider::EnsureWNFHandles(this) >= 0 )
  {
    if ( MajorityScreenContent )
    {
      v11 = *(bool (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden))(*(_QWORD *)MajorityScreenContent + 440LL);
      if ( v11 == CGlobalCompositionSurfaceInfo::IsHDR )
        IsHDR = CGlobalCompositionSurfaceInfo::IsHDR(MajorityScreenContent);
      else
        IsHDR = v11(MajorityScreenContent);
      CFSVPProvider::SignalSEB(this, 1, IsHDR);
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SEBWorkerThread>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SEBWorkerThread>::GetImpl'::`2'::impl) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      *(_WORD *)((char *)this + 73) = 0;
      if ( (*((_BYTE *)this + 75) || *((_BYTE *)this + 76)) && (int)CFSVPProvider::RequestThreadpoolWork(this) < 0 )
        CFSVPProvider::SignalSEBWorker(this);
      if ( this != (CFSVPProvider *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    }
    else
    {
      v10 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2);
      if ( v10 && *((_BYTE *)this + 76) )
        PubSebiUpdateLevelEventRpc(v10, 0);
      v13 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 1);
      if ( v13 && *((_BYTE *)this + 75) )
        LOBYTE(MajorityScreenContent) = PubSebiUpdateLevelEventRpc(v13, 0);
      if ( *((_BYTE *)this + 75) || *((_BYTE *)this + 76) )
      {
        *(_WORD *)((char *)this + 75) = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0zttq_EventWriteTransfer((_DWORD)v13, v8, v9, 0, 0, (char)MajorityScreenContent);
      }
    }
  }
}
