/*
 * XREFs of ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x180099BC8
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x18003A310 (-NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTightDirtyRects@?$CTargetDirtyBase@$07@@QEAA_NPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180097CC0 (-GetTightDirtyRects@-$CTargetDirtyBase@$07@@QEAA_NPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x180159E5C (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x1801D4F14 (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 *     ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801DC290 (-ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801E9BC4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x180233400 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x180243AA0 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x180243D5C (-GetPresentError@CLegacyRenderTarget@@AEBAJXZ.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z @ 0x18027E900 (-NotifyPresent@CTargetStats@@QEAAXJ_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QEAA_NXZ @ 0x18027EC70 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::Present(CLegacyRenderTarget *this)
{
  unsigned int v2; // ebx
  char *v3; // r14
  int PresentError; // eax
  int v5; // ecx
  __int64 v6; // rax
  char v7; // al
  int v8; // edi
  char v9; // bl
  int v10; // eax
  char IsEnabled; // al
  bool v12; // r14
  CTargetStats *v13; // rcx
  CComposition *v14; // rcx
  int v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  bool v20; // [rsp+90h] [rbp+20h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp+28h] BYREF

  v2 = 0;
  if ( CLegacyRenderTarget::PresentNeeded(this) )
  {
    v19 = 0LL;
    v18 = 0LL;
    v3 = (char *)this + 200;
    if ( !CTargetDirtyBase<8>::GetTightDirtyRects((__int64)this + 30768, (const void **)&v18) )
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)v3 + 24LL) + 120LL))(
        *(_QWORD *)v3 + 24LL,
        &v18);
    if ( *((_BYTE *)this + 33513) && *((_QWORD *)&v18 + 1) == (_QWORD)v18 )
    {
      if ( *((_QWORD *)&v18 + 1) == v19 )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(&v18, *((_QWORD *)&v18 + 1), &DirectX::g_XMZero);
      }
      else
      {
        **((_OWORD **)&v18 + 1) = DirectX::g_XMZero;
        *((_QWORD *)&v18 + 1) += 16LL;
      }
    }
    v20 = 0;
    PresentError = CLegacyRenderTarget::GetPresentError(this);
    v5 = g_hrNoHardwareDeviceOverride;
    v17 = 0LL;
    g_hrNoHardwareDeviceOverride = PresentError;
    v6 = *(_QWORD *)this;
    v16 = v5;
    v7 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(v6 + 216))(this);
    v8 = *((_DWORD *)this + 8340);
    v9 = v7;
    (*(void (__fastcall **)(CLegacyRenderTarget *, __int128 *))(*(_QWORD *)this + 224LL))(this, &v18);
    v10 = COverlayContext::Present(
            (CLegacyRenderTarget *)((char *)this + 216),
            (struct IOverlaySwapChain *)((*(_QWORD *)v3 + 24LL) & -(__int64)(*(_QWORD *)v3 != 0LL)),
            v8,
            (__int64)&v20,
            v9);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1F9u, 0LL);
    }
    else
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullscreenStats>::GetImpl'::`2'::impl);
      v12 = v20;
      v13 = (CLegacyRenderTarget *)((char *)this + 33128);
      if ( IsEnabled )
        CTargetStats::NotifyPresent(v13, v2, PerformanceCount.QuadPart);
      else
        CTargetStats::NotifyPresent(v13, v2, v20, PerformanceCount.QuadPart);
      *((_BYTE *)this + 33512) = 0;
      if ( v2 == 142213167 )
      {
        *((_BYTE *)this + 33512) = 1;
        ScheduleCompositionPass(0LL);
      }
      if ( v12 && *((_DWORD *)this + 8292) != 1 )
        CComposition::ConfirmCompSurfInfoUpate(v14, (CLegacyRenderTarget *)((char *)this + 33128));
    }
    CFailFastError::~CFailFastError((CFailFastError *)&v16);
    if ( (_QWORD)v18 )
      std::_Deallocate<16,0>((_QWORD *)v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  if ( *((_DWORD *)this + 8292) == 1 )
    return 142213121;
  return v2;
}
