/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8
 * Callers:
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002D8D8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0073084 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0091324 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C5BAC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F410C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200170 (xxxHandleNCMouseGuys.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 * Callees:
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C002D22C (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002E044 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002F37C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0045408 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C005AA48 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C021F9B0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

char __fastcall xxxActivateWindowWithOptions(const struct tagWND *a1, int a2, __int64 a3, int a4)
{
  int v5; // edi
  int v6; // r15d
  char v7; // si
  int v8; // ebx
  struct tagWND *v9; // r13
  __int64 v10; // rcx
  PDEVICE_OBJECT *v11; // rdx
  void *v12; // r9
  PDEVICE_OBJECT Timer_high; // rcx
  int v14; // ebx
  unsigned int v15; // r15d
  char v16; // r9
  const char *v17; // rax
  bool v18; // bl
  char ThreadId; // al
  int v20; // edx
  int v21; // r8d
  __int16 v22; // cx
  char v23; // r9
  _UNKNOWN **v25; // r8
  int v26; // edx
  PDEVICE_OBJECT v27; // rcx
  __int16 v28; // ax
  bool v29; // [rsp+50h] [rbp-30h]
  char v30; // [rsp+51h] [rbp-2Fh]
  bool v31; // [rsp+52h] [rbp-2Eh]
  char v32; // [rsp+53h] [rbp-2Dh]
  __int128 v33; // [rsp+58h] [rbp-28h] BYREF
  __int128 v34; // [rsp+68h] [rbp-18h] BYREF
  __int64 v35; // [rsp+78h] [rbp-8h]
  bool v36; // [rsp+C0h] [rbp+40h]

  v30 = 0;
  v36 = 0;
  v34 = 0LL;
  v5 = a4;
  v31 = 0;
  v35 = 0LL;
  LOBYTE(a4) = 0;
  v29 = 0;
  v6 = 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    return 0;
  v7 = 1;
  if ( a2 )
  {
    v33 = 0LL;
    if ( !anonymous_namespace_::ComputeWindowToActivate(a1, a2, a3, &v33) )
    {
LABEL_70:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v7 = 0;
      }
      v25 = &WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 95;
        LOBYTE(v26) = v7;
        LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          (_DWORD)v25,
          a4,
          4,
          2,
          95,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
      }
      return 0;
    }
    v9 = (struct tagWND *)v33;
    if ( !(_QWORD)v33 || (v8 = DWORD2(v33)) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3956LL);
      v8 = DWORD2(v33);
      v9 = (struct tagWND *)v33;
    }
    LOBYTE(a4) = a1 != v9;
    v29 = a1 != v9;
  }
  else
  {
    if ( (_DWORD)a3 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3944LL);
      LOBYTE(a4) = 0;
    }
    v8 = 1;
    v9 = a1;
    v31 = v5 == 1;
  }
  if ( !v9 )
    goto LABEL_70;
  if ( !v8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3975LL);
    LOBYTE(a4) = v29;
  }
  if ( (_BYTE)a4 )
  {
    *(_QWORD *)&v34 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v34;
    *((_QWORD *)&v34 + 1) = v9;
    HMLockObject(v9);
  }
  v10 = *((_QWORD *)v9 + 2);
  v11 = &WPP_GLOBAL_Control;
  v12 = &WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids;
  if ( *(_QWORD *)(v10 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v11) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v11,
        a3,
        (unsigned int)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        4,
        2,
        96,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    v32 = anonymous_namespace_::FAllowForegroundActivate(v9, v11, a3, v12);
    if ( v32 )
    {
      v36 = *(_DWORD *)(gptiCurrent + 908LL) == 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (Timer_high = (PDEVICE_OBJECT)HIDWORD(WPP_GLOBAL_Control->Timer), ((unsigned __int8)Timer_high & 2) == 0)
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v11,
          a3,
          (_DWORD)gFullLog,
          4,
          2,
          97,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
          *(_DWORD *)(gptiCurrent + 908LL) == 0);
      v23 = 0;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v11,
          a3,
          98,
          4,
          2,
          98,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
      }
      v23 = anonymous_namespace_::xxxLocalActivateWindow(v9);
    }
    LOBYTE(v11) = v36;
    v30 = v23;
    if ( !v32 )
      goto LABEL_63;
    goto LABEL_25;
  }
  if ( v10 == gptiCurrent )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4020LL);
    v11 = &WPP_GLOBAL_Control;
  }
  if ( v8 == 5 )
  {
    v6 = 31;
    v27 = WPP_GLOBAL_Control;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v28 = 99;
LABEL_110:
    WPP_RECORDER_AND_TRACE_SF_(
      v27->AttachedDevice,
      (_DWORD)v11,
      a3,
      (unsigned int)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      4,
      2,
      v28,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    goto LABEL_25;
  }
  if ( v8 == 6 )
  {
    v6 = 31;
    v27 = WPP_GLOBAL_Control;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v28 = 100;
    goto LABEL_110;
  }
  Timer_high = (PDEVICE_OBJECT)gpqForeground;
  if ( gpqForeground != *(_QWORD *)(gptiCurrent + 432LL) && gpqForeground )
    goto LABEL_63;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 908LL) || (v36 = 0, v31) )
    v36 = 1;
  v14 = v8 - 3;
  if ( v14 )
  {
    if ( v14 == 1 )
      v6 = 3;
  }
  else
  {
    v6 = 3;
    if ( (unsigned int)CoreWindowProp::IsComponent(a1) && !CoreWindowProp::GetHost(a1) )
      v6 = 11;
  }
LABEL_25:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v11,
      a3,
      101,
      4,
      2,
      101,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  }
  v15 = v6 | 4;
  if ( *(_QWORD *)(*((_QWORD *)v9 + 2) + 432LL) == gpqForeground && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4148LL);
  v16 = xxxSetForegroundWindowWithOptions(v9, v15, 0LL, v31);
  v30 = v16;
  LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = "Success";
    if ( !v16 )
      v17 = "Failure";
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v11,
      a3,
      (_DWORD)gFullLog,
      4,
      2,
      102,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      (__int64)v17);
  }
  if ( v36 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
    Timer_high = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_63;
    ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*gptiCurrent);
    v22 = 103;
  }
  else
  {
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x20u;
    Timer_high = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_63;
    ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*gptiCurrent);
    v22 = 104;
  }
  LOBYTE(v21) = v18;
  LOBYTE(v20) = v7;
  WPP_RECORDER_AND_TRACE_SF_D(
    WPP_GLOBAL_Control->AttachedDevice,
    v20,
    v21,
    (_DWORD)gFullLog,
    4,
    2,
    v22,
    (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
    ThreadId);
LABEL_63:
  if ( v29 )
    ThreadUnlock1(Timer_high, v11, a3);
  return v30;
}
