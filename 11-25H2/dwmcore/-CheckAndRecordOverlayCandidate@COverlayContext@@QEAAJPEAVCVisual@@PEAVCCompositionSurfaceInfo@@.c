/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180274714
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023E0CC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180040190 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180061220 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x1800C2FC0 (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801034A4 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180186A8C (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x180189CD8 (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801C1D88 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801DFEB0 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1801E0470 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x1801FBED0 (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ??$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@ISwapChainRealization@@QEAAJPEAPEAVIAdvancedDirectFlipBitmapRealization@@@Z @ 0x1801FE4DC (--$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@ISwapChainRealization@@QEAAJPEAPEAVIAd.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x180200E34 (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x18020911C (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     ?RGBOverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x18020AC24 (-RGBOverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18021FD04 (-DoesContain@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEB.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x18022D9B0 (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon@@@details@wil@@QEAA_NXZ @ 0x18024C4DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon@@@detai.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V8@_N_N_NW4OverlaySize@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@8_N99W4OverlaySize@@@Z @ 0x180273F18 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLAN.c)
 *     ?CalcOverlaySize@COverlayContext@@AEBA?AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1802744E8 (-CalcOverlaySize@COverlayContext@@AEBA-AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@.c)
 *     ?IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_NI5@Z @ 0x180276E90 (-IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NXZ @ 0x180277A80 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x180277DD8 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        __int64 a2,
        struct CCompositionSurfaceInfo *a3,
        CGDISectionBitmapRealization *a4,
        float *a5,
        float *a6,
        const __m128i *a7,
        __int128 *a8,
        __int64 a9,
        unsigned int a10,
        LONG a11,
        bool a12,
        char a13,
        int *a14,
        char a15,
        __int128 *a16)
{
  COverlayContext *v16; // r15
  int *v17; // r14
  CGDISectionBitmapRealization *v18; // rbx
  struct CCompositionSurfaceInfo *v19; // r12
  _QWORD *v20; // rsi
  __int64 v21; // rax
  int v22; // edi
  _DWORD *v23; // rax
  float v24; // xmm0_4
  float v25; // eax
  double v26; // xmm0_8
  int v27; // eax
  double v28; // xmm0_8
  int v29; // eax
  double v30; // xmm0_8
  int v31; // eax
  double v32; // xmm0_8
  int v33; // eax
  double v34; // xmm0_8
  int v35; // eax
  double v36; // xmm0_8
  int v37; // eax
  double v38; // xmm0_8
  int v39; // eax
  double v40; // xmm0_8
  int v41; // eax
  int v42; // eax
  int v43; // eax
  bool v44; // cc
  float v45; // r10d
  bool IsEmpty; // al
  void (__fastcall **v47)(_QWORD *, GUID *, float **); // rcx
  char v48; // di
  _QWORD *v49; // rax
  __int64 v50; // rax
  int v51; // r13d
  float *v52; // rcx
  int v53; // r13d
  char v54; // r12
  int v55; // r15d
  char v56; // r14
  char v57; // di
  char v58; // si
  int v59; // ebx
  _QWORD *v60; // rax
  __int64 v61; // rdx
  char IsCandidateDirectFlipCompatible; // al
  unsigned int v63; // eax
  float *v64; // rdx
  int v65; // eax
  char v66; // si
  bool v67; // al
  char v68; // dl
  bool v69; // zf
  bool v70; // r13
  _QWORD *v71; // rax
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 (__fastcall *v75)(__int64, __int128 *); // rdi
  int v76; // ebx
  int v77; // ebx
  int v78; // edi
  int v79; // esi
  int v80; // r14d
  _DWORD *v81; // rax
  void *v82; // rdx
  __int128 *v83; // rbx
  __int64 v84; // r14
  CGDISectionBitmapRealization *v85; // r12
  int v86; // ebx
  int v87; // edi
  int v88; // esi
  int v89; // r14d
  _QWORD *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r9
  int v93; // edi
  RenderTargetInfo *v94; // rax
  unsigned __int8 (__fastcall *v95)(struct CCompositionSurfaceInfo *); // rax
  unsigned __int8 v96; // al
  unsigned int v97; // eax
  __int64 v98; // r13
  bool v99; // si
  const struct CMonitorTransform *MonitorTransform; // rax
  int v101; // eax
  struct tagRECT v102; // xmm11
  struct tagRECT v103; // xmm12
  char v104; // si
  struct tagRECT v105; // xmm13
  __int128 v106; // xmm14
  __int128 v107; // xmm15
  int v108; // edi
  __int128 v109; // xmm7
  __int128 v110; // xmm8
  __int128 v111; // xmm9
  __int128 v112; // xmm10
  int v113; // ebx
  __m128i v114; // xmm6
  __int64 v115; // rax
  __int64 v116; // rax
  int v117; // esi
  int v118; // edi
  int v119; // ebx
  _QWORD *v120; // rax
  __int64 v121; // rdx
  int v123; // [rsp+28h] [rbp-140h]
  int v124; // [rsp+38h] [rbp-130h]
  int v125; // [rsp+48h] [rbp-120h]
  float v126; // [rsp+E8h] [rbp-80h] BYREF
  int v127; // [rsp+ECh] [rbp-7Ch]
  char v128; // [rsp+F0h] [rbp-78h]
  int v129; // [rsp+F4h] [rbp-74h]
  CGDISectionBitmapRealization *v130; // [rsp+F8h] [rbp-70h]
  int *v131; // [rsp+100h] [rbp-68h]
  __int64 v132; // [rsp+108h] [rbp-60h]
  char IsIntelWorkaroundNeeded; // [rsp+110h] [rbp-58h]
  float *v134; // [rsp+118h] [rbp-50h] BYREF
  float *v135; // [rsp+120h] [rbp-48h] BYREF
  __int128 v136; // [rsp+128h] [rbp-40h] BYREF
  struct CCompositionSurfaceInfo *v137; // [rsp+138h] [rbp-30h]
  const __m128i *v138; // [rsp+140h] [rbp-28h]
  __int128 v139; // [rsp+148h] [rbp-20h] BYREF
  __int128 v140; // [rsp+158h] [rbp-10h] BYREF
  __int128 v141; // [rsp+168h] [rbp+0h] BYREF
  __int64 v142; // [rsp+178h] [rbp+10h] BYREF
  int v143; // [rsp+180h] [rbp+18h]
  float v144; // [rsp+188h] [rbp+20h]
  _OWORD v145[4]; // [rsp+198h] [rbp+30h] BYREF
  int v146; // [rsp+1D8h] [rbp+70h]
  _OWORD v147[4]; // [rsp+1E8h] [rbp+80h] BYREF
  int v148; // [rsp+228h] [rbp+C0h]
  _OWORD v149[7]; // [rsp+238h] [rbp+D0h] BYREF
  struct tagRECT v150; // [rsp+2A8h] [rbp+140h] BYREF
  struct tagRECT v151; // [rsp+2B8h] [rbp+150h] BYREF
  struct tagRECT v152; // [rsp+2C8h] [rbp+160h] BYREF
  __int128 v153; // [rsp+2D8h] [rbp+170h]
  __int128 v154; // [rsp+2E8h] [rbp+180h]
  __int128 v155; // [rsp+2F8h] [rbp+190h]
  __int128 v156; // [rsp+308h] [rbp+1A0h]
  __int128 v157[2]; // [rsp+318h] [rbp+1B0h] BYREF
  __int128 v158; // [rsp+338h] [rbp+1D0h] BYREF
  __int128 v159; // [rsp+348h] [rbp+1E0h] BYREF
  __m128i v160; // [rsp+358h] [rbp+1F0h] BYREF

  v16 = this;
  v17 = a14;
  v18 = a4;
  v19 = a3;
  *(_QWORD *)&v136 = this;
  v132 = a2;
  v135 = a5;
  v137 = a3;
  v134 = a6;
  v130 = a4;
  v138 = a7;
  v131 = a14;
  v150.left = a11;
  memset_0(&v150.top, 0, 0x6CuLL);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)v16 + 8LL) + 24LL))(*(_QWORD *)v16 + 8LL, &v142);
  v20 = (_QWORD *)((char *)v18 + 8);
  v21 = *((_QWORD *)v18 + 1);
  *(_QWORD *)&v139 = (char *)v18 + 8;
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v21 + 24))((_QWORD *)v18 + 1, &v159) + 4) != 1 )
  {
    v22 = v143;
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, float *))(*v20 + 48LL))((_QWORD *)v18 + 1, &v126);
    if ( *v23 == -1 || *v23 == v22 || v22 == -3 )
    {
      v24 = *v135 + 6291456.25;
      v126 = v24;
      v25 = v24;
      v26 = v135[1];
      v150.top = (int)(LODWORD(v25) << 10) >> 11;
      *(float *)&v26 = v26 + 6291456.25;
      v126 = *(float *)&v26;
      v27 = LODWORD(v26);
      v28 = v135[2];
      v150.right = v27 << 10 >> 11;
      *(float *)&v28 = v28 + 6291456.25;
      v126 = *(float *)&v28;
      v29 = LODWORD(v28);
      v30 = v135[3];
      v150.bottom = v29 << 10 >> 11;
      *(float *)&v30 = v30 + 6291456.25;
      v126 = *(float *)&v30;
      v31 = LODWORD(v30);
      v32 = *v134;
      v151.left = v31 << 10 >> 11;
      *(float *)&v32 = v32 + 6291456.25;
      v126 = *(float *)&v32;
      v33 = LODWORD(v32);
      v34 = v134[1];
      v151.top = v33 << 10 >> 11;
      *(float *)&v34 = v34 + 6291456.25;
      v126 = *(float *)&v34;
      v35 = LODWORD(v34);
      v36 = v134[2];
      v151.right = v35 << 10 >> 11;
      *(float *)&v36 = v36 + 6291456.25;
      v126 = *(float *)&v36;
      v37 = LODWORD(v36);
      v38 = v134[3];
      v151.bottom = v37 << 10 >> 11;
      *(float *)&v38 = v38 + 6291456.25;
      v126 = *(float *)&v38;
      v39 = LODWORD(v38);
      v40 = *(float *)v138->m128i_i32;
      v152.left = v39 << 10 >> 11;
      *(float *)&v40 = v40 + 6291456.25;
      v126 = *(float *)&v40;
      v41 = LODWORD(v40);
      LODWORD(v40) = v138->m128i_i32[1];
      v152.top = v41 << 10 >> 11;
      *(float *)&v40 = *(float *)&v40 + 6291456.25;
      v126 = *(float *)&v40;
      v42 = LODWORD(v40);
      LODWORD(v40) = v138->m128i_i32[2];
      v152.right = v42 << 10 >> 11;
      *(float *)&v40 = *(float *)&v40 + 6291456.25;
      v126 = *(float *)&v40;
      LODWORD(v40) = v138->m128i_i32[3];
      v152.bottom = (int)(LODWORD(v126) << 10) >> 11;
      v126 = *(float *)&v40 + 6291456.25;
      LODWORD(v153) = (int)(LODWORD(v126) << 10) >> 11;
      *(_QWORD *)((char *)&v153 + 4) = a10;
      HIDWORD(v154) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v20 + 24LL))(
                                    (_QWORD *)v18 + 1,
                                    &v159)
                                + 8);
      LODWORD(v156) = 2;
      v43 = ConvertSDRBoostToSDRWhiteLevel(v144, SHIDWORD(v154));
      v44 = *((_DWORD *)v16 + 4938) < 2000;
      LOBYTE(v45) = 0;
      v126 = v45;
      DWORD2(v156) = v43;
      if ( v44 && (a11 & 3) != 0 )
        LODWORD(v126) = !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::DoesContain(
                           (__int64)&v152.top,
                           &v151.top);
      IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(
                                  v16,
                                  (const struct tagRECT *)&v150.top,
                                  (const struct tagRECT *)&v151.top,
                                  (const struct tagRECT *)&v152.top);
      IsEmpty = TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(a14);
      v47 = *(void (__fastcall ***)(_QWORD *, GUID *, float **))v18;
      v48 = IsEmpty;
      v128 = IsEmpty;
      v49 = (_QWORD *)((__int64 (__fastcall *)(CGDISectionBitmapRealization *, float **))v47[8])(v18, &v135);
      if ( *v49 == v142 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v18 + 56LL))(v18)
          || (v50 = (*(__int64 (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v18 + 40LL))(v18),
              !CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v50 + 16))) )
        {
          v127 = COverlayContext::CalcOverlaySize(v16, (__int64)&v150);
          v135 = 0LL;
          v51 = v127;
          (**(void (__fastcall ***)(CGDISectionBitmapRealization *, GUID *, float **))v18)(
            v18,
            &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
            &v135);
          v134 = 0LL;
          if ( (!wil::details::FeatureImpl<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon>::GetImpl'::`2'::impl)
             || *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL)
              - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL)
            && *(int *)((*(__int64 (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v18 + 40LL))(v18) + 620) < 3200 )
          {
            v52 = v134;
            v134 = 0LL;
            if ( v52 )
              (*(void (__fastcall **)(float *))(*(_QWORD *)v52 + 16LL))(v52);
            ISwapChainRealization::QueryInterface<IAdvancedDirectFlipBitmapRealization>(v18, (void **)&v134);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          {
            v129 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, __m128i *))(*v20 + 24LL))((_QWORD *)v18 + 1, &v160);
            v53 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v20 + 32LL))((_QWORD *)v18 + 1, &v140)
                            + 4);
            v54 = v48;
            v55 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v20 + 32LL))((_QWORD *)v18 + 1, &v141);
            v56 = (*(__int64 (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v18 + 152LL))(v18);
            v57 = (*(__int64 (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v18 + 144LL))(v18);
            v58 = v134 != 0LL;
            v59 = (*(unsigned __int8 (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v18 + 168LL))(v18);
            v60 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*((_QWORD *)v130 + 2) + 24LL))(
                              (_QWORD *)v130 + 2,
                              &v159);
            McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer(
              *(unsigned int *)v60,
              v61,
              *(unsigned int *)v60 | (unsigned __int64)((__int64)(int)HIDWORD(*v60) << 32),
              v59,
              v58,
              v57,
              v56,
              v54,
              v55,
              v53,
              v129,
              v150.left,
              v150.top,
              v150.right,
              v150.bottom,
              v151.left,
              v151.top,
              v151.right,
              v151.bottom,
              v152.left,
              v152.top,
              v152.right,
              v152.bottom,
              v153,
              SBYTE4(v153),
              SBYTE8(v153),
              SBYTE12(v154));
            v16 = (COverlayContext *)v136;
            v18 = v130;
            v19 = v137;
            v17 = v131;
            v20 = (_QWORD *)v139;
            v51 = v127;
          }
          IsCandidateDirectFlipCompatible = 0;
          if ( v51 == 2 && !*((_BYTE *)v16 + 19781) )
          {
            if ( v135 )
              goto LABEL_29;
            v63 = (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v19 + 72LL))(v19);
            IsCandidateDirectFlipCompatible = COverlayContext::IsCandidateDirectFlipCompatible(
                                                v16,
                                                v19,
                                                v18,
                                                (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v150,
                                                v63,
                                                a12);
          }
          if ( !IsCandidateDirectFlipCompatible )
          {
LABEL_29:
            v66 = 0;
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
            {
              v67 = COverlayContext::OverlaysEnabled(v16);
              if ( v68 )
              {
                v69 = !v67;
                goto LABEL_32;
              }
              if ( v67 )
              {
LABEL_69:
                if ( *((_DWORD *)v16 + 12) )
                  goto LABEL_70;
              }
            }
            else
            {
              if ( !v135 )
              {
                v97 = *((_DWORD *)v16 + 10);
                if ( v97 >= *((_DWORD *)v16 + 11) )
                  v97 = *((_DWORD *)v16 + 11);
                v69 = v97 == 1;
LABEL_32:
                if ( v69 && (v51 != 2 || !v128) )
                  goto LABEL_35;
LABEL_70:
                v70 = 1;
                v94 = (RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)v16 + 8LL)
                                                                                         + 24LL))(
                                            *(_QWORD *)v16 + 8LL,
                                            v157);
                if ( !RenderTargetInfo::IsHDR(v94)
                  || *(_DWORD *)((*(__int64 (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v18 + 40LL))(v18)
                               + 896) != 1297040209 )
                {
                  goto LABEL_58;
                }
                v69 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) == 0;
                v95 = *(unsigned __int8 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v19 + 152LL);
                if ( v69 )
                {
                  if ( !v95(v19) )
                    goto LABEL_58;
                  v93 = v127;
                  v70 = v127 == 2;
                }
                else
                {
                  v96 = v95(v19);
                  v93 = v127;
                  if ( v96 )
                  {
                    v85 = v130;
                    v83 = (__int128 *)v131;
                    v84 = v132;
                    v70 = v127 != 0;
                    goto LABEL_61;
                  }
                }
                v85 = v130;
                v83 = (__int128 *)v131;
                v84 = v132;
