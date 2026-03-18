/*
 * XREFs of ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C7AC8
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetTightDirtyRects@?$CTargetDirtyBase@$07@@QEAA_NPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180068A60 (-GetTightDirtyRects@-$CTargetDirtyBase@$07@@QEAA_NPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800C5BD8 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x180109E20 (-NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1801BF7C0 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x1801E1114 (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 *     ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801E7820 (-ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801F6ED4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAA_NXZ @ 0x18024A5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wi.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x18024C9D8 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x18024CC94 (-GetPresentError@CLegacyRenderTarget@@AEBAJXZ.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z @ 0x180289940 (-NotifyPresent@CTargetStats@@QEAAXJ_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QEAA_NXZ @ 0x180289CB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::Present(CLegacyRenderTarget *this)
{
  unsigned int v2; // ebx
  int PresentError; // eax
  int v4; // ecx
  __int64 v5; // rax
  char v6; // al
  int v7; // edi
  char v8; // bl
  int v9; // eax
  char v10; // al
  int v11; // edi
  char v12; // bl
  int v13; // eax
  char IsEnabled; // al
  bool v15; // r14
  CTargetStats *v16; // rcx
  CComposition *v17; // rcx
  int v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]
  bool v23; // [rsp+90h] [rbp+20h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp+28h] BYREF

  v2 = 0;
  if ( !CLegacyRenderTarget::PresentNeeded(this) )
    goto LABEL_25;
  v22 = 0LL;
  v21 = 0LL;
  if ( !CTargetDirtyBase<8>::GetTightDirtyRects((__int64)this + 31152, &v21) )
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 120LL))(
      *((_QWORD *)this + 25) + 24LL,
      &v21);
  if ( *((_BYTE *)this + 33897) && *((_QWORD *)&v21 + 1) == (_QWORD)v21 )
  {
    if ( *((_QWORD *)&v21 + 1) == v22 )
    {
      std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(&v21, *((_QWORD *)&v21 + 1), &DirectX::g_XMZero);
    }
    else
    {
      **((_OWORD **)&v21 + 1) = DirectX::g_XMZero;
      *((_QWORD *)&v21 + 1) += 16LL;
    }
  }
  v23 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::GetImpl'::`2'::impl) )
  {
    PresentError = CLegacyRenderTarget::GetPresentError(this);
    v4 = g_hrNoHardwareDeviceOverride;
    v20 = 0LL;
    g_hrNoHardwareDeviceOverride = PresentError;
    v5 = *(_QWORD *)this;
    v19 = v4;
    v6 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(v5 + 216))(this);
    v7 = *((_DWORD *)this + 8436);
    v8 = v6;
    (*(void (__fastcall **)(CLegacyRenderTarget *, __int128 *))(*(_QWORD *)this + 224LL))(this, &v21);
    v9 = COverlayContext::Present((CLegacyRenderTarget *)((char *)this + 216), v7, (__int64)&v23, v8);
    v2 = v9;
    if ( v9 >= 0 )
    {
      CFailFastError::~CFailFastError((CFailFastError *)&v19);
LABEL_14:
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullscreenStats>::GetImpl'::`2'::impl);
      v15 = v23;
      v16 = (CLegacyRenderTarget *)((char *)this + 33512);
      if ( IsEnabled )
        CTargetStats::NotifyPresent(v16, v2, PerformanceCount.QuadPart);
      else
        CTargetStats::NotifyPresent(v16, v2, v23, PerformanceCount.QuadPart);
      *((_BYTE *)this + 33896) = 0;
      if ( v2 == 142213167 )
      {
        *((_BYTE *)this + 33896) = 1;
        ScheduleCompositionPass(0, 0x2000u);
      }
      if ( v15 && *((_DWORD *)this + 8388) != 1 )
        CComposition::ConfirmCompSurfInfoUpate(v17, (CLegacyRenderTarget *)((char *)this + 33512));
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x202u, 0LL);
    CFailFastError::~CFailFastError((CFailFastError *)&v19);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 216LL))(this);
    v11 = *((_DWORD *)this + 8436);
    v12 = v10;
    (*(void (__fastcall **)(CLegacyRenderTarget *, __int128 *))(*(_QWORD *)this + 224LL))(this, &v21);
    v13 = COverlayContext::Present((CLegacyRenderTarget *)((char *)this + 216), v11, (__int64)&v23, v12);
    v2 = v13;
    if ( v13 >= 0 )
      goto LABEL_14;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x20Cu, 0LL);
  }
LABEL_23:
  if ( (_QWORD)v21 )
    std::_Deallocate<16,0>((_QWORD *)v21, (v22 - v21) & 0xFFFFFFFFFFFFFFF0uLL);
LABEL_25:
  if ( *((_DWORD *)this + 8388) == 1 )
    return 142213121;
  return v2;
}
