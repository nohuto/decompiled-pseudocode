/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364
 * Callers:
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18001E300 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002F810 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180042EC0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180045E04 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18004BD84 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18004F364 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800E7240 (-OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?StartAnimationForMaximizeSnapTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtagRECT@@@Z @ 0x1800E7300 (-StartAnimationForMaximizeSnapTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtag.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E73A0 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E7444 (-StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E74A4 (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z @ 0x1800E7564 (-StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z.c)
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x180104670 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 *     ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x180104760 (-StartShowAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x180008D40 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180018D20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18001E444 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18001FD7C (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18001FF9C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180025CB4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800279CC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002FA0C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180032488 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x1800369DC (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180037F44 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180037FB8 (-ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA-AUInterpolationParameter.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpolationParameters@@@Z @ 0x180038100 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpol.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@@AEBUMilPointAndSizeF@@AEBUMilPoint2F@@PEAU4@@Z @ 0x1800BC72C (-AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1800E6D68 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180110EC0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, int a2)
{
  float v4; // xmm14_4
  __int64 v5; // rcx
  int v6; // r8d
  __int64 *v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int TimelineForTransform; // eax
  int ThemeAnimationTransform; // ebx
  _DWORD *v13; // rax
  _DWORD *v14; // r9
  int v15; // edx
  int v16; // r8d
  int v17; // ebx
  int v18; // r14d
  int v19; // r15d
  int v20; // r12d
  int v21; // ecx
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __m128i v24; // xmm6
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // r8d
  unsigned int v28; // xmm0_4
  __m128i v29; // xmm12
  unsigned int v30; // eax
  int v31; // ecx
  float v32; // xmm6_4
  __m128i v33; // xmm9
  __m128i v34; // xmm8
  __m128i v35; // xmm10
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned __int32 v38; // xmm8_4
  __m128i v39; // xmm11
  unsigned int v40; // eax
  unsigned __int32 v41; // xmm10_4
  __m128i v42; // xmm15
  unsigned __int32 v43; // xmm11_4
  int v44; // eax
  float v45; // xmm15_4
  float v46; // xmm12_4
  float v47; // xmm9_4
  int IsMaximizeSnapAnimationRejuvenationEnabled; // eax
  int v49; // ecx
  float v50; // xmm2_4
  float v51; // xmm1_4
  int v52; // eax
  __int64 v53; // rcx
  unsigned int v54; // eax
  int v55; // r15d
  int v56; // edx
  __int64 Theme; // rax
  unsigned int v58; // esi
  float v59; // r12d
  __int64 v60; // rax
  unsigned int v61; // ebx
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // esi
  bool v67; // bl
  __int64 v68; // rdx
  __int64 v69; // rcx
  float v70; // xmm6_4
  __int64 v71; // rax
  __int64 v72; // rdx
  unsigned int v73; // ebx
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __int128 v77; // xmm1
  __int64 v78; // xmm0_8
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // eax
  int v83; // ecx
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rax
  _QWORD *v87; // r8
  int v88; // eax
  int v90; // eax
  int v91; // eax
  int v92; // esi
  bool v93; // zf
  __int64 v94; // rax
  __m128i v95; // xmm1
  int v96; // ecx
  unsigned int v97; // eax
  float v98; // xmm2_4
  __m128i v99; // xmm0
  __m128i v100; // xmm1
  int v101; // eax
  float v102; // xmm3_4
  unsigned int v103; // eax
  float v104; // xmm4_4
  __m128i v105; // xmm8
  unsigned int v106; // eax
  int v107; // ebx
  __m128i v108; // xmm10
  unsigned int v109; // eax
  int v110; // r14d
  __m128i v111; // xmm11
  int v112; // eax
  float v113; // xmm1_4
  unsigned int v114; // eax
  int v115; // ecx
  CDesktopManager *v116; // rax
  int v117; // ecx
  int v118; // r8d
  int v119; // r9d
  float v120; // xmm5_4
  float v121; // xmm3_4
  float v122; // xmm2_4
  float v123; // xmm3_4
  float v124; // xmm0_4
  float v125; // xmm3_4
  float v126; // xmm1_4
  float v127; // xmm0_4
  float v128; // xmm2_4
  unsigned int v130; // eax
  int v131; // ecx
  CDesktopManager *v132; // rax
  int v133; // ecx
  int v134; // r8d
  int v135; // r9d
  unsigned int v136; // eax
  __int64 v137; // rax
  GUID v138; // xmm0
  double v139; // xmm1_8
  __m128i v140; // xmm0
  unsigned int v141; // [rsp+28h] [rbp-F0h]
  float v142; // [rsp+98h] [rbp-80h]
  unsigned int v143; // [rsp+9Ch] [rbp-7Ch] BYREF
  float v144; // [rsp+A0h] [rbp-78h]
  unsigned __int32 v145; // [rsp+A4h] [rbp-74h]
  _BYTE v146[40]; // [rsp+A8h] [rbp-70h] BYREF
  float v147; // [rsp+D0h] [rbp-48h]
  unsigned __int32 v148; // [rsp+D4h] [rbp-44h]
  int v149; // [rsp+D8h] [rbp-40h] BYREF
  unsigned int v150; // [rsp+E0h] [rbp-38h] BYREF
  unsigned int v151; // [rsp+E4h] [rbp-34h] BYREF
  float v152; // [rsp+E8h] [rbp-30h]
  unsigned int v153; // [rsp+ECh] [rbp-2Ch] BYREF
  _DWORD v154[2]; // [rsp+F0h] [rbp-28h] BYREF
  unsigned __int64 v155; // [rsp+F8h] [rbp-20h] BYREF
  unsigned __int32 v156; // [rsp+100h] [rbp-18h] BYREF
  float v157; // [rsp+104h] [rbp-14h] BYREF
  int v158; // [rsp+108h] [rbp-10h] BYREF
  int v159; // [rsp+10Ch] [rbp-Ch] BYREF
  int v160; // [rsp+110h] [rbp-8h] BYREF
  unsigned int v161; // [rsp+114h] [rbp-4h] BYREF
  float v162; // [rsp+118h] [rbp+0h] BYREF
  int v163; // [rsp+11Ch] [rbp+4h] BYREF
  float v164; // [rsp+120h] [rbp+8h] BYREF
  unsigned __int32 v165; // [rsp+124h] [rbp+Ch] BYREF
  unsigned __int32 v166; // [rsp+128h] [rbp+10h] BYREF
  float v167; // [rsp+12Ch] [rbp+14h] BYREF
  int v168; // [rsp+130h] [rbp+18h] BYREF
  int v169; // [rsp+134h] [rbp+1Ch] BYREF
  int v170; // [rsp+138h] [rbp+20h] BYREF
  unsigned int Data1; // [rsp+13Ch] [rbp+24h] BYREF
  float v172; // [rsp+140h] [rbp+28h] BYREF
  int v173; // [rsp+144h] [rbp+2Ch] BYREF
  float v174; // [rsp+148h] [rbp+30h] BYREF
  unsigned __int32 v175; // [rsp+14Ch] [rbp+34h] BYREF
  __int64 v176; // [rsp+150h] [rbp+38h] BYREF
  __int64 v177; // [rsp+158h] [rbp+40h] BYREF
  __int64 v178; // [rsp+160h] [rbp+48h] BYREF
  __int64 v179; // [rsp+168h] [rbp+50h] BYREF
  __int64 v180; // [rsp+170h] [rbp+58h] BYREF
  __int64 v181; // [rsp+178h] [rbp+60h] BYREF
  __int64 v182; // [rsp+180h] [rbp+68h] BYREF
  __int64 v183; // [rsp+188h] [rbp+70h] BYREF
  float v184; // [rsp+190h] [rbp+78h] BYREF
  unsigned __int32 v185; // [rsp+194h] [rbp+7Ch]
  unsigned __int32 v186; // [rsp+198h] [rbp+80h]
  float v187; // [rsp+19Ch] [rbp+84h]
  GUID v188; // [rsp+1A0h] [rbp+88h] BYREF
  _BYTE v189[16]; // [rsp+1B0h] [rbp+98h] BYREF
  int *v190; // [rsp+1C0h] [rbp+A8h]
  __int64 v191; // [rsp+1C8h] [rbp+B0h]
  unsigned __int64 *v192; // [rsp+1D0h] [rbp+B8h]
  __int64 v193; // [rsp+1D8h] [rbp+C0h]

  *(_BYTE *)(a1 + 616) = 0;
  v153 = 0;
  v4 = 0.0;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
    goto LABEL_70;
  v7 = (__int64 *)(a1 + 336);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v8 = *v7;
    v191 = 4LL;
    v193 = 8LL;
    v9 = *(_QWORD *)(v8 + 40);
    v190 = &v149;
    v192 = &v155;
    v155 = v9;
    v149 = a2;
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimation_Start,
      v6,
      3,
      (__int64)v189);
  }
  CTopLevelWindow3D::GetScenarioGuid(v5, a2, &v188);
  v10 = *(_QWORD *)&v188.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v188.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v10 = *(_QWORD *)v188.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v10 )
  {
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)(a1 + 376));
    if ( (int)DCompositionCreateAnimationStats(a1 + 376) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 376) + 24LL))(*(_QWORD *)(a1 + 376), 0LL);
  }
  *(_BYTE *)(*v7 + 675) &= ~8u;
  *(_DWORD *)(a1 + 384) = a2;
  *(_OWORD *)(a1 + 304) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1, 1u);
  ThemeAnimationTransform = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v141 = 1415;
    goto LABEL_225;
  }
  v13 = *(_DWORD **)(a1 + 344);
  v14 = (_DWORD *)*v7;
  v15 = *(_DWORD *)(a1 + 320);
  v16 = *(_DWORD *)(a1 + 324);
  v17 = v13[20] - v13[23];
  v18 = v13[21] - v13[25];
  v19 = v13[22];
  v20 = v13[24];
  v21 = *(_DWORD *)(a1 + 328) - v15;
  LODWORD(v13) = v15 + v19;
  v22 = *(unsigned int *)(*v7 + 48);
  v23 = _mm_cvtsi32_si128((unsigned int)v13);
  v24 = _mm_cvtsi32_si128(v16 + v20);
  v25 = 0;
  if ( v21 >= 0 )
    v25 = v21;
  v26 = *(_DWORD *)(a1 + 332) - v16;
  v27 = v14[13];
  v28 = _mm_cvtepi32_ps(v23).m128_u32[0];
  v29 = _mm_cvtsi32_si128(v25);
  v30 = 0;
  if ( v26 >= 0 )
    v30 = v26;
  v142 = *(float *)&v28;
  v31 = v14[14] - v22;
  v188.Data1 = v28;
  LODWORD(v32) = _mm_cvtepi32_ps(v24).m128_u32[0];
  v33 = _mm_cvtsi32_si128(v30);
  v34 = _mm_cvtsi32_si128(v19 + (int)v22);
  v35 = _mm_cvtsi32_si128(v20 + v27);
  v36 = 0;
  if ( v31 >= 0 )
    v36 = v31;
  v144 = v32;
  v37 = (unsigned int)(v14[15] - v27);
  *(float *)&v188.Data2 = v32;
  v38 = _mm_cvtepi32_ps(v34).m128_u32[0];
  v39 = _mm_cvtsi32_si128(v36);
  v40 = 0;
  if ( (int)v37 >= 0 )
    v40 = v37;
  LODWORD(v147) = v38;
  v41 = _mm_cvtepi32_ps(v35).m128_u32[0];
  v42 = _mm_cvtsi32_si128(v40);
  v43 = _mm_cvtepi32_ps(v39).m128_u32[0];
  v44 = *(_DWORD *)(a1 + 384) - 2;
  v184 = *(float *)&v38;
  v145 = v41;
  v185 = v41;
  v148 = v43;
  v186 = v43;
  LODWORD(v45) = _mm_cvtepi32_ps(v42).m128_u32[0];
  LODWORD(v46) = _mm_cvtepi32_ps(v29).m128_u32[0];
  v187 = v45;
  *(float *)v188.Data4 = v46;
  LODWORD(v47) = _mm_cvtepi32_ps(v33).m128_u32[0];
  *(float *)&v188.Data4[4] = v47;
  if ( (v44 & 0xFFFFFFFD) != 0 || (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v37, v22) )
  {
    IsMaximizeSnapAnimationRejuvenationEnabled = CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v37, v22);
    v49 = *(_DWORD *)(a1 + 384);
    if ( IsMaximizeSnapAnimationRejuvenationEnabled && v49 == 10 || v49 == 11 )
    {
      v94 = *(_QWORD *)(a1 + 344);
      v95 = *(__m128i *)(v94 + 88);
      v22 = (unsigned int)(*(_DWORD *)(v94 + 80) - *(_DWORD *)(v94 + 92) - *(_DWORD *)(v94 + 88));
      v96 = *(_DWORD *)(v94 + 84) - *(_DWORD *)(v94 + 100) - *(_DWORD *)(v94 + 96);
      v97 = 0;
      v98 = (float)-_mm_cvtsi128_si32(_mm_srli_si128(v95, 8));
      if ( v96 >= 0 )
        v97 = v96;
      v99 = _mm_cvtsi32_si128(v97);
      v100 = _mm_cvtsi32_si128(-_mm_cvtsi128_si32(v95));
      v101 = 0;
      v50 = v98 / _mm_cvtepi32_ps(v99).m128_f32[0];
      if ( (int)v22 >= 0 )
        v101 = v22;
      v51 = _mm_cvtepi32_ps(v100).m128_f32[0] / (float)v101;
    }
    else
    {
      v50 = 0.0;
      v51 = 0.0;
    }
  }
  else
  {
    v50 = FLOAT_0_5;
    v51 = FLOAT_0_5;
  }
  *(float *)(a1 + 524) = v51;
  *(float *)(a1 + 528) = v50;
  *(_DWORD *)(a1 + 532) = 0;
  v52 = CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(a1, v22);
  v53 = 274452LL;
  if ( v52 && (v54 = *(_DWORD *)(a1 + 384), v54 <= 0x12) && _bittest((const int *)&v53, v54) )
  {
    v53 = *v7;
    v32 = *(float *)(a1 + 624);
    v46 = *(float *)(a1 + 628);
    v102 = v46;
    v47 = *(float *)(a1 + 632);
    v103 = v19 + *(_DWORD *)(*v7 + 48);
    v142 = *(float *)(a1 + 620);
    v104 = v47;
    *(float *)&v188.Data1 = v142;
    v144 = v32;
    v105 = _mm_cvtsi32_si128(v103);
    v106 = v20 + *(_DWORD *)(v53 + 52);
    *(float *)&v188.Data2 = v32;
    v107 = v17 - v19;
    *(float *)v188.Data4 = v46;
    v55 = 0;
    *(float *)&v188.Data4[4] = v47;
    v38 = _mm_cvtepi32_ps(v105).m128_u32[0];
    v108 = _mm_cvtsi32_si128(v106);
    v109 = 0;
    if ( v107 >= 0 )
      v109 = v107;
    LODWORD(v147) = v38;
    v110 = v18 - v20;
    v184 = *(float *)&v38;
    v41 = _mm_cvtepi32_ps(v108).m128_u32[0];
    v111 = _mm_cvtsi32_si128(v109);
    v112 = 0;
    if ( v110 >= 0 )
      v112 = v110;
    v145 = v41;
    v43 = _mm_cvtepi32_ps(v111).m128_u32[0];
    v185 = v41;
    v45 = (float)v112;
    v148 = v43;
    v187 = (float)v112;
    v186 = v43;
    if ( (*(_BYTE *)(v53 + 678) & 1) != 0 )
      *(_BYTE *)(a1 + 656) = 1;
    if ( COERCE_FLOAT(LODWORD(v47) & _xmm) < 0.001 || COERCE_FLOAT(LODWORD(v45) & _xmm) < 0.001 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs();
    }
    else if ( (*(_BYTE *)(v53 + 678) & 1) == 0 )
    {
      v113 = *(float *)&v43 / v45;
      if ( (float)(*(float *)&v43 / v45) <= (float)(v46 / v47) )
      {
        v47 = (float)((float)((float)(1.0 / v113) * v46) - v47) + v47;
        *(float *)&v188.Data4[4] = (float)((float)((float)(1.0 / v113) * v46) - v104) + v104;
      }
      else
      {
        v46 = (float)((float)(v47 * v113) - v46) + v46;
        *(float *)v188.Data4 = (float)((float)(v47 * v113) - v102) + v102;
      }
    }
  }
  else
  {
    v55 = 0;
  }
  if ( ((*(_DWORD *)(a1 + 384) - 3) & 0xFFFFFFFD) == 0 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(*v7 + 40), a1 + 304);
    if ( !IsRectEmpty((const RECT *)(a1 + 304)) )
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 304), v47 / v46, (struct MilPointAndSizeF *)&v184);
      v43 = v186;
      v41 = v185;
      *(float *)&v38 = v184;
      v45 = v187;
      v148 = v186;
      v145 = v185;
      v147 = v184;
      goto LABEL_28;
    }
    if ( *(_DWORD *)(a1 + 384) == 3 )
    {
      *(_DWORD *)(a1 + 384) = 6;
      goto LABEL_28;
    }
