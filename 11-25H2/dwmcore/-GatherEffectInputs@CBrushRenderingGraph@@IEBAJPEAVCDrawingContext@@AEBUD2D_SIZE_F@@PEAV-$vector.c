/*
 * XREFs of ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x180223154 (-RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingCo.c)
 * Callees:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x18000CE1C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180023C04 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800263E4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180073D20 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x18007D3C4 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?IsOfType@CBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D420 (-IsOfType@CBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z @ 0x18007D444 (--$_Reallocate@$0A@@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D700 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18007D7F8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18007D940 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007DEF0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x1800DDB60 (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18011567C (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ @ 0x1801328A4 (-CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x18016FEF0 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x18017A434 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x1801E67AC (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801EE49C (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAPEA.c)
 *     ?IsOfType@CBlurredWallpaperBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802132E0 (-IsOfType@CBlurredWallpaperBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180252C84 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18025AA8C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::GatherEffectInputs(
        CBrushRenderingGraph *this,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        _QWORD *a4)
{
  const struct D2D_SIZE_F *v5; // r13
  CDrawingContext *v6; // rsi
  struct CVisual *CurrentVisual; // r15
  unsigned __int64 v9; // rbx
  CBackdropVisualImage *BackdropVisualImage; // rax
  CBackdropVisualImage *v11; // rsi
  CDrawingContext *v12; // rcx
  int v13; // edi
  __int128 *EffectInput; // rax
  int v15; // r13d
  void *v16; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, __int64); // rax
  char v23; // al
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, __int64); // rax
  char v26; // al
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  char v29; // al
  __int64 v30; // r15
  __int64 v32; // rcx
  int WindowBackgroundTreatmentEffectInput; // eax
  unsigned int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rdx
  CDrawListBitmap *v37; // rax
  float v38; // xmm1_4
  __int64 DestToTexSpaceTransform; // rax
  void **v40; // rdi
  void **v41; // rax
  const char **DebugString; // rax
  DwmDbg::DbgString *v43; // rdi
  DwmDbg::DbgString *v44; // rax
  __int128 *v45; // rdx
  void *v48; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h]
  __int128 v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v51; // [rsp+50h] [rbp-B0h] BYREF
  const struct CVisualTreePath *v52; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v53[48]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h] BYREF
  char v55; // [rsp+A0h] [rbp-60h]
  __int128 v56; // [rsp+C0h] [rbp-40h]
  char v57; // [rsp+FBh] [rbp-5h]
  __int128 v58; // [rsp+100h] [rbp+0h] BYREF
  char v59; // [rsp+110h] [rbp+10h]
  __int128 v60; // [rsp+130h] [rbp+30h]
  char v61; // [rsp+169h] [rbp+69h]
  __int128 v62; // [rsp+170h] [rbp+70h] BYREF
  char v63; // [rsp+180h] [rbp+80h]
  __int128 v64; // [rsp+1A0h] [rbp+A0h]
  __int128 v65; // [rsp+1E0h] [rbp+E0h] BYREF
  char v66; // [rsp+1F0h] [rbp+F0h]
  __int128 v67; // [rsp+210h] [rbp+110h]
  _BYTE v68[112]; // [rsp+250h] [rbp+150h] BYREF
  void *retaddr; // [rsp+318h] [rbp+218h]

  v5 = a3;
  v6 = a2;
  CBrushRenderingGraph::CheckIfDisposed(this);
  v55 = 0;
  v54 = 0LL;
  v56 = 0LL;
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v54);
  memset_0(&v54, 0, 0x70uLL);
  v66 = 0;
  v65 = 0LL;
  v67 = 0LL;
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v65);
  memset_0(&v65, 0, 0x70uLL);
  v63 = 0;
  v62 = 0LL;
  v64 = 0LL;
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v62);
  memset_0(&v62, 0, 0x70uLL);
  CurrentVisual = CDrawingContext::GetCurrentVisual(v6);
  v9 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  if ( CVisual::HasSubtreeSurface(CurrentVisual) )
    v49 = *(_QWORD *)((*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)CurrentVisual + 224LL))(CurrentVisual) + 8);
  if ( *((_QWORD *)this + 26) )
  {
    if ( (**((_DWORD **)CurrentVisual + 29) & 0x400000) != 0 )
    {
      v36 = *((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual) + 39);
      if ( v36 )
        EffectInput::operator=(&v54, v36);
    }
    if ( !v57 )
    {
      v52 = (const struct CVisualTreePath *)*((_QWORD *)v6 + 996);
      BackdropVisualImage = CVisual::GetBackdropVisualImage(CurrentVisual, v52);
      v11 = BackdropVisualImage;
      if ( BackdropVisualImage && CBackdropVisualImage::CanUseAsEffectInput(BackdropVisualImage) )
      {
        EffectInput = (__int128 *)CBackdropVisualImage::GenerateEffectInput(v32, v68);
        v15 = 0;
        v13 = 1;
      }
      else
      {
        v59 = 0;
        v58 = 0LL;
        v60 = 0LL;
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v58);
        memset_0(&v58, 0, 0x70uLL);
        CDrawingContext::SetEffectInputToTransparentBlack(v12, v5, (struct EffectInput *)&v58);
        v13 = 0;
        v61 = 1;
        EffectInput = &v58;
        v15 = 2;
      }
      EffectInput::operator=(&v54, EffectInput);
      if ( v15 )
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v58);
      if ( v13 )
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v68);
      if ( dword_180404D50 )
      {
        if ( v11 )
        {
          if ( !CBackdropVisualImage::CanUseAsEffectInput(v11) )
          {
            v40 = (void **)DwmDbg::DbgString::DbgString((char **)&v50, "CBrushRenderingGraph::RenderSubgraphs");
            v41 = (void **)DwmDbg::DbgString::DbgString((char **)&v48, "BVI-FallbackToTransparentBlack");
            CBackdropVisualImage::LogEtwEvent((__int64)v11, v41, v40);
          }
        }
        else
        {
          DebugString = (const char **)CVisualTreePath::GetDebugString(v52, &v48);
          v43 = DwmDbg::DbgString::DbgString((char **)&v52, "bviPath=[%s]", *DebugString);
          v44 = DwmDbg::DbgString::DbgString((char **)&v50, "BrushRenderingGraph-FallbackToTransparentBlack-NoBVI");
          DwmDbg::Backdrops::LogBrushEtwEvent(v44, CurrentVisual, v43);
          std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v48);
        }
      }
      v5 = a3;
      v6 = a2;
    }
  }
  if ( !*((_BYTE *)this + 197)
    || (WindowBackgroundTreatmentEffectInput = CDrawingContext::GetBlurredWallpaperEffectInput(
                                                 v6,
                                                 v5,
                                                 (struct EffectInput *)&v65),
        v34 = WindowBackgroundTreatmentEffectInput,
        WindowBackgroundTreatmentEffectInput >= 0) )
  {
    if ( *((_BYTE *)this + 198) )
    {
      WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                               (const struct CVisualTree **)v6,
                                               v5,
                                               (struct EffectInput *)&v62);
      v34 = WindowBackgroundTreatmentEffectInput;
      if ( WindowBackgroundTreatmentEffectInput < 0 )
      {
        v35 = 948LL;
        goto LABEL_57;
      }
    }
    v16 = (void *)*((unsigned int *)this + 10);
    v17 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a4[2] - *a4) >> 4);
    v48 = v16;
    if ( (unsigned __int64)v16 > v17 )
      std::vector<EffectInput>::_Reallocate<0>(a4, &v48);
    v18 = 0LL;
    if ( !(_DWORD)v16 )
    {
LABEL_44:
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v62);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v65);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v54);
      return 0LL;
    }
    while ( 1 )
    {
      v19 = a4[1];
      if ( v19 == a4[2] )
      {
        std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(a4);
      }
      else
      {
        *(_QWORD *)v19 = 0LL;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_BYTE *)(v19 + 16) = 0;
        *(_OWORD *)(v19 + 48) = 0LL;
        a4[1] += 112LL;
      }
      if ( 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a4[1] - *a4) >> 4) <= (unsigned __int64)(unsigned int)v18 )
      {
        std::_Xout_of_range("invalid vector subscript");
        __debugbreak();
        JUMPOUT(0x18007D3BBLL);
      }
      v20 = *a4 + 112LL * (unsigned int)v18;
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v20);
      memset_0((void *)v20, 0, 0x70uLL);
      if ( *((_BYTE *)this + 200) )
        ModuleFailFastForHRESULT(-2003304315, retaddr);
      v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v18);
      if ( v21
        && ((v22 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 64LL), v22 == CBackdropBrush::IsOfType)
          ? (v23 = CBackdropBrush::IsOfType(v21, 9LL))
          : v22 != CSurfaceBrush::IsOfType
          ? (v22 != CBlurredWallpaperBackdropBrush::IsOfType
           ? (v23 = v22(v21, 9LL))
           : (v23 = CBlurredWallpaperBackdropBrush::IsOfType(v21, 9LL)))
          : (v23 = CSurfaceBrush::IsOfType(v21, 9LL)),
            v23) )
      {
        v45 = &v54;
      }
      else
      {
        if ( *((_BYTE *)this + 200) )
          ModuleFailFastForHRESULT(-2003304315, retaddr);
        v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v18);
        if ( v24
          && ((v25 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 64LL), v25 != CSurfaceBrush::IsOfType)
            ? (v25 != CNineGridBrush::IsOfType
             ? (v26 = v25(v24, 189LL))
             : (v26 = CNineGridBrush::IsOfType(v24, 189LL)))
            : (v26 = CSurfaceBrush::IsOfType(v24, 189LL)),
              v26) )
        {
          v45 = &v62;
        }
        else
        {
          if ( *((_BYTE *)this + 200) )
            ModuleFailFastForHRESULT(-2003304315, retaddr);
          v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v18);
          if ( !v27
            || ((v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 64LL),
                 v28 != CNineGridBrush::IsOfType)
              ? (v28 == CSurfaceBrush::IsOfType
               ? (v29 = CSurfaceBrush::IsOfType(v27, 15LL))
               : v28 != CColorBrush::IsOfType
               ? (v29 = v28(v27, 15LL))
               : (v29 = CColorBrush::IsOfType(v27, 15LL)))
              : (v29 = CNineGridBrush::IsOfType(v27, 15LL)),
                !v29) )
          {
            v30 = v49;
            if ( !v49 || (CBrushRenderingGraph::CheckIfDisposed(this), *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v18)) )
            {
              *(_DWORD *)(v20 + 48) = v18;
            }
            else
            {
              if ( !v9 )
              {
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v51, *(_QWORD *)(v30 + 8));
                v9 = v51;
              }
              v37 = CDrawListBitmap::CDrawListBitmap(
                      (CDrawListBitmap *)v53,
                      (struct IBitmapRealization *)((v9 + 8) & ((unsigned __int128)-(__int128)v9 >> 64)));
              CDrawListBitmap::operator=(v20, v37);
              CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v53);
              *(_QWORD *)&v50 = 0LL;
              *(_BYTE *)(v20 + 44) = 1;
              v38 = (float)*(int *)(v30 + 28);
              *((float *)&v50 + 2) = (float)*(int *)(v30 + 24);
              *((float *)&v50 + 3) = v38;
              *(_OWORD *)(v20 + 84) = v50;
              DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform(v30, v53, (unsigned int)v18);
              *(_OWORD *)(v20 + 48) = *(_OWORD *)DestToTexSpaceTransform;
              *(_OWORD *)(v20 + 64) = *(_OWORD *)(DestToTexSpaceTransform + 16);
              *(_DWORD *)(v20 + 80) = *(_DWORD *)(DestToTexSpaceTransform + 32);
              *(_BYTE *)(v20 + 104) = 0;
            }
            goto LABEL_41;
          }
          v45 = &v65;
        }
      }
      EffectInput::operator=(v20, v45);
LABEL_41:
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= (unsigned int)v16 )
      {
        if ( v9 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
        goto LABEL_44;
      }
    }
  }
  v35 = 941LL;
LABEL_57:
  wil::details::in1diag3::Return_Hr(
    (wil::details::in1diag3 *)retaddr,
    (void *)v35,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
    (const char *)(unsigned int)WindowBackgroundTreatmentEffectInput,
    (int)a2);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v62);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v65);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v54);
  return v34;
}
