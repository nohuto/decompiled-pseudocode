/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180007C08 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180008C38 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18001C40C (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x1800369DC (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036A00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??B?$com_ptr_t@VCAcrylicSheet@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x18003CBA4 (--B-$com_ptr_t@VCAcrylicSheet@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18003CBB4 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z @ 0x18003CBC4 (-OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180045E04 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18004EDF0 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18004FAD8 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ??1IScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180065770 (--1IScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800659E0 (-IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI@@@details@wil@@QEAA_NXZ @ 0x180065A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSn.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x180065E8C (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18006B7BE (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800A2F50 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800D5EB4 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x1800E61EC (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ??$as@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1800E6ED0 (--$as@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@IUnknown@Foundation@Windows.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SA?AU1234@XZ @ 0x1800FD1F4 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SA-AU1234@XZ.c)
 *     ??$as@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180108570 (--$as@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@IUnknown@Foundation@Window.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x180108EAC (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowMoveSizeChanged@?$consume_Udwm_Transitions_Private_IAnimationsTransitionManager@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18010B640 (-OnWindowMoveSizeChanged@-$consume_Udwm_Transitions_Private_IAnimationsTransitionManager@UIAnima.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CC54 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?WindowMaximizeSnapCancel@?$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010D214 (-WindowMaximizeSnapCancel@-$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWin.c)
 *     ?WindowMaximizeSnapPostTransition@?$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010D24C (-WindowMaximizeSnapPostTransition@-$consume_Udwm_Transitions_Private_IWindowStateTransitionManag.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // r12d
  int v5; // ebx
  struct tagPOINT v6; // rdi
  CWindowData *v7; // rax
  CWindowData *v8; // rax
  unsigned int v9; // r15d
  int v11; // esi
  int v12; // r14d
  __int64 v13; // r11
  int v14; // edx
  unsigned int v15; // r9d
  struct tagPOINT v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned int v20; // edx
  unsigned int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned int v24; // r13d
  __int64 v25; // r11
  __int64 v26; // rdx
  unsigned int v27; // r8d
  LONG x; // r14d
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rsi
  __int64 v31; // rsi
  char v32; // si
  CWindowList *v33; // r13
  __int64 Current; // rax
  __int64 v35; // r14
  struct IDwmWindow *v36; // r15
  __int64 v37; // rax
  __int64 v38; // r8
  const char *v39; // r9
  LONG updated; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  CTopLevelWindow3D *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  const char *v50; // r9
  struct tagPOINT v51; // r14
  __int64 v52; // rax
  bool v53; // al
  LONG v54; // r15d
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // r8
  const char *v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  const char *v68; // r9
  unsigned int v69; // edi
  __int64 v70; // rbx
  __int64 v71; // rax
  int v72; // r9d
  wchar_t **v73; // r10
  WCHAR *v74; // rax
  int v75; // edx
  char v76; // al
  int v77; // eax
  unsigned int v78; // esi
  __int64 v79; // rdx
  __int64 v80; // rax
  char *v81; // rax
  char *v82; // rdi
  struct tagPOINT v83; // rbx
  __int64 v84; // rax
  CWindowList *v85; // rcx
  __int64 v86; // rdx
  __int64 i; // rax
  __int64 v88; // r9
  int v89; // edx
  unsigned int v90; // r8d
  RECT v91; // xmm0
  __int64 v92; // r9
  int v93; // edx
  unsigned int v94; // r8d
  RECT v95; // xmm0
  struct tagPOINT v96; // rcx
  RECT *v97; // rsi
  __int64 v98; // rdi
  char v99; // r15
  unsigned int v100; // ebx
  const struct CStoryboard *v101; // rsi
  CVisual *v102; // rcx
  int v103; // eax
  char v104; // al
  CAcrylicSheet *v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rdx
  int v108; // [rsp+20h] [rbp-3F8h]
  unsigned int v109; // [rsp+20h] [rbp-3F8h]
  unsigned int v110; // [rsp+20h] [rbp-3F8h]
  int v111; // [rsp+20h] [rbp-3F8h]
  bool v112[4]; // [rsp+30h] [rbp-3E8h] BYREF
  LONG v113; // [rsp+34h] [rbp-3E4h]
  struct tagPOINT v114; // [rsp+38h] [rbp-3E0h]
  char v115; // [rsp+40h] [rbp-3D8h]
  struct tagPOINT v116; // [rsp+48h] [rbp-3D0h] BYREF
  CWindowList *v117; // [rsp+50h] [rbp-3C8h]
  struct _RTL_CRITICAL_SECTION *v118; // [rsp+58h] [rbp-3C0h] BYREF
  struct IDwmWindow *v119; // [rsp+60h] [rbp-3B8h]
  struct IDwmWindow *v120; // [rsp+68h] [rbp-3B0h]
  CWindowList *v121; // [rsp+70h] [rbp-3A8h]
  _QWORD *v122; // [rsp+78h] [rbp-3A0h]
  struct _RTL_CRITICAL_SECTION *v123; // [rsp+80h] [rbp-398h]
  CWindowData *v124; // [rsp+88h] [rbp-390h] BYREF
  struct tagPOINT v125; // [rsp+90h] [rbp-388h]
  struct tagPOINT v126; // [rsp+98h] [rbp-380h]
  char v127[8]; // [rsp+A0h] [rbp-378h] BYREF
  char v128[8]; // [rsp+A8h] [rbp-370h] BYREF
  char v129[8]; // [rsp+B0h] [rbp-368h] BYREF
  char v130[8]; // [rsp+B8h] [rbp-360h] BYREF
  char v131[8]; // [rsp+C0h] [rbp-358h] BYREF
  char v132[8]; // [rsp+C8h] [rbp-350h] BYREF
  struct tagRECT v133; // [rsp+D0h] [rbp-348h] BYREF
  char v134[8]; // [rsp+E0h] [rbp-338h] BYREF
  char v135[8]; // [rsp+E8h] [rbp-330h] BYREF
  char v136[8]; // [rsp+F0h] [rbp-328h] BYREF
  char v137[8]; // [rsp+F8h] [rbp-320h] BYREF
  _BYTE v138[16]; // [rsp+100h] [rbp-318h] BYREF
  _QWORD Buffer[2]; // [rsp+110h] [rbp-308h] BYREF
  __int128 v140; // [rsp+120h] [rbp-2F8h]
  __int128 v141; // [rsp+130h] [rbp-2E8h]
  __int128 v142; // [rsp+140h] [rbp-2D8h]
  __int64 v143; // [rsp+150h] [rbp-2C8h]
  char v144; // [rsp+158h] [rbp-2C0h]
  struct tagRECT v145; // [rsp+170h] [rbp-2A8h] BYREF
  struct tagPOINT v146; // [rsp+180h] [rbp-298h] BYREF
  int v147; // [rsp+188h] [rbp-290h]
  int v148; // [rsp+18Ch] [rbp-28Ch]
  RECT rc1; // [rsp+190h] [rbp-288h] BYREF
  RECT v150; // [rsp+1A0h] [rbp-278h] BYREF
  RECT rc2; // [rsp+1B0h] [rbp-268h] BYREF
  RECT v152; // [rsp+1C0h] [rbp-258h] BYREF
  WCHAR ClassName[264]; // [rsp+1D0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+418h] [rbp+0h]

  v119 = a2;
  v117 = this;
  v121 = this;
  v120 = a2;
  v4 = 0;
  v118 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  v6 = (struct tagPOINT)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !*(_QWORD *)&v6 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v7 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          864LL);
    v124 = v7;
    if ( !v7 || (v8 = CWindowData::CWindowData(v7), (v6 = (struct tagPOINT)v8) == 0LL) )
    {
      v5 = -2147024882;
      v109 = 2082;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v109, 0LL);
      v113 = v5;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xCE1u, 0LL);
LABEL_11:
      v9 = v113;
LABEL_12:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v118);
      return v9;
    }
    *((_QWORD *)v8 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v8);
    *(_QWORD *)(*(_QWORD *)&v6 + 40LL) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v5 = CWindowList::SyncWindowData(this, a2, *(struct CWindowData **)&v6);
    if ( v5 < 0 )
    {
      v109 = 2086;
      goto LABEL_8;
    }
  }
  v113 = v5;
  if ( !*(_QWORD *)&v6 )
  {
    v9 = v5;
    goto LABEL_12;
  }
  v112[0] = 0;
  (*(void (__fastcall **)(struct IDwmWindow *, struct tagPOINT *))(*(_QWORD *)a2 + 88LL))(a2, &v146);
  v11 = v146.x - *(_DWORD *)(*(_QWORD *)&v6 + 216LL);
  v12 = v146.y - *(_DWORD *)(*(_QWORD *)&v6 + 220LL);
  v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v122 = (_QWORD *)(*(_QWORD *)&v6 + 40LL);
  v14 = 0;
  v15 = *(_DWORD *)(v13 + 72);
  v16 = v6;
  if ( v15 )
  {
    while ( **(_QWORD **)(*(_QWORD *)(v13 + 48) + 8LL * (unsigned int)v14) != *(_QWORD *)(*(_QWORD *)&v6 + 40LL) )
    {
      if ( ++v14 >= v15 )
        goto LABEL_21;
    }
    if ( v14 >= 0 )
    {
      _mm_lfence();
      v17 = *(_QWORD *)(*(_QWORD *)(v13 + 48) + 8LL * (unsigned int)v14);
      if ( (*(_BYTE *)(v17 + 40) & 4) != 0 )
      {
        v18 = *(_QWORD *)(v17 + 104);
        v11 = v146.x - v18;
        v12 = v146.y - HIDWORD(v18);
      }
    }
  }
LABEL_21:
  if ( v11 || v12 )
  {
    v114 = v146;
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      *(const struct CWindowData **)&v6,
      v146,
      v112);
    if ( !v112[0] )
    {
      OffsetRect((LPRECT)(*(_QWORD *)&v6 + 216LL), v11, v12);
      v19 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      v20 = 0;
      v21 = *(_DWORD *)(v19 + 48);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v19 + 24);
        while ( 1 )
        {
          v23 = v22 + 24LL * v20;
          if ( *(_BYTE *)(v23 + 16) )
          {
            if ( *(_QWORD *)(*(_QWORD *)&v6 + 440LL) == *(_QWORD *)v23 )
              break;
          }
          if ( ++v20 >= v21 )
            goto LABEL_31;
        }
        v116 = *(struct tagPOINT *)(*(_QWORD *)&v6 + 216LL);
        CVisual::SetOffset(*(CVisual **)(v23 + 8), &v116);
      }
LABEL_31:
      CWindowList::OnPositionChange(this, *(struct CWindowData **)&v6, 1);
    }
  }
  v24 = 0;
  if ( v147 - v146.x >= 0 )
    v24 = v147 - v146.x;
  if ( v148 - v146.y >= 0 )
    v4 = v148 - v146.y;
  v25 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v26 = 0LL;
  v27 = *(_DWORD *)(v25 + 72);
  if ( !v27 )
    goto LABEL_39;
  while ( **(_QWORD **)(*(_QWORD *)(v25 + 48) + 8 * v26) != *v122 )
  {
    v26 = (unsigned int)(v26 + 1);
    if ( (unsigned int)v26 >= v27 )
      goto LABEL_39;
  }
  if ( (int)v26 >= 0
    && (_mm_lfence(), v31 = *(_QWORD *)(*(_QWORD *)(v25 + 48) + 8 * v26), (*(_BYTE *)(v31 + 40) & 2) != 0) )
  {
    v116 = *(struct tagPOINT *)(v31 + 112);
    v29 = HIDWORD(*(unsigned __int64 *)&v116);
    v30 = HIDWORD(*(unsigned __int64 *)&v116);
    x = v116.x;
  }
  else
  {
LABEL_39:
    x = *(_DWORD *)(*(_QWORD *)&v6 + 224LL) - *(_DWORD *)(*(_QWORD *)&v6 + 216LL);
    if ( x < 0 )
      x = 0;
    if ( *(_DWORD *)(*(_QWORD *)&v6 + 228LL) - *(_DWORD *)(*(_QWORD *)&v6 + 220LL) >= 0 )
    {
      LODWORD(v29) = *(_DWORD *)(*(_QWORD *)&v6 + 228LL) - *(_DWORD *)(*(_QWORD *)&v6 + 220LL);
      LODWORD(v30) = v29;
    }
    else
    {
      LODWORD(v29) = 0;
      LODWORD(v30) = 0;
    }
  }
  v114.x = v113;
  v126 = v6;
  v125 = v6;
  v123 = (struct _RTL_CRITICAL_SECTION *)v6;
  *(struct tagPOINT *)&v133.left = v6;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI>::GetImpl'::`2'::impl) )
  {
    if ( v24 == x && v4 == (_DWORD)v29 )
    {
      v32 = 0;
      v115 = 0;
      v113 = v114.x;
LABEL_51:
      v33 = v117;
LABEL_188:
      try
      {
        Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v138);
        v35 = winrt::Windows::Foundation::IUnknown::as<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>(
                Current,
                v134);
        v36 = v119;
        v37 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v119 + 24LL))(v119);
        winrt::impl::consume_Udwm_Transitions_Private_IAnimationsTransitionManager<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>::OnWindowMoveSizeChanged(
          v35,
          v37);
        winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v134);
        winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v138);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0xD25,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          v39);
        v113 = v114.x;
        v32 = v115;
        v16 = v125;
        v36 = v120;
        v6 = v126;
        v33 = v121;
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapToSnapAnimation>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetImpl'::`2'::impl,
        1u,
        v38,
        (__int64)v39);
      if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v42, v41)
        && *((_BYTE *)v33 + 681)
        && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v36 + 24LL))(v36) == *((_QWORD *)v33 + 86) )
      {
        *((_BYTE *)v33 + 681) = 0;
        *((_QWORD *)v33 + 86) = 0LL;
        try
        {
          if ( v32
            && (v44 = *(CTopLevelWindow3D **)(*(_QWORD *)&v16 + 448LL)) != 0LL
            && CTopLevelWindow3D::IsReadyForMaximizeSnapPostTransition(v44) )
          {
            v45 = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v128);
            v46 = winrt::Windows::Foundation::IUnknown::as<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>(
                    v45,
                    v127);
            winrt::impl::consume_Udwm_Transitions_Private_IWindowStateTransitionManager<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapPostTransition(v46);
            winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v127);
            v47 = (winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v128;
          }
          else
          {
            v48 = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v130);
            v49 = winrt::Windows::Foundation::IUnknown::as<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>(
                    v48,
                    v129);
            winrt::impl::consume_Udwm_Transitions_Private_IWindowStateTransitionManager<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapCancel(v49);
            winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v129);
            v47 = (winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v130;
          }
          winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler(v47);
        }
        catch ( ... )
        {
          v114.x = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xD4C,
                     (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                     v50);
          goto LABEL_66;
        }
      }
      v51 = v16;
      v114 = v6;
      goto LABEL_68;
    }
    v32 = 1;
    v115 = 1;
    v116 = (struct tagPOINT)__PAIR64__(v4, v24);
    CAnimationScheduler::OnWindowSizeChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      *(const struct CWindowData **)&v6,
      (struct tagSIZE)__PAIR64__(v4, v24),
      v112);
    v113 = v114.x;
    if ( v112[0] )
      goto LABEL_51;
    *(_DWORD *)(*(_QWORD *)&v6 + 224LL) = v24 + *(_DWORD *)(*(_QWORD *)&v6 + 216LL);
    *(_DWORD *)(*(_QWORD *)&v6 + 228LL) = v4 + *(_DWORD *)(*(_QWORD *)&v6 + 220LL);
    v33 = v117;
    updated = CWindowList::OnSizeChange(v117, *(struct CWindowData **)&v6);
    v9 = updated;
    v113 = updated;
    v114.x = updated;
    if ( updated >= 0 )
      goto LABEL_188;
    v110 = 3356;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v110, 0LL);
    goto LABEL_12;
  }
  v54 = v113;
  if ( v24 == x && (v114.x = v113, v4 == (_DWORD)v30)
    || (v116 = (struct tagPOINT)__PAIR64__(v4, v24),
        CAnimationScheduler::OnWindowSizeChange(
          *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
          *(const struct CWindowData **)&v6,
          (struct tagSIZE)__PAIR64__(v4, v24),
          v112),
        v113 = v54,
        v114.x = v54,
        v112[0]) )
  {
    v33 = v117;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)&v6 + 224LL) = v24 + *(_DWORD *)(*(_QWORD *)&v6 + 216LL);
    *(_DWORD *)(*(_QWORD *)&v6 + 228LL) = v4 + *(_DWORD *)(*(_QWORD *)&v6 + 220LL);
    v33 = v117;
    updated = CWindowList::OnSizeChange(v117, *(struct CWindowData **)&v6);
    v9 = updated;
    v113 = updated;
    v114.x = updated;
    if ( updated < 0 )
    {
      v110 = 3423;
      goto LABEL_55;
    }
  }
  try
  {
    v55 = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v132);
    v56 = winrt::Windows::Foundation::IUnknown::as<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>(
            v55,
            v131);
    v36 = v119;
    v57 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v119 + 24LL))(v119);
    winrt::impl::consume_Udwm_Transitions_Private_IAnimationsTransitionManager<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>::OnWindowMoveSizeChanged(
      v56,
      v57);
    winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v131);
    winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v132);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xD68,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v59);
    v113 = v114.x;
    v16 = *(struct tagPOINT *)&v133.left;
    v36 = v120;
    v6 = (struct tagPOINT)v123;
    v33 = v121;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapToSnapAnimation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetImpl'::`2'::impl,
    1u,
    v58,
    (__int64)v59);
  v51 = v16;
  v114 = v6;
  if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v61, v60) )
  {
    v114 = v6;
    if ( *((_BYTE *)v33 + 681) )
    {
      v114 = v6;
      if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v36 + 24LL))(v36) == *((_QWORD *)v33 + 86) )
      {
        *((_BYTE *)v33 + 681) = 0;
        *((_QWORD *)v33 + 86) = 0LL;
        try
        {
          v62 = *(_QWORD *)(*(_QWORD *)&v16 + 448LL);
          if ( !v62 || (*(_DWORD *)(*(_QWORD *)&v16 + 116LL) & 0x20000000) != 0 || *(_BYTE *)(v62 + 536) )
          {
            v66 = winrt::Udwm::Transitions::TransitionManager::GetCurrent(&v124);
            v67 = winrt::Windows::Foundation::IUnknown::as<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>(
                    v66,
                    v137);
            winrt::impl::consume_Udwm_Transitions_Private_IWindowStateTransitionManager<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapCancel(v67);
            winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v137);
            v65 = (winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)&v124;
          }
          else
          {
            v63 = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v136);
            v64 = winrt::Windows::Foundation::IUnknown::as<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>(
                    v63,
                    v135);
            winrt::impl::consume_Udwm_Transitions_Private_IWindowStateTransitionManager<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapPostTransition(v64);
            winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v135);
            v65 = (winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)v136;
          }
          winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler(v65);
          v51 = v16;
          v114 = v6;
        }
        catch ( ... )
        {
          v114.x = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xD8D,
                     (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                     v68);
LABEL_66:
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v118);
          return (unsigned int)v114.x;
        }
      }
    }
  }
