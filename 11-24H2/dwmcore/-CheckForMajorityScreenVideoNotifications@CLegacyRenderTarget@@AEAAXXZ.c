/*
 * XREFs of ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18009B6D0
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x18009B8A0 (-SignalSEB@CFSVPProvider@@AEAAX_N0@Z.c)
 *     ?FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x18009B920 (-FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType.c)
 *     ?IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18009CEE0 (-IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     PubSebRegisterRpc @ 0x180215CA0 (PubSebRegisterRpc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::CheckForMajorityScreenVideoNotifications(CLegacyRenderTarget *this)
{
  char v2; // bp
  CGlobalCompositionSurfaceInfo *MajorityScreenContent; // rdi
  bool v4; // r8
  bool v5; // dl
  char v6; // al
  bool (__fastcall *v7)(CGlobalCompositionSurfaceInfo *__hidden); // rax
  bool IsHDR; // al
  int v9; // eax
  int v10; // eax

  if ( *((float *)this + 7628) == 0.0
    && *((float *)this + 7629) == 0.0
    && *((_BYTE *)this + 33514)
    && *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL )
  {
    v2 = 1;
  }
  else
  {
    v2 = 0;
    MajorityScreenContent = 0LL;
    if ( !*((_BYTE *)this + 33513) )
      goto LABEL_6;
  }
  MajorityScreenContent = (CGlobalCompositionSurfaceInfo *)COverlayContext::FindMajorityScreenContent((char *)this + 216);
  if ( *((_BYTE *)this + 33513) )
  {
    v6 = *((_BYTE *)this + 33516);
    if ( MajorityScreenContent )
    {
      if ( !v6 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 176LL))(
          *((_QWORD *)this + 25) + 24LL,
          1LL);
        *((_BYTE *)this + 33516) = 1;
      }
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 176LL))(
        *((_QWORD *)this + 25) + 24LL,
        0LL);
      *((_BYTE *)this + 33516) = 0;
    }
  }
LABEL_6:
  if ( !v2 )
    MajorityScreenContent = 0LL;
  if ( *((_QWORD *)this + 4179) || (v9 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK), v9 >= 0) )
  {
    if ( *((_QWORD *)this + 4180) || (v10 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK), v10 >= 0) )
    {
      if ( MajorityScreenContent )
      {
        v7 = *(bool (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden))(*(_QWORD *)MajorityScreenContent + 440LL);
        if ( v7 == CGlobalCompositionSurfaceInfo::IsHDR )
          IsHDR = CGlobalCompositionSurfaceInfo::IsHDR(MajorityScreenContent);
        else
          IsHDR = v7(MajorityScreenContent);
        v4 = IsHDR;
        v5 = 1;
      }
      else
      {
        v4 = 0;
        v5 = 0;
      }
      CFSVPProvider::SignalSEB((CLegacyRenderTarget *)((char *)this + 33424), v5, v4);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180396878, 2u, v10, 0xB8u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180396878, 2u, v9, 0xB2u, 0LL);
  }
}
