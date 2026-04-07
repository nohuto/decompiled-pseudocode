/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800132D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180017DA0 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001A6A4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001AFA4 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180063B2C (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?StartAnimationForMoveResizeTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtagRECT@@@Z @ 0x18008049C (-StartAnimationForMoveResizeTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtagRE.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18008F480 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180098420 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800DB9CC (-OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?StartAnimationForCrossDisplaysMoveDuringModeChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800DBA34 (-StartAnimationForCrossDisplaysMoveDuringModeChange@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ @ 0x1800DBA44 (-StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800DBAA4 (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z @ 0x1800DBB24 (-StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z.c)
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800EB8F0 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 *     ?StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800EBA0C (-StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUD2D_POINTANDSIZE_F@@@Z @ 0x180012B4C (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUD2D_POINTANDSIZE_F@@@Z.c)
 *     ?IsTransformSupported@CTopLevelWindow3D@@AEAA_NW4TA_TRANSFORM_TYPE@@@Z @ 0x180014EEC (-IsTransformSupported@CTopLevelWindow3D@@AEAA_NW4TA_TRANSFORM_TYPE@@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180014F00 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180014F20 (-ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA-AUInterpolationParameter.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001514C (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180015200 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ??$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAEAW4WindowAnimationType@CTopLevelWindow3D@@@Z @ 0x180015284 (--$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAE.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800152F4 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ @ 0x18001549C (-TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x180015538 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180015730 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpolationParameters@@@Z @ 0x180015874 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpol.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180015A64 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180015AEC (-Restart@CTimelineBase@@QEAAXN@Z.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015BA4 (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ @ 0x180015CA0 (-GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180019954 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x180059A0C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800965A0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@@AEBUD2D_POINTANDSIZE_F@@AEBUD2D_POINT_2F@@PEAU4@@Z @ 0x1800C0C08 (-AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  void *v3; // r12
  float v5; // xmm11_4
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int AnimationIds; // eax
  int ThemeAnimationTransform; // ebx
  __int64 v12; // r15
  int v13; // r10d
  int v14; // edx
  LONG left; // ebx
  LONG top; // r14d
  unsigned int v17; // r11d
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // r10
  __m128i v21; // xmm5
  __m128i v22; // xmm7
  unsigned int v23; // eax
  int v24; // r8d
  int v25; // ecx
  int v26; // edx
  float v27; // xmm5_4
  __m128i v28; // xmm10
  unsigned int v29; // eax
  int v30; // ecx
  float v31; // xmm7_4
  __m128i v32; // xmm8
  __m128i v33; // xmm6
  __m128i v34; // xmm12
  unsigned int v35; // eax
  int v36; // ecx
  unsigned __int32 v37; // xmm6_4
  __m128i v38; // xmm13
  int v39; // eax
  unsigned __int32 v40; // xmm12_4
  unsigned __int32 v41; // xmm13_4
  float v42; // xmm15_4
  float v43; // xmm10_4
  float v44; // xmm8_4
  float v45; // xmm1_4
  int v46; // eax
  __int64 v47; // rcx
  __int64 Theme; // rax
  unsigned int v49; // r14d
  __int64 v50; // rax
  const struct std::nothrow_t *v51; // rdx
  unsigned int v52; // ebx
  int v53; // r15d
  float *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rcx
  const struct std::nothrow_t *v57; // rdx
  float v58; // xmm7_4
  __int64 v59; // rax
  unsigned int v60; // ebx
  __int64 v61; // rax
  __int64 v62; // rax
  __m128i v63; // xmm6
  __int128 v64; // xmm0
  __int64 v65; // xmm1_8
  const struct std::nothrow_t *v66; // rdx
  unsigned int v67; // ecx
  int v68; // eax
  int v69; // eax
  CTimelineBase *v70; // rcx
  unsigned int v71; // eax
  const struct std::nothrow_t *v72; // rdx
  __m128i v74; // xmm2
  int v75; // eax
  __m128i v76; // xmm2
  __m128i v77; // xmm1
  int v78; // eax
  float v79; // xmm1_4
  LONG bottom; // ecx
  int v81; // eax
  int v82; // ecx
  float v83; // xmm1_4
  int v84; // eax
  void *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  _QWORD *v88; // r9
  unsigned int v89; // r14d
  bool v90; // zf
  int v91; // r9d
  int v92; // eax
  int v93; // ecx
  int v94; // r8d
  int v95; // r9d
  int v96; // eax
  int v97; // ecx
  int v98; // r8d
  int v99; // r9d
  __m128i v100; // xmm6
  unsigned int v101; // eax
  __m128i v102; // xmm12
  unsigned int v103; // eax
  __m128i v104; // xmm13
  int v105; // eax
  float v106; // xmm1_4
  float v107; // xmm2_4
  float v108; // xmm3_4
  float v109; // xmm0_4
  float v110; // xmm3_4
  float v111; // xmm1_4
  float v112; // xmm0_4
  float v113; // xmm2_4
  __m128i v114; // xmm2
  int v115; // r8d
  double v116; // xmm1_8
  unsigned int v117; // [rsp+28h] [rbp-F0h]
  _BYTE *v118; // [rsp+30h] [rbp-E8h]
  unsigned int v119; // [rsp+98h] [rbp-80h] BYREF
  float v120; // [rsp+9Ch] [rbp-7Ch]
  int v121; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v122[40]; // [rsp+A8h] [rbp-70h] BYREF
  FLOAT v123; // [rsp+D0h] [rbp-48h]
  FLOAT v124; // [rsp+D4h] [rbp-44h]
  unsigned int v125; // [rsp+D8h] [rbp-40h] BYREF
  unsigned int v126; // [rsp+DCh] [rbp-3Ch] BYREF
  float v127; // [rsp+E0h] [rbp-38h]
  unsigned __int32 v128; // [rsp+E4h] [rbp-34h]
  float v129; // [rsp+E8h] [rbp-30h] BYREF
  unsigned __int32 v130; // [rsp+ECh] [rbp-2Ch] BYREF
  float v131; // [rsp+F0h] [rbp-28h] BYREF
  float v132; // [rsp+F4h] [rbp-24h] BYREF
  float v133; // [rsp+F8h] [rbp-20h] BYREF
  float v134; // [rsp+FCh] [rbp-1Ch] BYREF
  unsigned __int32 v135; // [rsp+100h] [rbp-18h] BYREF
  float v136; // [rsp+104h] [rbp-14h] BYREF
  float v137; // [rsp+108h] [rbp-10h] BYREF
  unsigned __int64 v138; // [rsp+110h] [rbp-8h] BYREF
  unsigned __int32 v139; // [rsp+118h] [rbp+0h]
  float v140; // [rsp+11Ch] [rbp+4h]
  unsigned int v141; // [rsp+120h] [rbp+8h] BYREF
  float v142; // [rsp+124h] [rbp+Ch]
  float v143; // [rsp+128h] [rbp+10h]
  struct D2D_POINT_2F v144; // [rsp+130h] [rbp+18h] BYREF
  struct tagRECT v145; // [rsp+138h] [rbp+20h] BYREF
  struct tagRECT v146; // [rsp+148h] [rbp+30h] BYREF
  unsigned __int32 v147; // [rsp+158h] [rbp+40h]
  __int64 v148; // [rsp+160h] [rbp+48h] BYREF
  __int64 v149; // [rsp+168h] [rbp+50h] BYREF
  struct D2D_POINT_2F v150; // [rsp+170h] [rbp+58h] BYREF
  char v151[40]; // [rsp+178h] [rbp+60h] BYREF
  __int128 v152; // [rsp+1A0h] [rbp+88h] BYREF

  v126 = 0;
  v125 = 0;
  v3 = 0LL;
  v141 = 0;
  v119 = 0;
  *(_BYTE *)(a1 + 568) = 0;
  v5 = 0.0;
  v121 = a2;
  if ( !CDesktopManager::CheckAnyPreference(0x10u) )
  {
    v7 = (__int64 *)(a1 + 288);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v6, &UdwmAnimation_Start, a2, *(_QWORD *)(*v7 + 40));
    UDwmTrace::TopLevelWindow3D_StartAnimation<enum CTopLevelWindow3D::WindowAnimationType &>(&v121);
    v152 = 0LL;
    CTopLevelWindow3D::GetScenarioGuid(v8, a2, &v152);
    v9 = v152 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v152 == *(_QWORD *)&GUID_NULL.Data1 )
      v9 = *((_QWORD *)&v152 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v9 )
    {
      wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset(a1 + 328);
      if ( (int)DCompositionCreateAnimationStats(a1 + 328) >= 0 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 24LL))(*(_QWORD *)(a1 + 328), 0LL);
    }
    *(_BYTE *)(*v7 + 739) &= ~8u;
    *(_DWORD *)(a1 + 336) = a2;
    *(_OWORD *)(a1 + 256) = 0LL;
    AnimationIds = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1, 1);
    ThemeAnimationTransform = AnimationIds;
    if ( AnimationIds < 0 )
    {
      v117 = 1360;
      goto LABEL_147;
    }
    v12 = *(_QWORD *)(a1 + 296);
    CSecondaryWindowRepresentation::GetRelativeWindowRect((CSecondaryWindowRepresentation *)v12, &v145);
    v13 = *(_DWORD *)(a1 + 272);
    v14 = *(_DWORD *)(a1 + 276);
    left = v145.left;
    top = v145.top;
    v17 = *(_DWORD *)(a1 + 336);
    v18 = *(_DWORD *)(a1 + 280) - v13;
    v19 = v13 + v145.left;
    v20 = *v7;
    v21 = _mm_cvtsi32_si128(v19);
    v22 = _mm_cvtsi32_si128(v14 + v145.top);
    v23 = 0;
    if ( v18 >= 0 )
      v23 = v18;
    v24 = *(_DWORD *)(v20 + 52);
    v25 = *(_DWORD *)(a1 + 284) - v14;
    v26 = *(_DWORD *)(v20 + 48);
    LODWORD(v27) = _mm_cvtepi32_ps(v21).m128_u32[0];
    v28 = _mm_cvtsi32_si128(v23);
    v29 = 0;
    if ( v25 >= 0 )
      v29 = v25;
    v120 = v27;
    v30 = *(_DWORD *)(v20 + 56) - v26;
    *(float *)&v152 = v27;
    LODWORD(v31) = _mm_cvtepi32_ps(v22).m128_u32[0];
    v32 = _mm_cvtsi32_si128(v29);
    v33 = _mm_cvtsi32_si128(v26 + v145.left);
    v34 = _mm_cvtsi32_si128(v24 + v145.top);
    v35 = 0;
    if ( v30 >= 0 )
      v35 = v30;
    v127 = v31;
    v36 = *(_DWORD *)(v20 + 60) - v24;
    *((float *)&v152 + 1) = v31;
    v37 = _mm_cvtepi32_ps(v33).m128_u32[0];
    v38 = _mm_cvtsi32_si128(v35);
    v39 = 0;
    if ( v36 >= 0 )
      v39 = v36;
    v124 = *(float *)&v37;
    v40 = _mm_cvtepi32_ps(v34).m128_u32[0];
    v138 = __PAIR64__(v40, v37);
    v123 = *(float *)&v40;
    v41 = _mm_cvtepi32_ps(v38).m128_u32[0];
    v42 = (float)v39;
    v128 = v41;
    v140 = (float)v39;
    v139 = v41;
    LODWORD(v43) = _mm_cvtepi32_ps(v28).m128_u32[0];
    LODWORD(v44) = _mm_cvtepi32_ps(v32).m128_u32[0];
    *((_QWORD *)&v152 + 1) = __PAIR64__(LODWORD(v44), LODWORD(v43));
    if ( v17 - 10 <= 1 )
    {
      CSecondaryWindowRepresentation::GetRelativeWindowRect((CSecondaryWindowRepresentation *)v12, &v146);
      v74 = *(__m128i *)(v12 + 88);
      v75 = _mm_cvtsi128_si32(v74);
      v76 = _mm_srli_si128(v74, 8);
      v77 = _mm_cvtsi32_si128(-v75);
      v78 = 0;
      LODWORD(v79) = _mm_cvtepi32_ps(v77).m128_u32[0];
      if ( v146.right - v146.left >= 0 )
        v78 = v146.right - v146.left;
      bottom = v146.bottom;
      *(float *)(a1 + 476) = v79 / (float)v78;
      v81 = 0;
      v82 = bottom - v146.top;
      v83 = (float)-_mm_cvtsi128_si32(v76);
      if ( v82 >= 0 )
        v81 = v82;
      v45 = v83 / (float)v81;
    }
    else
    {
      *(_DWORD *)(a1 + 476) = 0;
      v45 = 0.0;
    }
    *(float *)(a1 + 480) = v45;
    v46 = 274452;
    *(_DWORD *)(a1 + 484) = 0;
    if ( v17 <= 0x12 && _bittest(&v46, v17) )
    {
      v31 = *(float *)(a1 + 576);
      v43 = *(float *)(a1 + 580);
      v44 = *(float *)(a1 + 584);
      v100 = _mm_cvtsi32_si128(left + *(_DWORD *)(v20 + 48));
      v101 = top + *(_DWORD *)(v20 + 52);
      v120 = *(float *)(a1 + 572);
      *(float *)&v152 = v120;
      v37 = _mm_cvtepi32_ps(v100).m128_u32[0];
      v102 = _mm_cvtsi32_si128(v101);
      v103 = 0;
      if ( v145.right - left >= 0 )
        v103 = v145.right - left;
      v127 = v31;
      *((float *)&v152 + 1) = v31;
      v40 = _mm_cvtepi32_ps(v102).m128_u32[0];
      v104 = _mm_cvtsi32_si128(v103);
      v105 = 0;
      if ( v145.bottom - top >= 0 )
        v105 = v145.bottom - top;
      *((_QWORD *)&v152 + 1) = __PAIR64__(LODWORD(v44), LODWORD(v43));
      v90 = (*(_BYTE *)(v20 + 742) & 1) == 0;
      v41 = _mm_cvtepi32_ps(v104).m128_u32[0];
      v42 = (float)v105;
      v140 = (float)v105;
      v124 = *(float *)&v37;
      v138 = __PAIR64__(v40, v37);
      v123 = *(float *)&v40;
      v128 = v41;
      v139 = v41;
      if ( !v90 )
        *(_BYTE *)(a1 + 608) = 1;
      if ( COERCE_FLOAT(LODWORD(v44) & _xmm) < 0.001 || COERCE_FLOAT(LODWORD(v42) & _xmm) < 0.001 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgs();
      }
      else if ( (*(_BYTE *)(v20 + 742) & 1) == 0 )
      {
        v106 = *(float *)&v41 / v42;
        if ( (float)(*(float *)&v41 / v42) <= (float)(v43 / v44) )
        {
          v44 = (float)((float)((float)(1.0 / v106) * v43) - v44) + v44;
          *((float *)&v152 + 3) = v44;
        }
        else
        {
          v43 = (float)((float)(v44 * v106) - v43) + v43;
          *((float *)&v152 + 2) = v43;
        }
      }
    }
    if ( ((*(_DWORD *)(a1 + 336) - 3) & 0xFFFFFFFD) != 0 )
    {
LABEL_23:
      v47 = *(unsigned int *)(a1 + 336);
      if ( (unsigned int)(v47 - 7) > 2 )
      {
        if ( (unsigned int)(v47 - 16) > 1 )
        {
          AnimationIds = CTopLevelWindow3D::GetAnimationIds(v47, (unsigned int)v47, &v126, &v125);
          ThemeAnimationTransform = AnimationIds;
          if ( AnimationIds < 0 )
          {
            v117 = 1536;
          }
          else
          {
            Theme = CDesktopManager::GetTheme(3LL);
            AnimationIds = GetThemeAnimationProperty(Theme, v126, v125, 1LL, &v141, 4, &v119);
            ThemeAnimationTransform = AnimationIds;
            if ( AnimationIds >= 0 )
            {
              v49 = 0;
              v143 = v120;
              v147 = v37;
              v142 = v31;
              while ( 1 )
              {
                v3 = 0LL;
                v121 = v49;
                if ( v49 >= v141 )
                  goto LABEL_56;
                v50 = CDesktopManager::GetTheme(3LL);
                LODWORD(v118) = 0;
                if ( (unsigned int)GetThemeAnimationTransform(v50, v126, v125, v49, 0LL, v118, &v119) == -2147024662 )
                  break;
LABEL_54:
                ++v49;
              }
              v52 = v119;
              memset(v122, 0, sizeof(v122));
              v53 = 0;
              v54 = (float *)operator new[](v119, v51);
              v55 = CDesktopManager::GetTheme(3LL);
              LODWORD(v118) = v52;
              ThemeAnimationTransform = GetThemeAnimationTransform(v55, v126, v125, v49, v54, v118, &v119);
              if ( ThemeAnimationTransform < 0 )
              {
                v71 = 1567;
                goto LABEL_61;
              }
              if ( !(unsigned __int8)CTopLevelWindow3D::IsTransformSupported(v56, *(unsigned int *)v54) )
              {
LABEL_53:
                CDisplayBlackCurtainAnimatedVisual::operator delete(v54, v57);
                goto LABEL_54;
              }
              v58 = (float)*((int *)v54 + 3) / 1000.0;
              v59 = CDesktopManager::GetTheme(4LL);
              if ( (unsigned int)GetThemeTimingFunction(v59, *((unsigned int *)v54 + 1), 0LL, 0LL, &v119) == -2147024662 )
              {
                v60 = v119;
                v3 = operator new[](v119, v57);
                v61 = CDesktopManager::GetTheme(4LL);
                ThemeAnimationTransform = GetThemeTimingFunction(v61, *((unsigned int *)v54 + 1), v3, v60, &v119);
                if ( ThemeAnimationTransform < 0 )
                {
                  v71 = 1586;
                  goto LABEL_61;
                }
                v62 = CTopLevelWindow3D::ConvertTimingFunctionToInterpolationParameters(a1, v151, v3);
                v64 = *(_OWORD *)(v62 + 16);
                v65 = *(_QWORD *)(v62 + 32);
                *(_OWORD *)v122 = *(_OWORD *)v62;
                v63 = *(__m128i *)v122;
                *(_OWORD *)&v122[16] = v64;
                *(_QWORD *)&v122[32] = v65;
                CDisplayBlackCurtainAnimatedVisual::operator delete(v3, v66);
                v53 = _mm_cvtsi128_si32(v63);
                v3 = 0LL;
                v37 = LODWORD(v124);
              }
              if ( *(_DWORD *)v54 )
              {
                if ( *(_DWORD *)v54 == 1 )
                {
                  v67 = *(_DWORD *)(a1 + 336);
                  if ( ((v67 - 3) & 0xFFFFFFFD) == 0 )
                  {
                    ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
                    if ( ThemeAnimationTransform < 0 )
                    {
                      v71 = 1771;
                      goto LABEL_61;
                    }
                    v118 = v122;
                    ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
                    if ( ThemeAnimationTransform < 0 )
                    {
                      v71 = 1777;
                      goto LABEL_61;
                    }
                    goto LABEL_52;
                  }
                  v68 = *((_DWORD *)v54 + 4);
                  if ( (v68 & 1) == 0 )
                  {
                    if ( *(float *)&v41 > 0.0 && v42 > 0.0 )
                    {
                      if ( v67 == 2 )
                      {
                        v107 = v54[7];
                        v110 = fmaxf(v107, v43 / *(float *)&v41);
                        v111 = fmaxf(v54[8], v44 / v42);
                        v109 = fminf(v110, v111);
                        v108 = fmaxf(v110, v111);
                      }
                      else
                      {
                        if ( v67 != 4 )
                          goto LABEL_43;
                        v107 = v54[7];
                        v108 = fminf(fminf(v107, v43 / *(float *)&v41), fminf(v54[8], v44 / v42));
                        v109 = v108;
                      }
                      v112 = v109 - v54[5];
                      v113 = v107 - v54[5];
                      v54[7] = v108;
                      v54[8] = v108;
                      v58 = fmaxf(0.0, (float)(v112 * v58) / v113);
                    }
LABEL_43:
                    if ( (v68 & 4) == 0 )
                    {
LABEL_50:
                      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
                      if ( ThemeAnimationTransform < 0 )
                      {
                        v71 = 1948;
                        goto LABEL_61;
                      }
                      v118 = v122;
                      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
                      if ( ThemeAnimationTransform < 0 )
                      {
                        v71 = 1949;
                        goto LABEL_61;
                      }
                      goto LABEL_52;
                    }
                    v69 = *(_DWORD *)(a1 + 336);
                    if ( v69 == 10 )
                    {
                      v58 = *(float *)&FLOAT_0_25;
                    }
                    else
                    {
                      if ( v69 != 11 )
                        goto LABEL_47;
                      v58 = FLOAT_0_167;
                    }
                    *(_OWORD *)v122 = xmmword_1801060B0;
                    *(_QWORD *)&v122[32] = 0x3FF0000000000000LL;
                    *(_OWORD *)&v122[16] = xmmword_1801060C0;
LABEL_47:
                    ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
                    if ( ThemeAnimationTransform < 0 )
                    {
                      v71 = 1943;
                      goto LABEL_61;
                    }
                    ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
                    if ( ThemeAnimationTransform < 0 )
                    {
                      v71 = 1944;
                      goto LABEL_61;
                    }
                    v41 = v128;
                    v40 = LODWORD(v123);
                    goto LABEL_50;
                  }
                  if ( v67 > 0x12 || (v92 = 274452, !_bittest(&v92, v67)) )
                  {
                    ThemeAnimationTransform = -2147024809;
                    v71 = 1873;
                    goto LABEL_61;
                  }
                  *(_BYTE *)(a1 + 568) = 1;
                  v58 = *((float *)CDesktopManager::GetWindowAnimationSettings() + 11);
                  ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
                  if ( ThemeAnimationTransform < 0 )
                  {
                    v71 = 1828;
                    goto LABEL_61;
                  }
                  ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
                  if ( ThemeAnimationTransform < 0 )
                  {
                    v71 = 1834;
                    goto LABEL_61;
                  }
                  ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 12LL);
                  if ( ThemeAnimationTransform < 0 )
                  {
                    v71 = 1841;
                    goto LABEL_61;
                  }
                  v118 = v122;
                  ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 13LL);
                  if ( ThemeAnimationTransform < 0 )
                  {
                    v71 = 1847;
                    goto LABEL_61;
                  }
                  if ( (unsigned int)dword_180125130 > 4 && (unsigned __int8)tlgKeywordOn(&dword_180125130, 3LL) )
                  {
                    v148 = *(_QWORD *)&v122[32];
                    v149 = *(_QWORD *)&v122[24];
                    *(_QWORD *)&v145.left = *(_QWORD *)&v122[16];
                    *(_QWORD *)&v146.left = *(_QWORD *)&v122[8];
                    v132 = *(float *)&v147;
                    v135 = LODWORD(v142);
                    v136 = v143;
                    v129 = v42;
                    v130 = v41;
                    v131 = *(float *)&v40;
                    v133 = v44;
                    v134 = v43;
                    v137 = v58;
                    v121 = v53;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                      v93,
                      (unsigned int)&unk_180112003,
                      v94,
                      v95,
                      (__int64)&v137,
                      (__int64)&v136,
                      (__int64)&v135,
                      (__int64)&v134,
                      (__int64)&v133,
                      (__int64)&v132,
                      (__int64)&v131,
                      (__int64)&v130,
                      (__int64)&v129,
                      (__int64)&v121,
                      (__int64)&v146,
                      (__int64)&v145,
                      (__int64)&v149,
                      (__int64)&v148);
                  }
                }
                else if ( *(_DWORD *)v54 == 2 )
                {
                  if ( ((_BYTE)v54[4] & 1) == 0 )
                  {
                    v118 = v122;
                    ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
                    if ( ThemeAnimationTransform < 0 )
                    {
                      v71 = 1991;
                      goto LABEL_61;
                    }
                    goto LABEL_52;
                  }
                  v84 = *(_DWORD *)(a1 + 336);
                  if ( v84 != 1 )
                  {
                    if ( v84 == 3 || v84 == 5 )
                    {
                      CDesktopManager::GetWindowAnimationSettings();
                      v118 = v122;
                      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
                      if ( ThemeAnimationTransform < 0 )
                      {
                        v71 = 1963;
                        goto LABEL_61;
                      }
                      goto LABEL_52;
                    }
                    if ( v84 != 6 )
                    {
                      ThemeAnimationTransform = -2147024809;
                      v71 = 1984;
                      goto LABEL_61;
                    }
                  }
                  v118 = v122;
                  ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
                  if ( ThemeAnimationTransform < 0 )
                  {
                    v71 = 1979;
                    goto LABEL_61;
                  }
                }
LABEL_52:
                v37 = LODWORD(v124);
                v5 = fmaxf(v58, v5);
                goto LABEL_53;
              }
              if ( ((_BYTE)v54[4] & 1) == 0 )
              {
                ThemeAnimationTransform = -2147024809;
                v71 = 1601;
                goto LABEL_61;
              }
              v89 = *(_DWORD *)(a1 + 336);
              if ( ((v89 - 3) & 0xFFFFFFFD) == 0 )
                goto LABEL_85;
              ThemeAnimationTransform = -2147024809;
              if ( v89 <= 0x12 )
              {
                v96 = 274452;
                if ( _bittest(&v96, v89) )
                  ThemeAnimationTransform = 0;
              }
              if ( v89 - 10 <= 1 )
                goto LABEL_155;
              if ( ThemeAnimationTransform < 0 )
              {
                v71 = 1626;
                goto LABEL_61;
              }
              if ( v89 - 10 <= 1 )
              {
LABEL_155:
                *(_OWORD *)v122 = xmmword_1801060B0;
                *(_OWORD *)&v122[16] = xmmword_1801060C0;
                *(_QWORD *)&v122[32] = 0x3FF0000000000000LL;
                if ( v89 == 10 )
                  v58 = *(float *)&FLOAT_0_25;
                else
                  v58 = FLOAT_0_167;
                v118 = v122;
                ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
                if ( ThemeAnimationTransform < 0 )
                {
                  v71 = 1643;
                  goto LABEL_61;
                }
              }
              else
              {
                if ( ((v89 - 3) & 0xFFFFFFFD) == 0 )
                {
LABEL_85:
                  v90 = *(_BYTE *)(a1 + 569) == 0;
                  v144.x = 0.0;
                  v144.y = 0.0;
                  if ( !v90 )
                  {
                    v150.x = v124;
                    v150.y = v123;
                    CDisplayModeChangeAnimationHelper::AdjustMinimizeInitialPositionIfNeeded(
                      *((const struct CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
                      (const struct D2D_POINTANDSIZE_F *)&v152,
                      &v150,
                      &v144);
                  }
                  ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
                  if ( ThemeAnimationTransform < 0 )
                  {
                    v71 = 1681;
                    goto LABEL_61;
                  }
                  v118 = v122;
                  ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
                  if ( ThemeAnimationTransform < 0 )
                  {
                    v71 = 1688;
                    goto LABEL_61;
                  }
                  v41 = v128;
                  v40 = LODWORD(v123);
                  goto LABEL_90;
                }
                *(_BYTE *)(a1 + 568) = 1;
                v58 = *((float *)CDesktopManager::GetWindowAnimationSettings() + 11);
                ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
                if ( ThemeAnimationTransform < 0 )
                {
                  v71 = 1706;
                  goto LABEL_61;
                }
                ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
                if ( ThemeAnimationTransform < 0 )
                {
                  v71 = 1713;
                  goto LABEL_61;
                }
                ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 10LL);
                if ( ThemeAnimationTransform < 0 )
                {
                  v71 = 1720;
                  goto LABEL_61;
                }
                ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 11LL);
                if ( ThemeAnimationTransform < 0 )
                {
                  v71 = 1727;
                  goto LABEL_61;
                }
                v118 = v122;
                ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 14LL);
                if ( ThemeAnimationTransform < 0 )
                {
                  v71 = 1734;
                  goto LABEL_61;
                }
                if ( (unsigned int)dword_180125130 > 4 && (unsigned __int8)tlgKeywordOn(&dword_180125130, 3LL) )
                {
                  *(_QWORD *)&v146.left = *(_QWORD *)&v122[32];
                  *(_QWORD *)&v145.left = *(_QWORD *)&v122[24];
                  v149 = *(_QWORD *)&v122[16];
                  v138 = *(_QWORD *)&v122[8];
                  v130 = LODWORD(v142);
                  v129 = v143;
                  v136 = v42;
                  v135 = v41;
                  v134 = *(float *)&v40;
                  v133 = *(float *)&v37;
                  v132 = v44;
                  v131 = v43;
                  *(float *)&v148 = v58;
                  v137 = *(float *)&v53;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                    v97,
                    (unsigned int)&unk_180111E89,
                    v98,
                    v99,
                    (__int64)&v148,
                    (__int64)&v129,
                    (__int64)&v130,
                    (__int64)&v131,
                    (__int64)&v132,
                    (__int64)&v133,
                    (__int64)&v134,
                    (__int64)&v135,
                    (__int64)&v136,
                    (__int64)&v137,
                    (__int64)&v138,
                    (__int64)&v149,
                    (__int64)&v145,
                    (__int64)&v146);
                }
              }
LABEL_90:
              v49 = v121;
              goto LABEL_52;
            }
            v117 = 1543;
          }
          goto LABEL_147;
        }
        v5 = FLOAT_0_167;
        v114 = *(__m128i *)(*(_QWORD *)(a1 + 296) + 88LL);
        *(_OWORD *)v122 = xmmword_1801060B0;
        *(_QWORD *)&v122[32] = 0x3FF0000000000000LL;
        *(_OWORD *)&v122[16] = xmmword_1801060C0;
        if ( (_DWORD)v47 == 16 )
        {
          *(_DWORD *)(a1 + 592) -= (int)v120;
          *(_DWORD *)(a1 + 596) -= (int)v31;
        }
        v115 = *(_DWORD *)(a1 + 596);
        if ( (_DWORD)v47 == 16 )
        {
          v116 = 1.0 - *(float *)(a1 + 588);
          *(_DWORD *)(a1 + 600) = (int)((double)(*(_DWORD *)(a1 + 592) + _mm_cvtsi128_si32(v114)) * v116);
          *(_DWORD *)(a1 + 604) = (int)((double)(v115 + _mm_cvtsi128_si32(_mm_srli_si128(v114, 8))) * v116);
          AnimationIds = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
          ThemeAnimationTransform = AnimationIds;
          if ( AnimationIds < 0 )
          {
            v117 = 1516;
            goto LABEL_147;
          }
          AnimationIds = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
          ThemeAnimationTransform = AnimationIds;
          if ( AnimationIds < 0 )
          {
            v117 = 1517;
            goto LABEL_147;
          }
          AnimationIds = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
          ThemeAnimationTransform = AnimationIds;
          if ( AnimationIds < 0 )
          {
            v117 = 1518;
            goto LABEL_147;
          }
          AnimationIds = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
          ThemeAnimationTransform = AnimationIds;
          if ( AnimationIds < 0 )
          {
            v117 = 1519;
            goto LABEL_147;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 600) = 0;
          *(_DWORD *)(a1 + 604) = 0;
          *(_DWORD *)(a1 + 588) = 1065353216;
          AnimationIds = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
          ThemeAnimationTransform = AnimationIds;
          if ( AnimationIds < 0 )
          {
            v117 = 1527;
            goto LABEL_147;
          }
          AnimationIds = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
          ThemeAnimationTransform = AnimationIds;
          if ( AnimationIds < 0 )
          {
            v117 = 1528;
            goto LABEL_147;
          }
          AnimationIds = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
          ThemeAnimationTransform = AnimationIds;
          if ( AnimationIds < 0 )
          {
            v117 = 1529;
            goto LABEL_147;
          }
          AnimationIds = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
          ThemeAnimationTransform = AnimationIds;
          if ( AnimationIds < 0 )
          {
            v117 = 1530;
            goto LABEL_147;
          }
        }
LABEL_56:
        v70 = *(CTimelineBase **)(a1 + 320);
        if ( v70 )
        {
          CTimelineBase::Restart(v70, v5);
LABEL_58:
          CVisual::SetDirtyFlags((CVisual *)a1, 0x1000u);
          goto LABEL_59;
        }
        v85 = DefaultHeap::AllocClear(0x78uLL);
        v138 = (unsigned __int64)v85;
        if ( v85 )
        {
          CTimelineBase::CTimelineBase(v85, v86, v87, v85, 0);
          *v88 = &CTimeline<float>::`vftable';
          *(_QWORD *)(a1 + 320) = v88;
          if ( v88 )
          {
            if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
              ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 10);
            goto LABEL_58;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 320) = 0LL;
        }
        ThemeAnimationTransform = -2147024882;
        v91 = -2147024882;
        v117 = 2015;
LABEL_93:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, v117, 0LL);
        return (unsigned int)ThemeAnimationTransform;
      }
      v5 = *((float *)CDesktopManager::GetWindowAnimationSettings() + 10);
      *(_QWORD *)v122 = 4LL;
      memset(&v122[8], 0, 32);
      AnimationIds = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
      ThemeAnimationTransform = AnimationIds;
      if ( AnimationIds >= 0 )
        goto LABEL_56;
      v117 = 1488;
LABEL_147:
      v91 = AnimationIds;
      goto LABEL_93;
    }
    GetWindowMinimizeRect(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL), a1 + 256);
    if ( !IsRectEmpty((const RECT *)(a1 + 256)) )
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 256), v44 / v43, (struct D2D_POINTANDSIZE_F *)&v138);
      v41 = v139;
      v40 = HIDWORD(v138);
      v37 = v138;
      v42 = v140;
      v128 = v139;
      v123 = *((float *)&v138 + 1);
      v124 = *(float *)&v138;
      goto LABEL_23;
    }
    if ( *(_DWORD *)(a1 + 336) == 3 )
    {
      *(_DWORD *)(a1 + 336) = 6;
      goto LABEL_23;
    }
  }
LABEL_59:
  v54 = 0LL;
  ThemeAnimationTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
  if ( ThemeAnimationTransform >= 0 )
  {
    UDwmTrace::TopLevelWindow3D_StartAnimationCompleted();
  }
  else
  {
    v71 = 2027;
LABEL_61:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeAnimationTransform, v71, 0LL);
    if ( v54 )
      CDisplayBlackCurtainAnimatedVisual::operator delete(v54, v72);
    if ( v3 )
      CDisplayBlackCurtainAnimatedVisual::operator delete(v3, v72);
  }
  return (unsigned int)ThemeAnimationTransform;
}
