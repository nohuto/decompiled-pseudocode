/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C
 * Callers:
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180010310 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A3E0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800126F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18007D7F8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x1800CFF9C (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1800DCF4C (-Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x1800DD9D4 (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x18010D4E0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180110030 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18012707C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180127930 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18012B580 (--1EffectInput@@QEAA@XZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x18016FEF0 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801D7240 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0EffectInput@@QEAA@XZ @ 0x1801EB4C0 (--0EffectInput@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801EE49C (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAPEA.c)
 *     gsl::final_action__lambda_1069039fee6473a405e5e4b65285ddf4___::_final_action__lambda_1069039fee6473a405e5e4b65285ddf4___ @ 0x1801EF980 (gsl--final_action__lambda_1069039fee6473a405e5e4b65285ddf4___--_final_action__lambda_1069039fee6.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z @ 0x1801EF9A0 (-CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z.c)
 *     ?RequiresWrapping@EffectInput@@SA_NAEBU1@@Z @ 0x1802069A0 (-RequiresWrapping@EffectInput@@SA_NAEBU1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        unsigned int a5,
        struct CDrawListCache *a6)
{
  struct CDrawingContext *v7; // r14
  FLOAT width; // xmm2_4
  __int64 v10; // r12
  FLOAT height; // xmm3_4
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  float v19; // xmm6_4
  float v20; // xmm0_4
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  CDirtyRegionAnnotation *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned int v34; // r12d
  int updated; // eax
  EffectInput *v36; // rbx
  __int64 v38; // r10
  struct EffectInput *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // r14
  CCachedImageProducer *v47; // rax
  CCachedImageProducer *v48; // rbx
  struct CVisual *v49; // rax
  CDrawListBitmap *v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  int InputBrushParameters; // eax
  unsigned __int64 v55; // r9
  __int64 v56; // rdx
  EffectInput *v57; // rsi
  __int64 v58; // r9
  __int64 v59; // rdx
  __int128 v60; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A8h]
  unsigned int v64[2]; // [rsp+68h] [rbp-A0h]
  CDrawingContext *v65; // [rsp+70h] [rbp-98h]
  __int64 v66; // [rsp+78h] [rbp-90h] BYREF
  FLOAT v67; // [rsp+80h] [rbp-88h]
  FLOAT v68; // [rsp+84h] [rbp-84h]
  __int128 v69; // [rsp+88h] [rbp-80h] BYREF
  __int128 v70; // [rsp+98h] [rbp-70h]
  __int128 v71; // [rsp+A8h] [rbp-60h]
  __int128 v72; // [rsp+B8h] [rbp-50h]
  int v73; // [rsp+C8h] [rbp-40h]
  struct D2D_SIZE_F v74[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v75; // [rsp+E8h] [rbp-20h]
  _BOOL8 v76; // [rsp+F8h] [rbp-10h]
  __int64 v77; // [rsp+100h] [rbp-8h] BYREF
  int v78; // [rsp+108h] [rbp+0h]
  __int64 v79; // [rsp+10Ch] [rbp+4h]
  int v80; // [rsp+114h] [rbp+Ch]
  __int64 v81; // [rsp+118h] [rbp+10h]
  int v82; // [rsp+120h] [rbp+18h]
  int v83[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v84; // [rsp+130h] [rbp+28h]
  __int128 v85; // [rsp+138h] [rbp+30h] BYREF
  __int64 v86; // [rsp+148h] [rbp+40h]
  __int64 v87; // [rsp+150h] [rbp+48h]
  __int64 v88; // [rsp+158h] [rbp+50h]
  struct CVisual *CurrentVisual; // [rsp+160h] [rbp+58h]
  struct CDrawListCache *v90; // [rsp+168h] [rbp+60h]
  struct CDrawListBrush *v91; // [rsp+170h] [rbp+68h]
  __int64 *v92; // [rsp+178h] [rbp+70h] BYREF
  char v93; // [rsp+180h] [rbp+78h]
  __int64 v94; // [rsp+188h] [rbp+80h] BYREF
  _OWORD v95[28]; // [rsp+190h] [rbp+88h] BYREF
  char v96; // [rsp+350h] [rbp+248h] BYREF
  void *retaddr; // [rsp+3C0h] [rbp+2B8h]

  v91 = a4;
  v7 = a2;
  v65 = a2;
  v90 = a6;
  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(-2003304315, retaddr);
  width = a3->width;
  v10 = (unsigned int)(*((_DWORD *)this + 42) - 1);
  height = a3->height;
  v12 = *((_BYTE *)a6 + 86) == 0;
  v13 = *((_DWORD *)a2 + 74);
  v74[1] = 0LL;
  v76 = v12;
  v74[0].width = width;
  v74[0].height = height;
  v64[0] = v10;
  v73 = 0;
  v75 = 0LL;
  if ( v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    v15 = *((_QWORD *)a2 + 36);
    v16 = *(_OWORD *)(68 * v14 + v15 + 16);
    v69 = *(_OWORD *)(68 * v14 + v15);
    v17 = *(_OWORD *)(68 * v14 + v15 + 32);
    v70 = v16;
    v18 = *(_OWORD *)(68 * v14 + v15 + 48);
    v73 = *(_DWORD *)(68 * v14 + v15 + 64);
  }
  else
  {
    v69 = _xmm;
    v17 = _xmm;
    v70 = _xmm;
    v18 = *(__int128 *)&_xmm.r;
    BYTE1(v73) = BYTE1(v73) & 0xC0 | 0x29;
    LOBYTE(v73) = -86;
  }
  v66 = 0LL;
  v67 = width;
  v68 = height;
  v72 = v18;
  v71 = v17;
  if ( CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)&v69) )
  {
    v19 = sqrtf_0((float)(*(float *)&v69 * *(float *)&v69) + (float)(*((float *)&v69 + 1) * *((float *)&v69 + 1)));
    v20 = sqrtf_0((float)(*(float *)&v70 * *(float *)&v70) + (float)(*((float *)&v70 + 1) * *((float *)&v70 + 1)));
    v74[1].width = v19;
    v74[1].height = v20;
  }
  else
  {
    v77 = v69;
    v78 = HIDWORD(v69);
    v79 = v70;
    v81 = v72;
    v80 = HIDWORD(v70);
    v82 = HIDWORD(v72);
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v77, (float *)&v74[1], &v74[1].height, (float *)&v66);
  }
  v86 = 0LL;
  v85 = 0LL;
  v21 = CBrushRenderingGraph::GatherEffectInputs(this, v7, a3, &v85);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x40C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v21);
LABEL_58:
    std::vector<EffectInput>::_Tidy((__int64)&v85);
    return v22;
  }
  else
  {
    v23 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v85 + 1) - v85) >> 4);
    *(_QWORD *)v83 = v23;
    if ( v23 == -1 )
      goto LABEL_54;
    v84 = v85;
    if ( !(_QWORD)v85 )
    {
      if ( v23 )
        goto LABEL_54;
    }
    v24 = (unsigned int)v10;
    v25 = 0LL;
    v61 = 0LL;
    v60 = 0LL;
    if ( (_DWORD)v10 )
    {
      v26 = std::_Allocate<16,std::_Default_allocate_traits,0>(112LL * (unsigned int)v10);
      *(_QWORD *)&v60 = v26;
      v27 = v26;
      *((_QWORD *)&v60 + 1) = v26;
      v25 = 112LL * (unsigned int)v10 + v26;
      v61 = v25;
    }
    else
    {
      v27 = *((_QWORD *)&v60 + 1);
      v26 = v60;
    }
    if ( (_DWORD)v10 )
    {
      v28 = (unsigned int)v10;
      do
      {
        if ( v27 == v25 )
        {
          std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(&v60);
          v25 = v61;
          v27 = *((_QWORD *)&v60 + 1);
        }
        else
        {
          *(_QWORD *)v27 = 0LL;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_BYTE *)(v27 + 16) = 0;
          *(_OWORD *)(v27 + 48) = 0LL;
          v27 += 112LL;
          *((_QWORD *)&v60 + 1) = v27;
        }
        --v28;
      }
      while ( v28 );
      v26 = v60;
    }
    v29 = 0x6DB6DB6DB6DB6DB7LL * ((v27 - v26) >> 4);
    v62 = v29;
    if ( v29 == -1 || (v63 = v26) == 0 && v29 )
    {
LABEL_54:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v30 = (CDirtyRegionAnnotation *)v95;
    v31 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v10);
    v94 = 0LL;
    v32 = 4LL;
    v33 = 4LL;
    v87 = v31;
    do
    {
      --v33;
      if ( EffectInput::EffectInput == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
        CDirtyRegionAnnotation::CDirtyRegionAnnotation(v30);
      else
        EffectInput::EffectInput(v30);
      v30 = (CDirtyRegionAnnotation *)((char *)v30 + 112);
    }
    while ( v33 );
    v94 = (unsigned int)v10;
    v34 = 0;
    v92 = &v94;
    v93 = 1;
    while ( v34 < *(_DWORD *)(v87 + 260) )
    {
      v38 = *((_QWORD *)this + 18);
      v39 = (struct EffectInput *)&v95[7 * v34];
      v40 = 44LL * v34;
      v41 = *(_QWORD *)(v38 + 8 * v24);
      v66 = v40;
      if ( *(_BYTE *)(v41 + v40 + 84) )
      {
        v42 = *(unsigned int *)(v41 + v40 + 80);
        if ( v42 >= v62 )
          goto LABEL_54;
        v43 = v63 + 112 * v42;
        if ( !*(_QWORD *)(v43 + 8) )
        {
          v44 = CBrushRenderingGraph::RenderSubgraphToIntermediateInternal(
                  (__int64)this,
                  *(_QWORD *)(v38 + 8 * v42),
                  v7,
                  (__int128 *)v74,
                  (unsigned __int64 *)v83,
                  &v62);
          v22 = v44;
          if ( v44 < 0 )
          {
            v58 = (unsigned int)v44;
            v59 = 798LL;
            goto LABEL_60;
          }
          if ( v76 && EffectInput::RequiresWrapping((const struct EffectInput *)v43) )
          {
            v45 = *(unsigned int *)(v43 + 100);
            if ( v45 >= v62 )
              goto LABEL_54;
            v46 = v63 + 112 * v45;
            if ( v43 == v46 || EffectInput::RequiresWrapping((const struct EffectInput *)(v63 + 112 * v45)) )
            {
              v88 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)(v46 + 100));
              CurrentVisual = CDrawingContext::GetCurrentVisual(v65);
              v47 = (CCachedImageProducer *)MIDL_user_allocate(0x68uLL);
              v48 = v47;
              if ( !v47 )
              {
                v22 = -2147024882;
                wil::details::in1diag3::Return_Hr(
                  (wil::details::in1diag3 *)retaddr,
                  (void *)0x27,
                  (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
                  (const char *)0x8007000ELL);
                v58 = 2147942414LL;
                v59 = 842LL;
LABEL_60:
                wil::details::in1diag3::Return_Hr(
                  (wil::details::in1diag3 *)retaddr,
                  (void *)v59,
                  (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
                  (const char *)v58);
                v55 = v22;
                v56 = 1419LL;
                goto LABEL_50;
              }
              CCachedImageProducer::CCachedImageProducer(v47);
              *((_QWORD *)v48 + 2) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
              v49 = CurrentVisual;
              *(_QWORD *)v48 = &CEffectIntermediateProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
              *((_QWORD *)v48 + 9) = v88;
              *((_QWORD *)v48 + 10) = v49;
              *((struct D2D_SIZE_F *)v48 + 11) = v74[0];
              *((struct D2D_SIZE_F *)v48 + 12) = v74[1];
              CMILRefCountImpl::AddReference((CCachedImageProducer *)((char *)v48 + 8));
              CEffectIntermediateProducer::Initialize(
                v48,
                *(__int64 (__fastcall ****)(CGDISectionBitmapRealization *, const struct _GUID *, void **))(v46 + 8));
              v50 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v77, v48);
              CDrawListBitmap::operator=(v46, v50);
              CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v77);
              if ( v43 != v46 )
                CDrawListBitmap::operator=(v43, v46);
              CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v48);
            }
            else
            {
              CDrawListBitmap::operator=(v43, v46);
            }
            v7 = v65;
          }
          v39 = (struct EffectInput *)&v95[7 * v34];
        }
      }
      v51 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v24);
      v52 = *(unsigned int *)(v51 + v66 + 80);
      if ( *(_BYTE *)(v51 + v66 + 84) )
      {
        if ( v52 >= v62 )
        {
LABEL_65:
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v53 = v63 + 112 * v52;
      }
      else
      {
        if ( v52 >= *(_QWORD *)v83 )
          goto LABEL_65;
        v53 = v84 + 112 * v52;
      }
      EffectInput::operator=((__int64)v39, v53);
      if ( !*((_BYTE *)v39 + 44) )
      {
        InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(this, v7, v74, v64[0], v34, v39);
        v22 = InputBrushParameters;
        if ( InputBrushParameters < 0 )
        {
          v55 = (unsigned int)InputBrushParameters;
          v56 = 1430LL;
LABEL_50:
          wil::details::in1diag3::Return_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)v56,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
            (const char *)v55);
          wil::details::in1diag3::Return_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)0x438,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
            (const char *)v22);
          CBrushRenderingGraph::CleanupEffectStage((struct EffectStage *)&v94);
          v57 = (EffectInput *)&v96;
          do
          {
            v57 = (EffectInput *)((char *)v57 - 112);
            EffectInput::~EffectInput(v57);
            --v32;
          }
          while ( v32 );
LABEL_52:
          std::vector<EffectInput>::_Tidy((__int64)&v60);
          goto LABEL_58;
        }
      }
      ++HIDWORD(v94);
      ++v34;
    }
    updated = CBrushRenderingGraph::UpdateDrawListCache(this, v7, v91, (struct EffectStage *)&v94, a5, v90);
    v22 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x442,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
        (const char *)(unsigned int)updated);
      gsl::final_action__lambda_1069039fee6473a405e5e4b65285ddf4___::_final_action__lambda_1069039fee6473a405e5e4b65285ddf4___(&v92);
      `vector destructor iterator'(v95, 0x70uLL, 4uLL, (void (*)(void *))EffectInput::~EffectInput);
      goto LABEL_52;
    }
    CBrushRenderingGraph::CleanupEffectStage((struct EffectStage *)&v94);
    v36 = (EffectInput *)&v96;
    do
    {
      v36 = (EffectInput *)((char *)v36 - 112);
      EffectInput::~EffectInput(v36);
      --v32;
    }
    while ( v32 );
    std::vector<EffectInput>::_Tidy((__int64)&v60);
    std::vector<EffectInput>::_Tidy((__int64)&v85);
    return 0LL;
  }
}
