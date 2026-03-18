/*
 * XREFs of ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x180282E30 (-RenderAndPresent@CLegacyRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z @ 0x180282E40 (-RenderAndPresent@CLegacyRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800C5BD8 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ @ 0x1800C75D0 (-DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C7AC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800C865C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800C9348 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800C95D0 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C9890 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800C9F20 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801DFEB0 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x1801E1114 (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 *     ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ @ 0x1802074B8 (-AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024F984 (-PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@IUMilRectU@@UMil3D.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderAndPresent(__m128i *this, struct CDrawingContext *a2)
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
  DWORD v24; // edx
  __m128i *v25; // rdx
  int v26; // eax
  int v27; // esi
  __int64 v28; // r8
  __int64 v29; // rax
  char *v30; // rdx
  __m128i *v31; // rdx
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
  v5 = this[6].m128i_i64[1];
  v6 = 0;
  if ( v5 && this[5].m128i_i64[1] && this[2091].m128i_i32[0] != 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 256) + 56LL))(v5 + 256);
    if ( v8 )
      CLegacyRenderTarget::AddComputeScribbleDirtyRects((CLegacyRenderTarget *)&this[-6]);
    v9 = this[5].m128i_i64[1];
    v10 = (const struct D2D_RECT_F *)&this[1925];
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
    COverlayContext::ApplyConfiguration((COverlayContext *)&this[7].m128i_u64[1]);
    EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode(&this[7].m128i_u64[1]);
    if ( EffectiveDirectFlipMode == 2 )
      goto LABEL_22;
    v7 = (gsl::details *)&this[1941];
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
      v16 = COverlayContext::DirectFlipEarlyWakeupReady((COverlayContext *)&this[7].m128i_u64[1]);
    else
      v16 = 0;
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v17 = this[2112].m128i_i64[0];
    if ( !v17 || (v18 = 1, *(_DWORD *)(v17 + 8) != -1) )
      v18 = 0;
    if ( CTargetStats::Ready((CTargetStats *)&this[2088].m128i_u64[1], PerformanceCount.QuadPart, v18) || v16 )
    {
      v4 = v38[0];
      v21 = CLegacyRenderTarget::Render(this - 6, v38[0]);
      v6 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x149u, 0LL);
      if ( v8 )
      {
        if ( this[1224].m128i_i8[9] )
        {
          v38[1] = (struct CDrawingContext *)this[1927].m128i_i64[0];
          v38[0] = 0LL;
        }
        else
        {
          *(__m128i *)v38 = this[1926];
        }
        v25 = this + 4;
        if ( this == (__m128i *)96 )
          v25 = 0LL;
        v26 = CComputeScribbleRenderer::PostRender(v8, v25, v38);
        v27 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x14Fu, 0LL);
        if ( !v6 || v6 >= 0 && v27 < 0 )
          v6 = v27;
        v8 = 0LL;
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
        && g_LockAndReadTarget )
      {
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(this[6].m128i_i64[1] + 24) + 104LL))(this[6].m128i_i64[1] + 24);
        v30 = (char *)v4 + 24;
        if ( !v4 )
          v30 = 0LL;
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v29 + 112LL))(v29, v30);
      }
      CLegacyRenderTarget::Present((CLegacyRenderTarget *)&this[-6]);
    }
    else
    {
      if ( this[2091].m128i_i32[0] != 1 )
      {
        v22 = 0;
        if ( this[1942].m128i_i32[0] )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
          {
            if ( this[2090].m128i_i64[1] )
              v28 = this[2104].m128i_u32[1];
            else
              v28 = 0LL;
            McTemplateU0t_EventWriteTransfer(
              (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
              (__int64)&RENDERTARGET_RENDERSKIPPED,
              v28);
          }
          v22 = 1;
        }
        v23 = CLegacyRenderTarget::PresentNeeded((CLegacyRenderTarget *)&this[-6]);
        v24 = v22 | 2;
        if ( !v23 )
          v24 = v22;
        if ( v24 )
          ScheduleCompositionPass(0, v24);
      }
      v4 = v38[0];
    }
    CLegacyRenderTarget::CheckForMajorityScreenVideoNotifications((CLegacyRenderTarget *)&this[-6]);
    if ( v8 )
    {
      LOBYTE(v19) = this[1224].m128i_i8[9];
      CMonitorTransform::GetClipBox(&this[1924].m128i_u64[1], v39, v19);
      v31 = this + 4;
      if ( this == (__m128i *)96 )
        v31 = 0LL;
      v33 = CComputeScribbleRenderer::PostRender(v8, v31, v39);
      v34 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x17Bu, 0LL);
      if ( !v6 || v6 >= 0 && v34 < 0 )
        v6 = v34;
    }
    if ( (_QWORD)v36 )
      std::_Deallocate<16,0>((_QWORD *)v36, (v37 - v36) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
    && g_LockAndReadTarget )
  {
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(this[6].m128i_i64[1] + 24) + 104LL))(this[6].m128i_i64[1] + 24);
    if ( v4 )
      v2 = (char *)v4 + 24;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 112LL))(v20, v2);
  }
  return (unsigned int)v6;
}
