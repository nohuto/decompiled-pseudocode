/*
 * XREFs of ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x14002E5E8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxShowOwnedWindows @ 0x140182F28 (xxxShowOwnedWindows.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401C4F1C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401D1FA4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14021B070 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14024E024 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x14026994C (xxxMinimizeHungWindow.c)
 *     zzzActiveCursorTracking @ 0x14027F630 (zzzActiveCursorTracking.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     NtUserSetVisible @ 0x14029EE20 (NtUserSetVisible.c)
 * Callees:
 *     CalcWindowFullScreen @ 0x14002DB70 (CalcWindowFullScreen.c)
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x14002DDA0 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z @ 0x14002FD14 (-IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x14002FD48 (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     IncCompositedVisWindows @ 0x14002FE18 (IncCompositedVisWindows.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x140074820 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401BCBA8 (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     _IsWindowVisible @ 0x1401CE4CC (_IsWindowVisible.c)
 *     ?TraceLoggingFirstMainWindowShownForProcess@@YAXPEBUtagWND@@@Z @ 0x1401DDF0C (-TraceLoggingFirstMainWindowShownForProcess@@YAXPEBUtagWND@@@Z.c)
 *     RemoveWindowFullScreen @ 0x14020EDBC (RemoveWindowFullScreen.c)
 *     DecrementCompositedCount @ 0x14028559C (DecrementCompositedCount.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D226C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 */

char __fastcall SetVisible(__int64 a1, unsigned int a2)
{
  char v4; // di
  int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // bp
  bool v10; // r14
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // bp
  bool v15; // r14
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
        return v4;
      if ( (*(_DWORD *)(a1 + 380) & 4) != 0 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
          || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v9 = 0;
        }
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState();
          LOBYTE(v12) = v10;
          LOBYTE(v13) = v9;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v13,
            v12,
            *(_QWORD *)(UserSessionState + 69416),
            4,
            12,
            18,
            (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
            a1);
        }
        zzzUpdateWindowCompositionCloak(a1, 0LL, 2LL);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
          || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v14 = 0;
        }
        v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v16 = W32GetUserSessionState();
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v18,
            v17,
            *(_QWORD *)(v16 + 69416),
            4,
            12,
            19,
            (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
            a1);
        }
        *(_DWORD *)(a1 + 380) &= ~4u;
      }
      SetOrClrWF(1LL, a1, 3856LL, 1LL);
      SetOrClrWF(((a2 >> 4) & 1) == 0, a1, 2312LL, 1LL);
      IncVisWindows((struct tagWND *)a1);
      IncCompositedVisWindows(a1);
      if ( (a2 & 4) == 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded((struct tagWND *)a1, 0);
      if ( (a2 & 8) == 0 )
        CalcWindowFullScreen((struct tagWND *)a1);
      if ( (unsigned __int8)IsTrayWindow(a1, 1LL) )
        PostIAMShellHookMessage(0x11u, *(_QWORD *)a1);
      if ( IsTopLevelUnownedWindowWithCaption((const struct tagWND *)a1) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL);
        v8 = *(_QWORD *)(v7 + 816);
        if ( (v8 & 0x20000000) == 0 )
        {
          *(_QWORD *)(v7 + 816) = v8 | 0x20000000;
          TraceLoggingFirstMainWindowShownForProcess((const struct tagWND *)a1);
        }
      }
    }
    else
    {
      if ( (a2 & 2) != 0 )
        ClrFTrueVis((struct tagWND *)a1);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) == 0 )
        return v4;
      if ( !(unsigned __int8)IsTrayWindow(a1, 1LL) || (v6 = 1, !(unsigned int)IsWindowVisible(a1)) )
        v6 = 0;
      SetOrClrWF(0LL, a1, 3856LL, 1LL);
      if ( (a2 & 0x10) != 0 )
      {
        SetOrClrWF(1LL, a1, 2312LL, 1LL);
      }
      else
      {
        SetOrClrWF(0LL, a1, 2312LL, 1LL);
        if ( v6 )
          PostIAMShellHookMessage(0x16u, *(_QWORD *)a1);
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 2) != 0 )
        DecrementCompositedCount();
      DecVisWindows((struct tagWND *)a1);
      if ( (a2 & 8) == 0 && (*(_DWORD *)(a1 + 380) & 0x400) != 0 )
        RemoveWindowFullScreen(a1);
    }
    v4 = 1;
    tagWND::ComputeDominantState((tagWND *)a1);
    return v4;
  }
  return 0;
}
