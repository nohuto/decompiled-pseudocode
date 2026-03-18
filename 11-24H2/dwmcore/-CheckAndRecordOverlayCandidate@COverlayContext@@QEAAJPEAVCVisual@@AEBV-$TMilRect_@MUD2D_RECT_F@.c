/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180268E88
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180234A5C (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800237CC (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18005CC10 (McTemplateU0x_EventWriteTransfer.c)
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x18005E784 (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180061250 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x18018A47C (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801A4054 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801C7288 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801D2100 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1801D2C40 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x1801EFCEC (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ??$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@ISwapChainRealization@@QEAAJPEAPEAVIAdvancedDirectFlipBitmapRealization@@@Z @ 0x1801F1EEC (--$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@ISwapChainRealization@@QEAAJPEAPEAVIAd.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x1801F4514 (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x1801FC74C (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     ?RGBOverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x1801FE5A4 (-RGBOverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180214544 (-DoesContain@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEB.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x180222540 (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V8@_N_N_NW4OverlaySize@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@8_N99W4OverlaySize@@@Z @ 0x180268268 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLAN.c)
 *     ?CalcContentOnTop@CVisitedContent@COverlayContext@@QEBA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180268B14 (-CalcContentOnTop@CVisitedContent@COverlayContext@@QEBA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?CalcInvertedContentOnTop@CVisitedContent@COverlayContext@@QEBA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180268BB8 (-CalcInvertedContentOnTop@CVisitedContent@COverlayContext@@QEBA-AV-$TMilRect_@HUtagRECT@@UD2D_PO.c)
 *     ?CalcOverlaySize@COverlayContext@@AEBA?AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180268C60 (-CalcOverlaySize@COverlayContext@@AEBA-AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@.c)
 *     ?IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_NI5@Z @ 0x18026C324 (-IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ContentOnTop@@@details@wil@@QEAA_NXZ @ 0x18026D2AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ContentOnTop@@@details@wil@@QEAA_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NXZ @ 0x18026D328 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo_ea_18026D328.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18026D6D0 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        __int64 a2,
        __int64 a3,
        struct CCompositionSurfaceInfo *a4,
        struct ISwapChainRealization *a5,
        float *a6,
        float *a7,
        __int64 a8,
        __int128 *a9,
        __int64 a10,
        unsigned int a11,
        LONG a12,
        bool a13,
        char a14,
        int *a15,
        char a16,
        int *a17)
{
  double v17; // xmm2_8
  COverlayContext *v18; // r15
  struct ISwapChainRealization *v19; // rbx
  struct CCompositionSurfaceInfo *v20; // r13
  char *v21; // r12
  __int64 v22; // rax
  int v23; // esi
  _DWORD *v24; // rax
  float v25; // xmm0_4
  float v26; // eax
  double v27; // xmm0_8
  int v28; // eax
  double v29; // xmm0_8
  int v30; // eax
  double v31; // xmm0_8
  int v32; // eax
  double v33; // xmm0_8
  int v34; // eax
  double v35; // xmm0_8
  int v36; // eax
  double v37; // xmm0_8
  int v38; // eax
  double v39; // xmm0_8
  int v40; // eax
  double v41; // xmm0_8
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int *v45; // rax
  __m128i v46; // xmm6
  bool IsEmpty; // di
  _QWORD *v48; // rax
  __int64 v49; // rax
  int v50; // eax
  void (__fastcall **v51)(struct ISwapChainRealization *, GUID *, float **); // rcx
  int v52; // r14d
  int v53; // r13d
  int *v54; // rax
  char v55; // r12
  int v56; // r15d
  char v57; // r14
  char v58; // di
  char v59; // si
  int v60; // ebx
  _QWORD *v61; // rax
  __int64 v62; // rdx
  char IsCandidateDirectFlipCompatible; // al
  unsigned int v64; // eax
  int v65; // edx
  int v66; // eax
  bool v67; // al
  char v68; // dl
  bool v69; // zf
  bool v70; // r14
  struct ISwapChainRealization *v71; // r12
  __int64 v72; // rsi
  int v73; // ebx
  _QWORD *v74; // rax
  int v75; // ebx
  char v76; // al
  __int64 v77; // rsi
  __int64 (__fastcall *v78)(__int64, __m128i *); // rdi
  int v79; // ebx
  _DWORD *v80; // rax
  void *v81; // rdx
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r9
  RenderTargetInfo *v85; // rax
  unsigned __int8 (__fastcall *v86)(struct CCompositionSurfaceInfo *); // rax
  unsigned int v87; // ecx
  char v88; // di
  bool v89; // di
  const struct CMonitorTransform *MonitorTransform; // rax
  int v91; // eax
  int *v92; // rax
  struct tagRECT v93; // xmm11
  struct tagRECT v94; // xmm12
  char v95; // si
  int v96; // edi
  struct tagRECT v97; // xmm13
  __int128 v98; // xmm14
  __int128 v99; // xmm15
  __int128 v100; // xmm7
  __int128 v101; // xmm8
  __int128 v102; // xmm9
  __int128 v103; // xmm10
  int v104; // ebx
  __m128i v105; // xmm6
  __int64 v106; // rax
  __int64 v107; // rax
  int v108; // esi
  int v109; // edi
  int v110; // ebx
  _QWORD *v111; // rax
  __int64 v112; // rdx
  int v114; // [rsp+28h] [rbp-140h]
  int v115; // [rsp+38h] [rbp-130h]
  int v116; // [rsp+48h] [rbp-120h]
  bool v117; // [rsp+E8h] [rbp-80h]
  char v118; // [rsp+E8h] [rbp-80h]
  float v119; // [rsp+ECh] [rbp-7Ch]
  bool v120; // [rsp+ECh] [rbp-7Ch]
  int v121; // [rsp+F8h] [rbp-70h]
  char IsIntelWorkaroundNeeded; // [rsp+108h] [rbp-60h]
  float *v124; // [rsp+110h] [rbp-58h] BYREF
  float *v125; // [rsp+118h] [rbp-50h] BYREF
  int v126; // [rsp+120h] [rbp-48h] BYREF
  _QWORD v127[2]; // [rsp+128h] [rbp-40h] BYREF
  __m128i v128; // [rsp+138h] [rbp-30h] BYREF
  _QWORD v129[2]; // [rsp+148h] [rbp-20h] BYREF
  __int128 v130; // [rsp+158h] [rbp-10h]
  __int128 v131; // [rsp+168h] [rbp+0h] BYREF
  __int128 v132; // [rsp+178h] [rbp+10h] BYREF
  __int64 v133; // [rsp+188h] [rbp+20h] BYREF
  int v134; // [rsp+190h] [rbp+28h]
  float v135; // [rsp+198h] [rbp+30h]
  _OWORD v136[4]; // [rsp+1A8h] [rbp+40h] BYREF
  int v137; // [rsp+1E8h] [rbp+80h]
  _OWORD v138[4]; // [rsp+1F8h] [rbp+90h] BYREF
  int v139; // [rsp+238h] [rbp+D0h]
  _OWORD v140[7]; // [rsp+248h] [rbp+E0h] BYREF
  __m128i v141; // [rsp+2B8h] [rbp+150h] BYREF
  struct tagRECT v142; // [rsp+2D8h] [rbp+170h] BYREF
  struct tagRECT v143; // [rsp+2E8h] [rbp+180h] BYREF
  struct tagRECT v144; // [rsp+2F8h] [rbp+190h] BYREF
  __int128 v145; // [rsp+308h] [rbp+1A0h]
  __int128 v146; // [rsp+318h] [rbp+1B0h]
  __int128 v147; // [rsp+328h] [rbp+1C0h]
  __int128 v148; // [rsp+338h] [rbp+1D0h]
  __m128i v149; // [rsp+348h] [rbp+1E0h] BYREF
  __int128 v150; // [rsp+358h] [rbp+1F0h] BYREF
  COverlayContext *v151; // [rsp+368h] [rbp+200h] BYREF
  __int128 v152; // [rsp+378h] [rbp+210h] BYREF

  v18 = this;
  v19 = a5;
  v20 = a4;
  v151 = this;
  v125 = a6;
  v129[1] = a3;
  v124 = a7;
  v127[0] = a4;
  *(_QWORD *)&v130 = a8;
  v142.left = a12;
  memset_0(&v142.top, 0, 0x6CuLL);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)v18 + 8LL) + 24LL))(*(_QWORD *)v18 + 8LL, &v133);
  v21 = (char *)a5 + 8;
  v22 = *((_QWORD *)a5 + 1);
  v129[0] = (char *)a5 + 8;
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(char *, __int128 *))(v22 + 24))((char *)a5 + 8, &v150) + 4) != 1 )
  {
    v23 = v134;
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(char *, int *))(*(_QWORD *)v21 + 48LL))((char *)a5 + 8, &v126);
    if ( *v24 == -1 || *v24 == v23 || v23 == -3 )
    {
      v25 = *v125 + 6291456.25;
      v26 = v25;
      v27 = v125[1];
      v142.top = (int)(LODWORD(v26) << 10) >> 11;
      *(float *)&v27 = v27 + 6291456.25;
      v28 = LODWORD(v27);
      v29 = v125[2];
      v142.right = v28 << 10 >> 11;
      *(float *)&v29 = v29 + 6291456.25;
      v30 = LODWORD(v29);
      v31 = v125[3];
      v142.bottom = v30 << 10 >> 11;
      *(float *)&v31 = v31 + 6291456.25;
      v32 = LODWORD(v31);
      v33 = *v124;
      v143.left = v32 << 10 >> 11;
      *(float *)&v33 = v33 + 6291456.25;
      v34 = LODWORD(v33);
      v35 = v124[1];
      v143.top = v34 << 10 >> 11;
      *(float *)&v35 = v35 + 6291456.25;
      v36 = LODWORD(v35);
      v37 = v124[2];
      v143.right = v36 << 10 >> 11;
      *(float *)&v37 = v37 + 6291456.25;
      v38 = LODWORD(v37);
      v39 = v124[3];
      v143.bottom = v38 << 10 >> 11;
      *(float *)&v39 = v39 + 6291456.25;
      v40 = LODWORD(v39);
      v41 = *(float *)a8;
      v144.left = v40 << 10 >> 11;
      *(float *)&v41 = v41 + 6291456.25;
      v42 = LODWORD(v41);
      LODWORD(v41) = *(_DWORD *)(a8 + 4);
      v144.top = v42 << 10 >> 11;
      *(float *)&v41 = *(float *)&v41 + 6291456.25;
      v43 = LODWORD(v41);
      LODWORD(v41) = *(_DWORD *)(a8 + 8);
      v144.right = v43 << 10 >> 11;
      *(float *)&v41 = *(float *)&v41 + 6291456.25;
      v44 = LODWORD(v41);
      LODWORD(v41) = *(_DWORD *)(a8 + 12);
      v144.bottom = v44 << 10 >> 11;
      v119 = *(float *)&v41 + 6291456.25;
      LODWORD(v145) = (int)(LODWORD(v119) << 10) >> 11;
      *(_QWORD *)((char *)&v145 + 4) = a11;
      HIDWORD(v146) = *(_DWORD *)((*(__int64 (__fastcall **)(char *, __int128 *))(*(_QWORD *)v21 + 24LL))(
                                    (char *)a5 + 8,
                                    &v150)
                                + 8);
      LODWORD(v148) = 2;
      DWORD2(v148) = ConvertSDRBoostToSDRWhiteLevel(v135, SHIDWORD(v146));
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) )
      {
        if ( (*(unsigned int (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v20 + 88LL))(v20) == 2 )
        {
          *(_QWORD *)&v17 = *(unsigned int *)(a8 + 12);
          *(float *)&v17 = (float)(*(float *)&v17 - *(float *)(a8 + 4)) * (float)(*(float *)(a8 + 8) - *(float *)a8);
          if ( *(float *)&v17 > (float)((float)(*((float *)v18 + 4891) - *((float *)v18 + 4889))
                                      * (float)(*((float *)v18 + 4890) - *((float *)v18 + 4888))) )
            *((_OWORD *)v18 + 1222) = *(_OWORD *)a8;
        }
      }
      v120 = 0;
      if ( *((int *)v18 + 4880) < 2000 && (a12 & 3) != 0 )
        v120 = !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::DoesContain(
                  (__int64)&v144.top,
                  &v143.top);
      IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(
                                  v18,
                                  (const struct tagRECT *)&v142.top,
                                  (const struct tagRECT *)&v143.top,
                                  (const struct tagRECT *)&v144.top);
      v45 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ContentOnTop>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ContentOnTop>::GetImpl'::`2'::impl)
          ? COverlayContext::CVisitedContent::CalcContentOnTop(
              (const struct D2D_RECT_F *)v18 + 1210,
              v128.m128i_i32,
              v17)
          : a15;
      v46 = *(__m128i *)v45;
      v141 = v46;
      v128 = v46;
      IsEmpty = TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(&v141);
      v117 = IsEmpty;
      v48 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, float **))(*(_QWORD *)a5 + 64LL))(
                        a5,
                        &v125);
      if ( *v48 == v133 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 56LL))(a5)
          || (v49 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 40LL))(a5),
              !CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v49 + 16))) )
        {
          v50 = COverlayContext::CalcOverlaySize(v18, (__int64)&v142);
          v51 = *(void (__fastcall ***)(struct ISwapChainRealization *, GUID *, float **))a5;
          v52 = v50;
          v121 = v50;
          v124 = 0LL;
          (*v51)(a5, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v124);
          v125 = 0LL;
          if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL)
             - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL
            && *(int *)((*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 40LL))(a5) + 620) < 3200 )
          {
            if ( v125 )
              (*(void (__fastcall **)(float *))(*(_QWORD *)v125 + 16LL))(v125);
            ISwapChainRealization::QueryInterface<IAdvancedDirectFlipBitmapRealization>(a5, (void **)&v125);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          {
            v126 = *(_DWORD *)(*(__int64 (__fastcall **)(char *, __int128 *))(*(_QWORD *)v21 + 24LL))(
                                (char *)a5 + 8,
                                &v152);
            v53 = *(_DWORD *)((*(__int64 (__fastcall **)(char *, __int128 *))(*(_QWORD *)v21 + 32LL))(
                                (char *)a5 + 8,
                                &v131)
                            + 4);
            v54 = (int *)(*(__int64 (__fastcall **)(char *, __int128 *))(*(_QWORD *)v21 + 32LL))((char *)a5 + 8, &v132);
            v55 = IsEmpty;
            v56 = *v54;
            v57 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 152LL))(a5);
            v58 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 144LL))(a5);
            v59 = v125 != 0LL;
            v60 = (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 168LL))(a5);
            v61 = (_QWORD *)(*(__int64 (__fastcall **)(char *, __int128 *))(*((_QWORD *)a5 + 2) + 24LL))(
                              (char *)a5 + 16,
                              &v150);
            McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer(
              *(unsigned int *)v61,
              v62,
              *(unsigned int *)v61 | (unsigned __int64)((__int64)(int)HIDWORD(*v61) << 32),
              v60,
              v59,
              v58,
              v57,
              v55,
              v56,
              v53,
              v126,
              v142.left,
              v142.top,
              v142.right,
              v142.bottom,
              v143.left,
              v143.top,
              v143.right,
              v143.bottom,
              v144.left,
              v144.top,
              v144.right,
              v144.bottom,
              v145,
              SBYTE4(v145),
              SBYTE8(v145),
              SBYTE12(v146));
            v18 = v151;
            v19 = a5;
            v20 = (struct CCompositionSurfaceInfo *)v127[0];
            v21 = (char *)v129[0];
            v52 = v121;
            IsEmpty = v117;
          }
          IsCandidateDirectFlipCompatible = 0;
          if ( v52 == 2 && !*((_BYTE *)v18 + 19594) )
          {
            if ( v124 )
              goto LABEL_35;
            v64 = (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v20 + 72LL))(v20);
            IsCandidateDirectFlipCompatible = COverlayContext::IsCandidateDirectFlipCompatible(
                                                v18,
                                                v20,
                                                v19,
                                                (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v142,
                                                v64,
                                                a13);
          }
          if ( !IsCandidateDirectFlipCompatible )
          {
LABEL_35:
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
            {
              v67 = COverlayContext::OverlaysEnabled(v18);
              if ( v68 )
              {
                v69 = !v67;
                goto LABEL_38;
              }
              if ( v67 )
              {
LABEL_79:
                if ( *((_DWORD *)v18 + 12) )
                  goto LABEL_80;
              }
            }
            else
            {
              v87 = *((_DWORD *)v18 + 10);
              if ( !v124 )
              {
                if ( v87 >= *((_DWORD *)v18 + 11) )
                  v87 = *((_DWORD *)v18 + 11);
                v69 = v87 == 1;
LABEL_38:
                if ( v69 && (v52 != 2 || !v117) )
                  goto LABEL_41;
LABEL_80:
                v70 = 1;
                v85 = (RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)(*(_QWORD *)v18 + 8LL)
                                                                                        + 24LL))(
                                            *(_QWORD *)v18 + 8LL,
                                            &v141);
                if ( RenderTargetInfo::IsHDR(v85) )
                {
                  if ( *(_DWORD *)((*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v19 + 40LL))(v19)
                                 + 896) != 1297040209 )
                    goto LABEL_42;
                  v69 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) == 0;
                  v86 = *(unsigned __int8 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v20 + 152LL);
                  if ( v69 )
                  {
                    if ( !v86(v20) )
                      goto LABEL_42;
                    v73 = v121;
                    v72 = a2;
                    v70 = v121 == 2;
                    v71 = a5;
LABEL_45:
                    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetImpl'::`2'::impl) )
                    {
                      if ( !v70 )
                      {
LABEL_115:
                        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v125);
                        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v124);
                        return 0LL;
                      }
                    }
                    else if ( !v70
                           || *((_BYTE *)v18 + 19594)
                           && !v73
                           && *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL)
                            - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) != 8LL )
                    {
                      goto LABEL_115;
                    }
                    v88 = 0;
                    if ( v125 )
                      v88 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v125 + 24LL))(v125);
                    if ( !(*(unsigned __int8 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v20 + 136LL))(v20)
                      && !v120
                      && !IsIntelWorkaroundNeeded
                      && !v88 )
                    {
                      v89 = a13;
                      if ( a13
                        && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 96LL))(*(_QWORD *)v18) - 1 <= 0xFFFFFFFD )
                      {
                        if ( v143.top < 0 || v143.right < 0 )
                        {
                          v89 = 0;
                          a13 = 0;
                        }
                        else
                        {
                          v141.m128i_i64[0] = *(_QWORD *)&v143.top;
                          v141.m128i_i64[1] = __PAIR64__(v144.left, v143.bottom);
                          MonitorTransform = COverlayContext::GetMonitorTransform(v18);
                          CMonitorTransform::GetClipBox(
                            (__int64)MonitorTransform,
                            (__int64)&v149,
                            *((_BYTE *)v18 + 19089));
                          v89 = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
                                  (unsigned int *)&v149,
                                  (unsigned int *)&v141)
                             && a13;
                          a13 = v89;
                        }
                      }
                      v91 = (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v20 + 72LL))(v20);
                      LOBYTE(v116) = v89;
                      LOBYTE(v115) = v124 != 0LL;
                      if ( (unsigned __int8)COverlayContext::IsCandidateOverlayCompatible(
                                              v18,
                                              v72,
                                              v20,
                                              v71,
                                              &v142,
                                              v73,
                                              v115,
                                              v91,
                                              v116) )
                      {
                        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ContentOnTop>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ContentOnTop>::GetImpl'::`2'::impl) )
                          v92 = COverlayContext::CVisitedContent::CalcInvertedContentOnTop(
                                  (const struct D2D_RECT_F *)v18 + 1210,
                                  v141.m128i_i32,
                                  v17);
                        else
                          v92 = a17;
                        v93 = v142;
                        v94 = v143;
                        v95 = v124 != 0LL;
                        v96 = *(_DWORD *)(a10 + 64);
                        v97 = v144;
                        v98 = v145;
                        v99 = v146;
                        v141 = *(__m128i *)v92;
                        v149 = *(__m128i *)a10;
                        v152 = *(_OWORD *)(a10 + 16);
                        v150 = *(_OWORD *)(a10 + 32);
                        v132 = *(_OWORD *)(a10 + 48);
                        v100 = *a9;
                        v101 = a9[1];
                        v102 = a9[2];
                        v103 = a9[3];
                        v104 = *((_DWORD *)a9 + 16);
                        v131 = v147;
                        v105 = _mm_loadu_si128((const __m128i *)v130);
                        v106 = *(_QWORD *)v20;
                        v130 = v148;
                        v107 = (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(v106 + 64))(v20);
                        v136[1] = v152;
                        v136[0] = v149;
                        v137 = v96;
                        v136[3] = v132;
                        v139 = v104;
                        v136[2] = v150;
                        v138[0] = v100;
                        v140[5] = v131;
                        v138[1] = v101;
                        v138[2] = v102;
                        v138[3] = v103;
                        v149 = v105;
                        v140[0] = v93;
                        v140[1] = v94;
                        v140[2] = v97;
                        v140[3] = v98;
                        v140[4] = v99;
                        v140[6] = v130;
                        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,CCornerRects,CMILMatrix,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,bool,bool,bool,enum OverlaySize>(
                          (_QWORD *)v18 + 11,
                          (int)v18,
                          a2,
                          (__int64)v20,
                          v107,
                          v140,
                          (__int128 *)v149.m128i_i8,
                          (__int64)v138,
                          (__int64)v136,
                          (__int128 *)v128.m128i_i8,
                          (__int128 *)v141.m128i_i8,
                          v95,
                          a13,
                          a14,
                          v121);
                        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
                        {
                          v108 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, __m128i *))(*((_QWORD *)v71 + 1) + 24LL))(
                                              (__int64)v71 + 8,
                                              &v149);
                          v109 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, __int128 *))(*((_QWORD *)v71 + 1) + 32LL))(
                                               (__int64)v71 + 8,
                                               &v150)
                                           + 4);
                          v110 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*((_QWORD *)v71 + 1) + 32LL))(
                                              (__int64)v71 + 8,
                                              &v132);
                          v111 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*((_QWORD *)v71 + 2) + 24LL))(
                                             (__int64)v71 + 16,
                                             &v131);
                          McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer(
                            *(unsigned int *)v111,
                            v112,
                            *(unsigned int *)v111 | (unsigned __int64)((__int64)(int)HIDWORD(*v111) << 32),
                            v110,
                            v109,
                            v108,
                            v142.left,
                            v142.top,
                            v142.right,
                            v142.bottom,
                            v143.left,
                            v143.top,
                            v143.right,
                            v143.bottom,
                            v144.left,
                            v144.top,
                            v144.right,
                            v144.bottom,
                            v145,
                            SBYTE4(v145),
                            SBYTE8(v145),
                            SBYTE12(v146));
                        }
                      }
                    }
                    goto LABEL_115;
                  }
                  v73 = v121;
                  if ( v86(v20) )
                  {
                    v72 = a2;
                    v70 = v121 != 0;
LABEL_85:
                    v71 = a5;
                    goto LABEL_45;
                  }
                }
                else
                {
                  v73 = v121;
                }
                v72 = a2;
                goto LABEL_85;
              }
              if ( v87 > 1 )
                goto LABEL_79;
            }
