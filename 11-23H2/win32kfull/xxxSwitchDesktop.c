/*
 * XREFs of xxxSwitchDesktop @ 0x1C002C52C
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C0091DC0 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0091F0C (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x1C00A13E8 (RemoteDisableScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A1D48 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 *     RemoteRedrawScreen @ 0x1C0131D40 (RemoteRedrawScreen.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C001FFBC (zzzEnableDwmPointerSupport.c)
 *     ComposeWindow @ 0x1C0026348 (ComposeWindow.c)
 *     zzzSetDesktop @ 0x1C002B850 (zzzSetDesktop.c)
 *     SetPointer @ 0x1C002D490 (SetPointer.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C0039524 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzCancelJournalling @ 0x1C003C590 (zzzCancelJournalling.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C005A2C0 (xxxBroadcastDisplaySettingsChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C005AA48 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C005ACD0 (GreLddmProcessDesktopSwitch.c)
 *     IPostQuitMessage @ 0x1C00721A8 (IPostQuitMessage.c)
 *     FreeAllSpbs @ 0x1C0072380 (FreeAllSpbs.c)
 *     SetTimerCoalescingTolerance @ 0x1C0086300 (SetTimerCoalescingTolerance.c)
 *     ClearKeyboardStates @ 0x1C0088ED8 (ClearKeyboardStates.c)
 *     DwmSyncDesktopSwitch @ 0x1C008F218 (DwmSyncDesktopSwitch.c)
 *     bSetDevDragRect @ 0x1C00910D0 (bSetDevDragRect.c)
 *     UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch @ 0x1C009596C (UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch.c)
 *     GreDesktopSwitch @ 0x1C0096ACC (GreDesktopSwitch.c)
 *     EraseBitmap @ 0x1C009A324 (EraseBitmap.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C009CAE0 (DrvOcclusionStateChangeNotify.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C00A2A8C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_SL @ 0x1C00A2B58 (WPP_RECORDER_AND_TRACE_SF_SL.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     IsNonImmersiveBand @ 0x1C00AD39C (IsNonImmersiveBand.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0121808 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     SuppressPointerDeviceContacts @ 0x1C013B0DC (SuppressPointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     StopFade @ 0x1C01BC550 (StopFade.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C01E6F10 (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r13
  PDEVICE_OBJECT *v7; // r8
  char v8; // si
  char v9; // bl
  _UNKNOWN **v10; // r9
  bool v11; // r15
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  char v15; // bl
  bool v16; // r14
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  struct _KTHREAD *CurrentThread; // rbx
  int v21; // edx
  struct tagEDGY_DATA *v22; // rdx
  __int64 v23; // r12
  ULONG_PTR v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // r15
  _QWORD *v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rbx
  int v32; // r14d
  Edgy *v33; // rcx
  struct tagWND **v34; // rcx
  int v35; // r13d
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  void *v44; // rax
  int v45; // r8d
  __int64 v46; // rcx
  int v47; // ebx
  unsigned int v48; // ebx
  _QWORD *v49; // rdx
  __int64 v50; // r12
  const struct tagWND *v51; // rbx
  __int64 v52; // r14
  __int64 v53; // r15
  int v54; // r8d
  unsigned int WindowCloakState; // eax
  int v56; // r8d
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  _QWORD *i; // rbx
  __int64 v66; // rcx
  int v67; // eax
  __m128i si128; // xmm0
  int v69; // eax
  __int64 v70; // rcx
  int v71; // r8d
  int v72; // edx
  int ObjectType; // [rsp+20h] [rbp-B9h]
  void *Handle; // [rsp+50h] [rbp-89h] BYREF
  __int64 v75; // [rsp+58h] [rbp-81h]
  __int64 v76; // [rsp+60h] [rbp-79h]
  PETHREAD Thread; // [rsp+68h] [rbp-71h]
  __int128 v78; // [rsp+70h] [rbp-69h] BYREF
  __int64 v79; // [rsp+80h] [rbp-59h]
  __int128 v80; // [rsp+88h] [rbp-51h] BYREF
  __int64 v81; // [rsp+98h] [rbp-41h]
  _QWORD v82[2]; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD v83[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v84; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v85; // [rsp+D8h] [rbp-1h]
  __int128 v86; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v87; // [rsp+F0h] [rbp+17h]

  v81 = 0LL;
  v79 = 0LL;
  v87 = 0LL;
  v5 = a1;
  v80 = 0LL;
  v78 = 0LL;
  v75 = gptiCurrent;
  Handle = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v84 = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v5 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v5 + 64) & 4) != 0 )
    return 3221225485LL;
  v76 = *(_QWORD *)(v5 + 56);
  v7 = &WPP_GLOBAL_Control;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v9 = 0;
  }
  v10 = &WPP_RECORDER_INITIALIZED;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 && ObQueryNameInfo(a2) )
      ObQueryNameInfo(a2);
    LOBYTE(v13) = v11;
    LOBYTE(v12) = v9;
    WPP_RECORDER_AND_TRACE_SF_SL(WPP_GLOBAL_Control->AttachedDevice, v12, v13, v14);
    v7 = &WPP_GLOBAL_Control;
    v10 = &WPP_RECORDER_INITIALIZED;
  }
  if ( grpdeskRitInput )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 && ObQueryNameInfo(a2) )
        ObQueryNameInfo(a2);
      LOBYTE(v18) = v16;
      LOBYTE(v17) = v15;
      WPP_RECORDER_AND_TRACE_SF_S(WPP_GLOBAL_Control->AttachedDevice, v17, v18, v19);
    }
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( (PVOID)a2 != gspdeskDisconnect
    && !PsIsSystemThread(CurrentThread)
    && (PVOID)a2 != grpdeskLogon
    && (*(_DWORD *)(v5 + 64) & 1) != 0
    && (a3 & 2) == 0
    && PsGetThreadProcessId(CurrentThread) != (HANDLE)gpidLogon )
  {
    return 3221225506LL;
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)a2 != gspdeskDisconnect) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 26;
      LOBYTE(v21) = v8;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        (_DWORD)v7,
        (_DWORD)v10,
        4,
        8,
        26,
        (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
    }
    LockObjectAssignment(gspdeskShouldBeForeground, a2);
    return 0LL;
  }
  PushW32ThreadLock(a2, &v86, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock(Handle, &v84, AllowDesktopDestruction);
  v23 = v75;
  if ( *(_QWORD *)(v75 + 456) )
  {
    zzzCancelJournalling();
    SuppressPointerDeviceContacts();
  }
  v24 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v83[0] = *(_QWORD *)(v23 + 416);
    *(_QWORD *)(v23 + 416) = v83;
    v83[2] = 0LL;
    v83[1] = v24;
    HMLockObject(v24);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(gspwndAltTab, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v26, v25, v27);
  }
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) )
    {
      v22 = (struct tagEDGY_DATA *)gpqForeground;
      if ( gpqForeground )
      {
        v82[0] = grpdeskRitInput + 88LL;
        v82[1] = *(_QWORD *)(gpqForeground + 128LL);
        HMAssignmentLock(v82, 0LL);
        xxxSetForegroundWindow2(0LL, v23, 32LL);
      }
    }
  }
  if ( grpdeskRitInput )
  {
    v28 = (_QWORD *)(grpdeskRitInput + 176LL);
    v29 = *(_QWORD **)(grpdeskRitInput + 176LL);
    if ( (_QWORD *)*v28 != v28 )
    {
      do
      {
        v30 = *(v29 - 39);
        if ( (*(_DWORD *)(v30 + 396) & 1) != 0 )
          PostUpdateKeyStateEvent(*(v29 - 39));
        *(_DWORD *)(v30 + 396) &= ~0x100u;
        v29 = (_QWORD *)*v29;
      }
      while ( v29 != v28 );
    }
  }
  if ( grpdeskRitInput && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0 )
  {
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
    ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 6);
    v31 = *(_QWORD *)(gpDispInfo + 40LL);
    GreLockDynamicModeChange(v31);
    GreUnlockDynamicModeChange(v31);
    if ( *(_QWORD *)(v5 + 120) )
      EraseBitmap();
    v32 = 1;
  }
  else
  {
    v32 = 0;
  }
  if ( grpdeskRitInput )
  {
    v33 = *(Edgy **)(grpdeskRitInput + 248LL);
    if ( v33 )
      Edgy::FreeEdgyFrameData(v33, v22);
  }
  LockObjectAssignment(grpdeskRitInput, a2);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  SynchronizeContext();
  UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch();
  CitDesktopSwitch();
  v34 = *(struct tagWND ***)(a2 + 8);
  if ( (*((_DWORD *)*v34 + 16) & 1) != 0 )
    ComposeWindow(v34[3], 5);
  FreeAllSpbs();
  v35 = zzzSetDesktop(gptiRit, a2, 0LL);
  if ( v35 >= 0 )
  {
    v36 = v76;
    v37 = *(_QWORD *)(v76 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v76 + 16) + 432LL) != v37 )
    {
      AllocQueue(0LL, v37);
      tagQ::zzzAttachToQueue(*(tagQ **)(v36 + 24), *(struct tagTHREADINFO **)(v36 + 16), 0LL, 0);
    }
    v35 = zzzSetDesktop(*(struct tagTHREADINFO **)(v36 + 16), a2, 0LL);
    if ( v35 >= 0 )
    {
      v40 = *(_QWORD *)(v36 + 16);
      if ( *(_QWORD *)(v40 + 456) != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4174LL);
      if ( a2 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4175LL);
      v41 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v41 + 64) & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v41, v40, v38, v39);
        v44 = (void *)UserReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v42, v43);
        DwmSyncDesktopSwitch(v44);
        EnterCrit(1LL, 0LL);
      }
      if ( !gbIgnoreStressedOutStuff && a2 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4189LL);
      if ( !v32 || (v45 = 1, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v45 = 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 40LL),
        *(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1,
        v45,
        ***(_QWORD ***)(a2 + 8),
        ObjectType);
      if ( v32 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1, 0);
      }
      v46 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
      *(_QWORD *)&v78 = *(_QWORD *)(v23 + 416);
      *(_QWORD *)(v23 + 416) = &v78;
      *((_QWORD *)&v78 + 1) = v46;
      if ( v46 )
        HMLockObject(v46);
      GreLddmProcessDesktopSwitch();
      if ( !v32 || (v47 = 9, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v47 = 1;
      v48 = (4 * (*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1)) | v47;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v48);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 24LL), 0, 0, 323);
      if ( !gbIgnoreStressedOutStuff && a2 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4243LL);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v48);
      v50 = a2 + 88;
      v51 = *(const struct tagWND **)(a2 + 88);
      if ( !v51
        || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(a2 + 88)) + 25) & 1) != 0
        || (*(_BYTE *)(*((_QWORD *)v51 + 5) + 232LL) & 0x40) != 0 && (GetWindowCloakState(v51) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL) == *(_QWORD *)(*((_QWORD *)v51 + 2) + 424LL)
        && (GetWindowCloakState(v51) & 1) != 0 )
      {
        v51 = *(const struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 112LL);
        if ( v51 )
        {
          do
          {
            v52 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL);
            v53 = *(_QWORD *)(*((_QWORD *)v51 + 2) + 424LL);
            if ( !(unsigned int)IsNonImmersiveBand(v51, v49, 0LL)
              || v52 == v53
              || (v49 = (_QWORD *)((char *)v51 + 40), (*(_BYTE *)(*((_QWORD *)v51 + 5) + 232LL) & 0x40) != 0) )
            {
              WindowCloakState = GetWindowCloakState(v51);
              if ( v52 != v53 || (v56 = 1, (WindowCloakState & 1) == 0) )
                v56 = 0;
              v49 = (_QWORD *)((char *)v51 + 40);
              if ( WindowCloakState || (v57 = 0, (*(_BYTE *)(*v49 + 27LL) & 8) != 0) )
                v57 = 1;
              if ( v56 || (v54 = 0, v57) )
                v54 = 1;
            }
            LOBYTE(v49) = *(_BYTE *)(*v49 + 31LL) & 0x18;
            if ( (_BYTE)v49 == 16 && !v54 )
              break;
            v51 = (const struct tagWND *)*((_QWORD *)v51 + 11);
          }
          while ( v51 );
          v50 = a2 + 88;
        }
      }
      HMAssignmentUnlock(v50);
      if ( v51 )
      {
        if ( !gbIgnoreStressedOutStuff && *(_QWORD *)(*((_QWORD *)v51 + 2) + 456LL) != grpdeskRitInput )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4351LL);
        v61 = v75;
        *(_QWORD *)&v80 = *(_QWORD *)(v75 + 416);
        *(_QWORD *)(v75 + 416) = &v80;
        *((_QWORD *)&v80 + 1) = v51;
        HMLockObject(v51);
        xxxSetForegroundWindow2(v51, v61, 32LL);
        ThreadUnlock1(v63, v62, v64);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 32LL);
      }
      ThreadUnlock1(v59, v58, v60);
      ClearKeyboardStates();
      for ( i = *(_QWORD **)(grpdeskRitInput + 176LL); i != (_QWORD *)(grpdeskRitInput + 176LL); i = (_QWORD *)*i )
      {
        v66 = *(i - 39);
        v67 = *(_DWORD *)(v66 + 396);
        if ( (v67 & 0x100) == 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          *(_DWORD *)(v66 + 396) = v67 | 0x101;
          *(__m128i *)(v66 + 204) = si128;
          *(__m128i *)(v66 + 220) = si128;
          PostUpdateKeyStateEvent(v66);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0LL);
      KePulseEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 6);
      if ( (PVOID)a2 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 64LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v69 = *(_DWORD *)(a2 + 48);
      if ( (v69 & 0x20) != 0 )
      {
        v70 = *(_QWORD *)(a2 + 8);
        if ( v70 )
        {
          if ( *(_QWORD *)(v70 + 24) )
          {
            *(_DWORD *)(a2 + 48) = v69 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1LL, 0LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    }
  }
  PopAndFreeAlwaysW32ThreadLock(&v84);
  PopAndFreeW32ThreadLock(&v86);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v72 = 27;
    LOBYTE(v72) = v8;
    LOBYTE(v71) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v72,
      v71,
      (_DWORD)gFullLog,
      4,
      3,
      27,
      (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
      v35);
  }
  return (unsigned int)v35;
}