LABEL_61:
                if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetImpl'::`2'::impl) )
                {
                  if ( !v70 )
                  {
LABEL_100:
                    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v134);
                    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v135);
                    return 0LL;
                  }
                }
                else if ( !v70
                       || *((_BYTE *)v16 + 19781)
                       && !v93
                       && *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL)
                        - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) != 8LL )
                {
                  goto LABEL_100;
                }
                if ( v134 )
                  v66 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v134 + 24LL))(v134);
                v98 = (__int64)v137;
                if ( !(*(unsigned __int8 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v137 + 136LL))(v137)
                  && !LOBYTE(v126)
                  && !IsIntelWorkaroundNeeded
                  && !v66 )
                {
                  v99 = a12;
                  if ( a12
                    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 96LL))(*(_QWORD *)v16) - 1 <= 0xFFFFFFFD )
                  {
                    if ( v151.top < 0 || v151.right < 0 )
                    {
                      v99 = 0;
                      a12 = 0;
                    }
                    else
                    {
                      *(_QWORD *)&v157[0] = *(_QWORD *)&v151.top;
                      *((_QWORD *)&v157[0] + 1) = __PAIR64__(v152.left, v151.bottom);
                      MonitorTransform = COverlayContext::GetMonitorTransform(v16);
                      CMonitorTransform::GetClipBox((__int64)MonitorTransform, (__int64)&v158, *((_BYTE *)v16 + 19473));
                      v99 = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
                              (unsigned int *)&v158,
                              (unsigned int *)v157)
                         && a12;
                      a12 = v99;
                    }
                  }
                  v101 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 72LL))(v98);
                  LOBYTE(v125) = v99;
                  LOBYTE(v124) = v135 != 0LL;
                  if ( (unsigned __int8)COverlayContext::IsCandidateOverlayCompatible(
                                          v16,
                                          v84,
                                          v98,
                                          v85,
                                          &v150,
                                          v93,
                                          v124,
                                          v101,
                                          v125) )
                  {
                    v102 = v150;
                    v103 = v151;
                    v104 = v135 != 0LL;
                    v105 = v152;
                    v106 = v153;
                    v107 = v154;
                    v108 = *(_DWORD *)(a9 + 64);
                    v157[0] = *a16;
                    v158 = *v83;
                    v160 = *(__m128i *)a9;
                    v159 = *(_OWORD *)(a9 + 16);
                    v141 = *(_OWORD *)(a9 + 32);
                    v140 = *(_OWORD *)(a9 + 48);
                    v109 = *a8;
                    v110 = a8[1];
                    v111 = a8[2];
                    v112 = a8[3];
                    v113 = *((_DWORD *)a8 + 16);
                    v139 = v155;
                    v114 = _mm_loadu_si128(v138);
                    v115 = *(_QWORD *)v98;
                    v136 = v156;
                    v116 = (*(__int64 (__fastcall **)(__int64))(v115 + 64))(v98);
                    v145[0] = v160;
                    v146 = v108;
                    v145[1] = v159;
                    v148 = v113;
                    v145[2] = v141;
                    v145[3] = v140;
                    v149[5] = v139;
                    v149[6] = v136;
                    v147[0] = v109;
                    v147[1] = v110;
                    v147[2] = v111;
                    v147[3] = v112;
                    v160 = v114;
                    v149[0] = v102;
                    v149[1] = v103;
                    v149[2] = v105;
                    v149[3] = v106;
                    v149[4] = v107;
                    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,CCornerRects,CMILMatrix,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,bool,bool,bool,enum OverlaySize>(
                      (_QWORD *)v16 + 11,
                      (int)v16,
                      v132,
                      v98,
                      v116,
                      v149,
                      (__int128 *)v160.m128i_i8,
                      (__int64)v147,
                      (__int64)v145,
                      &v158,
                      v157,
                      v104,
                      a12,
                      a13,
                      v127);
                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
                    {
                      v117 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*((_QWORD *)v85 + 1) + 24LL))(
                                          (__int64)v85 + 8,
                                          v157);
                      v118 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, __int128 *))(*((_QWORD *)v85 + 1) + 32LL))(
                                           (__int64)v85 + 8,
                                           &v159)
                                       + 4);
                      v119 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*((_QWORD *)v85 + 1) + 32LL))(
                                          (__int64)v85 + 8,
                                          &v141);
                      v120 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*((_QWORD *)v85 + 2) + 24LL))(
                                         (__int64)v85 + 16,
                                         &v140);
                      McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer(
                        *(unsigned int *)v120,
                        v121,
                        *(unsigned int *)v120 | (unsigned __int64)((__int64)(int)HIDWORD(*v120) << 32),
                        v119,
                        v118,
                        v117,
                        v150.left,
                        v150.top,
                        v150.right,
                        v150.bottom,
                        v151.left,
                        v151.top,
                        v151.right,
                        v151.bottom,
                        v152.left,
                        v152.top,
                        v152.right,
                        v152.bottom,
                        v153,
                        SBYTE4(v153),
                        SBYTE8(v153),
                        SBYTE12(v154));
                    }
                  }
                }
                goto LABEL_100;
              }
              if ( *((_DWORD *)v16 + 10) > 1u )
                goto LABEL_69;
            }
