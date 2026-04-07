/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000CDB0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000CB80 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000D09C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000C778 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18000D078 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000D4E0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18000D57C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000D6CC (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18001A424 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001BD84 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18004EEDC (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x18004F840 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18005022C (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18005093C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800AC6B0 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x1800ADB44 (--$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHBITMAP__@@@@YAXAEAPEAUHBITMAP__@@@Z @ 0x1800B348C (--$ReleaseGDIObject@PEAUHBITMAP__@@@@YAXAEAPEAUHBITMAP__@@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x1800D6468 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ??$ReleaseGDIObject@PEAUHBRUSH__@@@@YAXAEAPEAUHBRUSH__@@@Z @ 0x1800E4030 (--$ReleaseGDIObject@PEAUHBRUSH__@@@@YAXAEAPEAUHBRUSH__@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800E41F8 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800E4B0C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x1800EC704 (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x1801054B8 (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CBaseObject **this)
{
  CBaseObject *v2; // rsi
  CBaseObject *v3; // r15
  CBaseObject *v4; // r14
  HDC CompatibleDC; // r12
  int v6; // eax
  __int64 v7; // rdx
  signed int v8; // ebx
  struct CBaseLegacyMilBrushProxy **v9; // r13
  CRenderDataVisual *v10; // rcx
  CBaseObject *v11; // rax
  struct CRectangleGeometryProxy **v12; // rsi
  CThumbnailVisual *v13; // rcx
  int v14; // eax
  int v15; // eax
  CBaseObject *v16; // r13
  CBaseObject *v17; // rsi
  CBaseObject *v18; // rsi
  HBITMAP v19; // r13
  CBaseObject *v20; // rsi
  __int64 v22; // rcx
  int Brush; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  bool IsImmersiveIconic; // bl
  COLORREF v28; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  int v31; // r9d
  HBRUSH SolidBrush; // rax
  int v33; // eax
  const struct _MARGINS *v34; // rdx
  int v35; // eax
  CScaleTransformProxy **v36; // rsi
  CBaseObject *v37; // rax
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
  CTranslateTransformProxy **v51; // rsi
  int v52; // eax
  CBaseObject *v53; // r9
  int v54; // eax
  int v55; // r10d
  __int64 v56; // r8
  int v57; // ecx
  int v58; // eax
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
  int v70; // eax
  CBaseObject *v71; // rcx
  __int64 v72; // [rsp+28h] [rbp-59h]
  unsigned int v73; // [rsp+28h] [rbp-59h]
  CBaseObject *v74; // [rsp+48h] [rbp-39h] BYREF
  HBITMAP v75; // [rsp+50h] [rbp-31h] BYREF
  CBaseObject *v76; // [rsp+58h] [rbp-29h] BYREF
  CBaseObject *v77; // [rsp+60h] [rbp-21h] BYREF
  CBaseObject *v78; // [rsp+68h] [rbp-19h] BYREF
  struct CPushTransformInstruction *v79; // [rsp+70h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v80; // [rsp+78h] [rbp-9h] BYREF
  struct IWICBitmap *v81; // [rsp+80h] [rbp-1h] BYREF
  CBaseObject *v82; // [rsp+88h] [rbp+7h] BYREF
  HBRUSH v83; // [rsp+90h] [rbp+Fh] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp+17h]
  RECT rc; // [rsp+A0h] [rbp+1Fh] BYREF

  v2 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v3 = 0LL;
  v80 = 0LL;
  v4 = 0LL;
  v79 = 0LL;
  CompatibleDC = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v76 = 0LL;
  v83 = 0LL;
  v75 = 0LL;
  h = 0LL;
  v81 = 0LL;
  v74 = 0LL;
  v82 = 0LL;
  if ( !*((_BYTE *)this + 480) )
  {
    v70 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v8 = v70;
    if ( v70 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x2F1u, 0LL);
      goto LABEL_30;
    }
    v71 = this[48];
    if ( !v71 )
      goto LABEL_30;
    CBaseObject::Release(v71);
    this[48] = 0LL;
LABEL_16:
    if ( v2 )
    {
      CBaseObject::Release(v2);
      v16 = v78;
      goto LABEL_18;
    }
    goto LABEL_30;
  }
  v6 = CThumbnailVisual::EnsureSecondaryWindowRepresentation((CThumbnailVisual *)this, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x264u, 0LL);
    goto LABEL_30;
  }
  v9 = this + 49;
  if ( this[49] )
  {
    if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v26 = CRenderDataVisual::ClearInstructions(v10);
      v8 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x283u, 0LL);
        goto LABEL_30;
      }
    }
  }
  else
  {
    v22 = (__int64)this[48];
    *((_BYTE *)this + 482) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(
              v22,
              v7,
              this + 50,
              this + 51,
              v72,
              this + 52,
              this + 55,
              this + 49);
    v8 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x273u, 0LL);
      goto LABEL_30;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000u);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x1000u);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x40000u);
    v24 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v8 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x27Du, 0LL);
      goto LABEL_30;
    }
  }
  if ( *((_DWORD *)this + 70) )
  {
LABEL_30:
    v19 = v75;
LABEL_31:
    v20 = v74;
    goto LABEL_32;
  }
  if ( !this[55] || (v11 = this[47]) == 0LL || (*((_DWORD *)v11 + 9) & 0x4000000) == 0 )
  {
    if ( !*v9 )
      goto LABEL_30;
    v12 = this + 53;
    if ( !this[53] )
    {
      v25 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              this + 53);
      v8 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x2D4u, 0LL);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v67 = CThumbnailVisual::_AddBorderInstructions(v13);
      v8 = v67;
      if ( v67 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x2D9u, 0LL);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this)
      && !CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v69 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(v68, *v12, 0, 1.0);
      v8 = v69;
      if ( v69 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x2E2u, 0LL);
        goto LABEL_30;
      }
    }
    v14 = CDrawGeometryInstruction::Create(*v9, *v12, (struct CDrawGeometryInstruction **)&rc);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2EAu, 0LL);
      v2 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v2 = *(CBaseObject **)&rc.left;
      v15 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, *(struct CRenderDataInstruction **)&rc.left);
      v8 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x2ECu, 0LL);
    }
    goto LABEL_16;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this);
  CVisual::SetBorderMode(this);
  if ( !IsImmersiveIconic )
  {
    v16 = v78;
    goto LABEL_116;
  }
  v28 = *(_DWORD *)(*((_QWORD *)this[47] + 3) + 200LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v75 = Bitmap;
  v19 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    v73 = 670;
    goto LABEL_64;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v28);
  v83 = SolidBrush;
  if ( !SolidBrush )
  {
    v8 = -2147024890;
    v73 = 673;
LABEL_64:
    v31 = v8;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, v73, 0LL);
    goto LABEL_31;
  }
  rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
  FillRect(CompatibleDC, &rc, SolidBrush);
  v33 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                             + 31)
                                                                                          + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31),
          v19,
          0LL,
          2LL,
          &v81);
  v8 = v33;
  if ( v33 < 0 )
  {
    v73 = 677;
LABEL_66:
    v31 = v33;
    goto LABEL_67;
  }
  v33 = CBitmapSource::Create(v81, v34, &v74);
  v8 = v33;
  if ( v33 < 0 )
  {
    v73 = 679;
    goto LABEL_66;
  }
  v20 = v74;
  v35 = CDrawBitmapInstruction::Create(*((struct CBaseImageProxy **)v74 + 2), &v82);
  v8 = v35;
  if ( v35 >= 0 )
  {
    v36 = this + 58;
    if ( !this[58] )
    {
      v33 = CCompositor::CreateProxy<CScaleTransformProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              this + 58);
      v8 = v33;
      if ( v33 < 0 )
      {
        v73 = 684;
        goto LABEL_66;
      }
    }
    v37 = this[47];
    v38 = *((_DWORD *)v37 + 13) - *((_DWORD *)v37 + 11);
    v39 = *((_DWORD *)v37 + 12) - *((_DWORD *)v37 + 10);
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
    v33 = CScaleTransformProxy::Update(*v36, (double)(v43 / v45), v44, 0.0, 0.0);
    v8 = v33;
    if ( v33 < 0 )
    {
      v73 = 690;
      goto LABEL_66;
    }
    v46 = CPushTransformInstruction::Create(*v36, &v78);
    v8 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x2B3u, 0LL);
      v16 = v78;
