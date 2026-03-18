/*
 * XREFs of ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC
 * Callers:
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C00159D4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     NtUserSetWindowPos @ 0x1C0045B40 (NtUserSetWindowPos.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C00AAA84 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     NtUserShowWindow @ 0x1C00AAAB0 (NtUserShowWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowPlacement @ 0x1C00D87B8 (xxxSetWindowPlacement.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxSetInternalWindowPos @ 0x1C01F26BC (xxxSetInternalWindowPos.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F410C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxShowScrollBar @ 0x1C0231730 (xxxShowScrollBar.c)
 * Callees:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00123A4 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0015CD4 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002D8D8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C005BCE4 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C005BEB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C009524C (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C00AB3E0 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     _FChildVisible @ 0x1C00AB4AC (_FChildVisible.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00B04A0 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     xxxSendSizeMessage @ 0x1C00D85D4 (xxxSendSizeMessage.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C00F1F50 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C021D528 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C0224300 (xxxMinimizeHungWindow.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x1C022481C (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 */

__int64 __fastcall xxxShowWindowEx(struct tagWND *a1, unsigned __int8 a2, unsigned int a3)
{
  _BYTE *v3; // r9
  int v6; // r12d
  int v7; // r14d
  int v8; // edx
  char v9; // cl
  char v10; // r15
  char v11; // di
  __int64 v12; // r11
  unsigned int v13; // r15d
  __int64 v14; // r13
  __int64 v15; // r8
  int v16; // r10d
  int v17; // r10d
  __int64 ShellShowWindowCommand; // rax
  __m128i v19; // xmm6
  __int64 v20; // xmm1_8
  unsigned __int8 v21; // r13
  char v22; // al
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  int v26; // edx
  struct _DEVICE_OBJECT *v27; // r10
  void *v28; // r11
  char v29; // dl
  int v30; // r14d
  const struct tagWND *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r12
  int v34; // ecx
  unsigned int v35; // esi
  bool v36; // al
  int v37; // r8d
  unsigned int v38; // eax
  unsigned int v39; // esi
  struct tagWND *v40; // rdx
  char v41; // dl
  bool v42; // r8
  __int64 v43; // r9
  __m128i v45; // [rsp+58h] [rbp-49h] BYREF
  __int64 v46; // [rsp+68h] [rbp-39h]
  int v47; // [rsp+78h] [rbp-29h]
  __int64 v48; // [rsp+80h] [rbp-21h]
  __m128i v49; // [rsp+88h] [rbp-19h] BYREF
  __int64 v50; // [rsp+98h] [rbp-9h]
  __int128 v51; // [rsp+A0h] [rbp-1h] BYREF

  v3 = (_BYTE *)*((_QWORD *)a1 + 5);
  v6 = a2;
  v7 = 3;
  v8 = 0;
  v9 = v3[31];
  v10 = v3[25];
  v48 = gptiCurrent;
  v11 = 1;
  v12 = *(_QWORD *)(gptiCurrent + 424LL);
  v13 = v9 & 0x10 | v10 & 8;
  v14 = v12 + 788;
  v15 = *(unsigned int *)(v12 + 808);
  v16 = *(_DWORD *)(v12 + 808);
  *(_QWORD *)&v51 = v12 + 788;
  v17 = v16 & 1;
  if ( !v17 || (v9 & 0xC0) == 0x40 || (v3[30] & 0xC0) != 0xC0 || *((_QWORD *)a1 + 15) || (v8 = 1, v6 != 1) && v6 != 5 )
  {
    if ( (_BYTE)v6 != 10 )
      goto LABEL_11;
    if ( !v17 )
      goto LABEL_10;
  }
  LOBYTE(v6) = *(_BYTE *)(v12 + 812);
  v8 = 1;
  if ( (_BYTE)v6 == 10 )
LABEL_10:
    LOBYTE(v6) = 1;
LABEL_11:
  if ( v8 )
  {
    *(_DWORD *)(v12 + 808) = v15 & 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
  }
  LOBYTE(v15) = v6;
  ShellShowWindowCommand = xxxGetShellShowWindowCommand(&v45, a1, v15, v14);
  v19 = *(__m128i *)ShellShowWindowCommand;
  v49 = v19;
  v20 = *(_QWORD *)(ShellShowWindowCommand + 16);
  v50 = v20;
  if ( v19.m128i_i8[4] == -1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0xCu,
        0x1Eu,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
        *(_QWORD *)a1,
        v13);
    return v13;
  }
  v21 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
  v49.m128i_i8[4] = v21;
  if ( v21 == 21 )
  {
    v22 = WindowArrangement::xxxSetSnapArrangementPos(a1, &v49.m128i_u64[1], 0LL, 0LL);
    LODWORD(v25) = 0;
    if ( v22 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v11 = 0;
      }
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 31;
        LOBYTE(v26) = v11;
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v24,
          0,
          4,
          12,
          31,
          (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids);
      }
      return v13;
    }
    if ( (_BYTE)v6 == v49.m128i_i8[4] )
    {
      v47 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 735LL);
      LODWORD(v25) = 0;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v23) = 0;
    }
    if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v23,
        v24,
        0,
        3,
        12,
        32,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids);
      LODWORD(v25) = 0;
    }
    v20 = v50;
    v21 = v6;
    v49.m128i_i8[4] = v6;
    v49.m128i_i32[0] = 0;
    v19 = v49;
  }
  else
  {
    LODWORD(v25) = v49.m128i_i32[0];
  }
  if ( (_DWORD)v25
    && ShellWindowManagement::BehaviorEnabled(*((ShellWindowManagement **)a1 + 3), (const struct tagDESKTOP *)0x10) )
  {
    if ( WPP_GLOBAL_Control == v27
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v29 = 0;
    }
    if ( v29 || WPP_RECORDER_INITIALIZED != v28 )
    {
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v29,
        WPP_RECORDER_INITIALIZED != v28,
        v25,
        4u,
        0xCu,
        0x21u,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
        *(_QWORD *)a1);
      v20 = v50;
      LODWORD(v25) = v49.m128i_i32[0];
      v19 = v49;
    }
    a3 |= 0x20u;
    v7 = 1048579;
  }
  if ( v21 > 7u )
  {
    if ( v21 == 8 )
    {
      v30 = v7 | 0x50;
LABEL_97:
      v33 = v48;
      goto LABEL_98;
    }
    if ( v21 == 9 )
      goto LABEL_88;
    if ( v21 == 11 )
    {
      xxxMinimizeHungWindow(a1);
      return v13;
    }
    if ( v21 == 17 )
    {
      v49.m128i_i8[4] = 3;
    }
    else
    {
      if ( v21 != 18 )
      {
        if ( v21 == 19 )
        {
          v49.m128i_i8[4] = 3;
        }
        else
        {
          if ( v21 != 20 )
            goto LABEL_78;
          v49.m128i_i8[4] = 9;
        }
        v35 = a3 | 0x70;
        goto LABEL_81;
      }
      v49.m128i_i8[4] = 9;
    }
    v35 = a3 | 0x30;
LABEL_81:
    v32 = v35;
    v45 = v49;
LABEL_82:
    v46 = v20;
    v31 = a1;
    goto LABEL_66;
  }
  switch ( v21 )
  {
    case 7u:
      goto LABEL_60;
    case 0u:
      if ( !v13 )
        return v13;
      v33 = v48;
      v34 = 148;
      if ( a1 == *(struct tagWND **)(*(_QWORD *)(v48 + 432) + 128LL) )
        v34 = 128;
      v30 = v34 | v7;
LABEL_98:
      v38 = v21 != 0;
      if ( v38 == v13 )
        goto LABEL_101;
      goto LABEL_99;
    case 1u:
      goto LABEL_88;
    case 2u:
LABEL_60:
      v45 = v19;
      v46 = v20;
      xxxMinimizeWindowViaMinMax(a1, (__int64)&v45, a3);
      return v13;
    case 3u:
      v45 = v19;
      v46 = v20;
      v31 = a1;
      if ( (_DWORD)v25 != 1 )
      {
        v32 = a3;
LABEL_66:
        xxxShowWindowViaMinMax(v31, (__int64)&v45, v32);
        return v13;
      }
LABEL_64:
      xxxShowWindowViaStartupInfo(v31, &v45, v51);
      return v13;
  }
  if ( v21 != 4 )
  {
    if ( v21 != 5 )
    {
      if ( v21 == 6 )
        goto LABEL_60;
LABEL_78:
      UserSetLastError(1449LL);
      return v13;
    }
    if ( v13 )
      return v13;
    v30 = v7 | 0x40;
    goto LABEL_97;
  }