LABEL_35:
            v70 = 0;
LABEL_58:
            v85 = v130;
LABEL_59:
            v84 = v132;
            v83 = (__int128 *)v131;
            goto LABEL_60;
          }
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
          {
            if ( !COverlayContext::OverlaysEnabled(v16) || (v65 = (int)v64, *((int *)v16 + 4938) < 2200) )
              v65 = 1;
            if ( !v65 )
              goto LABEL_29;
          }
          else if ( COverlayContext::RGBOverlaysEnabled(v16) && *((int *)v16 + 4938) >= 2200 )
          {
            goto LABEL_29;
          }
          v70 = (char)v64;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            v71 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*((_QWORD *)v18 + 2) + 24LL))(
                              (_QWORD *)v18 + 2,
                              &v139);
            McTemplateU0x_EventWriteTransfer(
              *(unsigned int *)v71,
              &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
              *(unsigned int *)v71 | (unsigned __int64)((__int64)(int)HIDWORD(*v71) << 32));
            v64 = 0LL;
          }
          v72 = 2;
          if ( v128 != (_BYTE)v64 )
          {
LABEL_48:
            v83 = (__int128 *)v131;
            v84 = v132;
            CDirectFlipInfo::Init((__int64)v16 + 19632, *(_QWORD *)v16, v132, (__int64)v19, v72, v131);
            v85 = v130;
            v66 = 0;
LABEL_60:
            v93 = v127;
            goto LABEL_61;
          }
          if ( v134 == v64 )
          {
            if ( a15 == (_BYTE)v64 )
            {
              v66 = 0;
              goto LABEL_58;
            }
          }
          else
          {
            v73 = *v20;
            v74 = *(_QWORD *)v16;
            v75 = *(__int64 (__fastcall **)(__int64, __int128 *))(**(_QWORD **)v16 + 24LL);
            v76 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v73 + 24))((_QWORD *)v18 + 1, &v158);
            if ( v76 == *(_DWORD *)v75(v74, v157) )
            {
              if ( a15 )
              {
                v129 = 4;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
                {
                  v72 = 4;
                  goto LABEL_48;
                }
                v77 = v17[3];
                v78 = v17[2];
                v79 = v17[1];
                v80 = *v17;
                v81 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*((_QWORD *)v130 + 2) + 24LL))(
                                  (_QWORD *)v130 + 2,
                                  &v136);
                v82 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
              }
              else
              {
                v129 = 3;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
                {
LABEL_47:
                  v72 = v129;
                  goto LABEL_48;
                }
                v77 = v17[3];
                v78 = v17[2];
                v79 = v17[1];
                v80 = *v17;
                v81 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*((_QWORD *)v130 + 2) + 24LL))(
                                  (_QWORD *)v130 + 2,
                                  &v136);
                v82 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
              }
              McTemplateU0xddddd_EventWriteTransfer(*v81, (_DWORD)v82, *v81, 1, v80, v79, v78, v77);
              goto LABEL_47;
            }
            if ( !a15 )
            {
              v85 = v130;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              {
                v86 = v17[3];
                v87 = v17[2];
                v88 = v17[1];
                v89 = *v17;
                v90 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*((_QWORD *)v130 + 2) + 24LL))(
                                  (_QWORD *)v130 + 2,
                                  &v136);
                McTemplateU0xqqdddd_EventWriteTransfer(
                  *(unsigned int *)v90,
                  v91,
                  *(unsigned int *)v90 | (unsigned __int64)((__int64)(int)HIDWORD(*v90) << 32),
                  v92,
                  v123,
                  v89,
                  v88,
                  v87,
                  v86);
              }
              v66 = 0;
              goto LABEL_59;
            }
          }
          v129 = 1;
          goto LABEL_47;
        }
      }
    }
  }
  return 0LL;
}
