/*
 * XREFs of ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C61F0
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C6F30 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14008BA78 (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsImmersiveBand @ 0x14014E660 (IsImmersiveBand.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x140281C18 (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 */

void __fastcall CRecalcState::xxxImmersiveZBandDpiChange(CRecalcState *this, struct tagTHREADINFO **a2)
{
  __int64 v3; // rdx
  char v4; // r13
  char v5; // al
  struct tagTHREADINFO *v6; // rax
  struct tagTHREADINFO *v7; // r14
  int v8; // edi
  int v9; // r15d
  int v10; // ebx
  int v11; // esi
  int v12; // ebp
  __int64 UserSessionState; // rax
  __int64 v14; // rax
  struct tagMONITOR *v15; // rsi
  __int16 v16; // r14
  char v17; // di
  bool v18; // bp
  char WindowDpiLastNotify; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  char v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  struct tagBWL *v30; // [rsp+C0h] [rbp+8h] BYREF
  char v31; // [rsp+C8h] [rbp+10h]

  v30 = this;
  if ( a2[2] != PtiCurrent((__int64)this, (__int64)a2) )
  {
    LODWORD(v30) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1212);
  }
  if ( !(unsigned int)IsImmersiveBand((__int64)a2) )
  {
    LODWORD(v30) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1213);
  }
  v4 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (LOBYTE(v3) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    LOBYTE(v3) = 0;
  }
  v31 = v3;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v5 = 0;
  }
  LOBYTE(v30) = v5;
  if ( (_BYTE)v3 || v5 )
  {
    v6 = a2[5];
    v7 = *a2;
    v8 = *((_DWORD *)v6 + 25);
    v9 = *((_DWORD *)v6 + 23);
    v10 = *((_DWORD *)v6 + 24);
    v11 = *((_DWORD *)v6 + 22);
    v12 = *((_DWORD *)v6 + 59);
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
    WPP_RECORDER_AND_TRACE_SF_qddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v31,
      (char)v30,
      *(_QWORD *)(UserSessionState + 69416),
      5u,
      7u,
      0x27u,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v7,
      v12,
      v11,
      v9,
      v10,
      v8,
      v10 - v11,
      v8 - v9);
  }
  v14 = MonitorFromRect((INT *)a2[5] + 22, 0, *((_DWORD *)a2[5] + 72));
  v15 = (struct tagMONITOR *)v14;
  if ( v14 )
  {
    v16 = *(_WORD *)(*(_QWORD *)(v14 + 40) + 60LL);
    if ( v16 != (unsigned __int16)GetWindowDpiLastNotify((__int64)a2) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v17 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a2);
        v22 = W32GetUserSessionState(v21, v20);
        LOBYTE(v23) = v18;
        LOBYTE(v24) = v17;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v24,
          v23,
          *(_QWORD *)(v22 + 69416),
          4,
          7,
          40,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v16,
          WindowDpiLastNotify);
      }
      v30 = 0LL;
      if ( (unsigned int)UpdateMonitorForWindowAndChildren(a2, v15, &v30, 0) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v26 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v4 = 0;
        }
        if ( v26 || v4 )
        {
          v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
          LOBYTE(v28) = v4;
          LOBYTE(v29) = v26;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v29,
            v28,
            *(_QWORD *)(v27 + 69416),
            5,
            7,
            41,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
        }
        xxxNotifyMonitorChanged((struct tagWND *)a2, (struct tagRECT *)((char *)a2[5] + 88), v30, 0);
      }
    }
  }
}
