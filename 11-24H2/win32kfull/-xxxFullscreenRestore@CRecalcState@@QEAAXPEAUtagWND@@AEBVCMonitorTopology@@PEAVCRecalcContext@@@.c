/*
 * XREFs of ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C5D00
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C6F30 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsImmersiveBand @ 0x14014E660 (IsImmersiveBand.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x140206730 (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D6EA4 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 */

void __fastcall CRecalcState::xxxFullscreenRestore(
        CRecalcState *this,
        struct tagTHREADINFO **a2,
        const struct CMonitorTopology *a3,
        struct CRecalcContext *a4)
{
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rcx
  bool v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  const struct CMonitorTopology::MonitorData *CurrentMonitorDataFromId; // rax
  __int64 v14; // rcx
  char v15; // bl
  char v16; // r15
  bool v17; // r12
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  struct CRecalcContext *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 Prop; // rax
  int v25; // edx
  char v26; // r15
  bool v27; // r12
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  char v32; // r15
  bool v33; // r12
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  unsigned int v37; // r8d
  struct tagRECT v38; // xmm1
  __int64 v39; // rdx
  bool v40; // di
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  struct tagRECT v44; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT v45; // [rsp+50h] [rbp-48h] BYREF
  __int64 v46; // [rsp+A0h] [rbp+8h]

  if ( !*((_BYTE *)this + 61) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1057);
  if ( a2[2] != PtiCurrent((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1058);
  if ( (unsigned int)IsImmersiveBand((__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1059);
  if ( !*((_QWORD *)this + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1060);
  v7 = a2[5];
  if ( (*((_BYTE *)v7 + 20) & 0x40) != 0 )
  {
    if ( (*((_BYTE *)v7 + 31) & 0x20) != 0 )
    {
      v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 69416),
          2,
          7,
          32,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
      }
      return;
    }
    CurrentMonitorDataFromId = CMonitorTopology::GetCurrentMonitorDataFromId(
                                 (const struct CMonitorTopology::MonitorId *)(*((_QWORD *)this + 9) + 48LL),
                                 0LL);
    v46 = ValidateHmonitor(*(_QWORD *)CurrentMonitorDataFromId);
    v15 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v14 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v14 & 0x40) == 0)
      || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v16 = 0;
    }
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(v14, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(v18 + 69416),
        4,
        7,
        33,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
    v21 = a4;
    AdvancedWindowPos::xxxMigrateWindow(a2, v46, a3, 0LL, 0LL, 2, (char *)a4 + 4, 0LL);
  }
  else
  {
    v23 = W32GetUserSessionState(v7, v6);
    v15 = 1;
    Prop = GetProp((__int64)a2, *(unsigned __int16 *)(v23 + 41398), 1u);
    v25 = 0;
    if ( Prop && (*(_DWORD *)(Prop + 16) & 2) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v26 = 0;
      }
      v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v30,
          v29,
          *(_QWORD *)(v28 + 69416),
          4,
          7,
          34,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
      }
      v25 = 1;
      v31 = 343;
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v32 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v32 = 0;
      }
      v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v36,
          v35,
          *(_QWORD *)(v34 + 69416),
          4,
          7,
          35,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
        v25 = 0;
      }
      v31 = 347;
    }
    v21 = a4;
    v37 = v25;
    v38 = *(struct tagRECT *)((char *)this + 28);
    v39 = *((_QWORD *)this + 9);
    v44 = *(struct tagRECT *)((char *)this + 44);
    v45 = v38;
    AdvancedWindowPos::xxxRestoreToPosAndState((WindowActions *)a2, v39, v37, &v45, &v44, v31, (int *)a4 + 1);
  }
  if ( (*((_BYTE *)a2[5] + 20) & 0x40) == 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v15 = 0;
    }
    v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v43,
        v42,
        *(_QWORD *)(v41 + 69416),
        2,
        7,
        36,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
  }
  *(_DWORD *)v21 = 7;
  *((_DWORD *)v21 + 4) = *(_DWORD *)(*((_QWORD *)this + 2) + 12LL);
}
