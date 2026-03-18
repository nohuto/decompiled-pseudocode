/*
 * XREFs of ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C9890
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x1800C9B80 (-FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType.c)
 *     ?IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800CB010 (-IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PubSebRegisterRpc @ 0x180221740 (PubSebRegisterRpc.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QEAA_NXZ @ 0x18024B7E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QE.c)
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1802502D0 (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 *     McTemplateU0zttq_EventWriteTransfer @ 0x18025745C (McTemplateU0zttq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180259200 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 *     ?RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ @ 0x1802894E0 (-RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::CheckForMajorityScreenVideoNotifications(CLegacyRenderTarget *this)
{
  char updated; // si
  char v3; // bp
  CGlobalCompositionSurfaceInfo *MajorityScreenContent; // rdi
  char *v5; // rbx
  char *v6; // rdx
  int v7; // edx
  int v8; // r8d
  struct _SEB_RPC_PUBLISH_DATA *v9; // rcx
  char v10; // di
  char v11; // al
  bool (__fastcall *v12)(CGlobalCompositionSurfaceInfo *__hidden); // rax
  char IsHDR; // al
  char v14; // bp
  int v15; // edx
  int v16; // r8d
  struct _SEB_RPC_PUBLISH_DATA *v17; // rcx
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  struct _SEB_RPC_PUBLISH_DATA *v21; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v22; // rcx

  if ( *((float *)this + 7724) == 0.0
    && *((float *)this + 7725) == 0.0
    && *((_BYTE *)this + 33898)
    && *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL )
  {
    v3 = 1;
    updated = 0;
  }
  else
  {
    updated = 0;
    v3 = 0;
    MajorityScreenContent = 0LL;
    if ( !*((_BYTE *)this + 33897) )
      goto LABEL_6;
  }
  MajorityScreenContent = (CGlobalCompositionSurfaceInfo *)COverlayContext::FindMajorityScreenContent((char *)this + 216);
  if ( *((_BYTE *)this + 33897) )
  {
    v11 = *((_BYTE *)this + 33900);
    if ( MajorityScreenContent )
    {
      if ( !v11 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 176LL))(
          *((_QWORD *)this + 25) + 24LL,
          1LL);
        *((_BYTE *)this + 33900) = 1;
      }
    }
    else if ( v11 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 176LL))(
        *((_QWORD *)this + 25) + 24LL,
        0LL);
      *((_BYTE *)this + 33900) = 0;
    }
  }
LABEL_6:
  v5 = (char *)this + 33808;
  if ( !v3 )
    MajorityScreenContent = 0LL;
  if ( !*((_QWORD *)v5 + 1) )
  {
    v18 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK);
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803A1828, 2u, v18, 0xE5u, 0LL);
      return;
    }
  }
  v6 = v5 + 16;
  if ( !*((_QWORD *)v5 + 2) )
  {
    v20 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK);
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803A1828, 2u, v20, 0xEBu, 0LL);
      return;
    }
  }
  if ( MajorityScreenContent )
  {
    v12 = *(bool (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden))(*(_QWORD *)MajorityScreenContent + 440LL);
    if ( v12 == CGlobalCompositionSurfaceInfo::IsHDR )
      IsHDR = CGlobalCompositionSurfaceInfo::IsHDR(MajorityScreenContent);
    else
      IsHDR = ((__int64 (__fastcall *)(CGlobalCompositionSurfaceInfo *, char *))v12)(MajorityScreenContent, v6);
    v14 = IsHDR;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SEBWorkerThread>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SEBWorkerThread>::GetImpl'::`2'::impl) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 32));
      v19 = v5[75] == 1;
      v5[73] = 1;
      v5[74] = v14;
      if ( (!v19 || v14 != v5[76]) && (int)CFSVPProvider::RequestThreadpoolWork(v5) < 0 )
        CFSVPProvider::SignalSEBWorker((CFSVPProvider *)v5);
      if ( v5 != (char *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 32));
      return;
    }
    v17 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)v5 + 2);
    if ( v17 && v5[76] != v14 )
      PubSebiUpdateLevelEventRpc(v17, v14 != 0);
    v21 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)v5 + 1);
    if ( v21 )
    {
      if ( v5[75] == 1 )
        goto LABEL_50;
      updated = PubSebiUpdateLevelEventRpc(v21, 1u);
    }
    if ( v5[75] != 1 )
    {
LABEL_51:
      v5[75] = 1;
      v5[76] = v14;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0zttq_EventWriteTransfer((_DWORD)v21, v15, v16, 1, v14, updated);
      return;
    }
LABEL_50:
    if ( v5[76] == v14 )
      return;
    goto LABEL_51;
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SEBWorkerThread>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SEBWorkerThread>::GetImpl'::`2'::impl) )
  {
    v9 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)v5 + 2);
    v10 = 0;
    if ( v9 && v5[76] )
      PubSebiUpdateLevelEventRpc(v9, 0);
    v22 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)v5 + 1);
    if ( v22 )
    {
      if ( !v5[75] )
        goto LABEL_57;
      v10 = PubSebiUpdateLevelEventRpc(v22, 0);
    }
    if ( v5[75] )
    {
LABEL_58:
      *(_WORD *)(v5 + 75) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0zttq_EventWriteTransfer((_DWORD)v22, v7, v8, 0, 0, v10);
      return;
    }
LABEL_57:
    if ( !v5[76] )
      return;
    goto LABEL_58;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 32));
  v19 = v5[75] == 0;
  *(_WORD *)(v5 + 73) = 0;
  if ( (!v19 || v5[76]) && (int)CFSVPProvider::RequestThreadpoolWork(v5) < 0 )
    CFSVPProvider::SignalSEBWorker((CFSVPProvider *)v5);
  if ( v5 != (char *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 32));
}
