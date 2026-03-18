/*
 * XREFs of ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C6E9C
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18006A3A0 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x180109E20 (-NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1801BF7C0 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x1801E10E0 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801E7820 (-ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAA_NXZ @ 0x18024A5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wi.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x18024C9D8 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetPresentError@CD3DDevice@@SAJI_N@Z @ 0x1802898EC (-GetPresentError@CD3DDevice@@SAJI_N@Z.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z @ 0x180289940 (-NotifyPresent@CTargetStats@@QEAAXJ_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QEAA_NXZ @ 0x180289CB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QE.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Present(CDDisplayRenderTarget *this)
{
  unsigned int v2; // edi
  char IsEnabled; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  int **v6; // r8
  int v7; // r9d
  int v8; // eax
  char v9; // al
  CTargetStats *v10; // rcx
  CComposition *v11; // rcx
  const struct tagCOMPOSITION_TARGET_ID *v12; // r11
  int v13; // r9d
  int v14; // eax
  char v15; // al
  CTargetStats *v16; // rcx
  CComposition *v17; // rcx
  const struct tagCOMPOSITION_TARGET_ID *v18; // r11
  int v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  bool v24; // [rsp+90h] [rbp+20h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp+28h] BYREF

  v2 = 0;
  if ( CDDisplayRenderTarget::PresentNeeded(this) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::GetImpl'::`2'::impl);
    v4 = *((_QWORD *)this + 26);
    if ( IsEnabled )
    {
      v5 = *(_QWORD *)(v4 + 64);
      v21 = 0LL;
      v20 = g_hrNoHardwareDeviceOverride;
      g_hrNoHardwareDeviceOverride = CD3DDevice::GetPresentError(*(_DWORD *)(v5 + 896), 0);
      v23 = 0LL;
      v22 = 0LL;
      CRegion::GetRectangles(v6, (const void **)&v22);
      v7 = *((_DWORD *)this + 8440);
      v24 = 0;
      v8 = COverlayContext::Present((CDDisplayRenderTarget *)((char *)this + 224), v7, (__int64)&v24, 0);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x30Bu, 0LL);
      }
      else
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        v9 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullscreenStats>::GetImpl'::`2'::impl);
        v10 = (CDDisplayRenderTarget *)((char *)this + 33528);
        if ( v9 )
          CTargetStats::NotifyPresent(v10, v2, PerformanceCount.QuadPart);
        else
          CTargetStats::NotifyPresent(v10, v2, v24, PerformanceCount.QuadPart);
        *((_BYTE *)this + 33904) = 0;
        if ( v24 && *((_DWORD *)this + 8392) != 1 )
          CComposition::ConfirmCompSurfInfoUpate(v11, v12);
      }
      if ( (_QWORD)v22 )
      {
        std::_Deallocate<16,0>((_QWORD *)v22, (v23 - v22) & 0xFFFFFFFFFFFFFFF0uLL);
        v23 = 0LL;
        v22 = 0LL;
      }
      CFailFastError::~CFailFastError((CFailFastError *)&v20);
    }
    else
    {
      v23 = 0LL;
      v22 = 0LL;
      CRegion::GetRectangles((int **)(v4 + 184), (const void **)&v22);
      v13 = *((_DWORD *)this + 8440);
      v24 = 0;
      v14 = COverlayContext::Present((CDDisplayRenderTarget *)((char *)this + 224), v13, (__int64)&v24, 0);
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x335u, 0LL);
      }
      else
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        v15 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullscreenStats>::GetImpl'::`2'::impl);
        v16 = (CDDisplayRenderTarget *)((char *)this + 33528);
        if ( v15 )
          CTargetStats::NotifyPresent(v16, v2, PerformanceCount.QuadPart);
        else
          CTargetStats::NotifyPresent(v16, v2, v24, PerformanceCount.QuadPart);
        *((_BYTE *)this + 33904) = 0;
        if ( v24 && *((_DWORD *)this + 8392) != 1 )
          CComposition::ConfirmCompSurfInfoUpate(v17, v18);
      }
      if ( (_QWORD)v22 )
        std::_Deallocate<16,0>((_QWORD *)v22, (v23 - v22) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  if ( *((_DWORD *)this + 8392) == 1 )
    return 142213121;
  return v2;
}
