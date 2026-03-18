/*
 * XREFs of ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     NtUserGetWindowMinimizeRect @ 0x14003C870 (NtUserGetWindowMinimizeRect.c)
 *     xxxRedrawTitle @ 0x1400677A8 (xxxRedrawTitle.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x140067B0C (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140068010 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400883B4 (_anonymous_namespace_--xxxUpdateTray.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1400F7E44 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ParkIcon @ 0x1401E31D8 (ParkIcon.c)
 *     xxxRedrawFrameAndHook @ 0x140217A58 (xxxRedrawFrameAndHook.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x140255FF0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxArrangeIconicWindows @ 0x1402E9D44 (xxxArrangeIconicWindows.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

char __fastcall IsTrayWindow(_QWORD *a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  char *v12; // rdx

  v2 = a2 & 2;
  if ( !a1 || !a1[3] )
    return 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928);
    if ( (*(_DWORD *)(v5 + 2120) & 8) == 0 )
      return 0;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v5, v4);
    if ( CurrentThreadNonPaged )
      v9 = *CurrentThreadNonPaged;
    else
      v9 = 0LL;
    v10 = W32GetCurrentThreadNonPaged(v8, v7);
    if ( v10 )
      v10 = *(_QWORD *)v10;
    if ( ((*(_DWORD *)(v9 + 720) | *(_DWORD *)(**(_QWORD **)(v10 + 504) + 16LL)) & 0x800) == 0
      && !*(_QWORD *)(*(_QWORD *)(a1[3] + 8LL) + 184LL) )
    {
      return 0;
    }
  }
  if ( (!v2 || (*(_BYTE *)(a1[5] + 30LL) & 1) != 0)
    && (unsigned int)IsTopLevelWindow(a1)
    && ((v12 = (char *)a1[5], (v12[26] & 4) != 0) || v12[24] >= 0 && (v12[27] & 8) == 0 && !a1[15]) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
