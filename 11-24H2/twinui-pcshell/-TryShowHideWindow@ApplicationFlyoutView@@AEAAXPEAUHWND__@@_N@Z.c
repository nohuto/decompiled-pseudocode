/*
 * XREFs of ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805FC028
 * Callers:
 *     ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1805FB130 (ApplicationFlyoutView--Hide$_ResumeCoro$1.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805FB960 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C95E8 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetAnimationClippingRect@ApplicationFlyoutView@@AEAA?AUtagRECT@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1805FADE0 (-GetAnimationClippingRect@ApplicationFlyoutView@@AEAA-AUtagRECT@@AEBURect@Foundation@Windows@win.c)
 *     ?GetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@XZ @ 0x1805FAF70 (-GetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAA-AU-$pair@URect@Foundation@Windows@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ApplicationFlyoutView::TryShowHideWindow(ApplicationFlyoutView *this, HWND hWnd, unsigned __int8 a3)
{
  int v3; // esi
  HWND v4; // r14
  ApplicationFlyoutView *v5; // r15
  int v6; // ebx
  const char *v7; // r9
  RECT *p_rc; // r12
  const char *v9; // r9
  const char *v10; // r9
  int v11; // eax
  int v12; // eax
  const char *v13; // r9
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  TaskbarHelpers *v22; // rax
  HMONITOR v23; // rdx
  HWND TrayWindowForMonitor; // rax
  int v25; // [rsp+20h] [rbp-A8h]
  int v26; // [rsp+20h] [rbp-A8h]
  int v27; // [rsp+20h] [rbp-A8h]
  int v28; // [rsp+20h] [rbp-A8h]
  int v29; // [rsp+40h] [rbp-88h]
  int pvParam; // [rsp+44h] [rbp-84h] BYREF
  RECT *v31; // [rsp+48h] [rbp-80h]
  float v32[4]; // [rsp+50h] [rbp-78h] BYREF
  int v33; // [rsp+60h] [rbp-68h]
  ApplicationFlyoutView *v34; // [rsp+68h] [rbp-60h]
  HWND v35; // [rsp+70h] [rbp-58h]
  RECT rc; // [rsp+78h] [rbp-50h] BYREF
  struct tagRECT v37; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v3 = a3;
  v4 = hWnd;
  v5 = this;
  v34 = this;
  v35 = hWnd;
  ApplicationFlyoutView::GetRectAndTaskbarLocation((__int64)this, (__int64)v32);
  if ( v33 )
  {
    if ( v33 == 1 )
    {
      v6 = v3 + 90;
    }
    else if ( v33 == 2 )
    {
      v6 = (v3 ^ 1) + 88;
    }
    else
    {
      v6 = (v3 ^ 1) + 90;
    }
  }
  else
  {
    v6 = v3 + 88;
  }
  try
  {
    try
    {
      v29 = v6;
      rc = 0LL;
      v31 = 0LL;
      rc = *ApplicationFlyoutView::GetAnimationClippingRect(
              v5,
              &v37,
              (const struct winrt::Windows::Foundation::Rect *)v32);
      p_rc = &rc;
      v31 = &rc;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x118,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v7);
      LOBYTE(v3) = a3;
      v6 = v29;
      p_rc = v31;
      v5 = v34;
      v4 = v35;
    }
    pvParam = 0;
    if ( !SystemParametersInfoW(0x1042u, 0, &pvParam, 0) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x11B,
        (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v9);
    if ( (_BYTE)v3 )
    {
      if ( !SetWindowPos(v4, HWND_MESSAGE|0x2LL, (int)v32[0], (int)v32[1], (int)v32[2], (int)v32[3], 0x40u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x125,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          v10);
      if ( !pvParam )
        goto LABEL_16;
      v11 = DwmpBeginTransitionRequest(56LL);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x127,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v11);
LABEL_16:
        v12 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)v5 + 1) + 24LL))(
                *((_QWORD *)v5 + 1),
                v4,
                0LL);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x134,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v12,
            v26);
        return;
      }
      v14 = DwmpTransitionWindowWithRects(v4, v6 | 0x10200000u, 0LL, 0LL, 0LL, 0LL, p_rc);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12E,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v14);
      v15 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)v5 + 1) + 24LL))(
              *((_QWORD *)v5 + 1),
              v4,
              0LL);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x12F,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v15,
          v27);
      v16 = DwmpEndTransitionRequest(56LL);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x130,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v16);
      return;
    }
    if ( pvParam )
    {
      v17 = DwmpBeginTransitionRequest(57LL);
      if ( v17 >= 0 )
      {
        v19 = DwmpTransitionWindowWithRects(v4, v6 | 0x30000000u, 0LL, 0LL, 0LL, 0LL, p_rc);
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x140,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v19);
        v20 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)v5 + 1) + 24LL))(
                *((_QWORD *)v5 + 1),
                v4,
                1LL);
        if ( v20 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x141,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v20,
            v28);
        v21 = DwmpEndTransitionRequest(57LL);
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x142,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v21);
        goto LABEL_35;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x139,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v17);
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)v5 + 1) + 24LL))(
            *((_QWORD *)v5 + 1),
            v4,
            1LL);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x146,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v18,
        v25);
LABEL_35:
    if ( GetForegroundWindow() == v4 )
    {
      v22 = (TaskbarHelpers *)MonitorFromRect(&rc, 1u);
      TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v22, v23);
      SetForegroundWindow(TrayWindowForMonitor);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x153,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      v13);
  }
}
