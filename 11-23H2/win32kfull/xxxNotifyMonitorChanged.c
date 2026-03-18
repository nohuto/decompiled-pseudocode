/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C00A4DDC
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0013074 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C00A4AD4 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C01232A4 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C01242E4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01BA428 (xxxForceWindowToDpiForTest.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01DEE20 (NtUserUpdateLayeredWindow.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C02262B8 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00A4EC4 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00B134C (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00B1B08 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessage @ 0x1C00B2D78 (PostIAMShellHookMessage.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EF6FC (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C013C8D8 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01B8F4C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  int v8; // eax
  struct tagWND *v9; // rcx
  int v10; // r14d
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r8
  __int16 ScaledLogPixels; // bx

  v8 = IsTopLevelWindow(a1);
  v10 = v8;
  if ( (*(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL) & 0xF) == 2 && v8 )
    SetDeferredDpiStateForWindowAndChildren(v9);
  v11 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v11 == 2 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0 )
    {
      xxxSendDpiChangedMsgs(a1, a2, a3, a4);
      goto LABEL_7;
    }
  }
  else if ( v11 == 3 )
  {
    xxxConsiderPreferredDpiChange(a1);
    goto LABEL_7;
  }
  if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
  {
    if ( *((_QWORD *)PtiCurrentShared() + 57) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0 )
      {
        v12 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (v12 & 0xF) == 0 && (v12 & 0x40000000) != 0 )
        {
          if ( (unsigned int)IsTopLevelWindow(a1) )
          {
            if ( !a4
              || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v13 + 284)),
                  (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
            {
              xxxSendGDIScaledDpiChangedMsgs(a1, a3);
            }
          }
        }
      }
    }
  }
LABEL_7:
  if ( v10 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 15) )
    {
      PostIAMShellHookMessage(24LL, *(_QWORD *)a1);
    }
    else if ( (unsigned __int8)IsTrayWindow(a1, 1LL) )
    {
      PostShellHookMessagesEx(0x10uLL, *(_QWORD *)a1, 0LL);
      PostIAMShellHookMessage(20LL, *(_QWORD *)a1);
      xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
