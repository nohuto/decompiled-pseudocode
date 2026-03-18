/*
 * XREFs of ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A05AC
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18021EFEC (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D07A8 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x180113AB0 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801749A0 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A00FC (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV-$TMilR.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x180231510 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x180298864 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x1802989E0 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180298A70 (-GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResourc.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180298BE8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlur(CProjectedShadow *this, struct CDrawingContext *a2)
{
  int v2; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int ApproxBlurIntermediate; // eax
  CResource *v8; // rcx
  struct CBrush *v9; // r15
  struct CBrush *v10; // rbp
  float v11; // xmm1_4
  float v12; // xmm2_4
  __int64 v13; // rdx
  int v14; // eax
  struct CBrush *v15; // r8
  int v16; // edx
  int NineGridBrush; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  struct CBrush *v21; // r8
  int v22; // edx
  int v23; // eax
  int v24; // eax
  struct CBrush **v25; // rsi
  __int64 v26; // rbx
  int CrossFadeGraph; // eax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  struct CBrush *v33; // r8
  int v34; // edx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  CResource *v39; // rcx
  __int64 v40; // r8
  int v41; // edx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  float BlurForBoundary; // xmm0_4
  __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // eax
  CResource *v49; // rcx
  __int64 v50; // r8
  int v51; // edx
  int v52; // eax
  int v53; // eax
  __int64 v54; // rdx
  struct CSurfaceBrush *v55; // r8
  int SurfaceBrush; // eax
  int v57; // eax
  char v59; // [rsp+80h] [rbp+8h] BYREF
  int v60; // [rsp+90h] [rbp+18h] BYREF
  float v61; // [rsp+98h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 63);
  v5 = 0;
  if ( v2 == 5 )
  {
    if ( !CProjectedShadow::s_cp2xBlurAsset )
    {
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp2xBlurAsset);
      ApproxBlurIntermediate = CProjectedShadow::GenerateApproxBlurIntermediate(
                                 a2,
                                 v6,
                                 &CProjectedShadow::s_cp2xBlurAsset,
                                 &CProjectedShadow::s_rc2xBlur);
      v5 = ApproxBlurIntermediate;
      if ( ApproxBlurIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ApproxBlurIntermediate, 0x34Bu, 0LL);
      }
      else
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v8 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v8 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8);
      }
    }
    return v5;
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0.0;
  v12 = 0.0;
  switch ( v2 )
  {
    case 2:
      if ( !CProjectedShadow::s_cpHalfBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cpHalfBlurAsset);
        v14 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v13,
                &CProjectedShadow::s_cpHalfBlurAsset,
                CProjectedShadow::s_rcHalfBlur);
        v5 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x35Fu, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
      }
      v15 = CProjectedShadow::s_cpHalfBlurNineGrid;
      if ( !CProjectedShadow::s_cpHalfBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
        NineGridBrush = CProjectedShadow::GenerateNineGridBrush(
                          (_DWORD)this,
                          v16,
                          CProjectedShadow::s_cpHalfBlurAsset,
                          (unsigned int)CProjectedShadow::s_rcHalfBlur,
                          (__int64)&CProjectedShadow::s_cpHalfBlurNineGrid);
        v5 = NineGridBrush;
        if ( NineGridBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NineGridBrush, 0x368u, 0LL);
          return v5;
        }
        v15 = CProjectedShadow::s_cpHalfBlurNineGrid;
      }
      v18 = CProjectedShadow::AdjustNineGridBrush(
              (__int64)this,
              (__int64)a2,
              (__int64)v15,
              CProjectedShadow::s_rcHalfBlur);
      v5 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x36Du, 0LL);
        return v5;
      }
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp1xBlurAsset);
        v20 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v19,
                &CProjectedShadow::s_cp1xBlurAsset,
                CProjectedShadow::s_rc1xBlur);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x374u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v21 = CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        v23 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v22,
                CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)CProjectedShadow::s_rc1xBlur,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v5 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x37Du, 0LL);
          return v5;
        }
        v21 = CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v24 = CProjectedShadow::AdjustNineGridBrush(
              (__int64)this,
              (__int64)a2,
              (__int64)v21,
              CProjectedShadow::s_rc1xBlur);
      v5 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x382u, 0LL);
        return v5;
      }
      v12 = *((float *)this + 96);
      v9 = CProjectedShadow::s_cpHalfBlurNineGrid;
      v11 = v12 * 0.5;
      v10 = CProjectedShadow::s_cp1xBlurNineGrid;
      goto LABEL_27;
    case 3:
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp1xBlurAsset);
        v32 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v31,
                &CProjectedShadow::s_cp1xBlurAsset,
                CProjectedShadow::s_rc1xBlur);
        v5 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x391u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v33 = CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        v35 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v34,
                CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)CProjectedShadow::s_rc1xBlur,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v5 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x39Au, 0LL);
          return v5;
        }
        v33 = CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v36 = CProjectedShadow::AdjustNineGridBrush(
              (__int64)this,
              (__int64)a2,
              (__int64)v33,
              CProjectedShadow::s_rc1xBlur);
      v5 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x39Fu, 0LL);
        return v5;
      }
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp2xBlurAsset);
        v38 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v37,
                &CProjectedShadow::s_cp2xBlurAsset,
                &CProjectedShadow::s_rc2xBlur);
        v5 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x3A6u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v39 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v39 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v39);
      }
      v40 = CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v42 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v41,
                CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc2xBlur,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v5 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x3B0u, 0LL);
          return v5;
        }
        v40 = CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v43 = CProjectedShadow::AdjustNineGridBrush((__int64)this, (__int64)a2, v40, &CProjectedShadow::s_rc2xBlur.left);
      v5 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x3B5u, 0LL);
        return v5;
      }
      v9 = CProjectedShadow::s_cp1xBlurNineGrid;
      v10 = (struct CBrush *)CProjectedShadow::s_cp2xBlurNineGrid;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, 1LL);
      v46 = 2LL;
      break;
    case 4:
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&CProjectedShadow::s_cp2xBlurAsset);
        v48 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v47,
                &CProjectedShadow::s_cp2xBlurAsset,
                &CProjectedShadow::s_rc2xBlur);
        v5 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x3C4u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v49 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v49 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v49);
      }
      v50 = CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v52 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v51,
                CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc2xBlur,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v5 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x3CEu, 0LL);
          return v5;
        }
        v50 = CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v53 = CProjectedShadow::AdjustNineGridBrush((__int64)this, (__int64)a2, v50, &CProjectedShadow::s_rc2xBlur.left);
      v5 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x3D3u, 0LL);
        return v5;
      }
      v55 = CProjectedShadow::s_cp2xBlurSurface;
      if ( !CProjectedShadow::s_cp2xBlurSurface )
      {
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        SurfaceBrush = CProjectedShadow::GenerateSurfaceBrush(
                         (__int64)this,
                         v54,
                         CProjectedShadow::s_cp2xBlurAsset,
                         &CProjectedShadow::s_rc2xBlur,
                         (struct IBitmapRealization *)&CProjectedShadow::s_cp2xBlurSurface);
        v5 = SurfaceBrush;
        if ( SurfaceBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SurfaceBrush, 0x3DAu, 0LL);
          return v5;
        }
        v55 = CProjectedShadow::s_cp2xBlurSurface;
      }
      v57 = CProjectedShadow::AdjustSurfaceBrush(this, a2, v55);
      v5 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v57, 0x3DEu, 0LL);
        return v5;
      }
      v9 = (struct CBrush *)CProjectedShadow::s_cp2xBlurNineGrid;
      v10 = CProjectedShadow::s_cp2xBlurSurface;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, 2LL);
      v46 = 3LL;
      break;
    default:
      goto LABEL_27;
  }
  v11 = BlurForBoundary;
  v12 = CProjectedShadow::GetBlurForBoundary(v44, v46);
LABEL_27:
  v25 = (struct CBrush **)((char *)this + 320);
  v61 = (float)(*((float *)this + 24) - v11) / (float)(v12 - v11);
  if ( *((struct CBrush **)this + 39) != v9 || *v25 != v10 )
  {
    v26 = *((_QWORD *)this + 46);
    if ( v26 )
    {
      *(_DWORD *)(v26 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v26 + 16, 0x18u);
      *(_BYTE *)(v26 + 200) = 1;
      wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((_QWORD *)this + 46);
    }
  }
  if ( !*((_QWORD *)this + 46) )
  {
    CrossFadeGraph = CProjectedShadow::CreateCrossFadeGraph(this, v9, v10);
    v5 = CrossFadeGraph;
    if ( CrossFadeGraph < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CrossFadeGraph, 0x3F6u, 0LL);
      return v5;
    }
    *((_QWORD *)this + 39) = v9;
    *v25 = v10;
  }
  v28 = *((_QWORD *)this + 47);
  v59 = 0;
  v60 = 0;
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *, char *, int *))(*(_QWORD *)v28 + 32LL))(
          v28,
          0LL,
          69LL,
          (char *)this + 328,
          &v59,
          &v60);
  v5 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x400u, 0LL);
  }
  else
  {
    v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, float *, char *, int *))(**((_QWORD **)this + 47) + 32LL))(
            *((_QWORD *)this + 47),
            1LL,
            18LL,
            &v61,
            &v59,
            &v60);
    v5 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x401u, 0LL);
  }
  return v5;
}
