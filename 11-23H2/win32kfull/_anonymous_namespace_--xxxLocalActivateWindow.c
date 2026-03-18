/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00310B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00A5054 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01ADC08 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0031520 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxSendNotifyMessage @ 0x1C0033170 (xxxSendNotifyMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C00A623C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00A6318 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00A6394 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C00A63C4 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A6428 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00A65C0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00A67B8 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     GetNonChildAncestor @ 0x1C00A70E4 (GetNonChildAncestor.c)
 *     LockW32Thread @ 0x1C00ACAAC (LockW32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     IsVisible @ 0x1C00E2A5C (IsVisible.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rbx
  char v4; // r14
  int v6; // r15d
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagWND *v11; // r12
  __int64 v12; // rax
  tagQ *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagWND *v16; // r13
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  struct tagWND *v27; // rdx
  const struct tagWND *v28; // rdx
  __int64 v29; // rcx
  GroupedProcessForegroundBoost *v30; // rcx
  __int64 v31; // rdx
  __int64 *v32; // r12
  int v33; // r15d
  struct tagWND *i; // r9
  int v35; // ebx
  char v36; // r13
  __int64 v37; // rbx
  struct tagWND *j; // rdx
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 NonChildAncestor; // rax
  struct tagWND *v49; // r9
  struct tagWND *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  struct tagWND *v56; // rdx
  bool v57; // bl
  bool v58; // zf
  const char *v59; // rax
  PDEVICE_OBJECT v60; // rcx
  char v61; // dl
  char v62; // r8
  unsigned __int16 v63; // ax
  __int64 v64[2]; // [rsp+50h] [rbp-89h] BYREF
  int v65; // [rsp+60h] [rbp-79h]
  __int128 v66; // [rsp+68h] [rbp-71h] BYREF
  __int64 v67; // [rsp+78h] [rbp-61h]
  __int128 v68; // [rsp+80h] [rbp-59h] BYREF
  __int64 v69; // [rsp+90h] [rbp-49h]
  __int128 v70; // [rsp+98h] [rbp-41h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-31h]
  _QWORD v72[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v73; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-1h]
  char v75[80]; // [rsp+E0h] [rbp+7h] BYREF
  int v76; // [rsp+140h] [rbp+67h]
  int v77; // [rsp+148h] [rbp+6Fh]
  int v78; // [rsp+150h] [rbp+77h]
  unsigned __int8 v79; // [rsp+158h] [rbp+7Fh]

  v77 = a2;
  v3 = *(_QWORD *)a1;
  v74 = 0LL;
  v69 = 0LL;
  v67 = 0LL;
  v4 = 1;
  v73 = 0LL;
  v65 = a3 & 0x80;
  v6 = a3 & 2;
  v76 = a3 & 4;
  v68 = 0LL;
  v78 = v6;
  v66 = 0LL;
  if ( a1 == (struct tagWND *)GetDesktopWindow(a1, a2) )
    return 0;
  v9 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v9 + 19) < 0 )
    return 0;
  v10 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v10 )
    return 0;
  v11 = *(struct tagWND **)(v10 + 128);
  if ( a1 == v11 )
  {
    if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
    {
      v60 = WPP_GLOBAL_Control;
      v61 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && ((unsigned __int8)HIDWORD(WPP_GLOBAL_Control->Timer) & (unsigned __int8)v8) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v63 = 15;
        goto LABEL_104;
      }
LABEL_113:
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x8000u;
      if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      {
        if ( !v3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 846LL);
        xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, v3, 0LL, 1);
      }
      goto LABEL_85;
    }
LABEL_96:
    v60 = WPP_GLOBAL_Control;
    v61 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && ((unsigned __int8)HIDWORD(WPP_GLOBAL_Control->Timer) & (unsigned __int8)v8) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v63 = 14;
