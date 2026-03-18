/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802375F0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x1802929EC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV2@2@Z @ 0x1800270F0 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800693EC (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800696C0 (-GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18007A680 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800BC1A0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1800C5DA0 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB180 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800F5410 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5A70 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180100D00 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014CE90 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z @ 0x1801B0234 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1801B0270 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1801B0C50 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x1801EC3A8 (--0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180266F20 (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POIN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CWindowOcclusionInfo *a3,
        struct IBitmapResource *a4,
        const struct CShape *a5,
        char a6,
        int a7)
{
  int v7; // eax
  int v10; // ebx
  int EffectiveBounds; // eax
  unsigned int v13; // edi
  int v14; // eax
  double v15; // xmm2_8
  struct CCompositionSurfaceBitmap *CurrentFlip; // rax
  int *v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  const struct CShape *v21; // r13
  struct CCompositionSurfaceBitmap *v22; // rax
  int v23; // eax
  int v24; // r9d
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  int v28; // r9d
  int v29; // eax
  struct CCompositionSurfaceBitmap *v30; // rax
  int *v31; // rax
  int v32; // eax
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  unsigned int v35; // [rsp+20h] [rbp-E0h]
  char v36; // [rsp+30h] [rbp-D0h]
  char v37; // [rsp+31h] [rbp-CFh]
  struct CShape *v38; // [rsp+38h] [rbp-C8h] BYREF
  CRectanglesShape *v39; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v40; // [rsp+48h] [rbp-B8h]
  __int128 v41; // [rsp+50h] [rbp-B0h] BYREF
  float v42[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct D2D_RECT_F v43; // [rsp+B0h] [rbp-50h] BYREF
  struct D2D_RECT_F v44; // [rsp+C0h] [rbp-40h] BYREF
  char v45; // [rsp+D0h] [rbp-30h]
  struct tagRECT v46; // [rsp+D8h] [rbp-28h] BYREF
  char v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+F0h] [rbp-10h] BYREF
  int v49; // [rsp+F4h] [rbp-Ch]
  _BYTE v50[64]; // [rsp+130h] [rbp+30h] BYREF

  v7 = *((_DWORD *)this + 193);
  v38 = a5;
  v37 = 0;
  v40 = v7 & 1;
  v36 = 0;
  v10 = 0;
  v42[16] = 0.0;
  v48 = 0;
  v41 = 0LL;
  v44 = 0LL;
  EffectiveBounds = CWindowNode::GetEffectiveBounds((__int64)this, (__int64 *)a5, (int *)&v41, 0LL);
  v13 = EffectiveBounds;
  if ( EffectiveBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, EffectiveBounds, 0x45Au, 0LL);
    return v13;
  }
  v14 = CWindowNode::ApplyTextureToLocalTransform(this, (__int64 *)a4, (CMILMatrix *)v42, &v44);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x45Du, 0LL);
    return v13;
  }
  if ( !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(&v41) && !IsEmpty(&v44) )
  {
    v43 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v42, &v44, &v43.left);
    *(_QWORD *)&v15 = COERCE_UNSIGNED_INT((float)SHIDWORD(v41));
    if ( (float)(int)v41 > v43.left )
      v43.left = (float)(int)v41;
    if ( (float)SDWORD1(v41) > v43.top )
      v43.top = (float)SDWORD1(v41);
    if ( v43.right > (float)SDWORD2(v41) )
      v43.right = (float)SDWORD2(v41);
    if ( v43.bottom > *(float *)&v15 )
      v43.bottom = (float)SHIDWORD(v41);
    if ( IsEmpty(&v43) )
    {
      v43.bottom = 0.0;
      v43.right = 0.0;
      v43.top = 0.0;
      v43.left = 0.0;
    }
    if ( !CDrawingContext::IsOccluded((__int64)a2, &v43.left, a7) )
    {
      CurrentFlip = CWindowNode::GetCurrentFlipExSurface(this);
      if ( a4 == (struct IBitmapResource *)(((unsigned __int64)CurrentFlip + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)CurrentFlip >> 64)) )
      {
        v44 = 0LL;
        if ( (unsigned __int8)CDrawingContext::DrawAsOverlay(a2, a4) )
        {
          v17 = PixelAlign(&v46.left, (unsigned int *)&v43, v15);
          v18 = CWindowNode::RenderRevealBorder((__int64)this, (__int64)a2, v17, (__int64)a5);
          v13 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x472u, 0LL);
            return v13;
          }
          if ( TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(&v44) )
            return v13;
          v19 = CDrawingContext::PushOverlayClip(a2);
          v13 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x479u, 0LL);
            return v13;
          }
          v37 = 1;
        }
        *(_QWORD *)&v15 = (unsigned int)_xmm;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v42[0] - 1.0) & _xmm) >= 0.0000011920929
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v42[5] - 1.0) & _xmm) >= 0.0000011920929 )
        {
          v10 = 2;
          v49 = 1;
          v48 = 2;
        }
      }
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v50, &v43);
      v39 = 0LL;
      if ( a5 )
      {
        *(_QWORD *)&v44.right = 0LL;
        *(_QWORD *)&v44.left = &v39;
        v45 = 1;
        v13 = CShape::Combine((__int64)v50, v20, (__int64)a5, 0LL, 1, &v44.right);
        wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v44);
        if ( (v13 & 0x80000000) != 0 )
        {
          v24 = v13;
          v34 = 1179;
          goto LABEL_71;
        }
        v21 = v39;
      }
      else
      {
        v21 = (const struct CShape *)v50;
      }
      v46 = 0LL;
      v44 = 0LL;
      if ( CWindowNode::GetAlphaMarginsRects((__int64)this, a6, &v41, &v46.left, (int *)&v44) && v40 )
      {
        v22 = CWindowNode::GetCurrentFlipExSurface(this);
        if ( a4 != (struct IBitmapResource *)(((unsigned __int64)v22 + 72) & -(__int64)(v22 != 0LL))
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 4) + 128LL))(*((_QWORD *)a2 + 4))
          && *((_BYTE *)a2 + 7938) )
        {
          v10 |= 2u;
          v49 = -16777215;
          v48 = v10;
        }
        if ( !v10 )
        {
LABEL_42:
          if ( !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(&v46)
            && !(unsigned __int8)CDrawingContext::IsOccluded((__int64)a2, (__int64)&v46) )
          {
            v38 = 0LL;
            CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v48, &v46);
            *(_QWORD *)&v46.right = 0LL;
            *(_QWORD *)&v46.left = &v38;
            v47 = 1;
            v13 = CShape::Combine((__int64)&v48, v25, (__int64)v21, 0LL, 1, &v46.right);
            wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v46);
            if ( (v13 & 0x80000000) != 0 )
            {
              v35 = 1241;
              goto LABEL_57;
            }
            v26 = CDrawingContext::FillShapeWithBitmap(a2, a4, (const struct CMILMatrix *)v42, v38, 0, a7);
            v13 = v26;
            if ( v26 < 0 )
            {
              v35 = 1249;
LABEL_53:
              v28 = v26;
LABEL_54:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, v35, 0LL);
              goto LABEL_55;
            }
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v48);
            std::unique_ptr<CShape>::~unique_ptr<CShape>(&v38);
          }
          if ( TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(&v44)
            || (unsigned __int8)CDrawingContext::IsOccluded((__int64)a2, (__int64)&v44) )
          {
LABEL_68:
            std::unique_ptr<CShape>::~unique_ptr<CShape>(&v39);
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v50);
            if ( v36 )
              CDrawingContext::PopRenderOptionsInternal(a2, 1);
            goto LABEL_72;
          }
          v38 = 0LL;
          CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v48, (const struct tagRECT *)&v44);
          *(_QWORD *)&v44.right = 0LL;
          *(_QWORD *)&v44.left = &v38;
          v45 = 1;
          v13 = CShape::Combine((__int64)&v48, v27, (__int64)v21, 0LL, 1, &v44.right);
          wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v44);
          if ( (v13 & 0x80000000) == 0 )
          {
            v26 = CDrawingContext::FillShapeWithBitmap(a2, a4, (const struct CMILMatrix *)v42, v38, v40, a7);
            v13 = v26;
            if ( v26 >= 0 )
            {
LABEL_55:
              CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v48);
              std::unique_ptr<CShape>::~unique_ptr<CShape>(&v38);
              goto LABEL_68;
            }
            v35 = 1269;
            goto LABEL_53;
          }
          v35 = 1262;
