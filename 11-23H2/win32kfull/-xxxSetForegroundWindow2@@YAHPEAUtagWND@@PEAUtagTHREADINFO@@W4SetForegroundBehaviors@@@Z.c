/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000EF34 (xxxSetModernAppWindow.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013F68 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetThreadDesktop @ 0x1C002B6D4 (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0035DAC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     EditionHandleAltTab @ 0x1C009F640 (EditionHandleAltTab.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00A5054 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013A874 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01ADC08 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01C9C54 (xxxNextWindow.c)
 * Callees:
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C00319D8 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0031B48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0031FE8 (zzzInputFocusReceivedWindowEvent.c)
 *     PtiKbdFromQ @ 0x1C003701C (PtiKbdFromQ.c)
 *     SetNewForegroundQueue @ 0x1C0039E50 (SetNewForegroundQueue.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C003DB5C (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0045408 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C006E4C4 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     xxxCancelTracking @ 0x1C0078EB0 (xxxCancelTracking.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0082F44 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C0085A94 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     zzzLockWindowUpdate2 @ 0x1C008B518 (zzzLockWindowUpdate2.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A53AC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00A6318 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C00A63C4 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A6428 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     LockW32Thread @ 0x1C00ACAAC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00AF200 (IsWindowUnderActiveLockScreen.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     SetWakeBit @ 0x1C01190C0 (SetWakeBit.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C011EA2C (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C011F900 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1C013953C (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1C013962C (-SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139810 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A640 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01B6B90 (zzzActiveCursorTracking.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F33B8 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C021FB18 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, PETHREAD *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  PDEVICE_OBJECT v9; // rcx
  __int16 v10; // ax
  bool v12; // al
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  int IsEnabledDeviceUsage; // eax
  const struct tagWND *v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rcx
  struct tagWND *v23; // rdx
  __int64 v24; // r15
  const struct tagWND *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *i; // rcx
  __int64 v30; // rax
  __m128i si128; // xmm0
  __int64 v32; // rcx
  PETHREAD *v33; // rdx
  __int64 v34; // r14
  PETHREAD v35; // rax
  _BOOL8 v36; // r15
  const struct tagWND *v37; // rax
  const struct tagWND *v38; // r15
  HANDLE v39; // rax
  struct tagQMSG *v40; // r15
  const struct tagTHREADINFO **v41; // rcx
  __int64 v42; // r14
  PETHREAD v43; // r15
  PETHREAD *v44; // rdi
  int v45; // ecx
  bool v46; // zf
  char v47; // r15
  unsigned int v48; // r13d
  void *v49; // rdx
  unsigned int v50; // r12d
  unsigned __int64 v51; // r9
  unsigned int v52; // eax
  const struct tagTHREADINFO **v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // r8
  struct _KTHREAD *v56; // rcx
  PETHREAD v57; // rax
  char v58; // r14
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v60; // r15
  int v61; // eax
  int v62; // [rsp+20h] [rbp-A9h]
  unsigned __int64 v63; // [rsp+40h] [rbp-89h]
  struct tagQMSG *v64; // [rsp+70h] [rbp-59h]
  __int64 v65; // [rsp+78h] [rbp-51h] BYREF
  __int64 v66; // [rsp+80h] [rbp-49h] BYREF
  __int64 v67; // [rsp+88h] [rbp-41h] BYREF
  struct tagQMSG *ThreadId; // [rsp+90h] [rbp-39h]
  __int128 v69; // [rsp+98h] [rbp-31h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-21h]
  __int128 v71; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v72; // [rsp+C0h] [rbp-9h]
  __int128 v73; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v74; // [rsp+D8h] [rbp+Fh]
  char v75; // [rsp+130h] [rbp+67h]
  unsigned int v76; // [rsp+130h] [rbp+67h]
  __int64 v77; // [rsp+130h] [rbp+67h]
  char v80; // [rsp+148h] [rbp+7Fh]
  __int64 v81; // [rsp+148h] [rbp+7Fh]

  v72 = 0LL;
  v70 = 0LL;
  v74 = 0LL;
  v71 = 0LL;
  v5 = 1;
  v69 = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  v65 = 0LL;
  v73 = 0LL;
  SetSystemInputSource(&v67);
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 24) != grpdeskRitInput || *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v5) = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = 87;
      goto LABEL_19;
    }
    if ( (unsigned int)IsWindowUnderActiveLockScreen(a1) )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v5) = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = 88;
LABEL_19:
      LOBYTE(v6) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        v9->AttachedDevice,
        v6,
        v7,
        v8,
        4,
        2,
        v10,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
      return 0LL;
    }
  }
  if ( a2 )
    LockW32Thread(a2, &v73);
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v75 = v12;
  v80 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (struct tagQMSG *)PsGetThreadId((PETHREAD)*gptiCurrent);
    if ( a2 )
      PsGetThreadId(*a2);
    WPP_RECORDER_AND_TRACE_SF_qDD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v75,
      v80,
      (__int64)gFullLog,
      v62,
      2u,
      0x59u,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  }
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)gFullLog,
      4,
      2,
      90,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      a3);
  }
  gppiLockSFW = 0LL;
  v13 = WPP_GLOBAL_Control;
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      v8,
      4,
      2,
      91,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  v14 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 488LL) & 1) != 0 )
    v14 = 0LL;
  else
    LockW32Thread(gptiForeground, &v71);
  if ( !(unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v13, v6, v7) )
  {
    v16 = gpqForeground;
    gpqForegroundPrev = gpqForeground;
  }
  if ( a1 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    v81 = v18;
    IsEnabledDeviceUsage = Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v16, v15, v17);
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
    if ( IsEnabledDeviceUsage )
      SetNewForegroundQueue2(v21, (a3 & 0x200 | 0x100) >> 8);
    else
      SetNewForegroundQueue(v21, v20);
    LockW32Thread(v18, &v69);
    v22 = *(struct tagTHREADINFO **)(a1 + 16);
    v23 = (struct tagWND *)a1;
    v24 = v18;
  }
  else
  {
    v24 = 0LL;
    v81 = 0LL;
    if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v16, v15, v17) )
      ResetForegroundQueue(1LL);
    else
      SetNewForegroundQueue(0LL, v25);
    v22 = 0LL;
    v23 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v22, v23);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
      v66 = *(_QWORD *)(gpqForeground + 432LL);
    if ( gpqForegroundPrev )
      v65 = *(_QWORD *)(gpqForegroundPrev + 432LL);
    if ( !(unsigned __int8)CheckAccess(&v66, &v65) )
    {
      ClearKeyboardToggleStates();
      if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v27, v26, v28) )
      {
        if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
        {
          for ( i = *(_QWORD **)(grpdeskRitInput + 176LL); i != (_QWORD *)(grpdeskRitInput + 176LL); i = (_QWORD *)*i )
          {
            v30 = *(i - 39);
            si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
            *(__m128i *)(v30 + 204) = si128;
            *(__m128i *)(v30 + 220) = si128;
            *(_DWORD *)(v30 + 396) |= 1u;
          }
        }
      }
      else
      {
        anonymous_namespace_::UpdateKeyStateFlag();
      }
    }
  }
  if ( gpqForeground
    && gpqForeground != gpqForegroundPrev
    && *(_QWORD *)(gpqForeground + 120LL)
    && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
  {
    xxxApplyGlobalInputSettings();
  }
  if ( gpqForeground == gpqForegroundPrev )
    goto LABEL_124;
  if ( gpqForegroundPrev )
  {
    v32 = *(_QWORD *)(gpqForegroundPrev + 120LL);
    if ( v32 )
      zzzInputFocusLostWindowEventImpl(v32, gpqForeground, 1LL);
  }
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
    zzzInputFocusReceivedWindowEvent(1u);
  v33 = a2;
  if ( a2 )
  {
    xxxCancelTracking();
    CCursorClip::ClearClip(gpCursorClip);
    zzzLockWindowUpdate2(0LL, 1);
    v33 = a2;
  }
  v34 = 0LL;
  if ( v14 && (*(_DWORD *)(v14 + 488) & 1) == 0 )
    v34 = *(_QWORD *)(v14 + 432);
  v35 = 0LL;
  if ( v33 )
    v35 = v33[54];
  v64 = 0LL;
  if ( !v34 || (PETHREAD)v34 == v35 )
  {
LABEL_114:
    v42 = 0LL;
    if ( v81 && (*(_DWORD *)(v81 + 488) & 1) == 0 )
      v42 = *(_QWORD *)(v81 + 432);
    v43 = 0LL;
    if ( v33 )
      v43 = v33[54];
    if ( v42 )
    {
      if ( (PETHREAD)v42 != v43 )
      {
        v64 = (struct tagQMSG *)AllocQEntryEx(v42 + 24, 0LL, 1LL);
        if ( !v64 )
        {
          v5 = 0;
LABEL_123:
          v24 = v81;
          goto LABEL_124;
        }
      }
      v45 = anonymous_namespace_::RemoveEventMessage(v42, 5, -1);
      if ( (PETHREAD)v42 == v43 )
      {
        if ( a1 == *((_QWORD *)v43 + 16) )
        {
          if ( a1 )
            v55 = *(_QWORD *)a1;
          else
            v55 = 0LL;
          anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1uLL, v55);
          xxxUpdateTray((struct tagWND *)a1);
          v47 = a3;
          if ( (a3 & 4) == 0 )
            xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
        }
        else
        {
          v47 = a3;
          if ( (a3 & 1) == 0 )
          {
            if ( v14 )
              v54 = (unsigned int)PsGetThreadId(*(PETHREAD *)v14);
            else
              v54 = 0;
            anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, v54, ~(16 * a3) & 0x80);
            if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
              zzzActiveCursorTracking((struct tagWND *)a1);
            goto LABEL_123;
          }
        }
      }
      else
      {
        v46 = v43 == 0LL;
        v47 = a3;
        if ( (!v46 || (a3 & 2) != 0) && a1 )
          v77 = *(_QWORD *)a1;
        else
          v77 = 0LL;
        if ( v45 )
          *(_DWORD *)(v42 + 396) |= 0x8000u;
        v48 = (a3 >> 4) & 1 | 2;
        if ( (a3 & 4) == 0 )
          v48 = (a3 >> 4) & 1;
        v50 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v42) + 424) + 280LL);
        if ( (a3 & 1) != 0 )
        {
          v51 = (unsigned __int64)v49;
        }
        else
        {
          if ( v14 )
          {
            v52 = (unsigned int)PsGetThreadId(*(PETHREAD *)v14);
            v49 = 0LL;
          }
          else
          {
            v52 = (unsigned int)v49;
          }
          v51 = v52;
        }
        StoreQMessage(
          v64,
          0LL,
          v48,
          v51,
          v77,
          (unsigned int)v49,
          (unsigned __int64)v49,
          6u,
          (unsigned __int64)v49,
          (unsigned int)v49,
          (struct tagINPUT_MESSAGE_SOURCE *)&v67,
          v50,
          v49,
          (struct tagUIPI_INFO *)v49);
        *((_QWORD *)v64 + 13) = v81;
        SetWakeBit(v81, 8256LL);
        v53 = *(const struct tagTHREADINFO ***)(v42 + 128);
        if ( v53 && IsHungWindow(v53) )
          ProcessHungWindow(*(struct tagWND **)(v42 + 128));
      }
      if ( (v47 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage((struct tagWND *)a1);
      v33 = a2;
    }
    v56 = 0LL;
    if ( v14 && (*(_DWORD *)(v14 + 488) & 1) == 0 )
      v56 = *(struct _KTHREAD **)(v14 + 432);
    v57 = 0LL;
    if ( v33 )
      v57 = v33[54];
    if ( v56 )
    {
      if ( v56 == v57 )
      {
        v58 = 0;
        if ( a1 )
        {
          TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
          v60 = TopLevelWindow;
          if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
            v58 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v14, v60) != 0;
          v61 = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          v61 = 0;
        }
        v44 = a2;
        xxxDeactivate((__int64)a2, v61, v58);
      }
      else
      {
        v44 = a2;
      }
      v24 = v81;
      goto LABEL_125;
    }
    goto LABEL_123;
  }
  ThreadId = (struct tagQMSG *)AllocQEntryEx(v34 + 24, 0LL, 1LL);
  if ( ThreadId )
  {
    v36 = 0LL;
    if ( a1 )
    {
      v37 = (const struct tagWND *)GetTopLevelWindow(a1);
      v38 = v37;
      v36 = v37
         && (unsigned int)CoreWindowProp::IsComponent(v37)
         && CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v14, v38) != 0;
    }
    v76 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v34) + 424) + 280LL);
    if ( gptiForeground )
      v39 = PsGetThreadId((PETHREAD)*gptiForeground);
    else
      v39 = 0LL;
    v63 = v36;
    v40 = ThreadId;
    StoreQMessage(
      ThreadId,
      0LL,
      0,
      (unsigned __int64)v39,
      0LL,
      0,
      0LL,
      5u,
      v63,
      0,
      (struct tagINPUT_MESSAGE_SOURCE *)&v67,
      v76,
      0LL,
      0LL);
    if ( v14 )
    {
      *((_QWORD *)v40 + 13) = v14;
      SetWakeBit(v14, 8256LL);
    }
    v41 = *(const struct tagTHREADINFO ***)(v34 + 128);
    if ( v41 && IsHungWindow(v41) )
      ProcessHungWindow(*(struct tagWND **)(v34 + 128));
    v33 = a2;
    goto LABEL_114;
  }
  v5 = 0;
LABEL_124:
  v44 = a2;
LABEL_125:
  if ( v24 )
    PopAndFreeW32ThreadLock(&v69);
  if ( v14 )
    PopAndFreeW32ThreadLock(&v71);
  if ( v44 )
    PopAndFreeW32ThreadLock(&v73);
  return v5;
}
