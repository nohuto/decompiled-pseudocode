/*
 * XREFs of ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18006976C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801D3160 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004DD48 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180069FD4 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV-$TMilR.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C5B90 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1801ED864 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x180225920 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x18028D3F4 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x18028D570 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18028D600 (-GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResourc.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x18028D778 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlur(CProjectedShadow *this, struct CDrawingContext *a2)
{
  float v2; // xmm0_4
  int v3; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int ApproxBlurIntermediate; // eax
  CCachedVisualImage *v9; // rcx
  struct CBrush *v10; // r15
  struct CBrush *v11; // rbp
  float v12; // xmm1_4
  float v13; // xmm2_4
  __int64 v14; // rdx
  int v15; // eax
  struct CBrush *v16; // r8
  int v17; // edx
  int NineGridBrush; // eax
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  struct CBrush *v22; // r8
  int v23; // edx
  int v24; // eax
  int v25; // eax
  struct CBrush **v26; // rsi
  __int64 v27; // rbx
  int CrossFadeGraph; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  struct CBrush *v34; // r8
  int v35; // edx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  CCachedVisualImage *v40; // rcx
  __int64 v41; // r8
  int v42; // edx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  double BlurForBoundary; // xmm0_8
  __int64 v48; // rdx
  int v49; // eax
  CCachedVisualImage *v50; // rcx
  __int64 v51; // r8
  int v52; // edx
  int v53; // eax
  int v54; // eax
  __int64 v55; // rdx
  struct CSurfaceBrush *v56; // r8
  int SurfaceBrush; // eax
  int v58; // eax
  char v60; // [rsp+80h] [rbp+8h] BYREF
  int v61; // [rsp+90h] [rbp+18h] BYREF
  float v62; // [rsp+98h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 63);
  v6 = 0;
  if ( v3 == 5 )
  {
    if ( !CProjectedShadow::s_cp2xBlurAsset )
    {
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp2xBlurAsset);
      ApproxBlurIntermediate = CProjectedShadow::GenerateApproxBlurIntermediate(
                                 a2,
                                 v7,
                                 &CProjectedShadow::s_cp2xBlurAsset,
                                 &CProjectedShadow::s_rc2xBlur);
      v6 = ApproxBlurIntermediate;
      if ( ApproxBlurIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ApproxBlurIntermediate, 0x34Bu, 0LL);
      }
      else
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v9 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v9 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v9);
      }
    }
    return v6;
  }
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0.0;
  v13 = 0.0;
  switch ( v3 )
  {
    case 2:
      if ( !CProjectedShadow::s_cpHalfBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cpHalfBlurAsset);
        v15 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v14,
                &CProjectedShadow::s_cpHalfBlurAsset,
                &CProjectedShadow::s_rcHalfBlur);
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x35Fu, 0LL);
          return v6;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
      }
      v16 = CProjectedShadow::s_cpHalfBlurNineGrid;
      if ( !CProjectedShadow::s_cpHalfBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
        NineGridBrush = CProjectedShadow::GenerateNineGridBrush(
                          (_DWORD)this,
                          v17,
                          CProjectedShadow::s_cpHalfBlurAsset,
                          (unsigned int)&CProjectedShadow::s_rcHalfBlur,
                          (__int64)&CProjectedShadow::s_cpHalfBlurNineGrid);
        v6 = NineGridBrush;
        if ( NineGridBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NineGridBrush, 0x368u, 0LL);
          return v6;
        }
        v16 = CProjectedShadow::s_cpHalfBlurNineGrid;
      }
      v19 = CProjectedShadow::AdjustNineGridBrush(this, a2, v16, &CProjectedShadow::s_rcHalfBlur);
      v6 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x36Du, 0LL);
        return v6;
      }
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp1xBlurAsset);
        v21 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v20,
                &CProjectedShadow::s_cp1xBlurAsset,
                &CProjectedShadow::s_rc1xBlur);
        v6 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x374u, 0LL);
          return v6;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v22 = CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        v24 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v23,
                CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc1xBlur,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v6 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x37Du, 0LL);
          return v6;
        }
        v22 = CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v25 = CProjectedShadow::AdjustNineGridBrush(this, a2, v22, &CProjectedShadow::s_rc1xBlur);
      v6 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x382u, 0LL);
        return v6;
      }
      v13 = *((float *)this + 96);
      v10 = CProjectedShadow::s_cpHalfBlurNineGrid;
      v12 = v13 * 0.5;
      v11 = CProjectedShadow::s_cp1xBlurNineGrid;
      goto LABEL_27;
    case 3:
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp1xBlurAsset);
        v33 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v32,
                &CProjectedShadow::s_cp1xBlurAsset,
                &CProjectedShadow::s_rc1xBlur);
        v6 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x391u, 0LL);
          return v6;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v34 = CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        v36 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v35,
                CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc1xBlur,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v6 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x39Au, 0LL);
          return v6;
        }
        v34 = CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v37 = CProjectedShadow::AdjustNineGridBrush(this, a2, v34, &CProjectedShadow::s_rc1xBlur);
      v6 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x39Fu, 0LL);
        return v6;
      }
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp2xBlurAsset);
        v39 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v38,
                &CProjectedShadow::s_cp2xBlurAsset,
                &CProjectedShadow::s_rc2xBlur);
        v6 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x3A6u, 0LL);
          return v6;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v40 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v40 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v40);
      }
      v41 = CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v43 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v42,
                CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc2xBlur,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v6 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x3B0u, 0LL);
          return v6;
        }
        v41 = CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v44 = CProjectedShadow::AdjustNineGridBrush(this, a2, v41, &CProjectedShadow::s_rc2xBlur);
      v6 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x3B5u, 0LL);
        return v6;
      }
      v10 = CProjectedShadow::s_cp1xBlurNineGrid;
      v11 = (struct CBrush *)CProjectedShadow::s_cp2xBlurNineGrid;
      CProjectedShadow::GetBlurForBoundary(this, 1LL);
      v46 = 2LL;
      break;
    case 4:
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp2xBlurAsset);
        v49 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v48,
                &CProjectedShadow::s_cp2xBlurAsset,
                &CProjectedShadow::s_rc2xBlur);
        v6 = v49;
        if ( v49 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x3C4u, 0LL);
          return v6;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v50 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v50 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v50);
      }
      v51 = CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v53 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v52,
                CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc2xBlur,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v6 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x3CEu, 0LL);
          return v6;
        }
        v51 = CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v54 = CProjectedShadow::AdjustNineGridBrush(this, a2, v51, &CProjectedShadow::s_rc2xBlur);
      v6 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x3D3u, 0LL);
        return v6;
      }
      v56 = CProjectedShadow::s_cp2xBlurSurface;
      if ( !CProjectedShadow::s_cp2xBlurSurface )
      {
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        SurfaceBrush = CProjectedShadow::GenerateSurfaceBrush(
                         this,
                         v55,
                         CProjectedShadow::s_cp2xBlurAsset,
                         &CProjectedShadow::s_rc2xBlur,
                         &CProjectedShadow::s_cp2xBlurSurface);
        v6 = SurfaceBrush;
        if ( SurfaceBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SurfaceBrush, 0x3DAu, 0LL);
          return v6;
        }
        v56 = CProjectedShadow::s_cp2xBlurSurface;
      }
      v58 = CProjectedShadow::AdjustSurfaceBrush(this, a2, v56);
      v6 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x3DEu, 0LL);
        return v6;
      }
      v10 = (struct CBrush *)CProjectedShadow::s_cp2xBlurNineGrid;
      v11 = CProjectedShadow::s_cp2xBlurSurface;
      CProjectedShadow::GetBlurForBoundary(this, 2LL);
      v46 = 3LL;
      break;
    default:
      goto LABEL_27;
  }
  v12 = v2;
  BlurForBoundary = CProjectedShadow::GetBlurForBoundary(v45, v46);
  v13 = *(float *)&BlurForBoundary;
LABEL_27:
  v26 = (struct CBrush **)((char *)this + 320);
  v62 = (float)(*((float *)this + 24) - v12) / (float)(v13 - v12);
  if ( *((struct CBrush **)this + 39) != v10 || *v26 != v11 )
  {
    v27 = *((_QWORD *)this + 46);
    if ( v27 )
    {
      *(_DWORD *)(v27 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v27 + 16, 24LL);
      *(_BYTE *)(v27 + 200) = 1;
      wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((char *)this + 368);
    }
  }
  if ( !*((_QWORD *)this + 46) )
  {
    CrossFadeGraph = CProjectedShadow::CreateCrossFadeGraph(this, v10, v11);
    v6 = CrossFadeGraph;
    if ( CrossFadeGraph < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CrossFadeGraph, 0x3F6u, 0LL);
      return v6;
    }
    *((_QWORD *)this + 39) = v10;
    *v26 = v11;
  }
  v29 = *((_QWORD *)this + 47);
  v60 = 0;
  v61 = 0;
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *, char *, int *))(*(_QWORD *)v29 + 32LL))(
          v29,
          0LL,
          69LL,
          (char *)this + 328,
          &v60,
          &v61);
  v6 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x400u, 0LL);
  }
  else
  {
    v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, float *, char *, int *))(**((_QWORD **)this + 47) + 32LL))(
            *((_QWORD *)this + 47),
            1LL,
            18LL,
            &v62,
            &v60,
            &v61);
    v6 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x401u, 0LL);
  }
  return v6;
}
