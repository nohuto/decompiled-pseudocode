/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800C2DFC
 * Callers:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C2C90 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x18022B9A0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801E45EC (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x180287CAC (-DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(CDirectFlipInfo **this)
{
  __int64 v2; // rax
  CDirectFlipInfo *v3; // rcx
  __int64 v4; // r14
  struct COverlayContext::OverlayPlaneInfo *v5; // rbx
  struct COverlayContext::OverlayPlaneInfo *v6; // rsi
  _DWORD *v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx

  v2 = (*(__int64 (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)*this + 280LL))(*this);
  v3 = this[2468];
  v4 = v2;
  if ( v3 )
    CDirectFlipInfo::DisableIndependentFlip(v3);
  v5 = this[1617];
  v6 = this[1618];
  while ( v5 != v6 )
  {
    COverlayContext::EnsureIndependentFlipState((COverlayContext *)this, v5, 0);
    v5 = (struct COverlayContext::OverlayPlaneInfo *)((char *)v5 + 400);
  }
  if ( !CDeviceManager::s_bXbox )
    this[2470] = (CDirectFlipInfo *)GetCurrentFrameId();
  *((_BYTE *)this + 19778) = 1;
  v7 = this + 5;
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 344LL))(v4, (char *)this + 40);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x7E5u, 0LL);
  }
  else
  {
    if ( CCommonRegistryData::m_dwOverlayTestMode == 5 )
    {
      *v7 = 1;
      *((_DWORD *)this + 11) = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) ^ 1;
      *((_DWORD *)this + 12) = 0;
    }
    if ( this[1618] != this[1617] || *((_BYTE *)this + 19473) )
      (*(void (__fastcall **)(__int64))(*((_QWORD *)*this + 1) + 48LL))((__int64)*this + 8);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_GETCAPS,
        (unsigned int)*v7,
        *((unsigned int *)this + 13));
  }
  return v9;
}
