/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSwitchToThisWindow @ 0x1C0015B14 (xxxSwitchToThisWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSysCommand @ 0x1C00857C4 (xxxSysCommand.c)
 *     NtUserSetForegroundWindow @ 0x1C008C3D0 (NtUserSetForegroundWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013A874 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1C01AD980 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     xxxOldNextWindow @ 0x1C01CA428 (xxxOldNextWindow.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C01DB360 (NtUserSetForegroundWindowForApplication.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C021E7F8 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023B1B4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqD @ 0x1C001669C (WPP_RECORDER_AND_TRACE_SF_DqD.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0017890 (DSW_GetTopLevelCreatorWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C002D454 (IsImmersiveBandOrShellManaged.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C002F20C (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqDDD @ 0x1C002F29C (WPP_RECORDER_AND_TRACE_SF_DqDDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002F37C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002F440 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C003052C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0044C94 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     GetNonChildAncestor @ 0x1C00A70E4 (GetNonChildAncestor.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00B2D78 (PostIAMShellHookMessage.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EF6FC (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139810 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(__int64 a1, unsigned int a2, __int16 a3, char a4)
{
  char v5; // si
  __int64 v6; // r8
  __int64 v7; // r14
  bool v8; // bp
  __int64 v9; // rdi
  int v10; // ebx
  char v11; // r15
  bool v12; // r12
  int v13; // r8d
  int v14; // edx
  struct tagWND *v15; // rax
  __int64 v16; // rdx
  PDEVICE_OBJECT *v17; // r8
  struct tagWND *v18; // r15
  __int64 v19; // rdi
  bool v20; // r15
  PDEVICE_OBJECT v21; // rcx
  const char *v22; // rax
  int v23; // edi
  __int64 v24; // r8
  PDEVICE_OBJECT v25; // rcx
  const char *v26; // rax
  PDEVICE_OBJECT v27; // rcx
  int IsEnabledDeviceUsage; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 NonChildAncestor; // rax
  _QWORD *TopLevelCreatorWindow; // rax
  char v36; // r15
  char v37; // r12
  __int64 v38; // r13
  __int64 v39; // rax
  unsigned __int64 *v40; // rbx
  _DWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v46; // [rsp+20h] [rbp-E8h]
  int v47; // [rsp+28h] [rbp-E0h]
  int v48; // [rsp+30h] [rbp-D8h]
  int v49; // [rsp+38h] [rbp-D0h]
  char v50; // [rsp+70h] [rbp-98h]
  int CanSetForegroundWindow; // [rsp+74h] [rbp-94h]
  __int64 v52; // [rsp+80h] [rbp-88h]
  struct tagWND *v53; // [rsp+80h] [rbp-88h]
  __int128 v54; // [rsp+90h] [rbp-78h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-68h]
  __int128 v56; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-50h]
  bool v59; // [rsp+120h] [rbp+18h]

  v5 = 1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = a1;
  v50 = 1;
  v8 = 0;
  v52 = *(_QWORD *)(v6 + 432);
  v9 = v52;
  v59 = v52 == gpqForeground;
  v10 = a3 & 0x1000;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(*(PETHREAD *)v6);
    PsGetThreadId((PETHREAD)*gptiCurrent);
    LOBYTE(v13) = v12;
    LOBYTE(v14) = v11;
    WPP_RECORDER_AND_TRACE_SF_DqDDD(WPP_GLOBAL_Control->AttachedDevice, v14, v13, (_DWORD)gFullLog);
    v10 = a3 & 0x1000;
    v9 = v52;
  }
  v55 = 0LL;
  v54 = 0LL;
  v15 = _GhostWindowFromHungWindow((const struct tagWND *)v7);
  v53 = v15;
  v18 = v15;
  if ( v15 )
  {
    ThreadLockAlways(v15, &v54);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (_DWORD)gFullLog,
        4,
        2,
        71,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        *(_QWORD *)v18,
        *(_QWORD *)v7);
    }
    v7 = (__int64)v18;
  }
  if ( v9 == gpqForeground )
  {
    v19 = *(_QWORD *)(gptiCurrent + 432LL);
    v20 = gpqForeground == v19;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        4,
        2,
        72,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = "Synchronously";
      if ( gpqForeground != v19 )
        v22 = "Async";
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (_DWORD)gFullLog,
        4,
        2,
        73,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        (__int64)v22);
    }
  }
  else
  {
    v23 = 2;
    CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v7, a2);
    if ( CanSetForegroundWindow == 2 )
    {
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = "Remove";
        if ( v10 )
          v26 = "Preserve";
        WPP_RECORDER_AND_TRACE_SF_s(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v24,
          (_DWORD)gFullLog,
          4,
          2,
          74,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
          (__int64)v26);
      }
      if ( !v10 )
        anonymous_namespace_::RemoveForegroundActivate(v25, v16, v24);
      v27 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v24,
          (unsigned int)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
          4,
          2,
          75,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
      IsEnabledDeviceUsage = Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v27, v16, v24);
      v29 = gptiCurrent;
      if ( IsEnabledDeviceUsage && (a3 & 0x400) != 0 )
        v29 = 0LL;
      if ( (unsigned int)xxxSetForegroundWindow2(v7, v29, a3 & 0x7FF) )
      {
        v8 = 1;
      }
      else
      {
        v8 = 0;
        v21 = (PDEVICE_OBJECT)grpdeskRitInput;
        if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
        {
          v30 = *(_QWORD *)(v7 + 40);
          if ( *(char *)(v30 + 19) >= 0
            && *(_DWORD *)(v30 + 236) != 15
            && (unsigned int)IsImmersiveBandOrShellManaged(v7, v16) )
          {
            if ( (unsigned int)IAMThreadAccessGranted(v31) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2450LL);
            NonChildAncestor = GetNonChildAncestor(v7, v32, v33);
            TopLevelCreatorWindow = (_QWORD *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
            PostIAMShellHookMessage(34LL, *TopLevelCreatorWindow);
          }
        }
      }
      v20 = 0;
    }
    else
    {
      v50 = 0;
      v21 = WPP_GLOBAL_Control;
      v17 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v36 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v36 = 0;
      }
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v36 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = gptiCurrent;
      }
      else
      {
        v38 = gptiCurrent;
        PsGetThreadId(**(PETHREAD **)(v7 + 16));
        PsGetThreadId((PETHREAD)*gptiCurrent);
        WPP_RECORDER_AND_TRACE_SF_DqD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v36,
          v37,
          (__int64)gFullLog,
          v46,
          v47,
          v48,
          v49);
        v17 = &WPP_GLOBAL_Control;
        v23 = 2;
      }
      if ( (a4 & 1) != 0 )
      {
        LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v16,
            (_DWORD)v17,
            (unsigned int)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
            4,
            2,
            77,
            (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
        v39 = GetNonChildAncestor(v7, v16, v17);
        v40 = (unsigned __int64 *)DSW_GetTopLevelCreatorWindow(v39);
        if ( !(unsigned __int8)IsTrayWindow(v40, 1LL) )
        {
          v40 = (unsigned __int64 *)v7;
          v23 = 3;
        }
        if ( *(_DWORD *)(v40[5] + 236) != 15 )
        {
          if ( (unsigned int)IsImmersiveBandOrShellManaged((__int64)v40, v16) )
          {
            PostIAMShellHookMessage(34LL, *v40);
          }
          else
          {
            v56 = 0LL;
            v57 = 0LL;
            ThreadLockAlways(v40, &v56);
            v41 = (_DWORD *)UPDWORDPointer(8196LL);
            xxxFlashWindow(v40, v23 | ((unsigned __int16)*v41 << 16) | 0xC, 0);
            ThreadUnlock1(v43, v42, v44);
          }
        }
      }
      if ( CanSetForegroundWindow != 1 )
      {
        v20 = *(_QWORD *)(v38 + 432) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 432LL);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v16) = 0;
        }
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v16,
            (_DWORD)v17,
            (unsigned int)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
            4,
            2,
            78,
            (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
        }
        goto LABEL_100;
      }
      v20 = 0;
    }
  }
  if ( !v59 )
    goto LABEL_135;
