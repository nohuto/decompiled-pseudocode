/*
 * XREFs of ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800E1440
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x180073B4C (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800E24E0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009C50 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180010FF0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180075020 (-clear_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800CF050 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z @ 0x1800D0F10 (--0-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z.c)
 *     ??1?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0F54 (--1-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ @ 0x1800D0F90 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0874 (-Alloc@-$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800E0960 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800E09BC (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0A0C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E0B30 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800E23D0 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x1800E243C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118E60 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@@Z @ 0x18020658C (--$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV-$CMILRefCountBaseT@VIBitmapResource@@VCM.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmapRealization(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        const struct CShape *a3,
        const struct MILMatrix3x2 *a4,
        bool a5)
{
  __int64 v5; // rax
  CResourceWeakRef *v7; // r14
  bool (__fastcall *v8)(CRectanglesShape *__hidden, unsigned int *); // rax
  volatile signed __int32 *v9; // rdi
  unsigned int (__fastcall *v10)(CMILRefCountImpl *__hidden); // rax
  int v11; // et0
  unsigned __int64 v12; // r15
  _OWORD *v13; // rsi
  _OWORD *v14; // r8
  _BYTE *v15; // rdx
  unsigned __int64 v16; // rcx
  void *v17; // rax
  void *v18; // rdi
  void *v19; // r14
  size_t v20; // rsi
  void *v21; // rax
  _BYTE *v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  _OWORD *v27; // rax
  char (__fastcall *v28)(__int64, __int64, int); // rax
  __int64 v29; // r8
  unsigned int v30; // esi
  _BYTE *v31; // rdi
  __int64 v32; // rax
  CResource *v33; // r15
  __int64 (__fastcall *v34)(CResource *); // rax
  HANDLE ProcessHeap; // rax
  _OWORD *v37; // r9
  unsigned __int64 v38; // rcx
  __int64 (__fastcall *v39)(volatile signed __int32 *, struct IBitmapRealization **); // rax
  unsigned __int64 *Size; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  float v43; // xmm12_4
  float v44; // xmm6_4
  float v45; // xmm7_4
  float v46; // xmm8_4
  float v47; // xmm9_4
  float v48; // xmm14_4
  float v49; // xmm10_4
  float v50; // xmm11_4
  unsigned int v51; // xmm3_4
  int D2DInterpolationMode; // eax
  char v53; // si
  _QWORD *v54; // rax
  CMultiPrimitiveDrawListBrush *v55; // rdi
  CResource *v56; // rcx
  void (*v57)(void); // rax
  volatile signed __int32 *v58; // rcx
  __int128 v59; // xmm0
  __int16 v60; // ax
  __int128 v61; // xmm1
  CDrawListPrimitive0 *(__fastcall **v62)(CDrawListPrimitive0 *, char); // rax
  CDrawListPrimitive0 *(__fastcall *v63)(CDrawListPrimitive0 *, char); // rax
  char v64; // al
  int v65; // ecx
  _QWORD *v66; // rax
  __int128 v67; // xmm0
  CDrawListPrimitive0 *v68; // rcx
  CDrawListPrimitive0 *(__fastcall *v69)(CDrawListPrimitive0 *, char); // rax
  int v70; // eax
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // r15d
  unsigned int v74; // eax
  int v75; // eax
  int v76; // eax
  _QWORD *v77; // rsi
  _QWORD *v78; // r12
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  unsigned int v84; // esi
  CMultiPrimitiveDrawListBrush *v85; // rcx
  CDrawListPrimitive0 *(__fastcall *v86)(CDrawListPrimitive0 *, char); // rax
  CDrawListPrimitive0 *(__fastcall *v87)(CDrawListPrimitive0 *, char); // rax
  int v88; // eax
  int v89; // [rsp+28h] [rbp-E0h]
  unsigned int v90[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v91; // [rsp+48h] [rbp-C0h]
  CResourceWeakRef *v92; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v93; // [rsp+60h] [rbp-A8h]
  CResource *v94; // [rsp+68h] [rbp-A0h]
  struct IBitmapRealization *v95; // [rsp+70h] [rbp-98h] BYREF
  _OWORD *v96; // [rsp+78h] [rbp-90h]
  unsigned __int64 v97; // [rsp+80h] [rbp-88h]
  unsigned __int64 v98; // [rsp+88h] [rbp-80h]
  __int64 v99; // [rsp+98h] [rbp-70h]
  float *v100; // [rsp+A0h] [rbp-68h]
  CResource *v101; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v102; // [rsp+B0h] [rbp-58h]
  bool v103; // [rsp+B8h] [rbp-50h]
  __int128 v104; // [rsp+C0h] [rbp-48h]
  __int128 v105; // [rsp+D0h] [rbp-38h]
  __int128 v106; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v107; // [rsp+F8h] [rbp-10h]
  __int128 v108; // [rsp+108h] [rbp+0h]
  __int128 v109; // [rsp+128h] [rbp+20h] BYREF
  int v110; // [rsp+138h] [rbp+30h]
  int v111; // [rsp+184h] [rbp+7Ch]
  char v112; // [rsp+188h] [rbp+80h]
  CDrawingContext *v113; // [rsp+198h] [rbp+90h] BYREF
  CDrawListPrimitive0 *v114; // [rsp+1A0h] [rbp+98h] BYREF
  CMultiPrimitiveDrawListBrush *v115; // [rsp+1A8h] [rbp+A0h] BYREF
  CMultiPrimitiveDrawListBrush *v116; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v117; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v118[24]; // [rsp+1C8h] [rbp+C0h]
  void *Src; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE *v120; // [rsp+1F0h] [rbp+E8h]
  char *v121; // [rsp+1F8h] [rbp+F0h]
  _BYTE v122[64]; // [rsp+200h] [rbp+F8h] BYREF
  char v123; // [rsp+240h] [rbp+138h] BYREF
  __int128 v124; // [rsp+248h] [rbp+140h]
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v5 = *(_QWORD *)a3;
  v100 = (float *)a4;
  v92 = a3;
  v7 = a3;
  v95 = a2;
  v8 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(v5 + 64);
  v9 = (volatile signed __int32 *)a2;
  v90[0] = 0;
  if ( v8 == CRectanglesShape::IsRectangles )
  {
    v90[0] = (__int64)(*((_QWORD *)a3 + 3) - *((_QWORD *)a3 + 2)) >> 4;
  }
  else if ( !v8(a3, v90) )
  {
    v30 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8DEu, 0LL);
    return v30;
  }
  v94 = 0LL;
  v93 = v9;
  v102 = v9;
  v101 = 0LL;
  if ( v9 )
  {
    v10 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v9 + 8LL);
    if ( v10 == CMILRefCountImpl::AddReference )
    {
      v11 = _InterlockedAdd(v9, 1u);
      if ( (v11 < 0) ^ __OFSUB__(v10, CMILRefCountImpl::AddReference) | (v11 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v89);
      v93 = v102;
      v94 = v101;
    }
    else if ( (char *)v10 == (char *)CGDISectionBitmapRealization::AddRef )
    {
      CGDISectionBitmapRealization::AddRef(v9);
    }
    else
    {
      v10((CMILRefCountImpl *)v9);
    }
  }
  v12 = v90[0];
  v13 = v122;
  v14 = v122;
  v103 = a5;
  Src = v122;
  v120 = v122;
  v121 = &v123;
  if ( v90[0] )
  {
    v15 = v122;
    if ( v90[0] > 4uLL )
    {
      v16 = v90[0];
      v99 = v90[0];
      if ( v90[0] <= 6uLL )
      {
        v16 = 6LL;
        v99 = 6LL;
      }
      v17 = operator new[](saturated_mul(v16, 0x10uLL));
      v18 = Src;
      v19 = v17;
      v96 = v17;
      v20 = v120 - (_BYTE *)Src;
      v97 = 0LL;
      v98 = 0LL;
      v106 = (unsigned __int64)v17;
      v107 = 0LL;
      v21 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(
                      &v106,
                      (v120 - (_BYTE *)Src) >> 4);
      memmove_0(v21, v18, v20);
      v22 = Src;
      Src = v19;
      if ( v22 == v122 )
        v22 = 0LL;
      operator delete(v22);
      v13 = Src;
      v14 = Src;
      v15 = Src;
      v120 = Src;
      v121 = (char *)Src + 16 * v99;
    }
    v98 = 0LL;
    v23 = (v15 - (_BYTE *)v13) >> 4;
    v97 = v12;
    v24 = 16 * v23;
    v107 = 0LL;
    v96 = &v13[v23];
    if ( v96 )
    {
      v107 = v12;
      v25 = v23;
      if ( v12 < v23 )
        v25 = v12;
      v26 = 16 * v25;
      v27 = &v14[v26 / 0xFFFFFFFFFFFFFFF0uLL];
      v98 = v12;
      if ( v14 != &v14[v26 / 0xFFFFFFFFFFFFFFF0uLL] )
      {
        v37 = &v96[v12];
        v38 = v98;
        do
        {
          --v14;
          if ( !v96 )
            goto LABEL_22;
          if ( !v38 )
            goto LABEL_22;
          --v38;
          --v37;
          if ( v38 >= v97 )
            goto LABEL_22;
          *v37 = *v14;
        }
        while ( v14 != v27 );
        v14 = v120;
      }
      if ( v23 <= v12 )
      {
        v120 = &v14[v12];
LABEL_28:
        v7 = v92;
        *v13 = 0LL;
        qmemcpy(v13 + 1, v13, 8 * ((16 * v12 - 9) >> 3));
        v9 = (volatile signed __int32 *)v95;
        goto LABEL_29;
      }
      if ( !v23 || v13 && (v23 & 0x8000000000000000uLL) == 0LL )
      {
        if ( (__int64)(v24 - 16 * v12) >> 4 > 0 )
        {
          if ( v23 >= (__int64)(v24 - 16 * v12) >> 4 )
            goto LABEL_27;
        }
        else if ( (__int64)(v24 - 16 * v12) >> 4 >= 0 )
        {
LABEL_27:
          memmove_0(&v13[v12], v13, v24 - 16 * v12);
          v120 += 16 * v12;
          goto LABEL_28;
        }
      }
    }
LABEL_22:
    _invalid_parameter_noinfo_noreturn();
  }
  detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear_region(
    (__int64 *)&Src,
    0LL,
    0LL);
LABEL_29:
  v28 = *(char (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v7 + 80LL);
  if ( v28 == CRectanglesShape::GetRectangles )
    CRectanglesShape::GetRectangles((__int64)v7, (__int64)Src, v90[0]);
  else
    v28((__int64)v7, (__int64)Src, v90[0]);
  *(_QWORD *)&v108 = v90[0];
  *((_QWORD *)&v108 + 1) = Src;
  if ( !Src && v90[0] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  if ( v9 )
  {
    v39 = *(__int64 (__fastcall **)(volatile signed __int32 *, struct IBitmapRealization **))(*(_QWORD *)v9 + 32LL);
    if ( (char *)v39 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (unsigned __int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                                   v9,
                                   &v95);
    }
    else if ( (char *)v39 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (unsigned __int64 *)CDxHandleBitmapRealization::GetSize(v9, &v95, v29);
    }
    else
    {
      Size = (unsigned __int64 *)v39(v9, &v95);
    }
    v41 = *Size;
    v42 = HIDWORD(v41);
  }
  else
  {
    LODWORD(v41) = 0;
    LODWORD(v42) = 0;
  }
  DWORD1(v105) = 0;
  v43 = 1.0 / (float)(int)v41;
  v44 = v100[2];
  v45 = v100[3];
  v46 = v100[4];
  v47 = v100[5];
  v48 = 1.0 / (float)(int)v42;
  v49 = 0.0 - (float)(v43 * 0.0);
  v50 = 0.0 - (float)(v48 * 0.0);
  *(float *)&v51 = (float)((float)(v100[1] * v48) + (float)(*v100 * 0.0)) + (float)(v50 * 0.0);
  *(float *)&v104 = (float)((float)(*v100 * v43) + (float)(v100[1] * 0.0)) + (float)(v49 * 0.0);
  *(_QWORD *)((char *)&v104 + 4) = v51;
  *((float *)&v104 + 3) = (float)((float)(v44 * v43) + (float)(v45 * 0.0)) + (float)(v49 * 0.0);
  *(float *)&v105 = (float)((float)(v45 * v48) + (float)(v44 * 0.0)) + (float)(v50 * 0.0);
  *((float *)&v105 + 2) = (float)((float)(v46 * v43) + (float)(v47 * 0.0)) + v49;
  *((float *)&v105 + 3) = (float)((float)(v47 * v48) + (float)(v46 * 0.0)) + v50;
  D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
  v53 = InterpolationMode::FromD2D1InterpolationMode(D2DInterpolationMode);
  v54 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  v55 = (CMultiPrimitiveDrawListBrush *)v54;
  if ( !v54 )
  {
    v73 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Au, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x351u, 0LL);
    goto LABEL_64;
  }
  LOBYTE(v91) = v53;
  HIBYTE(v91) = 1;
  v54[1] = 1065353216LL;
  *((_DWORD *)v54 + 4) = 0;
  *(_QWORD *)((char *)v54 + 20) = 1065353216LL;
  *((_DWORD *)v54 + 7) = 0;
  v56 = v94;
  *((_BYTE *)v54 + 52) = 0;
  *v54 = &CSurfaceDrawListBrush::`vftable';
  v54[7] = v56;
  if ( v56 )
  {
    v57 = *(void (**)(void))(*(_QWORD *)v56 + 8LL);
    if ( (char *)v57 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v56);
    else
      v57();
  }
  v58 = v93;
  *((_QWORD *)v55 + 8) = v93;
  if ( v58 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
  v59 = v104;
  v60 = v91;
  v61 = v105;
  *((_BYTE *)v55 + 72) = a5;
  *((_WORD *)v55 + 40) = v60;
  *((_BYTE *)v55 + 82) = 1;
  *((_DWORD *)v55 + 29) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *(_OWORD *)((char *)v55 + 84) = v59;
  *(_OWORD *)((char *)v55 + 100) = v61;
  *((_DWORD *)v55 + 36) = 0;
  *(_OWORD *)((char *)v55 + 120) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *((_BYTE *)v55 + 52) = 1;
  *((_QWORD *)v55 + 4) = 0LL;
  *((_QWORD *)v55 + 5) = 0LL;
  *((_DWORD *)v55 + 12) = 0;
  *(_QWORD *)&v124 = 0x3F8000003F800000LL;
  DWORD2(v124) = 1065353216;
  HIDWORD(v124) = CDrawingContext::GetOpacity(this);
  v113 = this;
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    v117 = 0LL;
  else
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v114);
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v117 + 1) = 0LL;
    *(_QWORD *)v118 = 0LL;
  }
  else
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v115);
  }
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    *(_OWORD *)v118 = 0LL;
  else
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v116);
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> != (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v117);
  *((_QWORD *)&v117 + 1) = 0LL;
  *(_QWORD *)v118 = 0LL;
  *(_QWORD *)&v118[8] = 0x3F8000003F800000LL;
  *(_DWORD *)&v118[16] = 1065353216;
  *(_DWORD *)&v118[20] = 1065353216;
  v62 = *(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v55;
  v109 = 0LL;
  v110 = 0;
  v111 = 257;
  v63 = v62[3];
  v112 = 0;
  v64 = ((__int64 (__fastcall *)(CMultiPrimitiveDrawListBrush *))v63)(v55);
  v65 = *(_DWORD *)&v118[4];
  if ( v64 )
    v65 = 128;
  *(_DWORD *)&v118[4] = v65;
  v66 = CThreadLocalObjectCache<CMultiPrimitiveDrawListBrush,CMultiPrimitiveDrawListBrush>::Alloc();
  if ( !v66 )
  {
    v73 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x378u, 0LL);
    goto LABEL_109;
  }
  v66[1] = 1065353216LL;
  *((_DWORD *)v66 + 4) = 0;
  *(_QWORD *)((char *)v66 + 20) = 1065353216LL;
  *((_DWORD *)v66 + 7) = 0;
  v67 = v108;
  *((_BYTE *)v66 + 52) = 0;
  *((_BYTE *)v66 + 64) = 0;
  *v66 = &CMultiPrimitiveDrawListBrush::`vftable';
  v66[9] = v55;
  *((_OWORD *)v66 + 5) = v67;
  v68 = v114;
  v114 = (CDrawListPrimitive0 *)v66;
  *(_OWORD *)&v118[8] = v124;
  if ( v68 )
  {
    v69 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v68;
    if ( v69 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v68, 1);
    }
    else if ( v69 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v68, 1);
    }
    else if ( v69 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v68, 1);
    }
    else
    {
      ((void (__fastcall *)(CDrawListPrimitive0 *, __int64, CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char)))v69)(
        v68,
        1LL,
        CDrawListPrimitive0::`scalar deleting destructor');
    }
  }
  if ( DWORD2(v117) <= 1 )
    DWORD2(v117) = 1;
  v70 = CBrushDrawListGenerator::GenerateDrawList(
          &v113,
          (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v109,
          (CDrawingContext *)((char *)this + 3440));
  v73 = v70;
  if ( v70 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x380u, 0LL);
LABEL_137:
    v55 = 0LL;
    goto LABEL_109;
  }
  if ( *((_DWORD *)this + 792) == *((_DWORD *)this + 793) )
  {
    v88 = CWatermarkStack<float,64,2,10>::Grow((char *)this + 3160);
    v73 = v88;
    if ( v88 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v88);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0x383u, 0LL);
      goto LABEL_137;
    }
  }
  *(_DWORD *)(*((_QWORD *)this + 395) + 4LL * *((unsigned int *)this + 792)) = 1065353216;
  v74 = *((_DWORD *)this + 795);
  if ( v74 <= ++*((_DWORD *)this + 792) )
    v74 = *((_DWORD *)this + 792);
  *((_DWORD *)this + 795) = v74;
  v75 = CDrawListEntryBuilder::Render((CDrawingContext *)((char *)this + 3440), this, v71, v72);
  v73 = v75;
  if ( v75 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0x386u, 0LL);
  v76 = *((_DWORD *)this + 792);
  v55 = 0LL;
  if ( v76 )
    *((_DWORD *)this + 792) = v76 - 1;
LABEL_109:
  v77 = (_QWORD *)*((_QWORD *)this + 444);
  v78 = (_QWORD *)*((_QWORD *)this + 445);
  while ( v77 != v78 )
  {
    if ( *v77 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v77 + 8LL))(*v77);
      *v77 = 0LL;
    }
    ++v77;
  }
  v79 = (__int64)(*((_QWORD *)this + 445) - *((_QWORD *)this + 444)) >> 3;
  if ( v79 )
    *((_QWORD *)this + 445) -= 8 * v79;
  *((_BYTE *)this + 7928) = 0;
  v80 = *((_QWORD *)this + 440);
  *((_QWORD *)this + 440) = 0LL;
  if ( v80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 8LL))(v80);
  v81 = *((_QWORD *)this + 441);
  *((_QWORD *)this + 441) = 0LL;
  if ( v81 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 8LL))(v81);
  v82 = *((_QWORD *)this + 442);
  *((_QWORD *)this + 442) = 0LL;
  if ( v82 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
  v83 = *((_QWORD *)this + 443);
  *((_QWORD *)this + 443) = 0LL;
  if ( v83 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 8LL))(v83);
  *(_QWORD *)&v118[8] = 0x3F8000003F800000LL;
  *(_DWORD *)&v118[16] = 1065353216;
  v84 = 0;
  *(_DWORD *)&v118[20] = 1065353216;
  for ( *(_DWORD *)&v118[4] = 0; v84 < DWORD2(v117); ++v84 )
  {
    v85 = *(&v114 + v84);
    *(&v114 + v84) = 0LL;
    if ( v85 )
    {
      v86 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v85;
      if ( v86 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v85, 1);
      }
      else if ( v86 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v85, 1);
      }
      else if ( v86 == CDrawListPrimitive0::`scalar deleting destructor' )
      {
        CDrawListPrimitive0::`scalar deleting destructor'(v85, 1);
      }
      else
      {
        v86(v85, 1);
      }
    }
  }
  DWORD2(v117) = 0;
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v117);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v116);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v114);
  if ( v55 )
  {
    v87 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v55;
    if ( v87 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v55, 1);
    }
    else if ( v87 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v55, 1);
    }
    else if ( v87 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v55, 1);
    }
    else
    {
      v87(v55, 1);
    }
  }
  if ( v73 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0x35Cu, 0LL);
LABEL_64:
    v30 = v73;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0x8DAu, 0LL);
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&Src);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v101);
    return v30;
  }
  v30 = v73;
  v31 = Src;
  v32 = (v120 - (_BYTE *)Src) >> 4;
  if ( v32 )
    v120 -= 16 * v32;
  Src = 0LL;
  if ( v31 != v122 && v31 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v31);
  }
  if ( v93 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v93 + 16LL))(v93);
  v33 = v94;
  if ( v94 )
  {
    v34 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v94 + 16LL);
    if ( v34 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
    {
      if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CResource *)((char *)v94 + 8)) )
      {
        CMILRefCountImpl::AddReference((CResource *)((char *)v33 + 8));
        (*(void (__fastcall **)(CResource *))(*(_QWORD *)v33 + 80LL))(v33);
        if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CResource *)((char *)v33 + 8)) )
        {
          CMILRefCountImpl::RemoveReference((CResource *)((char *)v33 + 8));
          CMilObjectDeleter::Delete<IBitmapResource>(v33);
        }
      }
    }
    else if ( v34 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(
        &v92,
        *((_QWORD *)v94 + 2));
      if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v92) )
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v92 + 16));
      CMILRefCountBaseT<IUnknownWeakRefSource,CResourceDeleter>::InternalRelease(v33);
      if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v92) )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v92 + 16));
      wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::~com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(&v92);
    }
    else
    {
      v34(v94);
    }
  }
  return v30;
}
