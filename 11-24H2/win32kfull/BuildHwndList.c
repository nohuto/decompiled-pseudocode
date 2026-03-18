/*
 * XREFs of BuildHwndList @ 0x140047FC0
 * Callers:
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1400749F8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxInternalEnumWindow @ 0x14008AD6C (xxxInternalEnumWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14008BA78 (UpdateMonitorForWindowAndChildren.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14008C5F8 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxMetricsRecalc @ 0x140110EAC (xxxMetricsRecalc.c)
 *     xxxBroadcastMessageEx @ 0x1401177BC (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140118208 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140166C88 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxShowOwnedWindows @ 0x140182F28 (xxxShowOwnedWindows.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1401851D4 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1401C43F4 (xxxDWP_UpdateUIState.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401C4F1C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1401C7D5C (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x1401CBE08 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1401CC140 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     xxxClientShutdown @ 0x1401D608C (xxxClientShutdown.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1401F4B50 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1402202A8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x140238994 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     NtUserBuildHwndList @ 0x140240A10 (NtUserBuildHwndList.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402524E0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x140281704 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x140282104 (xxxForceWindowToDpiForTest.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x14028F6F0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1474 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1402E9D44 (xxxArrangeIconicWindows.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140048130 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1400482D0 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

struct tagBWL *__fastcall BuildHwndList(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v7; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagBWL *v14; // rbx
  _QWORD *v15; // rax
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax

  v4 = 0LL;
  v7 = a2;
  if ( a4 == 1 && (v11 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63480)) != 0 )
  {
    *(_QWORD *)(W32GetUserSessionState(v10, v9) + 63480) = 0LL;
  }
  else
  {
    v25 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v11 = v25;
    if ( !v25 )
      return 0LL;
    *(_QWORD *)(v25 + 16) = v25 + 280;
  }
  *(_QWORD *)(v11 + 24) = a3;
  *(_QWORD *)(v11 + 8) = v11 + 32;
  v14 = InternalBuildHwndList((struct tagBWL *)v11, a1, v7);
  v15 = (_QWORD *)*((_QWORD *)v14 + 1);
  if ( (unsigned __int64)v15 >= *((_QWORD *)v14 + 2) )
  {
    Win32FreePool(v14);
    return 0LL;
  }
  *v15 = 1LL;
  if ( (v7 & 8) != 0 )
    v14 = InternalRebuildHwndListForIMEClass(v14);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v13, v12);
  if ( CurrentThreadNonPaged )
    v19 = *CurrentThreadNonPaged;
  else
    v19 = 0LL;
  *((_QWORD *)v14 + 3) = v19;
  if ( a4 )
  {
    v20 = (__int64 *)W32GetCurrentThreadNonPaged(v19, v18);
    if ( v20 )
      v4 = *v20;
    *((_QWORD *)v14 + 3) = v4;
    v23 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 63288);
    *(_QWORD *)v14 = v23;
    *(_QWORD *)(W32GetUserSessionState(v23, v24) + 63288) = v14;
  }
  else
  {
    *(_QWORD *)v14 = 3LL;
  }
  return v14;
}
