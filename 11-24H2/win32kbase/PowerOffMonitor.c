/*
 * XREFs of PowerOffMonitor @ 0x1400E4300
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     DrvSetMonitorPowerState @ 0x14004CB90 (DrvSetMonitorPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x140090AE4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E47A0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     ?GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z @ 0x1400EE1C0 (-GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z.c)
 *     PrepareGammaRampData @ 0x14014DABC (PrepareGammaRampData.c)
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 *     ?PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x14019EE74 (-PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1401AE4DC (-SetProximityBlocking@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B346C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     FadeDesktop @ 0x14023B2C4 (FadeDesktop.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall PowerOffMonitor(__int64 a1, __int64 a2)
{
  enum POWER_MONITOR_REQUEST_REASON v3; // ebx
  _DWORD *UserSessionState; // rax
  _DWORD *v5; // rdi
  int v6; // r14d
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int (*v14)(void); // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int (*v18)(void); // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int (*v22)(void); // rax
  __int64 v23; // rdx
  void (*v24)(void); // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int (*v28)(void); // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  void (__fastcall *v31)(__int64); // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 GlobalTickCountWithSequence; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // [rsp+40h] [rbp-20h] BYREF
  __int64 v38; // [rsp+48h] [rbp-18h] BYREF
  __int64 v39; // [rsp+50h] [rbp-10h] BYREF
  int v40; // [rsp+B0h] [rbp+50h] BYREF
  int v41; // [rsp+B8h] [rbp+58h] BYREF

  v3 = (int)a1;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1);
  v5 = UserSessionState;
  v37 = 0;
  v6 = 0;
  v38 = 0LL;
  v7 = 0;
  v41 = 0;
  v8 = UserSessionState[689];
  v39 = 0LL;
  if ( v8 || UserSessionState[694] || UserSessionState[695] )
  {
    InputTraceLogging::Power::PowerOffMonitor(v3);
    if ( !*(_WORD *)(W32GetUserSessionState(v9) + 69008) )
    {
      if ( v3 != MonitorRequestReasonGracePeriod && v3 != MonitorRequestReasonNearProximity )
      {
        v40 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v40, 4LL, 0LL, 0LL);
        v7 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( !*(_DWORD *)(W32GetUserSessionState(v10) + 43016)
        && *(_QWORD *)(W32GetUserSessionState(v11) + 19200)
        && (v6 = 1,
            *(_DWORD *)(W32GetUserSessionState(v12) + 43016) = 1,
            (v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(1LL, v13) + 48) + 2296LL)) != 0LL)
        && v14() >= 0
        && (int)PrepareGammaRampData(&v37, &v38, &v41) < 0 )
      {
        v15 = 0LL;
        v38 = 0LL;
      }
      else
      {
        v15 = v38;
      }
      if ( v41 )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v40, 1);
        v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 2312LL);
        if ( v18 && v18() >= 0 )
          FadeDesktop(v37, v38);
        DrvDxgkLogCodePointPacket(14LL, v38 != 0, 0LL, 0LL);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v40);
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v15 != 0, 0LL, 0LL);
      }
      v21 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v20, v19) + 48);
      v22 = *(int (**)(void))(v21 + 2328);
      if ( v22 )
      {
        if ( v22() >= 0 )
        {
          v21 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v23) + 48);
          v24 = *(void (**)(void))(v21 + 2336);
          if ( v24 )
            v24();
        }
      }
      v25 = W32GetUserSessionState(v21);
      DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v25 + 57008) + 16LL), 4u, 1, a2);
      if ( v38 )
      {
        v27 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v26) + 48);
        v28 = *(int (**)(void))(v27 + 2376);
        if ( v28 )
        {
          if ( v28() >= 0 )
          {
            v30 = v38;
            v31 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v29) + 48) + 2384LL);
            if ( v31 )
              v31(v30);
          }
        }
      }
      if ( v6 )
        *(_DWORD *)(W32GetUserSessionState(v27) + 43016) = 0;
      UserSessionSwitchBlock_End();
    }
    if ( v3 != MonitorRequestReasonGracePeriod && v3 != MonitorRequestReasonNearProximity )
    {
      v32 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      *((_QWORD *)v5 + 356) = (v32 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v33 = W32GetUserSessionState(v32);
      GlobalTickCountWithSequence = CInputGlobals::GetGlobalTickCountWithSequence(*(_QWORD *)(v33 + 3064), 0LL, &v39);
      v35 = v39;
      if ( GlobalTickCountWithSequence > *((_QWORD *)v5 + 356) )
        v35 = 0LL;
      *((_QWORD *)v5 + 357) = v35;
    }
    UpdateDisplayState(PowerMonitorOff, v3, v8);
    if ( *(_QWORD *)(W32GetUserSessionState(v36) + 62864) )
      PostWinlogonMessage(1029LL, 0LL);
    if ( v7 )
    {
      v40 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v40, 4LL, 0LL, 0LL);
    }
  }
  else if ( v3 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
