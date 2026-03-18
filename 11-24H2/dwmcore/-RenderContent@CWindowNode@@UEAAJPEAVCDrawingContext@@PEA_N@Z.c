/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802375F0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800165D0 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006A30C (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180079C30 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18009E720 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 *     ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800A00E0 (-UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@Z @ 0x1801EEA74 (-DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x1802929EC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, struct CDrawingContext *a2, bool *a3)
{
  bool v3; // sf
  CGlobalComposition *v6; // rax
  const struct CShape *v7; // rsi
  int SpriteClipShape; // eax
  int v9; // edi
  int v10; // eax
  __int64 v12; // rax
  struct CVisualTree *v13; // r14
  struct COcclusionInfo *OcclusionInfo; // r15
  unsigned int v15; // edi
  __int64 **TreeData; // rax
  int v17; // eax
  int v18; // r14d
  __int64 v19; // rdi
  _QWORD *v20; // rdi
  __int64 v21; // rax
  int v22; // r12d
  const struct CVisualTree *v23; // r8
  int v24; // eax
  CGeometry *v25; // rcx
  struct CVisualTree *v26; // rax
  struct IBitmapResource *v27; // r9
  int v28; // edi
  int v29; // eax
  int v30; // edi
  struct CVisualTree *v31; // [rsp+40h] [rbp-49h] BYREF
  char v32; // [rsp+48h] [rbp-41h]
  bool *v33; // [rsp+50h] [rbp-39h] BYREF
  char v34; // [rsp+58h] [rbp-31h]
  _QWORD v35[5]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v36[16]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v37; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v3 = *((char *)this + 106) < 0;
  v33 = a3;
  if ( v3 )
  {
    v6 = g_pComposition;
    if ( *((_BYTE *)g_pComposition + 6466) )
      *((_BYTE *)a2 + 7983) = 1;
    else
      *((_BYTE *)a2 + 7980) = 1;
    if ( *((_BYTE *)v6 + 6466) )
    {
      *a3 = 1;
      v33 = 0LL;
      v35[0] = &CRectanglesShape::`vftable';
      v35[2] = v36;
      v35[3] = v36;
      v35[4] = &v37;
      v34 = 0;
      v35[1] = 0LL;
      v37 = 0LL;
      if ( *((_QWORD *)this + 102) )
      {
        SpriteClipShape = CWindowNode::GetSpriteClipShape(this, (struct CShapePtr *)&v33);
        v9 = SpriteClipShape;
        if ( SpriteClipShape < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SpriteClipShape, 0x517u, 0LL);
          v7 = (const struct CShape *)v33;
LABEL_13:
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v35);
          if ( v34 && v7 )
            (**(void (__fastcall ***)(const struct CShape *, __int64))v7)(v7, 1LL);
          if ( v9 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x387,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
              (const char *)(unsigned int)v9);
          return (unsigned int)v9;
        }
        v7 = (const struct CShape *)v33;
      }
      else
      {
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v35, (const struct D2D_RECT_F *)this + 11, (__int64)a3);
        v7 = (const struct CShape *)v35;
      }
      v10 = CDrawingContext::FillShapeWithSolidColor(a2, v7, &_xmm);
      v9 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x51Cu, 0LL);
      goto LABEL_13;
    }
  }
  v12 = *((_QWORD *)a2 + 995);
  v13 = (struct CVisualTree *)*((_QWORD *)a2 + 993);
  OcclusionInfo = 0LL;
  v31 = v13;
  if ( v12 )
  {
    v15 = *(_DWORD *)(v12 + 1536);
    if ( v15 )
    {
      TreeData = CVisual::FindTreeData(this, v13);
      if ( TreeData )
        OcclusionInfo = CTreeData::GetOcclusionInfo((CTreeData *)TreeData, v15, 1);
    }
  }
  v17 = CWindowNode::RenderSpriteBitmap(this, a2, v13, OcclusionInfo);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x396u, 0LL);
  if ( (*((_BYTE *)this + 896) & 0x10) == 0 )
    goto LABEL_49;
  v19 = *((_QWORD *)this + 105);
  if ( (v19 & 2) != 0 )
  {
    v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
    v21 = *v20;
  }
  else
  {
    v21 = *((_QWORD *)this + 105) & 1LL;
    v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( v21 )
  {
    if ( v21 != 1 )
      v20 = (_QWORD *)v20[2];
  }
  else
  {
    v20 = 0LL;
  }
  v22 = 0;
  if ( OcclusionInfo )
  {
    v23 = 0LL;
    if ( g_pComposition )
      v23 = (const struct CVisualTree *)*((_QWORD *)g_pComposition + 111);
    if ( *((const struct CVisualTree **)OcclusionInfo + 2) != v23 )
    {
      COcclusionInfo::UpdateZFromValidParent(OcclusionInfo, v31, v23);
      v24 = *((_DWORD *)OcclusionInfo + 9);
      *((_DWORD *)OcclusionInfo + 12) = v24;
      *((_DWORD *)OcclusionInfo + 13) = v24;
    }
    v22 = *((_DWORD *)OcclusionInfo + 13);
  }
  CWindowNode::DxFlipConsumedTelemetry(this, a2, (struct CCompositionSurfaceBitmap *)v20);
  v25 = (CGeometry *)*((_QWORD *)this + 101);
  v31 = 0LL;
  v32 = 0;
  if ( v25 )
  {
    CGeometry::GetShapeData(v25, (const struct D2D_SIZE_F *)this + 18, &v31);
    v26 = v31;
  }
  else
  {
    v26 = (struct CVisualTree *)&CRectanglesShape::sc_emptyShape;
    v31 = (struct CVisualTree *)&CRectanglesShape::sc_emptyShape;
  }
  v27 = (struct IBitmapResource *)(v20 + 9);
  if ( !v20 )
    v27 = 0LL;
  v28 = CWindowNode::RenderImage(this, a2, OcclusionInfo, v27, v26, 0, v22);
  if ( v32 && v31 )
    (**(void (__fastcall ***)(struct CVisualTree *, __int64))v31)(v31, 1LL);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)(unsigned int)v28);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x397u, 0LL);
  }
  else
  {
LABEL_49:
    v28 = 0;
  }
  if ( !v18 || v18 >= 0 && v28 < 0 )
    v18 = v28;
  v29 = CVisual::RenderContent(this, a2, (struct CD3DDevice *(__fastcall *)(CD2DResource *__hidden))v33);
  v30 = v29;
  if ( v29 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x398u, 0LL);
  if ( !v18 || v18 >= 0 && v30 < 0 )
    return (unsigned int)v30;
  return (unsigned int)v18;
}
