/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180061124 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18000A038 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180015B0C (-CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001E410 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001F550 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18001F674 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18001F698 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001F770 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001F858 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180021758 (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003931C (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C49C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x180064008 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x1800640BC (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180067B90 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800777B0 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x18008AB74 (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18009743C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18009A4F0 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18009A50C (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?CreateTranslateTransformProxy@CCompositor@@QEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x1800B6228 (-CreateTranslateTransformProxy@CCompositor@@QEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800DA03C (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CThumbnailVisual *this)
{
  CBaseObject *v2; // rsi
  CBaseObject *v3; // r15
  CBaseObject *v4; // r14
  bool v5; // zf
  CBaseObject *v6; // r13
  HDC CompatibleDC; // r12
  int v8; // eax
  signed int v9; // ebx
  CRenderDataVisual *v10; // rcx
  __int64 v11; // rax
  CThumbnailVisual *v12; // rcx
  int v13; // eax
  int v14; // eax
  CBaseObject *v15; // rsi
  CBaseObject *v16; // rsi
  HBITMAP v17; // r13
  CBaseObject *v18; // rsi
  __int64 v20; // rcx
  int Brush; // eax
  int v22; // eax
  int RectangleGeometryProxy; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char IsImmersiveIconic; // bl
  COLORREF v28; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  int v31; // r9d
  HBRUSH SolidBrush; // rax
  int ScaleTransformProxy; // eax
  const struct _MARGINS *v34; // rdx
  int v35; // eax
  CScaleTransformProxy **v36; // rsi
  _DWORD *v37; // rax
  int v38; // ecx
  int v39; // r8d
  int v40; // eax
  int v41; // ecx
  __m128i v42; // xmm2
  int v43; // eax
  double v44; // xmm2_8
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  CTranslateTransformProxy **v51; // r14
  int TranslateTransformProxy; // eax
  int v53; // ecx
  int v54; // r8d
  CSecondaryWindowRepresentation *v55; // r10
  int v56; // eax
  double v57; // xmm2_8
  int v58; // r8d
  int v59; // r9d
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  CThumbnailAnimatedVisual *v68; // rcx
  int v69; // eax
  CBaseObject *v70; // rcx
  unsigned int v71; // [rsp+28h] [rbp-59h]
  char *v72; // [rsp+30h] [rbp-51h]
  char *v73; // [rsp+38h] [rbp-49h]
  char *v74; // [rsp+40h] [rbp-41h]
  CBaseObject *v75; // [rsp+48h] [rbp-39h] BYREF
  HBITMAP v76; // [rsp+50h] [rbp-31h] BYREF
  CBaseObject *v77; // [rsp+58h] [rbp-29h] BYREF
  CBaseObject *v78; // [rsp+60h] [rbp-21h] BYREF
  struct CPushTransformInstruction *v79; // [rsp+68h] [rbp-19h] BYREF
  struct CPushTransformInstruction *v80; // [rsp+70h] [rbp-11h] BYREF
  struct CDrawBitmapInstruction *v81; // [rsp+78h] [rbp-9h] BYREF
  struct IWICBitmap *v82; // [rsp+80h] [rbp-1h] BYREF
  CBaseObject *v83; // [rsp+88h] [rbp+7h] BYREF
  HBRUSH v84; // [rsp+90h] [rbp+Fh] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp+17h]
  RECT rc; // [rsp+A0h] [rbp+1Fh] BYREF

  v2 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v3 = 0LL;
  v81 = 0LL;
  v4 = 0LL;
  v79 = 0LL;
  v5 = *((_BYTE *)this + 432) == 0;
  v6 = 0LL;
  v77 = 0LL;
  CompatibleDC = 0LL;
  v80 = 0LL;
  v78 = 0LL;
  v84 = 0LL;
  v76 = 0LL;
  h = 0LL;
  v82 = 0LL;
  v75 = 0LL;
  v83 = 0LL;
  if ( v5 )
  {
    v24 = CRenderDataVisual::ClearInstructions(this);
    v9 = v24;
    if ( v24 >= 0 )
    {
      v70 = (CBaseObject *)*((_QWORD *)this + 42);
      if ( !v70 )
        goto LABEL_30;
      CBaseObject::Release(v70);
      *((_QWORD *)this + 42) = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x2F0u, 0LL);
    }
LABEL_16:
    if ( v2 )
    {
      CBaseObject::Release(v2);
      goto LABEL_18;
    }
    goto LABEL_30;
  }
  v8 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x263u, 0LL);
    goto LABEL_30;
  }
  if ( *((_QWORD *)this + 43) )
  {
    if ( CThumbnailVisual::_HasBorder(this) )
    {
      v26 = CRenderDataVisual::ClearInstructions(v10);
      v9 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x282u, 0LL);
        goto LABEL_30;
      }
    }
  }
  else
  {
    v74 = (char *)this + 344;
    v73 = (char *)this + 392;
    v72 = (char *)this + 368;
    v20 = *((_QWORD *)this + 42);
    *((_BYTE *)this + 434) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(v20, (char *)this + 344, (char *)this + 352, (char *)this + 360);
    v9 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x272u, 0LL);
      goto LABEL_30;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
    CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
    CThumbnailVisual::SetDirtyFlags(this, 0x40000u);
    v22 = CRenderDataVisual::ClearInstructions(this);
    v9 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x27Cu, 0LL);
      goto LABEL_30;
    }
  }
  if ( *((_DWORD *)this + 58) )
  {
LABEL_30:
    v17 = v76;
LABEL_31:
    v18 = v75;
    goto LABEL_32;
  }
  if ( !*((_QWORD *)this + 49) || (v11 = *((_QWORD *)this + 41)) == 0 || (*(_DWORD *)(v11 + 36) & 0x4000000) == 0 )
  {
    if ( !*((_QWORD *)this + 43) )
      goto LABEL_30;
    if ( !*((_QWORD *)this + 47) )
    {
      RectangleGeometryProxy = CCompositor::CreateRectangleGeometryProxy(
                                 *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                 (struct CRectangleGeometryProxy **)this + 47);
      v9 = RectangleGeometryProxy;
      if ( RectangleGeometryProxy < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometryProxy, 0x2D3u, 0LL);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_HasBorder(this) )
    {
      v25 = CThumbnailVisual::_AddBorderInstructions(v12);
      v9 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x2D8u, 0LL);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    {
      if ( !CThumbnailVisual::_HasBorder(this) )
      {
        v69 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(
                v68,
                *((struct CRectangleGeometryProxy **)this + 47),
                0,
                1.0);
        v9 = v69;
        if ( v69 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x2E1u, 0LL);
          goto LABEL_30;
        }
      }
    }
    v13 = CDrawGeometryInstruction::Create(
            *((struct CBaseLegacyMilBrushProxy **)this + 43),
            *((struct CBaseGeometryProxy **)this + 47),
            (struct CDrawGeometryInstruction **)&rc);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2E9u, 0LL);
      v2 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v2 = *(CBaseObject **)&rc.left;
      v14 = CRenderDataVisual::AddInstruction(this, *(struct CRenderDataInstruction **)&rc.left);
      v9 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2EBu, 0LL);
    }
    goto LABEL_16;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  CVisual::SetBorderMode(this, 0LL);
  if ( !IsImmersiveIconic )
    goto LABEL_114;
  v28 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 41) + 24LL) + 200LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v76 = Bitmap;
  v17 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 >= 0 )
      v9 = -2003304445;
    v71 = 669;
    goto LABEL_67;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v28);
  v84 = SolidBrush;
  if ( !SolidBrush )
  {
    v9 = -2147024890;
    v71 = 672;
LABEL_67:
    v31 = v9;
LABEL_70:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, v71, 0LL);
    goto LABEL_31;
  }
  rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
  FillRect(CompatibleDC, &rc, SolidBrush);
  ScaleTransformProxy = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **, char *, char *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 30) + 168LL))(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
                          v17,
                          0LL,
                          2LL,
                          &v82,
                          v72,
                          v73,
                          v74);
  v9 = ScaleTransformProxy;
  if ( ScaleTransformProxy < 0 )
  {
    v71 = 676;
    goto LABEL_69;
  }
  ScaleTransformProxy = CBitmapSource::Create(v82, v34, &v75);
  v9 = ScaleTransformProxy;
  if ( ScaleTransformProxy < 0 )
  {
    v71 = 678;
    goto LABEL_69;
  }
  v18 = v75;
  v35 = CDrawBitmapInstruction::Create(*((struct CBaseImageProxy **)v75 + 2), &v83);
  v9 = v35;
  if ( v35 >= 0 )
  {
    v36 = (CScaleTransformProxy **)((char *)this + 416);
    if ( *((_QWORD *)this + 52)
      || (ScaleTransformProxy = CCompositor::CreateScaleTransformProxy(
                                  *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                  (struct CScaleTransformProxy **)this + 52),
          v9 = ScaleTransformProxy,
          ScaleTransformProxy >= 0) )
    {
      v37 = (_DWORD *)*((_QWORD *)this + 41);
      v38 = v37[13] - v37[11];
      v39 = v37[12] - v37[10];
      v40 = 0;
      if ( v38 >= 0 )
        v40 = v38;
      v41 = 0;
      if ( rc.bottom - rc.top >= 0 )
        v41 = rc.bottom - rc.top;
      v42 = _mm_cvtsi32_si128(v40 / v41);
      v43 = 0;
      *(_QWORD *)&v44 = *(_OWORD *)&_mm_cvtepi32_pd(v42);
      if ( v39 >= 0 )
        v43 = v39;
      v45 = 0;
      if ( rc.right - rc.left >= 0 )
        v45 = rc.right - rc.left;
      ScaleTransformProxy = CScaleTransformProxy::Update(*v36, (double)(v43 / v45), v44, 0.0, 0.0);
      v9 = ScaleTransformProxy;
      if ( ScaleTransformProxy >= 0 )
      {
        v46 = CPushTransformInstruction::Create(*v36, &v80);
        v9 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x2B2u, 0LL);
          v6 = v80;
        }
        else
        {
          v6 = v80;
          v47 = CRenderDataVisual::AddInstruction(this, v80);
          v9 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x2B3u, 0LL);
          }
          else
          {
            v48 = CRenderDataVisual::AddInstruction(this, v83);
            v9 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x2B4u, 0LL);
            }
            else
            {
              v49 = CPopInstruction::Create(&v78);
              v9 = v49;
              if ( v49 >= 0 )
              {
                v16 = v78;
                v50 = CRenderDataVisual::AddInstruction(this, v78);
                v9 = v50;
                if ( v50 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x2B6u, 0LL);
                  goto LABEL_26;
                }
                v51 = (CTranslateTransformProxy **)((char *)this + 408);
                if ( !*((_QWORD *)this + 51) )
                {
                  TranslateTransformProxy = CCompositor::CreateTranslateTransformProxy(
                                              *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                              (struct CTranslateTransformProxy **)this + 51);
                  v9 = TranslateTransformProxy;
                  if ( TranslateTransformProxy < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TranslateTransformProxy, 0x2BBu, 0LL);
                    goto LABEL_26;
                  }
                }
                v53 = (int)CSecondaryWindowRepresentation::GetIconicHeight(*((CSecondaryWindowRepresentation **)this + 42))
                    / 2;
                v56 = 0;
                if ( v54 >= 0 )
                  v56 = v54;
                v57 = (double)(v56 / 2 - v53);
                v58 = (int)CSecondaryWindowRepresentation::GetIconicWidth(v55) / 2;
                v60 = 0;
                if ( v59 >= 0 )
                  v60 = v59;
                v61 = CTranslateTransformProxy::Update(*v51, (double)(v60 / 2 - v58), v57);
                v9 = v61;
                if ( v61 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x2BFu, 0LL);
                  goto LABEL_26;
                }
                v62 = CPushTransformInstruction::Create(*v51, &v79);
                v9 = v62;
                if ( v62 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x2C0u, 0LL);
                  v4 = v79;
                  goto LABEL_104;
                }
                v4 = v79;
                v63 = CRenderDataVisual::AddInstruction(this, v79);
                v9 = v63;
                if ( v63 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x2C1u, 0LL);