LABEL_100:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      (_DWORD)v17,
      (unsigned int)&WPP_GLOBAL_Control,
      4,
      2,
      79,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  }
  if ( v20 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (unsigned int)&WPP_GLOBAL_Control,
        4,
        2,
        80,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    LOBYTE(v21) = *(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0xC0;
    if ( (_BYTE)v21 == 64 || !(unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7) )
    {
      v8 = 0;
      goto LABEL_135;
    }
    goto LABEL_126;
  }
  if ( v7 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 432LL) + 128LL) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (unsigned int)&WPP_GLOBAL_Control,
        4,
        2,
        81,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
LABEL_126:
    v8 = 1;
    goto LABEL_135;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      (_DWORD)v17,
      (unsigned int)&WPP_GLOBAL_Control,
      4,
      2,
      82,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  }
  v8 = (unsigned int)PostEventMessageEx(
                       *(struct tagTHREADINFO **)(v7 + 16),
                       *(struct tagQ **)(*(_QWORD *)(v7 + 16) + 432LL),
                       6u,
                       0LL,
                       0,
                       0LL,
                       *(_QWORD *)v7,
                       0LL) != 0;
LABEL_135:
  if ( v53 )
    ThreadUnlock1(v21, v16, v17);
  if ( !v50 || !v8 )
    return 0;
  return v5;
}