LABEL_68:
  if ( !v112[0] )
  {
    v52 = *(_QWORD *)(*(_QWORD *)&v51 + 600LL);
    v53 = v52 && *(char *)(v52 + 673) < 0 && CWindowData::ShouldBeIncludedInOwnerSWR(*(CWindowData **)&v51);
    if ( (*(_BYTE *)(*(_QWORD *)&v51 + 674LL) & 1) != v53 )
      CWindowData::UpdateOwnerLists(*(CWindowData **)&v51, !(*(_BYTE *)(*(_QWORD *)&v51 + 674LL) & 1));
    v69 = 0;
    if ( *(_DWORD *)(*(_QWORD *)&v51 + 632LL) )
    {
      while ( 1 )
      {
        v43 = v69;
        v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v51 + 608LL) + 8LL * v69);
        v71 = *(_QWORD *)(v70 + 600);
        if ( !v71
          || *(char *)(v71 + 673) >= 0
          || *(char *)(v70 + 120) < 0 && (*(_DWORD *)(v70 + 680) & 0xFFF) != 0x11
          || !CWindowData::PropertiesAllowAutoParenting(*(CWindowData **)(*(_QWORD *)(*(_QWORD *)&v51 + 608LL)
                                                                        + 8LL * v69)) )
        {
          goto LABEL_106;
        }
        ClassName[0] = 0;
        if ( GetClassNameW(*(HWND *)(v70 + 40), ClassName, 260) )
          break;
LABEL_105:
        v76 = 1;
LABEL_107:
        if ( (*(_BYTE *)(v70 + 674) & 1) != v76 )
          CWindowData::UpdateOwnerLists((CWindowData *)v70, !(*(_BYTE *)(v70 + 674) & 1));
        if ( ++v69 >= *(_DWORD *)(*(_QWORD *)&v51 + 632LL) )
          goto LABEL_110;
      }
      v72 = 0;
      v73 = off_180115EE0;
      while ( 1 )
      {
        v74 = ClassName;
        do
        {
          v43 = *(WCHAR *)((char *)v74 + (char *)*v73 - (char *)ClassName);
          v75 = *v74 - (_DWORD)v43;
          if ( v75 )
            break;
          ++v74;
        }
        while ( (_DWORD)v43 );
        if ( !v75 )
          break;
        ++v72;
        ++v73;
        if ( v72 )
          goto LABEL_105;
      }
