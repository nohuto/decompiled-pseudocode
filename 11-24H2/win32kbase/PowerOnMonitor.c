/*
 * XREFs of PowerOnMonitor @ 0x1400906D0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     DrvSetMonitorPowerState @ 0x14004CB90 (DrvSetMonitorPowerState.c)
 *     DrvChangeD3RequestsState @ 0x14008C968 (DrvChangeD3RequestsState.c)
 *     ?PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x140090A68 (-PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x140090AE4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x140090D94 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x140090DBC (EtwTracPowerOnMonitoreBegin.c)
 *     PowerUnDimMonitor @ 0x140090E48 (PowerUnDimMonitor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E47A0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1400E8CF8 (DCompositionForceRender.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400EA954 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400F015C (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     SetPointer @ 0x140145A60 (SetPointer.c)
 *     IsSetPointerSupported @ 0x14014B3D4 (IsSetPointerSupported.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B346C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

char __fastcall PowerOnMonitor(__int64 a1, __int64 a2, unsigned int a3)
{
  enum POWER_MONITOR_REQUEST_REASON v5; // r14d
  int v6; // edi
  _DWORD *UserSessionState; // rbx
  int v8; // ebp
  int v9; // r15d
  __int64 v10; // rcx
  char result; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r9d
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int (*v26)(void); // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int (*v30)(void); // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  void (*v33)(void); // rax
  __int64 v34; // rax
  __int64 v35; // rax
  void (*v36)(void); // rax
  int v37; // [rsp+88h] [rbp+20h] BYREF

  v5 = (int)a1;
  v6 = 0;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1);
  v8 = UserSessionState[689];
  v9 = 0;
  result = **(_BYTE **)(W32GetUserSessionState(v10) + 2712);
  if ( !result )
  {
    EtwTracPowerOnMonitoreBegin(a3);
    InputTraceLogging::Power::PowerOnMonitor((unsigned int)v5, a3);
    if ( !v8 )
    {
      if ( !*(_WORD *)(W32GetUserSessionState(v12) + 69008) )
      {
        if ( !UserSessionState[689] && !UserSessionState[694] && !UserSessionState[695] )
        {
          v9 = 1;
          v37 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v37, 4LL, 0LL, 0LL);
        }
        DrvChangeD3RequestsState(0);
        UserSessionSwitchBlock_Start();
        v15 = PtiCurrent();
        if ( v15 )
        {
          v34 = *((_QWORD *)v15 + 62);
          if ( v34 )
          {
            v35 = *(_QWORD *)(v34 + 8);
            if ( v35 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v35 + 64LL) & 1) != 0 )
                DCompositionForceRender();
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL, 0LL);
        if ( *(_QWORD *)(W32GetUserSessionState(v16) + 19200) && (int)IsSetPointerSupported() >= 0 )
          SetPointer(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)v5);
        v18 = W32GetUserSessionState(v17);
        ArmPowerWatchdog(*(_QWORD *)(v18 + 552), 80LL);
        v20 = W32GetUserSessionState(v19);
        DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v20 + 57008) + 16LL), 1u, 0, a2);
        v22 = W32GetUserSessionState(v21);
        DisarmPowerWatchdog(*(_QWORD *)(v22 + 552));
        DisplayRestoreVidPnJournalFinalize(a2);
        v25 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 48);
        v26 = *(int (**)(void))(v25 + 2424);
        if ( v26 )
        {
          if ( v26() >= 0 )
          {
            v25 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v25, v27) + 48);
            v36 = *(void (**)(void))(v25 + 2432);
            if ( v36 )
              v36();
          }
        }
        if ( *(_QWORD *)(W32GetUserSessionState(v25) + 19200) && (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
        UserSessionSwitchBlock_End();
        DrvChangeD3RequestsState(1);
      }
      v6 = 1;
    }
    PowerUnDimMonitor();
    if ( UserSessionState[724] == 2 || v6 )
      UpdateDisplayState(PowerMonitorOn, v5, v8 == 0, v14);
    if ( !v8 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v13) + 19200) )
      {
        v30 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v28) + 48) + 2408LL);
        if ( v30 )
        {
          if ( v30() >= 0 )
          {
            v33 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v32, v31) + 48) + 2416LL);
            if ( v33 )
              v33();
          }
        }
      }
    }
    if ( v9 )
    {
      v37 = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v37, 4LL, 0LL, 0LL);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