LABEL_57:
          v28 = v13;
          goto LABEL_54;
        }
        v23 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v48, 1);
        v13 = v23;
        if ( v23 >= 0 )
        {
          v36 = 1;
          goto LABEL_42;
        }
        v34 = 1227;
        goto LABEL_41;
      }
      if ( v10 )
      {
        v23 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v48, 1);
        v13 = v23;
        if ( v23 < 0 )
        {
          v34 = 1195;
LABEL_41:
          v24 = v23;
LABEL_71:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, v34, 0LL);
          std::unique_ptr<CShape>::~unique_ptr<CShape>(&v39);
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v50);
LABEL_72:
          if ( v37 )
            CDrawingContext::PopGpuClipRectInternal(a2, 0);
          return v13;
        }
        v36 = 1;
      }
      v29 = CDrawingContext::FillShapeWithBitmap(a2, a4, (const struct CMILMatrix *)v42, v21, v40, a7);
      v13 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x4B3u, 0LL);
      }
      else
      {
        v30 = CWindowNode::GetCurrentFlipExSurface(this);
        if ( a4 == (struct IBitmapResource *)(((unsigned __int64)v30 + 72) & -(__int64)(v30 != 0LL)) )
        {
          v31 = PixelAlign((int *)&v44, (unsigned int *)&v43, v15);
          v32 = CWindowNode::RenderRevealBorder((__int64)this, (__int64)a2, v31, (__int64)v38);
          v13 = v32;
          if ( v32 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x4B8u, 0LL);
        }
      }
      goto LABEL_68;
    }
  }
  return v13;
}
