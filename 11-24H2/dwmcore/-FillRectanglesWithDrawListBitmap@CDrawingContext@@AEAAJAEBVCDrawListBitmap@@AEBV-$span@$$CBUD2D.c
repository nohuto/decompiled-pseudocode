/*
 * XREFs of ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800BA8F0
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18006DA94 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18006DA94.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180264120 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z @ 0x1800BA33C (-Free@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ??1CSurfaceDrawListBrush@@UEAA@XZ @ 0x1800BA42C (--1CSurfaceDrawListBrush@@UEAA@XZ.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800BA4FC (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800BA54C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x1800BA7D0 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800BA8D0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800BC090 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18013D1F0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x18016AD30 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x18016BEA4 (-Alloc@-$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801CC004 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBitmap(
        CDrawingContext *this,
        const struct CDrawListBitmap *a2,
        _OWORD *a3,
        float *a4)
{
  __int64 v5; // rcx
  const struct CDrawListBitmap *v6; // rsi
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64 *); // rax
  unsigned __int64 *Size; // rax
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm2_4
  float v19; // xmm12_4
  float v20; // xmm14_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  int D2DInterpolationMode; // eax
  char v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rax
  CMultiPrimitiveDrawListBrush *v27; // r14
  CSurfaceDrawListBrush *(__fastcall **v28)(CSurfaceDrawListBrush *, char, __int64); // rax
  CSurfaceDrawListBrush *(__fastcall *v29)(CSurfaceDrawListBrush *, char, __int64); // rax
  char v30; // al
  int v31; // ecx
  __int64 v32; // rax
  CDrawListPrimitive0 *v33; // rcx
  CSurfaceDrawListBrush *(__fastcall *v34)(CSurfaceDrawListBrush *, char, __int64); // rax
  char *v35; // r15
  int DrawList; // eax
  int v37; // r12d
  unsigned int v38; // eax
  int v39; // eax
  __int64 v40; // r8
  int v41; // eax
  _QWORD *v42; // rdi
  _QWORD *v43; // r13
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned int v49; // edi
  CMultiPrimitiveDrawListBrush *v50; // rcx
  CSurfaceDrawListBrush *(__fastcall *v51)(CSurfaceDrawListBrush *, char, __int64); // rax
  __int64 v52; // r8
  CSurfaceDrawListBrush *(__fastcall *v53)(CSurfaceDrawListBrush *, char, __int64); // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  int v57; // eax
  char v58; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v59; // [rsp+39h] [rbp-CFh]
  __int64 v60; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v61; // [rsp+58h] [rbp-B0h] BYREF
  int v62; // [rsp+68h] [rbp-A0h]
  int v63; // [rsp+B4h] [rbp-54h]
  char v64; // [rsp+B8h] [rbp-50h]
  CDrawingContext *v65; // [rsp+C8h] [rbp-40h] BYREF
  CDrawListPrimitive0 *v66; // [rsp+D0h] [rbp-38h] BYREF
  float v67[2]; // [rsp+D8h] [rbp-30h] BYREF
  float v68[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v69; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v70[24]; // [rsp+F8h] [rbp-10h]
  __int128 v71; // [rsp+118h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v5 = *((_QWORD *)a2 + 1);
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
      Size = (unsigned __int64 *)CDxHandleBitmapRealization::GetSize(v5, &v60);
    }
    else
    {
      Size = (unsigned __int64 *)v10(v5, &v60);
    }
    v9 = *Size;
    a2 = (const struct CDrawListBitmap *)HIDWORD(v9);
  }
  v12 = a4[1];
  v13 = a4[2];
  v14 = *a4;
  v15 = a4[3];
  v16 = a4[4];
  v17 = a4[5];
  v18 = *a4 * 0.0;
  LODWORD(v66) = 0;
  v67[1] = 0.0;
  LODWORD(v69) = 1065353216;
  v19 = 1.0 / (float)(int)v9;
  v20 = 1.0 / (float)(int)a2;
  v21 = 0.0 - (float)(v19 * 0.0);
  v22 = 0.0 - (float)(v20 * 0.0);
  *(float *)&v65 = (float)((float)(v14 * v19) + (float)(v12 * 0.0)) + (float)(v21 * 0.0);
  *((float *)&v65 + 1) = (float)((float)(v12 * v20) + v18) + (float)(v22 * 0.0);
  *((float *)&v66 + 1) = (float)((float)(v13 * v19) + (float)(v15 * 0.0)) + (float)(v21 * 0.0);
  v67[0] = (float)((float)(v15 * v20) + (float)(v13 * 0.0)) + (float)(v22 * 0.0);
  v68[0] = (float)((float)(v16 * v19) + (float)(v17 * 0.0)) + v21;
  v68[1] = (float)((float)(v17 * v20) + (float)(v16 * 0.0)) + v22;
  D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
  v24 = InterpolationMode::FromD2D1InterpolationMode(D2DInterpolationMode);
  v25 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  if ( v25 )
  {
    v58 = v24;
    v59 = 257;
    v26 = CSurfaceDrawListBrush::CSurfaceDrawListBrush((__int64)v25, v6, (__int64)&v58, &v65, 0);
    v27 = (CMultiPrimitiveDrawListBrush *)v26;
    if ( v26 )
    {
      *(_BYTE *)(v26 + 52) = 1;
      *(_QWORD *)(v26 + 32) = 0LL;
      *(_QWORD *)(v26 + 40) = 0LL;
      *(_DWORD *)(v26 + 48) = 0;
      *(_QWORD *)&v71 = 0x3F8000003F800000LL;
      DWORD2(v71) = 1065353216;
      HIDWORD(v71) = CDrawingContext::GetOpacity(this);
      v65 = this;
      if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
        v69 = 0LL;
      else
        wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v66);
      if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *((_QWORD *)&v69 + 1) = 0LL;
        *(_QWORD *)v70 = 0LL;
      }
      else
      {
        wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v67);
      }
      if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
        *(_OWORD *)v70 = 0LL;
      else
        wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v68);
      if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> != (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
        wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v69);
      *((_QWORD *)&v69 + 1) = 0LL;
      *(_QWORD *)v70 = 0LL;
      *(_QWORD *)&v70[8] = 0x3F8000003F800000LL;
      *(_DWORD *)&v70[16] = 1065353216;
      *(_DWORD *)&v70[20] = 1065353216;
      v28 = *(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char, __int64))v27;
      v61 = 0LL;
      v62 = 0;
      v63 = 257;
      v29 = v28[3];
      v64 = 0;
      v30 = ((__int64 (__fastcall *)(CMultiPrimitiveDrawListBrush *))v29)(v27);
      v31 = *(_DWORD *)&v70[4];
      if ( v30 )
        v31 = 128;
      *(_DWORD *)&v70[4] = v31;
      v32 = CThreadLocalObjectCache<CMultiPrimitiveDrawListBrush,CMultiPrimitiveDrawListBrush>::Alloc();
      if ( v32 )
      {
        *(_QWORD *)(v32 + 8) = 1065353216LL;
        *(_DWORD *)(v32 + 16) = 0;
        *(_QWORD *)(v32 + 20) = 1065353216LL;
        *(_DWORD *)(v32 + 28) = 0;
        *(_BYTE *)(v32 + 52) = 0;
        *(_BYTE *)(v32 + 64) = 0;
        *(_QWORD *)v32 = &CMultiPrimitiveDrawListBrush::`vftable';
        *(_QWORD *)(v32 + 72) = v27;
        *(_OWORD *)(v32 + 80) = *a3;
        v33 = v66;
        v66 = (CDrawListPrimitive0 *)v32;
        *(_OWORD *)&v70[8] = v71;
        if ( v33 )
        {
          v34 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char, __int64))v33;
          if ( v34 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
          {
            CMultiPrimitiveDrawListBrush::`vector deleting destructor'(
              v33,
              1,
              (__int64)CSurfaceDrawListBrush::`vector deleting destructor');
          }
          else if ( v34 == CSurfaceDrawListBrush::`vector deleting destructor' )
          {
            CSurfaceDrawListBrush::`vector deleting destructor'(
              v33,
              1,
              (__int64)CSurfaceDrawListBrush::`vector deleting destructor');
          }
          else if ( (char *)v34 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
          {
            CDrawListPrimitive0::`scalar deleting destructor'(v33, 1u);
          }
          else
          {
            ((void (__fastcall *)(CDrawListPrimitive0 *, __int64, CSurfaceDrawListBrush *(__fastcall *)(CSurfaceDrawListBrush *, char, __int64), void *(__fastcall *)(CDrawListPrimitive0 *__hidden, unsigned int)))v34)(
              v33,
              1LL,
              CSurfaceDrawListBrush::`vector deleting destructor',
              CDrawListPrimitive0::`scalar deleting destructor');
          }
        }
        if ( DWORD2(v69) <= 1 )
          DWORD2(v69) = 1;
        v35 = (char *)this + 3440;
        DrawList = CBrushDrawListGenerator::GenerateDrawList(
                     (CBrushDrawListGenerator *)&v65,
                     (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v61,
                     (CDrawingContext *)((char *)this + 3440));
        v37 = DrawList;
        if ( DrawList < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x380u, 0LL);
        }
        else
        {
          if ( *((_DWORD *)this + 792) != *((_DWORD *)this + 793)
            || (v57 = CWatermarkStack<float,64,2,10>::Grow((char *)this + 3160), v37 = v57, v57 >= 0) )
          {
            *(_DWORD *)(*((_QWORD *)this + 395) + 4LL * *((unsigned int *)this + 792)) = 1065353216;
            v38 = *((_DWORD *)this + 795);
            if ( v38 <= ++*((_DWORD *)this + 792) )
              v38 = *((_DWORD *)this + 792);
            *((_DWORD *)this + 795) = v38;
            v39 = CDrawListEntryBuilder::Render((CDrawingContext *)((char *)this + 3440), this);
            v37 = v39;
            if ( v39 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x386u, 0LL);
            v41 = *((_DWORD *)this + 792);
            v27 = 0LL;
            if ( v41 )
              *((_DWORD *)this + 792) = v41 - 1;
            goto LABEL_34;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v57);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x383u, 0LL);
        }
        v27 = 0LL;
      }
      else
      {
        v37 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Fu, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x378u, 0LL);
        v35 = (char *)this + 3440;
      }
LABEL_34:
      v42 = (_QWORD *)*((_QWORD *)v35 + 14);
      v43 = (_QWORD *)*((_QWORD *)v35 + 15);
      while ( v42 != v43 )
      {
        if ( *v42 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v42 + 8LL))(*v42);
          *v42 = 0LL;
        }
        ++v42;
      }
      v44 = (__int64)(*((_QWORD *)v35 + 15) - *((_QWORD *)v35 + 14)) >> 3;
      if ( v44 )
        *((_QWORD *)v35 + 15) -= 8 * v44;
      v35[4488] = 0;
      v45 = *((_QWORD *)v35 + 10);
      *((_QWORD *)v35 + 10) = 0LL;
      if ( v45 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
      v46 = *((_QWORD *)v35 + 11);
      *((_QWORD *)v35 + 11) = 0LL;
      if ( v46 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
      v47 = *((_QWORD *)v35 + 12);
      *((_QWORD *)v35 + 12) = 0LL;
      if ( v47 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
      v48 = *((_QWORD *)v35 + 13);
      *((_QWORD *)v35 + 13) = 0LL;
      if ( v48 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
      *(_QWORD *)&v70[8] = 0x3F8000003F800000LL;
      *(_DWORD *)&v70[16] = 1065353216;
      v49 = 0;
      *(_DWORD *)&v70[20] = 1065353216;
      for ( *(_DWORD *)&v70[4] = 0; v49 < DWORD2(v69); ++v49 )
      {
        v50 = *(CDrawListPrimitive0 **)&v67[2 * v49 - 2];
        *(CDrawListPrimitive0 **)&v67[2 * v49 - 2] = 0LL;
        if ( v50 )
        {
          v51 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char, __int64))v50;
          if ( v51 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
          {
            CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v50, 1, v40);
          }
          else if ( v51 == CSurfaceDrawListBrush::`vector deleting destructor' )
          {
            CSurfaceDrawListBrush::`vector deleting destructor'(v50, 1, v40);
          }
          else if ( (char *)v51 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
          {
            CDrawListPrimitive0::`scalar deleting destructor'(v50, 1u);
          }
          else
          {
            ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *, __int64))v51)(v50, 1LL);
          }
        }
      }
      DWORD2(v69) = 0;
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v69);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v68);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v67);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v66);
      if ( v27 )
      {
        v53 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char, __int64))v27;
        if ( v53 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v27, 1, v52);
        }
        else if ( v53 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'(v27, 1, v52);
        }
        else if ( (char *)v53 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
        {
          CDrawListPrimitive0::`scalar deleting destructor'(v27, 1u);
        }
        else
        {
          ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *, __int64))v53)(v27, 1LL);
        }
      }
      if ( v37 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x35Cu, 0LL);
      return (unsigned int)v37;
    }
  }
  else
  {
    v27 = 0LL;
  }
  v37 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Au, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x351u, 0LL);
  if ( v27 )
  {
    CSurfaceDrawListBrush::~CSurfaceDrawListBrush(v27, v54, v55);
    CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Free(v27);
  }
  return (unsigned int)v37;
}