LABEL_25:
      v18 = v76;
LABEL_26:
      if ( v16 )
        CBaseObject::Release(v16);
      if ( v18 )
        CBaseObject::Release(v18);
      goto LABEL_30;
    }
    v16 = v78;
    v47 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v78);
    v8 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x2B4u, 0LL);
      goto LABEL_25;
    }
    v48 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v82);
    v8 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x2B5u, 0LL);
      goto LABEL_25;
    }
    v49 = CPopInstruction::Create(&v76);
    v8 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x2B6u, 0LL);
      goto LABEL_25;
    }
    v18 = v76;
    v50 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v76);
    v8 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x2B7u, 0LL);
      goto LABEL_26;
    }
    v51 = this + 57;
    if ( !this[57] )
    {
      v52 = CCompositor::CreateProxy<CTranslateTransformProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              this + 57);
      v8 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x2BCu, 0LL);
        goto LABEL_25;
      }
    }
    v53 = this[47];
    v54 = 0;
    if ( *((_DWORD *)v53 + 13) - *((_DWORD *)v53 + 11) >= 0 )
      v54 = *((_DWORD *)v53 + 13) - *((_DWORD *)v53 + 11);
    v55 = 0;
    v56 = *((_QWORD *)this[48] + 47);
    if ( v56 )
      v55 = *(_DWORD *)(v56 + 132);
    v57 = v54 / 2;
    v58 = 0;
    if ( *((_DWORD *)v53 + 12) - *((_DWORD *)v53 + 10) >= 0 )
      v58 = *((_DWORD *)v53 + 12) - *((_DWORD *)v53 + 10);
    v59 = 0;
    if ( v56 )
      v59 = *(_DWORD *)(v56 + 128);
    v60 = CTranslateTransformProxy::Update(*v51, (double)(v58 / 2 - v59 / 2), (double)(v57 - v55 / 2));
    v8 = v60;
    if ( v60 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x2C0u, 0LL);
      goto LABEL_25;
    }
    v61 = CPushTransformInstruction::Create(*v51, &v79);
    v8 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x2C1u, 0LL);
      v4 = v79;