LABEL_41:
            v70 = 0;
LABEL_42:
            v71 = a5;
LABEL_43:
            v72 = a2;
LABEL_44:
            v73 = v121;
            goto LABEL_45;
          }
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
          {
            if ( !COverlayContext::OverlaysEnabled(v18) || (v66 = v65, *((int *)v18 + 4880) < 2200) )
              v66 = 1;
            if ( !v66 )
              goto LABEL_35;
          }
          else if ( COverlayContext::RGBOverlaysEnabled(v18) && *((int *)v18 + 4880) >= 2200 )
          {
            goto LABEL_35;
          }
          v70 = 0;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            v74 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*((_QWORD *)v19 + 2) + 24LL))(
                              (__int64)v19 + 16,
                              v129);
            McTemplateU0x_EventWriteTransfer(
              *(unsigned int *)v74,
              &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
              *(unsigned int *)v74 | (unsigned __int64)((__int64)(int)HIDWORD(*v74) << 32));
          }
          v75 = 2;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ContentOnTop>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ContentOnTop>::GetImpl'::`2'::impl) )
          {
            if ( *((_BYTE *)v18 + 19392) && !*((_BYTE *)v18 + 19393) )
            {
              v76 = 1;
              v118 = 1;
              goto LABEL_62;
            }
            v76 = 0;
          }
          else
          {
            v76 = a16;
          }
          v118 = v76;
