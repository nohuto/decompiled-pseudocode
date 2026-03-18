/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180056CC0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800CE110 (-UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z @ 0x180103048 (-NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z.c)
 *     ?GetFlipExSurfaceZ@CWindowOcclusionInfo@@QEAAHPEBVCVisualTree@@@Z @ 0x180109E90 (-GetFlipExSurfaceZ@CWindowOcclusionInfo@@QEAAHPEBVCVisualTree@@@Z.c)
 *     ?GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x18010C05C (-GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z @ 0x18010C30C (-GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z.c)
 *     ?DxBltConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCGdiSpriteBitmap@@@Z @ 0x1801893EC (-DxBltConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@Z @ 0x1801899FC (-DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802131D4 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x18029E26C (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowNodeRender@@@details@wil@@QEAA_NXZ @ 0x18029E4B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowNodeRender@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::RenderContent(
        CWindowNode *this,
        const struct CVisualTree **a2,
        struct CD3DDevice *(__fastcall *a3)(CD2DResource *this))
{
  struct CD3DDevice *(__fastcall *v3)(CD2DResource *); // r13
  CGlobalComposition *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  const struct CVisualTree *v10; // rax
  const struct CVisualTree *v11; // r12
  struct CWindowOcclusionInfo *v12; // r15
  unsigned int v13; // r8d
  int v14; // eax
  int v15; // ebp
  __int64 v16; // rsi
  _QWORD *v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r13d
  const struct CVisualTree *v20; // r8
  int v21; // eax
  CGeometry *v22; // rcx
  struct CShape *v23; // rax
  struct IBitmapResource *v24; // r9
  int v25; // esi
  int v26; // eax
  int v27; // edi
  CGlobalComposition *v28; // rax
  int v29; // eax
  const struct CVisualTree *v30; // rax
  const struct CVisualTree *v31; // r15
  CWindowOcclusionInfo *WindowOcclusionInfo; // r12
  unsigned int v33; // r8d
  __int64 v34; // rsi
  _QWORD *v35; // rsi
  __int64 v36; // rax
  unsigned int SpriteBitmapZ; // r13d
  struct IBitmapResource *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // rax
  struct IBitmapResource *v42; // r9
  __int64 v43; // rsi
  _QWORD *v44; // rsi
  __int64 v45; // rax
  unsigned int Flip; // ebp
  CGeometry *v47; // rcx
  struct CShape *v48; // rax
  struct IBitmapResource *v49; // r9
  unsigned int v50; // [rsp+20h] [rbp-68h]
  struct CShape *v51; // [rsp+40h] [rbp-48h] BYREF
  char v52; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  const struct CVisualTree *v55; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowNodeRender>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WindowNodeRender>::GetImpl'::`2'::impl) )
  {
    if ( *((char *)this + 106) < 0
      && ((v28 = g_pComposition, *((_BYTE *)g_pComposition + 6490))
        ? (*((_BYTE *)a2 + 7983) = 1)
        : (*((_BYTE *)a2 + 7980) = 1),
          *((_BYTE *)v28 + 6490)) )
    {
      v29 = CWindowNode::RenderBlackContent(this, (struct CDrawingContext *)a2);
      v15 = v29;
      if ( v29 >= 0 )
      {
        *(_BYTE *)v3 = 1;
        return (unsigned int)v15;
      }
      v50 = 936;
    }
    else
    {
      v30 = a2[995];
      v31 = a2[993];
      WindowOcclusionInfo = 0LL;
      v55 = v31;
      if ( v30 )
      {
        v33 = *((_DWORD *)v30 + 384);
        if ( v33 )
          WindowOcclusionInfo = CWindowNode::GetWindowOcclusionInfo(this, v31, v33);
      }
      if ( (*((_BYTE *)this + 888) & 8) != 0 && !*((_BYTE *)this + 745) )
      {
        v34 = *((_QWORD *)this + 103);
        if ( (v34 & 2) != 0 )
        {
          v35 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
          v36 = *v35;
        }
        else
        {
          v36 = *((_QWORD *)this + 103) & 1LL;
          v35 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
        }
        if ( v36 )
        {
          if ( v36 != 1 )
            v35 = (_QWORD *)v35[2];
        }
        else
        {
          v35 = 0LL;
        }
        SpriteBitmapZ = 0;
        if ( WindowOcclusionInfo )
          SpriteBitmapZ = CWindowOcclusionInfo::GetSpriteBitmapZ(WindowOcclusionInfo, v31);
        v29 = CWindowNode::EnsureEffectiveSpriteClip(this);
        v15 = v29;
        if ( v29 < 0 )
        {
          v50 = 966;
          goto LABEL_109;
        }
        CWindowNode::DxBltConsumedTelemetry(this, (struct CDrawingContext *)a2, (struct CGdiSpriteBitmap *)v35);
        if ( CGdiSpriteBitmap::NeedsTiling((CGdiSpriteBitmap *)v35, *((_DWORD *)a2[5] + 240)) )
        {
          v39 = v35[57];
          v40 = 0LL;
          if ( (v35[58] - v39) >> 3 )
          {
            while ( 1 )
            {
              v41 = *(_QWORD *)(v39 + 8 * v40);
              v42 = (struct IBitmapResource *)(v41 + 72);
              if ( !v41 )
                v42 = 0LL;
              v29 = CWindowNode::RenderImage(
                      this,
                      (struct CDrawingContext *)a2,
                      WindowOcclusionInfo,
                      v42,
                      *((const struct CShape **)this + 110),
                      1,
                      SpriteBitmapZ);
              v15 = v29;
              if ( v29 < 0 )
                break;
              v39 = v35[57];
              if ( ++v40 >= (unsigned __int64)((v35[58] - v39) >> 3) )
                goto LABEL_83;
            }
            v50 = 989;
            goto LABEL_109;
          }
LABEL_83:
          v31 = v55;
        }
        else
        {
          v38 = (struct IBitmapResource *)(v35 + 13);
          if ( !v35 )
            v38 = 0LL;
          v29 = CWindowNode::RenderImage(
                  this,
                  (struct CDrawingContext *)a2,
                  WindowOcclusionInfo,
                  v38,
                  *((const struct CShape **)this + 110),
                  1,
                  SpriteBitmapZ);
          v15 = v29;
          if ( v29 < 0 )
          {
            v50 = 978;
            goto LABEL_109;
          }
        }
        v3 = a3;
      }
      if ( (*((_BYTE *)this + 888) & 0x10) != 0 )
      {
        v43 = *((_QWORD *)this + 104);
        if ( (v43 & 2) != 0 )
        {
          v44 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCuLL);
          v45 = *v44;
        }
        else
        {
          v45 = *((_QWORD *)this + 104) & 1LL;
          v44 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCuLL);
        }
        if ( v45 )
        {
          if ( v45 != 1 )
            v44 = (_QWORD *)v44[2];
        }
        else
        {
          v44 = 0LL;
        }
        Flip = 0;
        if ( WindowOcclusionInfo )
          Flip = CWindowOcclusionInfo::GetFlipExSurfaceZ(WindowOcclusionInfo, v31);
        CWindowNode::DxFlipConsumedTelemetry(
          this,
          (struct CDrawingContext *)a2,
          (struct CCompositionSurfaceBitmap *)v44);
        v47 = (CGeometry *)*((_QWORD *)this + 100);
        v51 = 0LL;
        v52 = 0;
        if ( v47 )
        {
          CGeometry::GetShapeData(v47, (const struct D2D_SIZE_F *)this + 18, (struct CShapePtr *)&v51);
          v48 = v51;
        }
        else
        {
          v48 = (struct CShape *)&CRectanglesShape::sc_emptyShape;
          v51 = (struct CShape *)&CRectanglesShape::sc_emptyShape;
        }
        v49 = (struct IBitmapResource *)(v44 + 9);
        if ( !v44 )
          v49 = 0LL;
        v15 = CWindowNode::RenderImage(this, (struct CDrawingContext *)a2, WindowOcclusionInfo, v49, v48, 0, Flip);
        if ( v52 && v51 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v51)(v51, 1LL);
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x3F4u, 0LL);
          return (unsigned int)v15;
        }
      }
      v29 = CVisual::RenderContent(this, (struct CDrawingContext *)a2, v3);
      v15 = v29;
      if ( v29 >= 0 )
        return (unsigned int)v15;
      v50 = 1015;
    }
LABEL_109:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, v50, 0LL);
    return (unsigned int)v15;
  }
  if ( *((char *)this + 106) >= 0
    || ((v6 = g_pComposition, *((_BYTE *)g_pComposition + 6490))
      ? (*((_BYTE *)a2 + 7983) = 1)
      : (*((_BYTE *)a2 + 7980) = 1),
        !*((_BYTE *)v6 + 6490)) )
  {
    v10 = a2[995];
    v11 = a2[993];
    v12 = 0LL;
    if ( v10 )
    {
      v13 = *((_DWORD *)v10 + 384);
      if ( v13 )
        v12 = CWindowNode::GetWindowOcclusionInfo(this, a2[993], v13);
    }
    v14 = CWindowNode::RenderSpriteBitmap(this, (struct CDrawingContext *)a2, v11, v12);
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x398u, 0LL);
    if ( (*((_BYTE *)this + 888) & 0x10) == 0 )
      goto LABEL_39;
    v16 = *((_QWORD *)this + 104);
    if ( (v16 & 2) != 0 )
    {
      v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
      v18 = *v17;
    }
    else
    {
      v18 = *((_QWORD *)this + 104) & 1LL;
      v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    if ( v18 )
    {
      if ( v18 != 1 )
        v17 = (_QWORD *)v17[2];
    }
    else
    {
      v17 = 0LL;
    }
    v19 = 0;
    if ( v12 )
    {
      v20 = 0LL;
      if ( g_pComposition )
        v20 = (const struct CVisualTree *)*((_QWORD *)g_pComposition + 111);
      if ( *((const struct CVisualTree **)v12 + 2) != v20 )
      {
        COcclusionInfo::UpdateZFromValidParent(v12, v11, v20);
        v21 = *((_DWORD *)v12 + 9);
        *((_DWORD *)v12 + 12) = v21;
        *((_DWORD *)v12 + 13) = v21;
      }
      v19 = *((_DWORD *)v12 + 13);
    }
    CWindowNode::DxFlipConsumedTelemetry(this, (struct CDrawingContext *)a2, (struct CCompositionSurfaceBitmap *)v17);
    v22 = (CGeometry *)*((_QWORD *)this + 100);
    v51 = 0LL;
    v52 = 0;
    if ( v22 )
    {
      CGeometry::GetShapeData(v22, (const struct D2D_SIZE_F *)this + 18, (struct CShapePtr *)&v51);
      v23 = v51;
    }
    else
    {
      v23 = (struct CShape *)&CRectanglesShape::sc_emptyShape;
      v51 = (struct CShape *)&CRectanglesShape::sc_emptyShape;
    }
    v24 = (struct IBitmapResource *)(v17 + 9);
    if ( !v17 )
      v24 = 0LL;
    v25 = CWindowNode::RenderImage(this, (struct CDrawingContext *)a2, v12, v24, v23, 0, v19);
    if ( v52 && v51 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v51)(v51, 1LL);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
        (const char *)(unsigned int)v25);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x399u, 0LL);
    }
    else
    {
LABEL_39:
      v25 = 0;
    }
    if ( !v15 || v15 >= 0 && v25 < 0 )
      v15 = v25;
    v26 = CVisual::RenderContent(this, (struct CDrawingContext *)a2, a3);
    v27 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x39Au, 0LL);
    if ( !v15 || v15 >= 0 && v27 < 0 )
      return (unsigned int)v27;
    return (unsigned int)v15;
  }
  *(_BYTE *)v3 = 1;
  v7 = CWindowNode::RenderBlackContent(this, (struct CDrawingContext *)a2);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x389,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