LABEL_106:
      v76 = 0;
      goto LABEL_107;
    }
  }
LABEL_110:
  if ( **(_QWORD **)&v51 != v51 )
  {
    v80 = *(_QWORD *)(*(_QWORD *)&v51 + 136LL);
    Buffer[1] = 0LL;
    v140 = 0LL;
    v143 = -1LL;
    v144 = 0;
    v141 = 0LL;
    v142 = 0LL;
    Buffer[0] = v80;
    v81 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)v33 + 8), Buffer);
    v82 = v81 + 80;
    if ( !v81 )
      v82 = 0LL;
    v83 = v51;
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&v83 + 672LL) & 1) != 0 )
      {
        v84 = *(_QWORD *)(*(_QWORD *)&v83 + 440LL);
        if ( v84 )
        {
          if ( *(_QWORD *)(v84 + 24) )
          {
            v85 = *(CWindowList **)(*(_QWORD *)&v83 + 24LL);
            if ( v85 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(CWindowList *))(*(_QWORD *)v85 + 440LL))(v85) )
              {
                if ( CWindowData::PropertiesAllowAutoParenting(*(CWindowData **)&v83)
                  && (*(_BYTE *)(*(_QWORD *)&v83 + 677LL) & 0x10) == 0
                  && !*(_QWORD *)(*(_QWORD *)&v83 + 464LL)
                  && (*(_BYTE *)(*(_QWORD *)&v83 + 676LL) & 2) == 0 )
                {
                  v86 = *(_QWORD *)(*(_QWORD *)&v83 + 600LL);
                  if ( (*(_BYTE *)(v86 + 672) & 1) != 0 && *(_QWORD *)(v86 + 440) && (*(_BYTE *)(v86 + 678) & 0x10) == 0 )
                  {
                    for ( i = *(_QWORD *)(*(_QWORD *)&v83 + 8LL); (char *)i != v82; i = *(_QWORD *)(i + 8) )
                    {
                      if ( i == v86 )
                        goto LABEL_138;
                      if ( (*(_BYTE *)(i + 672) & 1) != 0 )
                      {
                        v85 = *(CWindowList **)(i + 440);
                        if ( v85 )
                        {
                          if ( *((_QWORD *)v85 + 3) )
                          {
                            if ( *(_QWORD *)(i + 600) == v86 && (*(_BYTE *)(i + 678) & 0x10) != 0 )
                            {
LABEL_138:
                              LOBYTE(v85) = 1;
                              goto LABEL_140;
                            }
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            LOBYTE(v85) = 0;
LABEL_140:
            if ( (_BYTE)v85 == ((*(_BYTE *)(*(_QWORD *)&v83 + 678LL) & 0x10) != 0) )
              goto LABEL_145;
            v77 = CWindowList::ToggleAutoParenting(v85, *(struct CWindowData **)&v83);
            v78 = v77;
            if ( v77 < 0 )
              break;
          }
        }
      }
      v83 = **(struct tagPOINT **)&v83;
      if ( !*(_QWORD *)&v83 || *(char **)&v83 == v82 || v83 == v51 )
        goto LABEL_145;
    }
    v79 = 8184LL;
    goto LABEL_174;
  }
  if ( (*(_BYTE *)(*(_QWORD *)&v51 + 678LL) & 0x10) != 0 )
  {
    v77 = CWindowList::ToggleAutoParenting((CWindowList *)v43, *(struct CWindowData **)&v51);
    v78 = v77;
    if ( v77 < 0 )
    {
      v79 = 8168LL;
LABEL_174:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v79,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v77,
        v108);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v78,
        v111);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v118);
      return v78;
    }
  }
