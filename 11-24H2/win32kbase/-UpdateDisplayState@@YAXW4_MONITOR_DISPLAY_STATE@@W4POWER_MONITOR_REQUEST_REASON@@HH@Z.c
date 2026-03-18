/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x140090AE4
 * Callers:
 *     PowerOnMonitor @ 0x1400906D0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1400E4300 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@_N2@Z @ 0x140091C2C (-UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUES.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     EtwTraceDisplayChange @ 0x140091F00 (EtwTraceDisplayChange.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140091FC0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     xxxSendWinlogonPowerMessage @ 0x140092060 (xxxSendWinlogonPowerMessage.c)
 *     CitDisplayPowerChange @ 0x1400B59E4 (CitDisplayPowerChange.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EEEC8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014CEA4 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1401AE4DC (-SetProximityBlocking@@YAXXZ.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401AE6B0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall UpdateDisplayState(enum _MONITOR_DISPLAY_STATE a1, enum POWER_MONITOR_REQUEST_REASON a2, int a3)
{
  char v3; // r12
  char v4; // r14
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  int CurrentWin32kSessionId; // eax
  int v10; // ecx
  unsigned __int64 v11; // rcx
  bool v12; // r13
  int v13; // eax
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rcx
  _BYTE v17[8]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v18; // [rsp+38h] [rbp-31h] BYREF
  _DWORD InputBuffer[3]; // [rsp+48h] [rbp-21h] BYREF
  bool v20; // [rsp+54h] [rbp-15h]
  char v21; // [rsp+55h] [rbp-14h]
  char v22; // [rsp+56h] [rbp-13h]
  char v23; // [rsp+57h] [rbp-12h]
  _QWORD v24[5]; // [rsp+58h] [rbp-11h] BYREF
  char v25; // [rsp+80h] [rbp+17h]

  v3 = a3;
  v4 = 0;
  InputTraceLogging::Power::UpdateDisplayState(a1, a2, a3 != 0, 1);
  UserSessionState = W32GetUserSessionState(v7);
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  v10 = *(_DWORD *)(UserSessionState + 2896);
  *(_DWORD *)(UserSessionState + 2824) = CurrentWin32kSessionId;
  *(_DWORD *)(UserSessionState + 2892) = v10;
  *(_DWORD *)(UserSessionState + 2896) = a1;
  *(_QWORD *)(UserSessionState + 2832) = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                       - *(_QWORD *)(UserSessionState + 2840);
  v11 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  *(_QWORD *)(UserSessionState + 2840) = (v11 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v12 = *(_WORD *)(W32GetUserSessionState(v11) + 69008) == 0;
  *(_WORD *)(UserSessionState + 2900) = v12;
  DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>(v24);
  if ( a1 )
  {
    *(_DWORD *)(UserSessionState + 2756) = 1;
    if ( v25 && v24[0] )
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v24[0]);
    *(_QWORD *)(UserSessionState + 2776) = 0LL;
  }
  else
  {
    *(_DWORD *)(UserSessionState + 2756) = 0;
    DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(v24);
    *(_DWORD *)(UserSessionState + 2776) = a2 == MonitorRequestReasonGracePeriod;
    if ( a2 == MonitorRequestReasonNearProximity )
      SetProximityBlocking();
  }
  UpdateAdaptiveSessionState();
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v17, 1);
  if ( *(_BYTE *)W32GetUserGdiSessionState()
    || (unsigned int)(a1 - 1) <= 1
    || a1 == PowerMonitorOff && a2 != MonitorRequestReasonGracePeriod && a2 != MonitorRequestReasonNearProximity )
  {
    v4 = 1;
    if ( a1 != PowerMonitorDim )
    {
      v18 = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != PowerMonitorOff), &v18);
    }
  }
  v13 = W32GetCurrentWin32kSessionId();
  InputBuffer[1] = a1;
  InputBuffer[0] = v13;
  InputBuffer[2] = a2;
  v20 = v12;
  v21 = v4;
  v22 = v3;
  if ( *(_DWORD *)(UserSessionState + 2756)
    || *(_DWORD *)(UserSessionState + 2776)
    || (v15 = *(_DWORD *)(UserSessionState + 2780) == 0, v23 = 0, !v15) )
  {
    v23 = 1;
  }
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( *(_BYTE *)(W32GetUserSessionState(v14) + 528) )
  {
    if ( (*(_DWORD *)(UserSessionState + 2756)
       || *(_DWORD *)(UserSessionState + 2776)
       || *(_DWORD *)(UserSessionState + 2780))
      && !*(_DWORD *)(UserSessionState + 2780) )
    {
      v16 = 0LL;
    }
    else
    {
      v16 = 2LL;
    }
    SetInputMode(v16);
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v17);
  EtwTraceDisplayChange();
  CitDisplayPowerChange(UserSessionState + 2824);
}