LABEL_104:
                  v15 = v77;
LABEL_21:
                  if ( v4 )
                    CBaseObject::Release(v4);
                  if ( v15 )
                    CBaseObject::Release(v15);
                  goto LABEL_25;
                }
LABEL_114:
                v64 = CDrawBitmapInstruction::Create(*((struct CBaseImageProxy **)this + 49), &v81);
                v9 = v64;
                if ( v64 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x2C4u, 0LL);
                  v3 = v81;
                }
                else
                {
                  v3 = v81;
                  v65 = CRenderDataVisual::AddInstruction(this, v81);
                  v9 = v65;
                  if ( v65 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x2C5u, 0LL);
                  }
                  else if ( v4 )
                  {
                    v66 = CPopInstruction::Create(&v77);
                    v9 = v66;
                    if ( v66 >= 0 )
                    {
                      v15 = v77;
                      v67 = CRenderDataVisual::AddInstruction(this, v77);
                      v9 = v67;
                      if ( v67 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x2CAu, 0LL);
                      goto LABEL_19;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x2C9u, 0LL);
                  }
                }
LABEL_18:
                v15 = v77;
LABEL_19:
                if ( v3 )
                  CBaseObject::Release(v3);
                goto LABEL_21;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x2B5u, 0LL);
            }
          }
        }
LABEL_25:
        v16 = v78;
LABEL_26:
        if ( v6 )
          CBaseObject::Release(v6);
        if ( v16 )
          CBaseObject::Release(v16);
        goto LABEL_30;
      }
      v71 = 689;
    }
    else
    {
      v71 = 683;
    }
LABEL_69:
    v31 = ScaleTransformProxy;
    goto LABEL_70;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x2A7u, 0LL);
LABEL_32:
  if ( v82 )
    ((void (__fastcall *)(struct IWICBitmap *))v82->lpVtbl->Release)(v82);
  if ( v18 )
    CBaseObject::Release(v18);
  if ( v83 )
    CBaseObject::Release(v83);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v17 )
    ReleaseGDIObject<HRGN__ *>(&v76);
  if ( v84 )
    ReleaseGDIObject<HRGN__ *>(&v84);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v9;
}
