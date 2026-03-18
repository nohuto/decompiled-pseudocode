/*
 * XREFs of ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800E0B50
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x180073B4C (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180270130 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180010FF0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0874 (-Alloc@-$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800E09BC (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0A0C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E0B30 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800E23D0 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118E60 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBitmap(
        struct CDrawingContext *a1,
        unsigned __int64 a2,
        _OWORD *a3,
        float *a4)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64 *); // rax
  unsigned __int64 *Size; // rax
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm13_4
  float v19; // xmm10_4
  float v20; // xmm11_4
  float v21; // xmm0_4
  int D2DInterpolationMode; // eax
  char v23; // r15
  _QWORD *v24; // rax
  CMultiPrimitiveDrawListBrush *v25; // rbx
  CMILRefCountImpl *v26; // rcx
  void (*v27)(void); // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  CDrawListPrimitive0 *(__fastcall **v31)(CDrawListPrimitive0 *, char); // rax
  CDrawListPrimitive0 *(__fastcall *v32)(CDrawListPrimitive0 *, char); // rax
  char v33; // al
  int v34; // ecx
  _QWORD *v35; // rax
  CDrawListPrimitive0 *v36; // rcx
  CDrawListPrimitive0 *(__fastcall *v37)(CDrawListPrimitive0 *, char); // rax
  char *v38; // r15
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // r12d
  unsigned int v43; // eax
  int v44; // eax
  int v45; // eax
  _QWORD *v46; // rsi
  _QWORD *v47; // r13
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned int v53; // esi
  CMultiPrimitiveDrawListBrush *v54; // rcx
  CDrawListPrimitive0 *(__fastcall *v55)(CDrawListPrimitive0 *, char); // rax
  CDrawListPrimitive0 *(__fastcall *v56)(CDrawListPrimitive0 *, char); // rax
  int v58; // eax
  __int16 v59; // [rsp+38h] [rbp-D0h]
  __int64 v60; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v61; // [rsp+50h] [rbp-B8h]
  __int128 v62; // [rsp+60h] [rbp-A8h]
  __int128 v63; // [rsp+88h] [rbp-80h] BYREF
  int v64; // [rsp+98h] [rbp-70h]
  int v65; // [rsp+E4h] [rbp-24h]
  char v66; // [rsp+E8h] [rbp-20h]
  CDrawingContext *v67; // [rsp+F8h] [rbp-10h] BYREF
  CDrawListPrimitive0 *v68; // [rsp+100h] [rbp-8h] BYREF
  CMultiPrimitiveDrawListBrush *v69; // [rsp+108h] [rbp+0h] BYREF
  CMultiPrimitiveDrawListBrush *v70; // [rsp+110h] [rbp+8h] BYREF
  __int128 v71; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v72[24]; // [rsp+128h] [rbp+20h]
  __int128 v73; // [rsp+148h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v5 = *(_QWORD *)(a2 + 8);
  v6 = a2;
  LODWORD(v9) = 0;
  LODWORD(a2) = 0;
  if ( v5 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL);
    if ( (char *)v10 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (unsigned __int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                                   v5,
                                   &v60);
    }
    else if ( (char *)v10 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (unsigned __int64 *)CDxHandleBitmapRealization::GetSize(v5, &v60, a3);
    }
    else
    {
      Size = (unsigned __int64 *)v10(v5, &v60);
    }
    v9 = *Size;
    a2 = HIDWORD(v9);
  }
  v12 = a4[1];
  v13 = *a4;
  v14 = a4[3];
  v15 = a4[2];
  v16 = a4[5];
  v17 = a4[4];
  DWORD2(v61) = 0;
  DWORD1(v62) = 0;
  v18 = 1.0 / (float)(int)v9;
  v19 = 0.0 - (float)(v18 * 0.0);
  v20 = 0.0 - (float)((float)(1.0 / (float)(int)a2) * 0.0);
  *(float *)&v61 = (float)((float)(v18 * v13) + (float)(v12 * 0.0)) + (float)(v19 * 0.0);
  *((float *)&v61 + 1) = (float)((float)((float)(1.0 / (float)(int)a2) * v12) + (float)(v13 * 0.0)) + (float)(v20 * 0.0);
  v21 = 1.0 / (float)(int)a2;
  *((float *)&v61 + 3) = (float)((float)(v18 * v15) + (float)(v14 * 0.0)) + (float)(v19 * 0.0);
  *((float *)&v62 + 3) = (float)((float)(v21 * v16) + (float)(v17 * 0.0)) + v20;
  *(float *)&v62 = (float)((float)(v21 * v14) + (float)(v15 * 0.0)) + (float)(v20 * 0.0);
  *((float *)&v62 + 2) = (float)((float)(v18 * v17) + (float)(v16 * 0.0)) + v19;
  D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(a1);
  v23 = InterpolationMode::FromD2D1InterpolationMode(D2DInterpolationMode);
  v24 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  v25 = (CMultiPrimitiveDrawListBrush *)v24;
  if ( !v24 )
  {
    v42 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Au, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x351u, 0LL);
    return (unsigned int)v42;
  }
  LOBYTE(v59) = v23;
  HIBYTE(v59) = 1;
  v24[1] = 1065353216LL;
  *((_DWORD *)v24 + 4) = 0;
  *(_QWORD *)((char *)v24 + 20) = 1065353216LL;
  *((_DWORD *)v24 + 7) = 0;
  *((_BYTE *)v24 + 52) = 0;
  *v24 = &CSurfaceDrawListBrush::`vftable';
  v26 = *(CMILRefCountImpl **)v6;
  v24[7] = *(_QWORD *)v6;
  if ( v26 )
  {
    v27 = *(void (**)(void))(*(_QWORD *)v26 + 8LL);
    if ( (char *)v27 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v26);
    else
      v27();
  }
  v28 = *(_QWORD *)(v6 + 8);
  *((_QWORD *)v25 + 8) = v28;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  v29 = v61;
  *((_BYTE *)v25 + 72) = *(_BYTE *)(v6 + 16);
  v30 = v62;
  *((_WORD *)v25 + 40) = v59;
  *((_BYTE *)v25 + 82) = 1;
  *((_DWORD *)v25 + 29) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *(_OWORD *)((char *)v25 + 84) = v29;
  *(_OWORD *)((char *)v25 + 100) = v30;
  *((_DWORD *)v25 + 36) = 0;
  *(_OWORD *)((char *)v25 + 120) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *((_BYTE *)v25 + 52) = 1;
  *((_QWORD *)v25 + 4) = 0LL;
  *((_QWORD *)v25 + 5) = 0LL;
  *((_DWORD *)v25 + 12) = 0;
  *(_QWORD *)&v73 = 0x3F8000003F800000LL;
  DWORD2(v73) = 1065353216;
  HIDWORD(v73) = CDrawingContext::GetOpacity(a1);
  v67 = a1;
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    v71 = 0LL;
  else
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v68);
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v71 + 1) = 0LL;
    *(_QWORD *)v72 = 0LL;
  }
  else
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v69);
  }
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    *(_OWORD *)v72 = 0LL;
  else
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v70);
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> != (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v71);
  *((_QWORD *)&v71 + 1) = 0LL;
  *(_QWORD *)v72 = 0LL;
  *(_QWORD *)&v72[8] = 0x3F8000003F800000LL;
  *(_DWORD *)&v72[16] = 1065353216;
  *(_DWORD *)&v72[20] = 1065353216;
  v31 = *(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v25;
  v63 = 0LL;
  v64 = 0;
  v65 = 257;
  v32 = v31[3];
  v66 = 0;
  v33 = ((__int64 (__fastcall *)(CMultiPrimitiveDrawListBrush *))v32)(v25);
  v34 = *(_DWORD *)&v72[4];
  if ( v33 )
    v34 = 128;
  *(_DWORD *)&v72[4] = v34;
  v35 = CThreadLocalObjectCache<CMultiPrimitiveDrawListBrush,CMultiPrimitiveDrawListBrush>::Alloc();
  if ( v35 )
  {
    v35[1] = 1065353216LL;
    *((_DWORD *)v35 + 4) = 0;
    *(_QWORD *)((char *)v35 + 20) = 1065353216LL;
    *((_DWORD *)v35 + 7) = 0;
    *((_BYTE *)v35 + 52) = 0;
    *((_BYTE *)v35 + 64) = 0;
    *v35 = &CMultiPrimitiveDrawListBrush::`vftable';
    v35[9] = v25;
    *((_OWORD *)v35 + 5) = *a3;
    v36 = v68;
    v68 = (CDrawListPrimitive0 *)v35;
    *(_OWORD *)&v72[8] = v73;
    if ( v36 )
    {
      v37 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v36;
      if ( v37 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v36, 1);
      }
      else if ( v37 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v36, 1);
      }
      else if ( v37 == CDrawListPrimitive0::`scalar deleting destructor' )
      {
        CDrawListPrimitive0::`scalar deleting destructor'(v36, 1);
      }
      else
      {
        ((void (__fastcall *)(CDrawListPrimitive0 *, __int64, CSurfaceDrawListBrush *(__fastcall *)(CSurfaceDrawListBrush *, char), CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char)))v37)(
          v36,
          1LL,
          CSurfaceDrawListBrush::`vector deleting destructor',
          CDrawListPrimitive0::`scalar deleting destructor');
      }
    }
    if ( DWORD2(v71) <= 1 )
      DWORD2(v71) = 1;
    v38 = (char *)a1 + 3440;
    v39 = CBrushDrawListGenerator::GenerateDrawList(
            &v67,
            (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v63,
            (struct CDrawingContext *)((char *)a1 + 3440));
    v42 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x380u, 0LL);
    }
    else
    {
      if ( *((_DWORD *)a1 + 792) != *((_DWORD *)a1 + 793)
        || (v58 = CWatermarkStack<float,64,2,10>::Grow((char *)a1 + 3160), v42 = v58, v58 >= 0) )
      {
        *(_DWORD *)(*((_QWORD *)a1 + 395) + 4LL * *((unsigned int *)a1 + 792)) = 1065353216;
        v43 = *((_DWORD *)a1 + 795);
        if ( v43 <= ++*((_DWORD *)a1 + 792) )
          v43 = *((_DWORD *)a1 + 792);
        *((_DWORD *)a1 + 795) = v43;
        v44 = CDrawListEntryBuilder::Render((struct CDrawingContext *)((char *)a1 + 3440), a1, v40, v41);
        v42 = v44;
        if ( v44 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x386u, 0LL);
        v45 = *((_DWORD *)a1 + 792);
        v25 = 0LL;
        if ( v45 )
          *((_DWORD *)a1 + 792) = v45 - 1;
        goto LABEL_38;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v58);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x383u, 0LL);
    }
    v25 = 0LL;
  }
  else
  {
    v42 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x378u, 0LL);
    v38 = (char *)a1 + 3440;
  }
LABEL_38:
  v46 = (_QWORD *)*((_QWORD *)v38 + 14);
  v47 = (_QWORD *)*((_QWORD *)v38 + 15);
  while ( v46 != v47 )
  {
    if ( *v46 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v46 + 8LL))(*v46);
      *v46 = 0LL;
    }
    ++v46;
  }
  v48 = (__int64)(*((_QWORD *)v38 + 15) - *((_QWORD *)v38 + 14)) >> 3;
  if ( v48 )
    *((_QWORD *)v38 + 15) -= 8 * v48;
  v38[4488] = 0;
  v49 = *((_QWORD *)v38 + 10);
  *((_QWORD *)v38 + 10) = 0LL;
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
  v50 = *((_QWORD *)v38 + 11);
  *((_QWORD *)v38 + 11) = 0LL;
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
  v51 = *((_QWORD *)v38 + 12);
  *((_QWORD *)v38 + 12) = 0LL;
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
  v52 = *((_QWORD *)v38 + 13);
  *((_QWORD *)v38 + 13) = 0LL;
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8LL))(v52);
  *(_QWORD *)&v72[8] = 0x3F8000003F800000LL;
  *(_DWORD *)&v72[16] = 1065353216;
  v53 = 0;
  *(_DWORD *)&v72[20] = 1065353216;
  for ( *(_DWORD *)&v72[4] = 0; v53 < DWORD2(v71); ++v53 )
  {
    v54 = *(&v68 + v53);
    *(&v68 + v53) = 0LL;
    if ( v54 )
    {
      v55 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v54;
      if ( v55 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v54, 1);
      }
      else if ( v55 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v54, 1);
      }
      else if ( v55 == CDrawListPrimitive0::`scalar deleting destructor' )
      {
        CDrawListPrimitive0::`scalar deleting destructor'(v54, 1);
      }
      else
      {
        v55(v54, 1);
      }
    }
  }
  DWORD2(v71) = 0;
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v71);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v70);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v69);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v68);
  if ( v25 )
  {
    v56 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v25;
    if ( v56 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v25, 1);
    }
    else if ( v56 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v25, 1);
    }
    else if ( v56 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v25, 1);
    }
    else
    {
      v56(v25, 1);
    }
  }
  if ( v42 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x35Cu, 0LL);
  return (unsigned int)v42;
}
