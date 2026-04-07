/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FE50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001A9FC (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18001AA30 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18001B2CC (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18001E730 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180024BD0 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180040558 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B154 (-WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180052FE0 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x1800531A4 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800531EC (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180053234 (-GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18005327C (-GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z @ 0x1800533AC (-OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z.c)
 *     ?OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@Z @ 0x180053478 (-OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x180067DFC (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?OnWindowMove@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z @ 0x1800697B0 (-OnWindowMove@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18006F2DC (-OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x180088460 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180099F6C (-WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800DB99C (-IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800EE11C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x1800F2C70 (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  struct IDwmWindow *v2; // r12
  CWindowList *v3; // rsi
  int v4; // r14d
  struct CWindowData *v5; // rdi
  int v6; // r15d
  int v7; // r13d
  CWindowPropertyTracker *v8; // rcx
  LONG v9; // r15d
  int v10; // r13d
  const struct std::nothrow_t *v11; // rdx
  LONG cx; // eax
  __int64 cy; // rcx
  char v14; // r15
  winrt::Udwm::Transitions::TransitionManager *Current; // r13
  HWND v16; // rax
  const char *v17; // r9
  int updated; // eax
  const struct std::nothrow_t *v19; // rdx
  CTopLevelWindow3D *v20; // rcx
  winrt::Udwm::Transitions::TransitionManager *v21; // rax
  const char *v22; // r9
  winrt::Udwm::Transitions::TransitionManager *v23; // rax
  int v24; // eax
  unsigned int v25; // r15d
  HWND *v26; // r15
  CWindowList *v27; // rcx
  char v28; // al
  CAcrylicSheet *v29; // rsi
  int v31; // [rsp+20h] [rbp-E8h]
  unsigned int v32; // [rsp+20h] [rbp-E8h]
  bool v33; // [rsp+30h] [rbp-D8h] BYREF
  char v34; // [rsp+31h] [rbp-D7h]
  int v35; // [rsp+34h] [rbp-D4h]
  struct tagSIZE v36; // [rsp+38h] [rbp-D0h] BYREF
  struct tagPOINT v37; // [rsp+40h] [rbp-C8h] BYREF
  struct CWindowData *v38; // [rsp+48h] [rbp-C0h] BYREF
  HWND *v39; // [rsp+50h] [rbp-B8h]
  struct tagRECT v40; // [rsp+58h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v42; // [rsp+70h] [rbp-98h] BYREF
  __int128 v43; // [rsp+80h] [rbp-88h] BYREF
  RECT rc1; // [rsp+90h] [rbp-78h] BYREF
  RECT v45; // [rsp+A0h] [rbp-68h] BYREF
  RECT rc2; // [rsp+B0h] [rbp-58h] BYREF
  RECT v47; // [rsp+C0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v2 = a2;
  v3 = this;
  *(_QWORD *)&v40.left = this;
  *(_QWORD *)&v42.left = a2;
  v41 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v35 = 0;
  v38 = 0LL;
  CWindowList::GetSyncedWindowData(v3, v2, 1, &v38);
  v5 = v38;
  if ( !v38 )
    goto LABEL_60;
  v33 = 0;
  v43 = 0LL;
  (*(void (__fastcall **)(struct IDwmWindow *, __int128 *))(*(_QWORD *)v2 + 80LL))(v2, &v43);
  v6 = v43 - *((_DWORD *)v5 + 55);
  v7 = DWORD1(v43) - *((_DWORD *)v5 + 56);
  v37 = 0LL;
  v8 = (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL);
  v39 = (HWND *)((char *)v5 + 40);
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(v8, *((HWND *)v5 + 5), &v37) >= 0 )
  {
    v6 = v43 - v37.x;
    v7 = DWORD1(v43) - v37.y;
  }
  if ( v6 || v7 )
  {
    v36 = (struct tagSIZE)v43;
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      v5,
      (struct tagPOINT)v43,
      &v33);
    if ( !v33 )
    {
      OffsetRect((LPRECT)((char *)v5 + 220), v6, v7);
      CTransitionVisualController::OnWindowMove(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        v5);
      CWindowList::OnPositionChange(v3, v5, 1);
    }
  }
  v9 = 0;
  if ( DWORD2(v43) - (int)v43 >= 0 )
    v9 = DWORD2(v43) - v43;
  v37.x = v9;
  v10 = 0;
  if ( HIDWORD(v43) - DWORD1(v43) >= 0 )
    v10 = HIDWORD(v43) - DWORD1(v43);
  v36 = 0LL;
  if ( (int)CWindowPropertyTracker::GetWindowEndSize(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
              *v39,
              &v36) >= 0 )
  {
    cy = (unsigned int)v36.cy;
    cx = v36.cx;
  }
  else
  {
    v11 = (struct CWindowData *)((char *)v5 + 220);
    cx = *((_DWORD *)v5 + 57) - *((_DWORD *)v5 + 55);
    if ( cx < 0 )
      cx = 0;
    cy = (unsigned int)(*((_DWORD *)v5 + 58) - *((_DWORD *)v5 + 56));
    if ( (int)cy < 0 )
      cy = 0LL;
  }
  if ( v9 == cx && v10 == (_DWORD)cy )
  {
    v14 = 0;
    v34 = 0;
  }
  else
  {
    v14 = 1;
    v34 = 1;
    v36 = (struct tagSIZE)__PAIR64__(v10, v37.x);
    CAnimationScheduler::OnWindowSizeChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      v5,
      (struct tagSIZE)__PAIR64__(v10, v37.x),
      &v33);
    if ( !v33 )
    {
      *((_DWORD *)v5 + 57) = *((_DWORD *)v5 + 55) + v37.x;
      *((_DWORD *)v5 + 58) = v10 + *((_DWORD *)v5 + 56);
      updated = CWindowList::OnSizeChange(v3, v5);
      v4 = updated;
      v35 = updated;
      if ( updated < 0 )
      {
        v32 = 3740;
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v32, 0LL);
LABEL_60:
        v25 = v4;
        goto LABEL_61;
      }
    }
  }
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(cy, v11);
    v16 = (HWND)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v2 + 24LL))(v2);
    winrt::Udwm::Transitions::TransitionManager::OnWindowMoveSizeChanged(Current, v16);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xEA3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v17);
    v4 = v35;
    v5 = v38;
    v14 = v34;
    v2 = *(struct IDwmWindow **)&v42.left;
    v3 = *(CWindowList **)&v40.left;
  }
  if ( *((_BYTE *)v3 + 673)
    && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v2 + 24LL))(v2) == *((_QWORD *)v3 + 85) )
  {
    *((_BYTE *)v3 + 673) = 0;
    *((_QWORD *)v3 + 85) = 0LL;
    try
    {
      if ( v14
        && (v20 = (CTopLevelWindow3D *)*((_QWORD *)v5 + 56)) != 0LL
        && CTopLevelWindow3D::IsReadyForMaximizeSnapPostTransition(v20) )
      {
        v21 = winrt::Udwm::Transitions::TransitionManager::GetCurrent((__int64)v20, v19);
        winrt::Udwm::Transitions::TransitionManager::WindowMaximizeSnapPostTransition(v21);
      }
      else
      {
        v23 = winrt::Udwm::Transitions::TransitionManager::GetCurrent((__int64)v20, v19);
        winrt::Udwm::Transitions::TransitionManager::WindowMaximizeSnapCancel(v23);
      }
    }
    catch ( ... )
    {
      v35 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0xEC3,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
              v22);
      v25 = v35;
      goto LABEL_61;
    }
  }
  if ( !v33 )
    CWindowData::CheckOwnedWindowEligibilityForOwner(v5);
  v24 = CWindowList::ReevaluateAutoParenting(v3, v5, 0);
  v25 = v24;
  if ( v24 >= 0 )
  {
    rc2 = 0LL;
    v47 = 0LL;
    v26 = v39;
    if ( (int)CWindowPropertyTracker::GetWindowEndClientRect(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
                *v39,
                &rc2) < 0 )
      rc2 = *(RECT *)((char *)v5 + 236);
    if ( (int)CWindowPropertyTracker::GetWindowEndContentRect(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
                *v26,
                &v47) < 0 )
      v47 = *(RECT *)((char *)v5 + 252);
    rc1 = 0LL;
    v45 = 0LL;
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v2 + 88LL))(v2, &rc1);
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v2 + 96LL))(v2, &v45);
    if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v45, &v47) )
    {
      CAnimationScheduler::OnWindowClientContentRectChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
        v5,
        &rc1,
        &v45,
        &v33);
      if ( !v33 )
      {
        *(RECT *)((char *)v5 + 236) = rc1;
        *(RECT *)((char *)v5 + 252) = v45;
        CWindowList::OnContentBoundsChange(v27, v5);
      }
    }
    if ( !*((_QWORD *)v5 + 55) || !*((_QWORD *)v3 + 67) || *((struct CWindowData **)v3 + 87) != v5 )
      goto LABEL_60;
    v28 = *((_BYTE *)v5 + 741);
    if ( (v28 & 0x40) != 0 )
    {
      if ( v28 < 0 )
      {
        updated = CWindowList::RunAcrylicSheetEndArrangementAnimation(v3);
        v4 = updated;
        if ( updated < 0 )
        {
          v32 = 3846;
          goto LABEL_25;
        }
      }
    }
    else
    {
      if ( (v28 & 0x20) != 0 )
      {
        *((_BYTE *)v5 + 741) = v28 & 0xDF;
        CWindowList::ApplyWindowResizeStateTransition(v3);
      }
      v29 = (CAcrylicSheet *)*((_QWORD *)v3 + 67);
      if ( v29 )
      {
        v40 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v42, v5);
        updated = CAcrylicSheet::UpdateRect(v29, &v40);
        v4 = updated;
        if ( updated < 0 )
        {
          v32 = 3836;
          goto LABEL_25;
        }
      }
    }
    if ( (*((_BYTE *)v5 + 741) & 0x10) != 0 )
      CTopLevelWindow::OnIsInWindowMove(*((CTopLevelWindow **)v5 + 55), 1, (const struct tagRECT *)v5 + 3);
    goto LABEL_60;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xECD,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v24,
    v31);
LABEL_61:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
  return v25;
}
