/*
 * XREFs of ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x18009912C
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180099730 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x18003A310 (-NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180040560 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x1801D4EE0 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801DC290 (-ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x180233400 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x180243AA0 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetPresentError@CD3DDevice@@SAJI_N@Z @ 0x18027E8AC (-GetPresentError@CD3DDevice@@SAJI_N@Z.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z @ 0x18027E900 (-NotifyPresent@CTargetStats@@QEAAXJ_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QEAA_NXZ @ 0x18027EC70 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QE.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Present(CDDisplayRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  int PresentError; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // eax
  char IsEnabled; // al
  CTargetStats *v10; // rcx
  CComposition *v11; // rcx
  const struct tagCOMPOSITION_TARGET_ID *v12; // r11
  bool v13; // zf
  int v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  bool v19; // [rsp+80h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+88h] [rbp+18h] BYREF

  v2 = 0;
  if ( CDDisplayRenderTarget::PresentNeeded(this) )
  {
    v3 = *((_QWORD *)this + 26);
    v16 = 0LL;
    v15 = g_hrNoHardwareDeviceOverride;
    PresentError = CD3DDevice::GetPresentError(*(_DWORD *)(*(_QWORD *)(v3 + 64) + 896LL), 0);
    v18 = 0LL;
    g_hrNoHardwareDeviceOverride = PresentError;
    v17 = 0LL;
    CRegion::GetRectangles((int **)(v5 + 184), (const void **)&v17);
    v6 = *((_QWORD *)this + 26);
    v7 = *((_DWORD *)this + 8344);
    v19 = 0;
    v8 = COverlayContext::Present(
           (CDDisplayRenderTarget *)((char *)this + 224),
           (struct IOverlaySwapChain *)((v6 + 24) & -(__int64)(v6 != 0)),
           v7,
           (__int64)&v19,
           0);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2D3u, 0LL);
    }
    else
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullscreenStats>::GetImpl'::`2'::impl);
      v10 = (CDDisplayRenderTarget *)((char *)this + 33144);
      if ( IsEnabled )
        CTargetStats::NotifyPresent(v10, v2, PerformanceCount.QuadPart);
      else
        CTargetStats::NotifyPresent(v10, v2, v19, PerformanceCount.QuadPart);
      v13 = !v19;
      *((_BYTE *)this + 33520) = 0;
      if ( !v13 && *((_DWORD *)this + 8296) != 1 )
        CComposition::ConfirmCompSurfInfoUpate(v11, v12);
    }
    if ( (_QWORD)v17 )
    {
      std::_Deallocate<16,0>((_QWORD *)v17, (v18 - v17) & 0xFFFFFFFFFFFFFFF0uLL);
      v18 = 0LL;
      v17 = 0LL;
    }
    CFailFastError::~CFailFastError((CFailFastError *)&v15);
  }
  if ( *((_DWORD *)this + 8296) == 1 )
    return 142213121;
  return v2;
}