LABEL_70:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    ThemeAnimationTransform = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      return (unsigned int)ThemeAnimationTransform;
    v141 = 2097;
LABEL_225:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TimelineForTransform, v141, 0LL);
    return (unsigned int)ThemeAnimationTransform;
  }
LABEL_28:
  v56 = *(_DWORD *)(a1 + 384);
  if ( (unsigned int)(v56 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 172);
    *(_DWORD *)v146 = 4;
    memset(&v146[8], 0, 32);
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    ThemeAnimationTransform = TimelineForTransform;
    if ( TimelineForTransform < 0 )
    {
      v141 = 1553;
      goto LABEL_225;
    }
    goto LABEL_63;
  }
  if ( (unsigned int)(v56 - 16) <= 1 )
  {
    v137 = *(_QWORD *)(a1 + 344);
    v4 = FLOAT_0_167;
    *(_OWORD *)v146 = xmmword_180129DF0;
    *(_QWORD *)&v146[32] = 0x3FF0000000000000LL;
    v138 = *(GUID *)(v137 + 88);
    *(_OWORD *)&v146[16] = xmmword_180129E00;
    v188 = v138;
    if ( v56 == 16 )
    {
      *(_DWORD *)(a1 + 640) -= (int)v142;
      *(_DWORD *)(a1 + 644) -= (int)v32;
      v139 = 1.0 - *(float *)(a1 + 636);
      v140 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 644) + *(_DWORD *)v188.Data4);
      *(_DWORD *)(a1 + 648) = (int)((double)(v188.Data1 + *(_DWORD *)(a1 + 640)) * v139);
      *(_DWORD *)(a1 + 652) = (int)(_mm_cvtepi32_pd(v140).m128d_f64[0] * v139);
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v141 = 1581;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v141 = 1582;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v141 = 1583;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v141 = 1584;
        goto LABEL_225;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 648) = 0LL;
      *(_DWORD *)(a1 + 636) = 1065353216;
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v141 = 1592;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v141 = 1593;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v141 = 1594;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v141 = 1595;
        goto LABEL_225;
      }
    }
    goto LABEL_63;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v53, v56, &v151, &v150);
  ThemeAnimationTransform = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v141 = 1601;
    goto LABEL_225;
  }
  Theme = CDesktopManager::GetTheme(3LL);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v151, v150, 1LL, &v153, 4, &v143);
  ThemeAnimationTransform = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v141 = 1608;
    goto LABEL_225;
  }
  v58 = 0;
  v149 = 0;
  if ( !v153 )
  {
LABEL_63:
    v85 = *(_QWORD *)(a1 + 368);
    if ( !v85 )
    {
      v86 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              120LL);
      v176 = v86;
      if ( v86 )
      {
        CTimelineBase::CTimelineBase(v86, v4, 0.0, 1.0, 0);
        *v87 = &CTimeline<float>::`vftable';
        *(_QWORD *)(a1 + 368) = v87;
        if ( v87 )
        {
          if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
            ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 10);
          goto LABEL_68;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 368) = 0LL;
      }
      ThemeAnimationTransform = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x825u, 0LL);
      return (unsigned int)ThemeAnimationTransform;
    }
    *(_QWORD *)(v85 + 48) = *(_QWORD *)(v85 + 32);
    *(_WORD *)(v85 + 72) = 256;
    CDesktopManager::s_fTimelineDirty = 1;
    *(double *)(v85 + 24) = v4;
LABEL_68:
    v88 = *(_DWORD *)(a1 + 88);
    if ( (v88 & 0x1000) == 0 )
    {
      *(_DWORD *)(a1 + 88) = v88 | 0x1000;
      CVisual::PropagateDirtyChildren((CVisual *)a1);
    }
    goto LABEL_70;
  }
  v59 = v187;
  while ( 1 )
  {
    v60 = CDesktopManager::GetTheme(3LL);
    if ( (unsigned int)GetThemeAnimationTransform(v60, v151, v150, v58, 0LL, 0, &v143) == -2147024662 )
      break;
LABEL_62:
    v149 = ++v58;
    if ( v58 >= v153 )
      goto LABEL_63;
  }
  v61 = v143;
  memset(&v146[8], 0, 32);
  *(_DWORD *)v146 = 0;
  v62 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v143);
  v63 = CDesktopManager::GetTheme(3LL);
  ThemeAnimationTransform = GetThemeAnimationTransform(v63, v151, v150, v58, v62, v61, &v143);
  if ( ThemeAnimationTransform >= 0 )
  {
    v66 = *(_DWORD *)v62;
    v67 = (unsigned int)(*(_DWORD *)v62 - 1) <= 1;
    if ( ((unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v65, v64)
       || (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v69, v68))
      && !v66 )
    {
      v67 = 1;
    }
    if ( !v67 )
      goto LABEL_61;
    v70 = (float)*(int *)(v62 + 12) / 1000.0;
    v71 = CDesktopManager::GetTheme(4LL);
    if ( (unsigned int)GetThemeTimingFunction(v71, *(unsigned int *)(v62 + 4), 0LL, 0LL, &v143) == -2147024662 )
    {
      v73 = v143;
      v74 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              v143);
      v75 = CDesktopManager::GetTheme(4LL);
      ThemeAnimationTransform = GetThemeTimingFunction(v75, *(unsigned int *)(v62 + 4), v74, v73, &v143);
      if ( ThemeAnimationTransform < 0 )
      {
        v136 = 1651;
        goto LABEL_200;
      }
      v76 = CTopLevelWindow3D::ConvertTimingFunctionToInterpolationParameters(a1, v189, v74);
      v77 = *(_OWORD *)(v76 + 16);
      *(_OWORD *)v146 = *(_OWORD *)v76;
      v78 = *(_QWORD *)(v76 + 32);
      v79 = *(_QWORD *)WPF::g_pProcessHeap;
      *(_QWORD *)&v146[32] = v78;
      *(_OWORD *)&v146[16] = v77;
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(v79 + 32))(WPF::g_pProcessHeap, v74);
      v55 = *(_DWORD *)v146;
    }
    if ( !*(_DWORD *)v62 )
    {
      if ( (*(_BYTE *)(v62 + 16) & 1) == 0 )
      {
        v136 = 1666;
        goto LABEL_176;
      }
      v91 = *(_DWORD *)(a1 + 384);
      v92 = v91;
      if ( v91 != 3 && v91 != 5 )
      {
        ThemeAnimationTransform = -2147024809;
        if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(1LL, v72) )
        {
          v130 = *(_DWORD *)(a1 + 384);
          if ( v130 <= 0x12 )
          {
            v131 = 274452;
            if ( _bittest(&v131, v130) )
              ThemeAnimationTransform = 0;
          }
        }
        v92 = *(_DWORD *)(a1 + 384);
        if ( (unsigned int)(v92 - 10) > 1 && ThemeAnimationTransform < 0 )
        {
          v136 = 1694;
          goto LABEL_178;
        }
      }
      if ( (unsigned int)(v92 - 10) <= 1 )
      {
        *(_OWORD *)&v146[16] = xmmword_180129E00;
        *(_OWORD *)v146 = xmmword_180129DF0;
        *(_QWORD *)&v146[32] = 0x3FF0000000000000LL;
        if ( v92 == 10 )
          v70 = *(float *)&FLOAT_0_25;
        else
          v70 = FLOAT_0_167;
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1711;
          goto LABEL_178;
        }
      }
      else if ( ((v92 - 3) & 0xFFFFFFFD) != 0 )
      {
        v132 = CDesktopManager::s_pDesktopManagerInstance;
        *(_BYTE *)(a1 + 616) = 1;
        v70 = *((float *)v132 + 173);
        v152 = v70;
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1774;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1781;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 10LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1788;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 11LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1795;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 14LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1802;
          goto LABEL_178;
        }
        if ( (unsigned int)dword_180147058 > 4 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
        {
          v180 = *(_QWORD *)&v146[32];
          v181 = *(_QWORD *)&v146[24];
          v182 = *(_QWORD *)&v146[16];
          v176 = *(_QWORD *)&v146[8];
          v165 = v186;
          v166 = v185;
          v167 = v184;
          v168 = *(_DWORD *)&v188.Data4[4];
          v169 = *(_DWORD *)v188.Data4;
          v170 = *(_DWORD *)&v188.Data2;
          Data1 = v188.Data1;
          v172 = v152;
          v163 = v55;
          v164 = v59;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v133,
            (unsigned int)&unk_180127843,
            v134,
            v135,
            (__int64)&v172,
            (__int64)&Data1,
            (__int64)&v170,
            (__int64)&v169,
            (__int64)&v168,
            (__int64)&v167,
            (__int64)&v166,
            (__int64)&v165,
            (__int64)&v164,
            (__int64)&v163,
            (__int64)&v176,
            (__int64)&v182,
            (__int64)&v181,
            (__int64)&v180);
        }
      }
      else
      {
        v93 = *(_BYTE *)(a1 + 617) == 0;
        v154[0] = 0;
        v154[1] = 0;
        if ( !v93 )
        {
          v155 = __PAIR64__(v145, LODWORD(v147));
          CDisplayModeChangeAnimationHelper::AdjustMinimizeInitialPositionIfNeeded(
            *((const struct CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
            (const struct MilPointAndSizeF *)&v188,
            (const struct MilPoint2F *)&v155,
            (struct MilPoint2F *)v154);
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1749;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1756;
          goto LABEL_178;
        }
        v43 = v148;
        v41 = v145;
      }
      goto LABEL_60;
    }
    if ( *(_DWORD *)v62 != 1 )
    {
      if ( *(_DWORD *)v62 == 2 )
      {
        if ( (*(_BYTE *)(v62 + 16) & 1) != 0 )
        {
          v90 = *(_DWORD *)(a1 + 384);
          if ( v90 == 3 || v90 == 5 )
          {
            ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            if ( ThemeAnimationTransform < 0 )
            {
              v136 = 2033;
              goto LABEL_178;
            }
          }
          else
          {
            if ( v90 != 1 && v90 != 6 )
            {
              v136 = 2054;
LABEL_176:
              ThemeAnimationTransform = -2147024809;
              goto LABEL_178;
            }
            ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            if ( ThemeAnimationTransform < 0 )
            {
              v136 = 2049;
LABEL_178:
              v74 = 0LL;
              goto LABEL_200;
            }
          }
        }
        else
        {
          ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
          if ( ThemeAnimationTransform < 0 )
          {
            v136 = 2061;
            goto LABEL_178;
          }
        }
      }
      goto LABEL_60;
    }
    if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(
                         (unsigned int)(*(_DWORD *)v62 - 1),
                         v72)
      && ((*(_DWORD *)(a1 + 384) - 3) & 0xFFFFFFFD) == 0 )
    {
      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      if ( ThemeAnimationTransform < 0 )
      {
        v136 = 1840;
        goto LABEL_178;
      }
      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      if ( ThemeAnimationTransform < 0 )
      {
        v136 = 1846;
        goto LABEL_178;
      }
      goto LABEL_60;
    }
    v82 = *(_DWORD *)(v62 + 16);
    if ( (v82 & 1) != 0 )
    {
      if ( ((*(_DWORD *)(a1 + 384) - 3) & 0xFFFFFFFD) != 0 )
      {
        if ( !(unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v81, v80)
          || (v114 = *(_DWORD *)(a1 + 384), v114 > 0x12)
          || (v115 = 274452, !_bittest(&v115, v114)) )
        {
          v136 = 1943;
          goto LABEL_176;
        }
        v116 = CDesktopManager::s_pDesktopManagerInstance;
        *(_BYTE *)(a1 + 616) = 1;
        v70 = *((float *)v116 + 173);
        v152 = v70;
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1898;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1904;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 12LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1911;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 13LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1917;
          goto LABEL_178;
        }
        if ( (unsigned int)dword_180147058 > 4 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
        {
          v183 = *(_QWORD *)&v146[32];
          v177 = *(_QWORD *)&v146[24];
          v178 = *(_QWORD *)&v146[16];
          v179 = *(_QWORD *)&v146[8];
          v175 = v186;
          v156 = v185;
          v157 = v184;
          v158 = *(_DWORD *)&v188.Data4[4];
          v159 = *(_DWORD *)v188.Data4;
          v160 = *(_DWORD *)&v188.Data2;
          v161 = v188.Data1;
          v162 = v152;
          v173 = v55;
          v174 = v59;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v117,
            (unsigned int)&unk_1801276CD,
            v118,
            v119,
            (__int64)&v162,
            (__int64)&v161,
            (__int64)&v160,
            (__int64)&v159,
            (__int64)&v158,
            (__int64)&v157,
            (__int64)&v156,
            (__int64)&v175,
            (__int64)&v174,
            (__int64)&v173,
            (__int64)&v179,
            (__int64)&v178,
            (__int64)&v177,
            (__int64)&v183);
        }
      }
      else
      {
        v120 = *(float *)(v62 + 28);
        v121 = *(float *)(v62 + 32);
        *(float *)&v43 = (float)(v120 * v46) + (float)((float)(1.0 - v120) * *(float *)&v43);
        v147 = (float)(v120 * v142) + (float)((float)(1.0 - v120) * *(float *)&v38);
        *(float *)&v41 = (float)((float)(1.0 - v121) * *(float *)&v41) + (float)(v121 * v144);
        v184 = v147;
        v148 = v43;
        v186 = v43;
        v45 = (float)(v121 * v47) + (float)((float)(1.0 - v121) * v45);
        v145 = v41;
        v185 = v41;
        v187 = v45;
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1869;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1870;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1875;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 1876;
          goto LABEL_178;
        }
        v59 = v187;
      }
      goto LABEL_60;
    }
    if ( *(float *)&v43 > 0.0 && v45 > 0.0 )
    {
      v83 = *(_DWORD *)(a1 + 384);
      if ( v83 == 2 )
      {
        v122 = *(float *)(v62 + 28);
        v125 = fmaxf(v122, v46 / *(float *)&v43);
        v126 = fmaxf(*(float *)(v62 + 32), v47 / v45);
        v124 = fminf(v125, v126);
        v123 = fmaxf(v125, v126);
      }
      else
      {
        if ( v83 != 4 )
          goto LABEL_52;
        v122 = *(float *)(v62 + 28);
        v123 = fminf(fminf(v122, v46 / *(float *)&v43), fminf(*(float *)(v62 + 32), v47 / v45));
        v124 = v123;
      }
      v127 = v124 - *(float *)(v62 + 20);
      v128 = v122 - *(float *)(v62 + 20);
      *(float *)(v62 + 28) = v123;
      *(float *)(v62 + 32) = v123;
      v70 = fmaxf(0.0, (float)(v127 * v70) / v128);
    }
LABEL_52:
    if ( (v82 & 4) == 0 )
    {
LABEL_58:
      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      if ( ThemeAnimationTransform < 0 )
      {
        v136 = 2018;
        goto LABEL_178;
      }
      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      if ( ThemeAnimationTransform < 0 )
      {
        v136 = 2019;
        goto LABEL_178;
      }
LABEL_60:
      *(float *)&v38 = v147;
      v4 = fmaxf(v70, v4);
LABEL_61:
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v62);
      v58 = v149;
      v55 = 0;
      goto LABEL_62;
    }
    v84 = *(_DWORD *)(a1 + 384);
    if ( v84 == 10 )
    {
      v70 = *(float *)&FLOAT_0_25;
    }
    else
    {
      if ( v84 != 11 )
      {
LABEL_55:
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 2013;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v136 = 2014;
          goto LABEL_178;
        }
        v41 = v145;
        goto LABEL_58;
      }
      v70 = FLOAT_0_167;
    }
    *(_OWORD *)v146 = xmmword_180129DF0;
    *(_QWORD *)&v146[32] = 0x3FF0000000000000LL;
    *(_OWORD *)&v146[16] = xmmword_180129E00;
    goto LABEL_55;
  }
  v74 = 0LL;
  v136 = 1632;
LABEL_200:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeAnimationTransform, v136, 0LL);
  if ( v62 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v62);
  if ( v74 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v74);
  return (unsigned int)ThemeAnimationTransform;
}