LABEL_62:
          if ( !IsEmpty )
          {
            if ( v125 )
            {
              v77 = *(_QWORD *)v18;
              v78 = *(__int64 (__fastcall **)(__int64, __m128i *))(**(_QWORD **)v18 + 24LL);
              v79 = *(_DWORD *)(*(__int64 (__fastcall **)(char *, COverlayContext **))(*(_QWORD *)v21 + 24LL))(
                                 v21,
                                 &v151);
              if ( v79 == *(_DWORD *)v78(v77, &v149) )
              {
                if ( v118 )
                {
                  v75 = 4;
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
                    goto LABEL_77;
                  v80 = (_DWORD *)(*(__int64 (__fastcall **)(char *, _QWORD *))(*((_QWORD *)a5 + 2) + 24LL))(
                                    (char *)a5 + 16,
                                    v127);
                  v81 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
                  goto LABEL_68;
                }
                v75 = 3;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
                {
                  v80 = (_DWORD *)(*(__int64 (__fastcall **)(char *, _QWORD *))(*((_QWORD *)a5 + 2) + 24LL))(
                                    (char *)a5 + 16,
                                    v127);
                  v81 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
LABEL_68:
                  McTemplateU0xddddd_EventWriteTransfer(
                    *v80,
                    (_DWORD)v81,
                    *v80,
                    1,
                    _mm_cvtsi128_si32(v46),
                    _mm_cvtsi128_si32(_mm_srli_si128(v46, 4)),
                    _mm_cvtsi128_si32(_mm_srli_si128(v46, 8)),
                    _mm_cvtsi128_si32(_mm_srli_si128(v46, 12)));
                }
              }
              else
              {
                if ( !v118 )
                {
                  v71 = a5;
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
                  {
                    v82 = (_QWORD *)(*(__int64 (__fastcall **)(char *, _QWORD *))(*((_QWORD *)a5 + 2) + 24LL))(
                                      (char *)a5 + 16,
                                      v127);
                    McTemplateU0xqqdddd_EventWriteTransfer(
                      *(unsigned int *)v82,
                      v83,
                      *(unsigned int *)v82 | (unsigned __int64)((__int64)(int)HIDWORD(*v82) << 32),
                      v84,
                      v114,
                      _mm_cvtsi128_si32(v46),
                      _mm_cvtsi128_si32(_mm_srli_si128(v46, 4)),
                      _mm_cvtsi128_si32(_mm_srli_si128(v46, 8)),
                      _mm_cvtsi128_si32(_mm_srli_si128(v46, 12)));
                  }
                  goto LABEL_43;
                }
                v75 = 1;
              }
            }
            else
            {
              if ( !v76 )
                goto LABEL_42;
              v75 = 1;
            }
          }
LABEL_77:
          v72 = a2;
          CDirectFlipInfo::Init((__int64)v18 + 19400, *(_QWORD *)v18, a2, (__int64)v20, v75, &v141);
          v71 = a5;
          v128 = v141;
          goto LABEL_44;
        }
      }
    }
  }
  return 0LL;
}