LABEL_112:
      v17 = v77;
LABEL_21:
      if ( v4 )
        CBaseObject::Release(v4);
      if ( v17 )
        CBaseObject::Release(v17);
      goto LABEL_25;
    }
    v4 = v79;
    v62 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v79);
    v8 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x2C2u, 0LL);
      goto LABEL_112;
    }
LABEL_116:
    v63 = CDrawBitmapInstruction::Create(this[55], &v80);
    v8 = v63;
    if ( v63 >= 0 )
    {
      v3 = v80;
      v64 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v80);
      v8 = v64;
      if ( v64 >= 0 )
      {
        if ( v4 )
        {
          v65 = CPopInstruction::Create(&v77);
          v8 = v65;
          if ( v65 >= 0 )
          {
            v17 = v77;
            v66 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v77);
            v8 = v66;
            if ( v66 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x2CBu, 0LL);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x2CAu, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x2C6u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x2C5u, 0LL);
      v3 = v80;
    }
LABEL_18:
    v17 = v77;
LABEL_19:
    if ( v3 )
      CBaseObject::Release(v3);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x2A8u, 0LL);
LABEL_32:
  if ( v81 )
    ((void (__fastcall *)(struct IWICBitmap *))v81->lpVtbl->Release)(v81);
  if ( v20 )
    CBaseObject::Release(v20);
  if ( v82 )
    CBaseObject::Release(v82);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v19 )
    ReleaseGDIObject<HBITMAP__ *>(&v75);
  if ( v83 )
    ReleaseGDIObject<HBRUSH__ *>(&v83);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v8;
}
