/*
 * XREFs of ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x14002E5E8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x140041720 (xxxProcessNotifyWinEvent.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14009A8C4 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     QueueShutdownData @ 0x1400A5D70 (QueueShutdownData.c)
 *     NtUserSendEventMessage @ 0x1400F4020 (NtUserSendEventMessage.c)
 *     EditionPostInputEvent @ 0x140116E90 (EditionPostInputEvent.c)
 *     EditionPostUpdateKeyStateEvent @ 0x1401174E0 (EditionPostUpdateKeyStateEvent.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x140117520 (NtUserBroadcastThemeChangeEvent.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1401176EC (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     xxxBroadcastMessageEx @ 0x1401177BC (xxxBroadcastMessageEx.c)
 *     NtUserScheduleDispatchNotification @ 0x140118BB0 (NtUserScheduleDispatchNotification.c)
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1401B8838 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1401FE2A4 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020890C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x140217108 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14021985C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPostAccessibilitySettingChangedEvent @ 0x1402243A0 (EditionPostAccessibilitySettingChangedEvent.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x140237020 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140238488 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     NtUserRegisterBSDRWindow @ 0x140244A40 (NtUserRegisterBSDRWindow.c)
 *     EditionHandleAndPostKeyEvent @ 0x1402481C0 (EditionHandleAndPostKeyEvent.c)
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 *     EditionPostRitSound @ 0x140264B40 (EditionPostRitSound.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x140266EBC (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     xxxMinimizeHungWindow @ 0x14026994C (xxxMinimizeHungWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140277614 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPostThreadInputEvent @ 0x14027F1D0 (EditionPostThreadInputEvent.c)
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A6280 (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C0300 (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 *     ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402C3360 (-PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z.c)
 *     ?PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z @ 0x1402C3620 (-PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C46CC (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 *     ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D36A8 (-PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1402DD834 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ??0?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@0@Z @ 0x140102A34 (--0-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x14010F3F0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x14010FA90 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x14012EBD0 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1401958E8 (ProcessSuspendedEventMessage.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall PostEventMessageEx(
        struct tagTHREADINFO *a1,
        struct tagQ *a2,
        DWORD a3,
        LARGE_INTEGER *a4,
        DWORD a5,
        LARGE_INTEGER a6,
        __int64 a7,
        struct tagINPUT_MESSAGE_SOURCE *a8)
{
  struct tagTHREADINFO *v11; // rbx
  __int64 UserSessionState; // rax
  LARGE_INTEGER *v13; // r14
  tagDomLock *v14; // rcx
  tagDomLock *v15; // rcx
  bool v16; // zf
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  tagDomLock *Base; // [rsp+70h] [rbp-59h] BYREF
  char v25; // [rsp+78h] [rbp-51h]
  tagDomLock *v26; // [rsp+80h] [rbp-49h]
  char v27; // [rsp+88h] [rbp-41h]
  tagObjLock *v28; // [rsp+A0h] [rbp-29h]
  tagObjLock *v29; // [rsp+A8h] [rbp-21h]
  char v30; // [rsp+B8h] [rbp-11h]

  v11 = a1;
  if ( !a1 )
  {
    UserSessionState = W32GetUserSessionState(0LL, a2);
    DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock>(
      (char *)&Base,
      UserSessionState + 42520,
      a2);
    goto LABEL_3;
  }
  DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock>(
    (char *)&Base,
    (__int64)a1 + 432,
    a2);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v11 + 132, 0, 0) & 1) != 0 )
  {
    if ( !v30 )
      return 0LL;
    if ( v29 )
      tagObjLock::UnLockExclusive(v29);
    if ( v28 )
      tagObjLock::UnLockExclusive(v28);
    v14 = v26;
    if ( !v26 )
      goto LABEL_22;
    if ( v27 )
    {
LABEL_20:
      tagDomLock::UnLockExclusive(v14);
      goto LABEL_22;
    }
LABEL_21:
    tagDomLock::UnLockShared(v14);
LABEL_22:
    v15 = Base;
    if ( Base )
    {
      v16 = v25 == 0;
LABEL_37:
      if ( !v16 )
      {
        tagDomLock::UnLockExclusive(v15);
        return 0LL;
      }
      tagDomLock::UnLockShared(v15);
    }
    return 0LL;
  }
  vAdjustDelegatePriority(v11);
  if ( tagPROCESSINFO::SyncAndTestFreeze(*((tagPROCESSINFO **)v11 + 58))
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))ProcessSuspendedEventMessage)(
                        v11,
                        a3,
                        a4,
                        a5,
                        (LARGE_INTEGER)a6.QuadPart,
                        a7) )
  {
    if ( !v30 )
      return 0LL;
    if ( v29 )
      tagObjLock::UnLockExclusive(v29);
    if ( v28 )
      tagObjLock::UnLockExclusive(v28);
    v14 = v26;
    if ( !v26 )
      goto LABEL_22;
    if ( v27 )
      goto LABEL_20;
    goto LABEL_21;
  }
LABEL_3:
  v13 = (LARGE_INTEGER *)AllocQEntryEx((__int64)a2 + 24, 0LL, 1);
  if ( !v13 )
  {
    if ( v30 )
    {
      if ( v29 )
        tagObjLock::UnLockExclusive(v29);
      if ( v28 )
        tagObjLock::UnLockExclusive(v28);
      if ( v26 )
      {
        if ( v27 )
          tagDomLock::UnLockExclusive(v26);
        else
          tagDomLock::UnLockShared(v26);
      }
      v15 = Base;
      if ( Base )
      {
        v16 = v25 == 0;
        goto LABEL_37;
      }
    }
    return 0LL;
  }
  if ( a4 )
  {
    v18 = *(_DWORD *)(a4[5].QuadPart + 288);
  }
  else
  {
    v19 = *((_QWORD *)a2 + 16);
    if ( v19 )
      v20 = *(_QWORD *)(v19 + 16);
    else
      v20 = *((_QWORD *)a2 + 13);
    v18 = *(_DWORD *)(*(_QWORD *)(v20 + 464) + 268LL);
  }
  StoreQMessage(v13, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v18, 0LL, 0LL);
  v13[13].QuadPart = (LONGLONG)v11;
  if ( a3 == 20 )
  {
    v23 = W32GetUserSessionState(v22, v21);
    CTouchProcessor::ReferenceMsgDataExternal(*(_QWORD *)(v23 + 3264), a7, 3LL, v13);
  }
  if ( !v11 )
  {
    SetWakeBit(*((_QWORD *)a2 + 12), 8256LL);
    v11 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 13);
  }
  SetWakeBit((__int64)v11, 8256LL);
  if ( v30 )
  {
    if ( v29 )
      tagObjLock::UnLockExclusive(v29);
    if ( v28 )
      tagObjLock::UnLockExclusive(v28);
    if ( v26 )
    {
      if ( v27 )
        tagDomLock::UnLockExclusive(v26);
      else
        tagDomLock::UnLockShared(v26);
    }
    if ( Base )
    {
      if ( v25 )
        tagDomLock::UnLockExclusive(Base);
      else
        tagDomLock::UnLockShared(Base);
    }
  }
  return 1LL;
}
