/*
 * XREFs of ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x1802782A0 (-RenderAndPresent@CLegacyRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z @ 0x1802782B0 (-RenderAndPresent@CLegacyRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ @ 0x1800996D8 (-DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x180099BC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x18009A69C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x18009B218 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18009B4A0 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18009B6D0 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009B9DC (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x18009BCC0 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x180159E5C (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ @ 0x1801C6630 (-AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801D2100 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x1801D4F14 (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180245810 (-PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@IUMilRectU@@UMil3D.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderAndPresent(CLegacyRenderTarget *this, struct CDrawingContext *a2)
{
  char *v2; // rbx
  struct CDrawingContext *v4; // r13
  __int64 v5; // rcx
  int v6; // r14d
  gsl::details *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r13
  const struct D2D_RECT_F *v10; // r8
  int EffectiveDirectFlipMode; // esi
  __int64 v12; // rax
  const struct D2D_RECT_F *v13; // rdx
  const struct D2D_RECT_F *v14; // r9
  const struct D2D_RECT_F *v15; // rdx
  bool v16; // si
  __int64 v17; // rax
  bool v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // eax
  int v22; // esi
  bool v23; // al
  int v24; // edx
  char *v25; // rdx
  int v26; // eax
  int v27; // esi
  __int64 v28; // r8
  __int64 v29; // rax
  char *v30; // rdx
  char *v31; // rdx
  int v33; // eax
  int v34; // esi
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-48h] BYREF
  __int128 v36; // [rsp+40h] [rbp-40h]
  __int64 v37; // [rsp+50h] [rbp-30h]
  struct CDrawingContext *v38[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v39[2]; // [rsp+68h] [rbp-18h] BYREF

  v2 = 0LL;
  v38[0] = a2;
  v4 = a2;
  v5 = *((_QWORD *)this + 13);
  v6 = 0;
  if ( v5 && *((_QWORD *)this + 11) && *((_DWORD *)this + 8268) != 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 256) + 56LL))(v5 + 256);
    if ( v8 )
      CLegacyRenderTarget::AddComputeScribbleDirtyRects((CLegacyRenderTarget *)((char *)this - 96));
    v9 = *((_QWORD *)this + 11);
    v10 = (const struct D2D_RECT_F *)((char *)this + 30416);
    v37 = 0LL;
    v36 = 0LL;
    if ( !*(_BYTE *)(v9 + 2436) )
    {
      v13 = (const struct D2D_RECT_F *)(v9 + 132);
      if ( v9 == -132 && MEMORY[0xFFFFFFFFFFFFFFFC] )
      {
LABEL_11:
        `gsl::details::get_terminate_handler'::`2'::handler(v7);
        __debugbreak();
      }
      v14 = &v13[*(unsigned int *)(v9 + 128)];
      while ( v13 != v14
           && (IsEmpty(v10)
            || IsEmpty(v15)
            || v10->right <= v15->left
            || v15->right <= v10->left
            || v10->bottom <= v15->top
            || v15->bottom <= v10->top) )
        v13 = v15 + 1;
    }
    COverlayContext::ApplyConfiguration((CLegacyRenderTarget *)((char *)this + 120));
    EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode((char *)this + 120);
    if ( EffectiveDirectFlipMode == 2 )
      goto LABEL_22;
    v7 = (CLegacyRenderTarget *)((char *)this + 30672);
    v12 = (__int64)(*((_QWORD *)&v36 + 1) - v36) >> 3;
    v39[0] = v12;
    if ( v12 == -1 )
      goto LABEL_11;
    v39[1] = v36;
    if ( !(_QWORD)v36 )
    {
      if ( v12 )
        goto LABEL_11;
    }
    CMonitorDirty::AddDirtyRegion(v7, v9 + 112, v39);
    if ( EffectiveDirectFlipMode )
LABEL_22:
      v16 = COverlayContext::DirectFlipEarlyWakeupReady((CLegacyRenderTarget *)((char *)this + 120));
    else
      v16 = 0;
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v17 = *((_QWORD *)this + 4176);
    if ( !v17 || (v18 = 1, *(_DWORD *)(v17 + 8) != -1) )
      v18 = 0;
    if ( CTargetStats::Ready((CLegacyRenderTarget *)((char *)this + 33032), PerformanceCount.QuadPart, v18) || v16 )
    {
      v4 = v38[0];
      v21 = CLegacyRenderTarget::Render((CLegacyRenderTarget *)((char *)this - 96), v38[0]);
      v6 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x142u, 0LL);
      if ( v8 )
      {
        if ( *((_BYTE *)this + 19209) )
        {
          v38[1] = *((struct CDrawingContext **)this + 3806);
          v38[0] = 0LL;
        }
        else
        {
          *(_OWORD *)v38 = *((_OWORD *)this + 1902);
        }
        v25 = (char *)this + 64;
        if ( this == (CLegacyRenderTarget *)96 )
          v25 = 0LL;
        v26 = CComputeScribbleRenderer::PostRender(v8, v25, v38);
        v27 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x148u, 0LL);
        if ( !v6 || v6 >= 0 && v27 < 0 )
          v6 = v27;
        v8 = 0LL;
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
        && g_LockAndReadTarget )
      {
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 104LL))(*((_QWORD *)this + 13) + 24LL);
        v30 = (char *)v4 + 24;
        if ( !v4 )
          v30 = 0LL;
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v29 + 112LL))(v29, v30);
      }
      CLegacyRenderTarget::Present((CLegacyRenderTarget *)((char *)this - 96));
    }
    else
    {
      if ( *((_DWORD *)this + 8268) != 1 )
      {
        v22 = 0;
        if ( *((_DWORD *)this + 7672) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
          {
            if ( *((_QWORD *)this + 4133) )
              v28 = *((unsigned int *)this + 8321);
            else
              v28 = 0LL;
            McTemplateU0t_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &RENDERTARGET_RENDERSKIPPED,
              v28);
          }
          v22 = 1;
        }
        v23 = CLegacyRenderTarget::PresentNeeded((CLegacyRenderTarget *)((char *)this - 96));
        v24 = v22 | 2;
        if ( !v23 )
          v24 = v22;
        if ( v24 )
          ScheduleCompositionPass(0LL);
      }
      v4 = v38[0];
    }
    CLegacyRenderTarget::CheckForMajorityScreenVideoNotifications((CLegacyRenderTarget *)((char *)this - 96));
    if ( v8 )
    {
      LOBYTE(v19) = *((_BYTE *)this + 19209);
      CMonitorTransform::GetClipBox((char *)this + 30408, v39, v19);
      v31 = (char *)this + 64;
      if ( this == (CLegacyRenderTarget *)96 )
        v31 = 0LL;
      v33 = CComputeScribbleRenderer::PostRender(v8, v31, v39);
      v34 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x174u, 0LL);
      if ( !v6 || v6 >= 0 && v34 < 0 )
        v6 = v34;
    }
    if ( (_QWORD)v36 )
      std::_Deallocate<16,0>((_QWORD *)v36, (v37 - v36) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
    && g_LockAndReadTarget )
  {
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 104LL))(*((_QWORD *)this + 13) + 24LL);
    if ( v4 )
      v2 = (char *)v4 + 24;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 112LL))(v20, v2);
  }
  return (unsigned int)v6;
}
