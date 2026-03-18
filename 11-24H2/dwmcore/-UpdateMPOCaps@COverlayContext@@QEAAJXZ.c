/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18018A29C
 * Callers:
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x180188CA0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18018A130 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180040084 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801D8340 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?ClearHardwareCursor@COverlayContext@@AEAAXXZ @ 0x180269FC4 (-ClearHardwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x18027CBAC (-DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(CDirectFlipInfo **this)
{
  __int64 v2; // rax
  CDirectFlipInfo *v3; // rcx
  __int64 v4; // r14
  struct COverlayContext::OverlayPlaneInfo *v5; // rbx
  struct COverlayContext::OverlayPlaneInfo *v6; // rsi
  int *v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx

  v2 = (*(__int64 (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)*this + 280LL))(*this);
  v3 = this[2439];
  v4 = v2;
  if ( v3 )
    CDirectFlipInfo::DisableIndependentFlip(v3);
  v5 = this[1585];
  v6 = this[1586];
  while ( v5 != v6 )
  {
    COverlayContext::EnsureIndependentFlipState((COverlayContext *)this, v5, 0);
    v5 = (struct COverlayContext::OverlayPlaneInfo *)((char *)v5 + 392);
  }
  if ( !CDeviceManager::s_bXbox )
    this[2441] = GetCurrentFrameId();
  *((_BYTE *)this + 19588) = 1;
  v7 = (int *)(this + 5);
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 344LL))(v4, (char *)this + 40);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x947u, 0LL);
  }
  else
  {
    if ( CCommonRegistryData::m_dwOverlayTestMode == 5 )
    {
      *v7 = 1;
      *((_DWORD *)this + 11) = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) ^ 1;
      *((_DWORD *)this + 12) = 0;
    }
    if ( this[1586] != this[1585] || *((_BYTE *)this + 19089) )
      (*(void (__fastcall **)(__int64))(*((_QWORD *)*this + 1) + 48LL))((__int64)*this + 8);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
      COverlayContext::ClearHardwareCursor((COverlayContext *)this);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_OVERLAY_GETCAPS,
        *v7,
        *((_DWORD *)this + 13));
  }
  return v9;
}