LABEL_145:
  v88 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v89 = 0;
  v90 = *(_DWORD *)(v88 + 72);
  if ( !v90 )
    goto LABEL_148;
  while ( **(_QWORD **)(*(_QWORD *)(v88 + 48) + 8LL * (unsigned int)v89) != *v122 )
  {
    if ( ++v89 >= v90 )
      goto LABEL_148;
  }
  if ( v89 >= 0
    && (_mm_lfence(),
        v106 = *(_QWORD *)(*(_QWORD *)(v88 + 48) + 8LL * (unsigned int)v89),
        (*(_BYTE *)(v106 + 40) & 8) != 0) )
  {
    v91 = *(RECT *)(v106 + 120);
  }
  else
  {
LABEL_148:
    v91 = *(RECT *)(*(_QWORD *)&v51 + 232LL);
  }
  rc2 = v91;
  v92 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v93 = 0;
  v94 = *(_DWORD *)(v92 + 72);
  if ( !v94 )
    goto LABEL_152;
  while ( **(_QWORD **)(*(_QWORD *)(v92 + 48) + 8LL * (unsigned int)v93) != *v122 )
  {
    if ( ++v93 >= v94 )
      goto LABEL_152;
  }
  if ( v93 >= 0
    && (_mm_lfence(),
        v107 = *(_QWORD *)(*(_QWORD *)(v92 + 48) + 8LL * (unsigned int)v93),
        (*(_BYTE *)(v107 + 40) & 0x10) != 0) )
  {
    v95 = *(RECT *)(v107 + 136);
    v96 = v114;
  }
  else
  {
LABEL_152:
    v95 = *(RECT *)(*(_QWORD *)&v51 + 248LL);
    v96 = v51;
  }
  v152 = v95;
  v97 = (RECT *)(*(_QWORD *)&v96 + 248LL);
  (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v36 + 96LL))(v36, &rc1);
  (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v36 + 104LL))(v36, &v150);
  if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v150, &v152) )
  {
    v98 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v123 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v99 = 0;
    v100 = 0;
    if ( *(_DWORD *)(v98 + 40) )
    {
      do
      {
        v101 = *(const struct CStoryboard **)(*(_QWORD *)(v98 + 16) + 8LL * v100);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v100, *(HWND **)&v51, v101, 0) )
          v99 |= (int)CWindowPropertyTracker::OnWindowClientContentRectChange(
                        (CWindowPropertyTracker *)(v98 + 48),
                        v101,
                        *(const struct CWindowData **)&v51,
                        &rc1,
                        &v150) >= 0;
        ++v100;
      }
      while ( v100 < *(_DWORD *)(v98 + 40) );
      v97 = (RECT *)(*(_QWORD *)&v114 + 248LL);
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v99 )
    {
      *(RECT *)(*(_QWORD *)&v51 + 232LL) = rc1;
      *v97 = v150;
      v102 = *(CVisual **)(*(_QWORD *)&v51 + 440LL);
      if ( v102 )
      {
        v103 = *((_DWORD *)v102 + 22);
        if ( (v103 & 0x4000000) == 0 )
        {
          *((_DWORD *)v102 + 22) = v103 | 0x4000000;
          CVisual::PropagateDirtyChildren(v102);
        }
      }
    }
  }
  if ( !*(_QWORD *)(*(_QWORD *)&v51 + 440LL)
    || !(unsigned __int8)wil::com_ptr_t<CAcrylicSheet,wil::err_returncode_policy>::operator bool((char *)v33 + 544)
    || *((_QWORD *)v33 + 88) != v51 )
  {
    goto LABEL_11;
  }
  v104 = *(_BYTE *)(*(_QWORD *)&v51 + 677LL);
  if ( (v104 & 0x40) != 0 )
  {
    if ( v104 < 0 )
    {
      updated = CWindowList::RunAcrylicSheetEndArrangementAnimation(v33);
      v9 = updated;
      if ( updated < 0 )
      {
        v110 = 3534;
        goto LABEL_55;
      }
      goto LABEL_185;
    }
  }
  else
  {
    if ( (v104 & 0x20) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)&v51 + 677LL) = v104 & 0xDF;
      CWindowList::ApplyWindowResizeStateTransition(v33);
    }
    if ( (unsigned __int8)wil::com_ptr_t<CAcrylicSheet,wil::err_returncode_policy>::operator bool((char *)v33 + 544) )
    {
      v105 = (CAcrylicSheet *)*((_QWORD *)v33 + 68);
      v133 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v145, *(struct CWindowData **)&v51);
      updated = CAcrylicSheet::UpdateRect(v105, &v133);
      v9 = updated;
      if ( updated < 0 )
      {
        v110 = 3529;
        goto LABEL_55;
      }
LABEL_185:
      if ( (*(_BYTE *)(*(_QWORD *)&v51 + 677LL) & 0x10) != 0 )
        CTopLevelWindow::OnIsInWindowMove(
          *(CTopLevelWindow **)(*(_QWORD *)&v51 + 440LL),
          1,
          (const struct tagRECT *)(*(_QWORD *)&v51 + 48LL));
      goto LABEL_12;
    }
  }
  v9 = v113;
  goto LABEL_185;
}