LABEL_88:
  v31 = a1;
  if ( (_DWORD)v25 == 1 )
  {
    v45 = v19;
    v46 = v20;
    goto LABEL_64;
  }
  v36 = IsSemiMaximized(a1);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 || v36 )
  {
    v32 = a3 | (4 * v36);
    v45 = v19;
    goto LABEL_82;
  }
  if ( v13 )
    return v13;
  v30 = v7 | 0x40;
  if ( v21 != 4 )
    goto LABEL_97;
  v33 = v48;
  v30 = v37 | 0x54;
  v38 = 1;
LABEL_99:
  v39 = v38;
  xxxSendMessage(a1, 24LL, v38, 0LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
    xxxSendMessage(a1, 9LL, v39, 0LL);
LABEL_101:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 9LL) & 8) == 0 || ((v21 - 1) & 0xFB) != 0 )
      goto LABEL_106;
    xxxActivateWindow(a1);
  }
  v30 |= 0x14u;
LABEL_106:
  if ( (unsigned int)FChildVisible(a1) )
  {
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v30);
    if ( (v30 & 0x100000) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (v41 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v41 = 0;
      }
      v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v41,
          v42,
          (__int64)gFullLog,
          4u,
          0xCu,
          0x10u,
          (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
          a1,
          v30);
      LOBYTE(v40) = 1;
      NotifyShell::TrackedWindowPosChanged(a1, v40, v42);
    }
  }
  else
  {
    SetVisible(a1);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, a1, 16LL, 1LL);
    xxxSendSizeMessage((ULONG_PTR)a1);
    v43 = *((_QWORD *)a1 + 13);
    v51 = *(_OWORD *)(*(_QWORD *)(v43 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces(&v51, &v51, a1, v43);
    GetDesktopWindow(a1, *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 108LL));
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 0);
  }
  if ( !v21 )
  {
    if ( *(_QWORD *)(v33 + 432) == gpqForeground && a1 == *(struct tagWND **)(gpqForeground + 128LL) )
      xxxActivateWindowWithOptions(a1, 2, 57LL, 1);
    else
      xxxMoveFocusAway(a1);
  }
  return v13;
}
