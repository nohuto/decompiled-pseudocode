/*
 * XREFs of xxxNotifyMonitorChanged @ 0x14008CEB0
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140034540 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E1800 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14022BB34 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x140282104 (xxxForceWindowToDpiForTest.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x140282294 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C61F0 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1400F73EC (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401AEAE0 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x140238994 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x140281704 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x140281DB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x140285138 (-RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  BOOL v8; // eax
  __int64 v9; // rdx
  BOOL v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r9
  __int16 ScaledLogPixels; // bx
  __int64 v19; // rdx

  v8 = IsTopLevelWindow((__int64)a1);
  v10 = v8;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 && v8 )
    SetDeferredDpiStateForWindowAndChildren(a1, 0LL, 0LL);
  v11 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( (_DWORD)v11 == 2 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 688LL) & 0x2000000) == 0 )
    {
      xxxSendDpiChangedMsgs(a1, a2, a3, a4);
      goto LABEL_18;
    }
  }
  else if ( (_DWORD)v11 == 3 )
  {
    xxxConsiderPreferredDpiChange(a1);
    goto LABEL_18;
  }
  if ( PtiCurrent(v11, v9) )
  {
    if ( *((_QWORD *)PtiCurrent(v13, v12) + 62) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v15, v14) + 62) + 8LL) + 64LL) & 1) != 0 )
      {
        v16 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (v16 & 0xF) == 0 && (v16 & 0x40000000) != 0 && IsTopLevelWindow((__int64)a1) )
        {
          if ( !a4
            || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v17 + 284)),
                (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
          {
            xxxSendGDIScaledDpiChangedMsgs(a1, a3);
          }
        }
      }
    }
  }
LABEL_18:
  if ( v10 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 15) )
    {
      PostIAMShellHookMessage(24LL, *(_QWORD *)a1);
    }
    else if ( IsTrayWindow(a1, 1LL) )
    {
      PostShellHookMessagesEx((LastWokenThread *)0x10, *(_QWORD *)a1);
      PostIAMShellHookMessage(20LL, *(_QWORD *)a1);
      xxxCallHook(16LL, *(_QWORD *)a1, 0LL, 10);
    }
  }
  RecreateRedirectionBitmapIfAdapterChanged(a1);
  if ( a3 )
    FreeHwndList(a3, v19);
}