LABEL_104:
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)v60->AttachedDevice,
        v61,
        v62,
        v8,
        4u,
        v8,
        v63,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        v3);
      goto LABEL_113;
    }
    goto LABEL_113;
  }
  if ( (*(_BYTE *)(v9 + 18) & 0x10) != 0 )
    goto LABEL_96;
  v64[0] = (unsigned __int8)v7;
  v79 = v7;
  v12 = *(_QWORD *)(gptiCurrent + 464LL);
  v64[1] = v3;
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v12 + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, v3, (__int64)v64, 5) )
  {
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x8000u;
  v13 = *(tagQ **)(gptiCurrent + 432LL);
  v14 = *((_QWORD *)v13 + 16);
  if ( v14 && *(char *)(*(_QWORD *)(v14 + 40) + 19LL) < 0 )
  {
    tagQ::SetActiveWindow(v13, 0LL);
  }
  else
  {
    v64[1] = *((_QWORD *)v13 + 16);
    v64[0] = (__int64)v13 + 136;
    HMAssignmentLock(v64, 0LL);
  }
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v16 = *(struct tagWND **)(v15 + 128);
  if ( v16 )
  {
    if ( v15 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 432LL);
    ThreadLockAlways(v16, &v73);
    v17 = (unsigned __int64)(*(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 0x20) << 16;
    if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage(v16) )
    {
      ThreadUnlock1(v19, v18, v20);
      return 0;
    }
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v3, &v66, lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxSendMessage(v16, 6LL, v17, v3);
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v23 = v66;
    *(_QWORD *)(ThreadWin32Thread + 16) = v66;
    ThreadUnlock1(v23, v24, v25);
    v6 = v78;
  }
  v26 = *(_QWORD *)(gptiCurrent + 432LL);
  v27 = *(struct tagWND **)(v26 + 128);
  if ( *(struct tagWND **)(v26 + 136) != v27
    || v11 != v27
    || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0
    || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v26 )
  {
    return 0;
  }
  if ( !v27 )
    *(_DWORD *)(v26 + 396) &= ~0x800u;
  tagQ::SetActiveWindow(*(tagQ **)(gptiCurrent + 432LL), a1);
  v29 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v29 == gpqForeground )
  {
    v30 = *(GroupedProcessForegroundBoost **)(v29 + 136);
    if ( v30 )
      GroupedProcessForegroundBoost::ApplyDeBoost(v30, v28);
    GroupedProcessForegroundBoost::ApplyBoost(a1, v28);
  }
  SetOrClrWF(1LL, a1, 528LL, 1LL);
  PushW32ThreadLock(v3, &v66, lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
  xxxWindowEvent(3u, 1);
  anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(gptiCurrent + 432LL), 6LL, 5LL);
  v32 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 136LL);
  *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v68;
  *((_QWORD *)&v68 + 1) = v32;
  if ( v32 )
    HMLockObject(v32);
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
    xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, v3, 0LL, 1);
  if ( v6 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v33 = 0;
  }
  else
  {
    v33 = 0;
    for ( i = *(struct tagWND **)(GetDesktopWindow(a1, v31) + 112);
          i && (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) == 0;
          i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      ;
    }
    if ( (a1 != i || v32 && !(unsigned int)IsVisible(v32))
      && (!v76 || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)) )
    {
      v35 = 19;
      if ( a1 != i )
        v35 = 3;
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v35);
      if ( (v35 & 0x10) == 0 )
        TraceLoggingProcessUsageDataAggregationHelper(a1);
    }
  }
  v36 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x200) != 0 )
    goto LABEL_55;
  if ( !v32 )
    goto LABEL_54;
  if ( v32[2] != *((_QWORD *)a1 + 2) )
  {
    v37 = v32[2];
    v64[0] = v37;
    v70 = 0LL;
    v71 = 0LL;
    *(_DWORD *)(v37 + 488) |= 0x200u;
    v64[1] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
    LockW32Thread(v37, &v70);
    xxxSendActivateAppMessage((const struct tagAAS *)v64);
    *(_DWORD *)(v37 + 488) &= ~0x200u;
    PopAndFreeW32ThreadLock(&v70);
    v33 = HIDWORD(v64[1]);
LABEL_54:
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x200u;
    v64[0] = *((_QWORD *)a1 + 2);
    v36 = 1;
    LODWORD(v64[1]) = v77;
    HIDWORD(v64[1]) = v33 & 0xFFFFFFFC | 1;
    xxxSendActivateAppMessage((const struct tagAAS *)v64);
  }
LABEL_55:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
    SetOrClrWF(1LL, a1, 257LL, 1LL);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
  {
    for ( j = a1; *((_QWORD *)j + 15); j = (struct tagWND *)*((_QWORD *)j + 15) )
      ;
    *(_OWORD *)v64 = *(_OWORD *)LockPointer(v75, (char *)j + 200, a1);
    HMAssignmentLock(v64, 0LL);
  }
  v39 = 0LL;
  if ( v32 )
    v39 = *v32;
  anonymous_namespace_::xxxSendNCActivateMessage(a1);
  v40 = v79 + 1LL;
  v41 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  if ( v41 )
    v40 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v41 + 40) + 31LL) & 0x20) << 16;
  xxxSendMessage(a1, 6LL, v40, v39);
  xxxUpdateTray(a1);
  ThreadUnlock1(v43, v42, v44);
  SetOrClrWF(0LL, a1, 257LL, 1LL);
  if ( v65 )
  {
    v47 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( (*(_DWORD *)(v47 + 396) & 0x800) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v47 + 120), v45, v46);
      if ( v49 != (struct tagWND *)NonChildAncestor )
      {
        v50 = 0LL;
        if ( v49 && (*(_BYTE *)(*((_QWORD *)v49 + 5) + 31LL) & 0x20) == 0 )
          v50 = v49;
        v72[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v72;
        v72[2] = 0LL;
        v72[1] = v49;
        if ( v49 )
          HMLockObject(v49);
        anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, v50);
        ThreadUnlock1(v52, v51, v53);
      }
    }
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) |= 0x40u;
  if ( gppiScreenSaver )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gppiScreenSaver )
    {
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        8LL);
      *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
      v54 = *(_QWORD *)(gppiScreenSaver + 336LL);
      if ( v54 )
        ForegroundBoost::SetForegroundPriority(v54, 1LL);
    }
  }
  else if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && !gbBlockSendInputResets )
  {
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      8LL);
  }
  if ( v36 )
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200u;
  SetOrClrWF(0LL, a1, 528LL, 1LL);
  v55 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(v55 + 16) = v66;
LABEL_85:
  v56 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  v57 = v56 == a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v58 = v56 == a1;
    v59 = "Activated";
    LOBYTE(v56) = v4;
    if ( !v58 )
      v59 = "Not Active";
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qs(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v56,
      v7,
      (_DWORD)gFullLog,
      4,
      2,
      16,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      *(_QWORD *)a1,
      (__int64)v59);
  }
  return v57;
}
