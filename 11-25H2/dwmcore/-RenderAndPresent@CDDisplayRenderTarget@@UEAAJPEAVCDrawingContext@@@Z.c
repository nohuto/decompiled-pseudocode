/*
 * XREFs of ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x180282DF0 (-RenderAndPresent@CDDisplayRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CDDisplayRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z @ 0x180282E00 (-RenderAndPresent@CDDisplayRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800C5BD8 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C6C14 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C6E9C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800C865C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800C9348 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800C9618 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800C9F20 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801DFEB0 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x1801E10E0 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x1802073AC (-AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024F984 (-PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@IUMilRectU@@UMil3D.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderAndPresent(CDDisplayRenderTarget *this, struct CDrawingContext *a2)
{
  __int64 v2; // r15
  char *v3; // rbx
  CDDisplayRenderTarget *v5; // rdi
  int v6; // esi
  __int64 v7; // r15
  CDDisplayRenderTarget *v8; // r12
  __int64 v9; // r14
  const struct D2D_RECT_F *v10; // r8
  __int64 v11; // rax
  const struct D2D_RECT_F *v12; // rdx
  const struct D2D_RECT_F *v13; // r9
  const struct D2D_RECT_F *v14; // rdx
  __int64 v15; // rax
  bool v16; // r8
  int v17; // eax
  int v18; // eax
  int v19; // r14d
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // r14d
  bool v24; // al
  DWORD v25; // edx
  char *v26; // rdx
  int v27; // eax
  int v28; // r14d
  char *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  char *v33; // rdx
  int v35; // eax
  int v36; // r14d
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-40h] BYREF
  __int128 v38; // [rsp+38h] [rbp-38h]
  __int64 v39; // [rsp+48h] [rbp-28h]
  __int128 v40; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 14);
  v3 = 0LL;
  v5 = this;
  v6 = 0;
  if ( v2 && *((_QWORD *)this + 12) && *((_DWORD *)this + 8368) != 1 )
  {
    v7 = *(_QWORD *)(v2 + 264);
    v8 = (CDDisplayRenderTarget *)((char *)this - 96);
    if ( v7 )
      CDDisplayRenderTarget::AddComputeScribbleDirtyRects((CDDisplayRenderTarget *)((char *)this - 96));
    v9 = *((_QWORD *)v5 + 12);
    v10 = (const struct D2D_RECT_F *)((char *)v5 + 30808);
    v39 = 0LL;
    v38 = 0LL;
    if ( !*(_BYTE *)(v9 + 2436) )
    {
      v12 = (const struct D2D_RECT_F *)(v9 + 132);
      if ( v9 == -132 && MEMORY[0xFFFFFFFFFFFFFFFC] )
      {
LABEL_10:
        `gsl::details::get_terminate_handler'::`2'::handler(this);
        __debugbreak();
      }
      v13 = &v12[*(unsigned int *)(v9 + 128)];
      while ( v12 != v13
           && (IsEmpty(v10)
            || IsEmpty(v14)
            || v10->right <= v14->left
            || v14->right <= v10->left
            || v10->bottom <= v14->top
            || v14->bottom <= v10->top) )
        v12 = v14 + 1;
    }
    COverlayContext::ApplyConfiguration((CDDisplayRenderTarget *)((char *)v5 + 128));
    this = (CDDisplayRenderTarget *)((char *)v5 + 31064);
    v11 = (__int64)(*((_QWORD *)&v38 + 1) - v38) >> 3;
    *(_QWORD *)&v40 = v11;
    if ( v11 == -1 )
      goto LABEL_10;
    *((_QWORD *)&v40 + 1) = v38;
    if ( !(_QWORD)v38 )
    {
      if ( v11 )
        goto LABEL_10;
    }
    CMonitorDirty::AddDirtyRegion(this, v9 + 112, &v40);
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v15 = *((_QWORD *)v5 + 4225);
    if ( !v15 || (v16 = 1, *(_DWORD *)(v15 + 8) != -1) )
      v16 = 0;
    if ( CTargetStats::Ready((CDDisplayRenderTarget *)((char *)v5 + 33432), PerformanceCount.QuadPart, v16) )
    {
      v17 = CDDisplayRenderTarget::Render(v8, a2);
      v6 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x25Du, 0LL);
      if ( v7 )
      {
        if ( *((_BYTE *)v5 + 19601) )
        {
          *((_QWORD *)&v40 + 1) = *((_QWORD *)v5 + 3855);
          *(_QWORD *)&v40 = 0LL;
        }
        else
        {
          v40 = *(_OWORD *)((char *)v5 + 30824);
        }
        v26 = (char *)v5 + 64;
        if ( !v8 )
          v26 = 0LL;
        v27 = CComputeScribbleRenderer::PostRender(v7, v26, &v40);
        v28 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x263u, 0LL);
        if ( !v6 || v6 >= 0 && v28 < 0 )
          v6 = v28;
        v7 = 0LL;
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
        && g_LockAndReadTarget )
      {
        v29 = (char *)a2 + 24;
        if ( !a2 )
          v29 = 0LL;
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 14) + 464LL)
                                    + 8LL * *(unsigned int *)(*((_QWORD *)v5 + 14) + 524LL))
                        + 216LL);
        v31 = (v30 + 16) & -(__int64)(v30 != 0);
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 112LL))(v31, v29);
      }
      v18 = CDDisplayRenderTarget::Present(v8);
      v19 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x270u, 0LL);
      if ( !v6 || v6 >= 0 && v19 < 0 )
        v6 = v19;
    }
    else if ( *((_DWORD *)v5 + 8368) != 1 )
    {
      v23 = 0;
      if ( *((_DWORD *)v5 + 7770) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
        {
          if ( *((_QWORD *)v5 + 4183) )
            v32 = *((unsigned int *)v5 + 8421);
          else
            v32 = 0LL;
          McTemplateU0t_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&RENDERTARGET_RENDERSKIPPED,
            v32);
        }
        v23 = 1;
      }
      v24 = CDDisplayRenderTarget::PresentNeeded(v8);
      v25 = v23 | 2;
      if ( !v24 )
        v25 = v23;
      if ( v25 )
        ScheduleCompositionPass(0, v25);
    }
    CFSVPProvider::CheckForFullscreenVideoNotifications((CDDisplayRenderTarget *)((char *)v5 + 33720));
    if ( v7 )
    {
      LOBYTE(v20) = *((_BYTE *)v5 + 19601);
      CMonitorTransform::GetClipBox((char *)v5 + 30800, &v40, v20);
      v33 = (char *)v5 + 64;
      if ( !v8 )
        v33 = 0LL;
      v35 = CComputeScribbleRenderer::PostRender(v7, v33, &v40);
      v36 = v35;
      if ( v35 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x28Fu, 0LL);
      if ( !v6 || v6 >= 0 && v36 < 0 )
        v6 = v36;
    }
    if ( (_QWORD)v38 )
      std::_Deallocate<16,0>((_QWORD *)v38, (v39 - v38) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
    && g_LockAndReadTarget )
  {
    if ( a2 )
      v3 = (char *)a2 + 24;
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 14) + 464LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)v5 + 14) + 524LL))
                    + 216LL);
    v22 = (v21 + 16) & -(__int64)(v21 != 0);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 112LL))(v22, v3);
  }
  return (unsigned int)v6;
}
