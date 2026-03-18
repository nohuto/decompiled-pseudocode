/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B3BC
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006B870 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18013C510 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180018180 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18001BDD0 (--1EffectInput@@QEAA@XZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18004D53C (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18006C70C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x1800D7C20 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800DA770 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1800FD04C (-Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x1800FDAD4 (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800FDB08 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x180135A9C (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x1801369CC (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013E8F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C7BD0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0EffectInput@@QEAA@XZ @ 0x1801E16A0 (--0EffectInput@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801E43CC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAPEA.c)
 *     gsl::final_action__lambda_1069039fee6473a405e5e4b65285ddf4___::_final_action__lambda_1069039fee6473a405e5e4b65285ddf4___ @ 0x1801E5C64 (gsl--final_action__lambda_1069039fee6473a405e5e4b65285ddf4___--_final_action__lambda_1069039fee6.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z @ 0x1801E5C84 (-CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z.c)
 *     ?RequiresWrapping@EffectInput@@SA_NAEBU1@@Z @ 0x1801FB020 (-RequiresWrapping@EffectInput@@SA_NAEBU1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned __int64 v43; // rsi
  int v44; // eax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r14
  CCachedImageProducer *v47; // rax
  CCachedImageProducer *v48; // rbx
  struct CVisual *v49; // rax
  CDrawListBitmap *v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  int InputBrushParameters; // eax
  unsigned __int64 v55; // r9
  __int64 v56; // rdx
  EffectInput *v57; // rsi
  __int64 v58; // r9
  __int64 v59; // rdx
  int v60; // [rsp+28h] [rbp-E0h]
  int v61; // [rsp+28h] [rbp-E0h]
  int v62; // [rsp+28h] [rbp-E0h]
  int v63; // [rsp+28h] [rbp-E0h]
  int v64; // [rsp+28h] [rbp-E0h]
  __int128 v65; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v67; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A8h]
  unsigned int v69[2]; // [rsp+68h] [rbp-A0h]
  CDrawingContext *v70; // [rsp+70h] [rbp-98h]
  __int64 v71; // [rsp+78h] [rbp-90h] BYREF
  FLOAT v72; // [rsp+80h] [rbp-88h]
  FLOAT v73; // [rsp+84h] [rbp-84h]
  __int128 v74; // [rsp+88h] [rbp-80h] BYREF
  __int128 v75; // [rsp+98h] [rbp-70h]
  __int128 v76; // [rsp+A8h] [rbp-60h]
  __int128 v77; // [rsp+B8h] [rbp-50h]
  int v78; // [rsp+C8h] [rbp-40h]
  struct D2D_SIZE_F v79[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v80; // [rsp+E8h] [rbp-20h]
  _BOOL8 v81; // [rsp+F8h] [rbp-10h]
  __int64 v82; // [rsp+100h] [rbp-8h] BYREF
  int v83; // [rsp+108h] [rbp+0h]
  __int64 v84; // [rsp+10Ch] [rbp+4h]
  int v85; // [rsp+114h] [rbp+Ch]
  __int64 v86; // [rsp+118h] [rbp+10h]
  int v87; // [rsp+120h] [rbp+18h]
  int v88[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v89; // [rsp+130h] [rbp+28h]
  __int128 v90; // [rsp+138h] [rbp+30h] BYREF
  __int64 v91; // [rsp+148h] [rbp+40h]
  __int64 v92; // [rsp+150h] [rbp+48h]
  __int64 v93; // [rsp+158h] [rbp+50h]
  struct CVisual *CurrentVisual; // [rsp+160h] [rbp+58h]
  struct CDrawListCache *v95; // [rsp+168h] [rbp+60h]
  struct CDrawListBrush *v96; // [rsp+170h] [rbp+68h]
  __int64 *v97; // [rsp+178h] [rbp+70h] BYREF
  char v98; // [rsp+180h] [rbp+78h]
  __int64 v99; // [rsp+188h] [rbp+80h] BYREF
  _OWORD v100[28]; // [rsp+190h] [rbp+88h] BYREF
  char v101; // [rsp+350h] [rbp+248h] BYREF
  void *retaddr; // [rsp+3C0h] [rbp+2B8h]

  v96 = a4;
  v7 = a2;
  v70 = a2;
  v95 = a6;
  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(-2003304315, retaddr);
  width = a3->width;
  v10 = (unsigned int)(*((_DWORD *)this + 42) - 1);
  height = a3->height;
  v12 = *((_BYTE *)a6 + 86) == 0;
  v13 = *((_DWORD *)a2 + 74);
  v79[1] = 0LL;
  v81 = v12;
  v79[0].width = width;
  v79[0].height = height;
  v69[0] = v10;
  v78 = 0;
  v80 = 0LL;
  if ( v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    v15 = *((_QWORD *)a2 + 36);
    LOBYTE(a2) = 68 * v14;
    v16 = *(_OWORD *)(68 * v14 + v15 + 16);
    v74 = *(_OWORD *)(68 * v14 + v15);
    v17 = *(_OWORD *)(68 * v14 + v15 + 32);
    v75 = v16;
    v18 = *(_OWORD *)(68 * v14 + v15 + 48);
    v78 = *(_DWORD *)(68 * v14 + v15 + 64);
  }
  else
  {
    v74 = _xmm;
    v17 = _xmm;
    v75 = _xmm;
    v18 = *(__int128 *)&_xmm.r;
    BYTE1(v78) = BYTE1(v78) & 0xC0 | 0x29;
    LOBYTE(v78) = -86;
  }
  v71 = 0LL;
  v72 = width;
  v73 = height;
  v77 = v18;
  v76 = v17;
  if ( CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)&v74, (bool)a2) )
  {
    v19 = sqrtf_0((float)(*(float *)&v74 * *(float *)&v74) + (float)(*((float *)&v74 + 1) * *((float *)&v74 + 1)));
    v20 = sqrtf_0((float)(*(float *)&v75 * *(float *)&v75) + (float)(*((float *)&v75 + 1) * *((float *)&v75 + 1)));
    v79[1].width = v19;
    v79[1].height = v20;
  }
  else
  {
    v82 = v74;
    v83 = HIDWORD(v74);
    v84 = v75;
    v86 = v77;
    v85 = HIDWORD(v75);
    v87 = HIDWORD(v77);
    Matrix3x3::Get2DScaleDimensionsWithPerspective(&v82, &v79[1], &v79[1].height, &v71);
  }
  v91 = 0LL;
  v90 = 0LL;
  v21 = CBrushRenderingGraph::GatherEffectInputs(this, v7, a3);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x40C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v21,
      v60);
LABEL_58:
    std::vector<EffectInput>::_Tidy(&v90);
    return v22;
  }
  else
  {
    v23 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v90 + 1) - v90) >> 4);
    *(_QWORD *)v88 = v23;
    if ( v23 == -1 )
      goto LABEL_54;
    v89 = v90;
    if ( !(_QWORD)v90 )
    {
      if ( v23 )
        goto LABEL_54;
    }
    v24 = (unsigned int)v10;
    v25 = 0LL;
    v66 = 0LL;
    v65 = 0LL;
    if ( (_DWORD)v10 )
    {
      v26 = std::_Allocate<16,std::_Default_allocate_traits,0>(112LL * (unsigned int)v10);
      *(_QWORD *)&v65 = v26;
      v27 = v26;
      *((_QWORD *)&v65 + 1) = v26;
      v25 = 112LL * (unsigned int)v10 + v26;
      v66 = v25;
    }
    else
    {
      v27 = *((_QWORD *)&v65 + 1);
      v26 = v65;
    }
    if ( (_DWORD)v10 )
    {
      v28 = (unsigned int)v10;
      do
      {
        if ( v27 == v25 )
        {
          std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(&v65, v27);
          v25 = v66;
          v27 = *((_QWORD *)&v65 + 1);
        }
        else
        {
          *(_QWORD *)v27 = 0LL;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_BYTE *)(v27 + 16) = 0;
          *(_OWORD *)(v27 + 48) = 0LL;
          v27 += 112LL;
          *((_QWORD *)&v65 + 1) = v27;
        }
        --v28;
      }
      while ( v28 );
      v26 = v65;
    }
    v29 = 0x6DB6DB6DB6DB6DB7LL * ((v27 - v26) >> 4);
    v67 = v29;
    if ( v29 == -1 || (v68 = v26) == 0 && v29 )
    {
LABEL_54:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v30 = (CDirtyRegionAnnotation *)v100;
    v31 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v10);
    v99 = 0LL;
    v32 = 4LL;
    v33 = 4LL;
    v92 = v31;
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
    v99 = (unsigned int)v10;
    v34 = 0;
    v97 = &v99;
    v98 = 1;
    while ( v34 < *(_DWORD *)(v92 + 260) )
    {
      v38 = *((_QWORD *)this + 18);
      v39 = (struct EffectInput *)&v100[7 * v34];
      v40 = 44LL * v34;
      v41 = *(_QWORD *)(v38 + 8 * v24);
      v71 = v40;
      if ( *(_BYTE *)(v41 + v40 + 84) )
      {
        v42 = *(unsigned int *)(v41 + v40 + 80);
        if ( v42 >= v67 )
          goto LABEL_54;
        v43 = v68 + 112 * v42;
        if ( !*(_QWORD *)(v43 + 8) )
        {
          v44 = CBrushRenderingGraph::RenderSubgraphToIntermediateInternal(
                  (__int64)this,
                  *(_QWORD *)(v38 + 8 * v42),
                  v7,
                  (__int128 *)v79,
                  (unsigned __int64 *)v88,
                  &v67);
          v22 = v44;
          if ( v44 < 0 )
          {
            v58 = (unsigned int)v44;
            v59 = 798LL;
            goto LABEL_60;
          }
          if ( v81 && EffectInput::RequiresWrapping((const struct EffectInput *)v43) )
          {
            v45 = *(unsigned int *)(v43 + 100);
            if ( v45 >= v67 )
              goto LABEL_54;
            v46 = v68 + 112 * v45;
            if ( v43 == v46 || EffectInput::RequiresWrapping((const struct EffectInput *)(v68 + 112 * v45)) )
            {
              v93 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)(v46 + 100));
              CurrentVisual = CDrawingContext::GetCurrentVisual(v70);
              v47 = (CCachedImageProducer *)MIDL_user_allocate(0x68uLL);
              v48 = v47;
              if ( !v47 )
              {
                v22 = -2147024882;
                wil::details::in1diag3::Return_Hr(
                  (wil::details::in1diag3 *)retaddr,
                  (void *)0x27,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
                  (const char *)0x8007000ELL,
                  v62);
                v58 = 2147942414LL;
                v59 = 842LL;
LABEL_60:
                wil::details::in1diag3::Return_Hr(
                  (wil::details::in1diag3 *)retaddr,
                  (void *)v59,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
                  (const char *)v58,
                  v62);
                v55 = v22;
                v56 = 1419LL;
                goto LABEL_50;
              }
              CCachedImageProducer::CCachedImageProducer(v47);
              *((_QWORD *)v48 + 2) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
              v49 = CurrentVisual;
              *(_QWORD *)v48 = &CEffectIntermediateProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
              *((_QWORD *)v48 + 9) = v93;
              *((_QWORD *)v48 + 10) = v49;
              *((struct D2D_SIZE_F *)v48 + 11) = v79[0];
              *((struct D2D_SIZE_F *)v48 + 12) = v79[1];
              CMILRefCountImpl::AddReference((CCachedImageProducer *)((char *)v48 + 8));
              CEffectIntermediateProducer::Initialize(v48, *(struct IBitmapRealization **)(v46 + 8));
              v50 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v82, v48);
              CDrawListBitmap::operator=(v46, v50);
              CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v82);
              if ( v43 != v46 )
                CDrawListBitmap::operator=(v43, v46);
              CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v48);
            }
            else
            {
              CDrawListBitmap::operator=(v43, v46);
            }
            v7 = v70;
          }
          v39 = (struct EffectInput *)&v100[7 * v34];
        }
      }
      v51 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v24);
      v52 = *(unsigned int *)(v51 + v71 + 80);
      if ( *(_BYTE *)(v51 + v71 + 84) )
      {
        if ( v52 >= v67 )
        {
LABEL_65:
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v53 = v68 + 112 * v52;
      }
      else
      {
        if ( v52 >= *(_QWORD *)v88 )
          goto LABEL_65;
        v53 = v89 + 112 * v52;
      }
      EffectInput::operator=(v39, v53);
      if ( !*((_BYTE *)v39 + 44) )
      {
        InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(this, v7, v79, v69[0], v34, v39);
        v22 = InputBrushParameters;
        if ( InputBrushParameters < 0 )
        {
          v55 = (unsigned int)InputBrushParameters;
          v56 = 1430LL;
LABEL_50:
          wil::details::in1diag3::Return_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)v56,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
            (const char *)v55,
            v63);
          wil::details::in1diag3::Return_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)0x438,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
            (const char *)v22,
            v64);
          CBrushRenderingGraph::CleanupEffectStage((struct EffectStage *)&v99);
          v57 = (EffectInput *)&v101;
          do
          {
            v57 = (EffectInput *)((char *)v57 - 112);
            EffectInput::~EffectInput(v57);
            --v32;
          }
          while ( v32 );
LABEL_52:
          std::vector<EffectInput>::_Tidy(&v65);
          goto LABEL_58;
        }
      }
      ++HIDWORD(v99);
      ++v34;
    }
    updated = CBrushRenderingGraph::UpdateDrawListCache(this, v7, v96, (struct EffectStage *)&v99, a5, v95);
    v22 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x442,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
        (const char *)(unsigned int)updated,
        v61);
      gsl::final_action__lambda_1069039fee6473a405e5e4b65285ddf4___::_final_action__lambda_1069039fee6473a405e5e4b65285ddf4___(&v97);
      `vector destructor iterator'(v100, 0x70uLL, 4uLL, (void (*)(void *))EffectInput::~EffectInput);
      goto LABEL_52;
    }
    CBrushRenderingGraph::CleanupEffectStage((struct EffectStage *)&v99);
    v36 = (EffectInput *)&v101;
    do
    {
      v36 = (EffectInput *)((char *)v36 - 112);
      EffectInput::~EffectInput(v36);
      --v32;
    }
    while ( v32 );
    std::vector<EffectInput>::_Tidy(&v65);
    std::vector<EffectInput>::_Tidy(&v90);
    return 0LL;
  }
}
