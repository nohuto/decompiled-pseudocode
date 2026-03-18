/*
 * XREFs of PowerDimMonitor @ 0x140141F74
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     DrvSetMonitorBrightness @ 0x14008DCD0 (DrvSetMonitorBrightness.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140091014 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x1400911C4 (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x1400E5440 (DrvDxgkWriteDiagEntry.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x140142130 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall PowerDimMonitor(__int64 a1)
{
  __int64 UserSessionState; // rdi
  __int64 v2; // rcx
  unsigned int v3; // eax
  char v4; // si
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int (*v13)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void (*v16)(void); // rax
  int v17; // eax
  __int128 v18; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v20[96]; // [rsp+68h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  UserSessionState = W32GetUserSessionState(a1);
  ActivityId[0].Data1 = 1;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 1;
  if ( !*(_WORD *)(W32GetUserSessionState(v2) + 69008) )
  {
    v3 = *(_DWORD *)(UserSessionState + 2916);
    v4 = 1;
    if ( *(_DWORD *)(UserSessionState + 2928) == v3 || v3 >= *(_DWORD *)(UserSessionState + 2908) )
      v4 = 0;
    memset(v20, 0, 0x58uLL);
    if ( v4 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v20, 1);
      v5 = *(_DWORD *)(UserSessionState + 2948);
      v7 = W32GetUserSessionState(v6);
      DrvSetMonitorBrightness(
        *(_QWORD *)(*(_QWORD *)(v7 + 57008) + 16LL),
        v5,
        v8,
        v9,
        (_BYTE *)(UserSessionState + 2964),
        0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    LOBYTE(v10) = 1;
    v18 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(v10, &v18);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v4 )
    {
      v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 48) + 2344LL);
      if ( v13 )
      {
        if ( v13() >= 0 )
        {
          v16 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15, v14) + 48) + 2352LL);
          if ( v16 )
            v16();
        }
      }
      DrvDxgkWriteDiagEntry((__int64)v20);
      v17 = *(_DWORD *)(UserSessionState + 2948);
      *(_DWORD *)(UserSessionState + 2916) = v17;
      *(_DWORD *)(UserSessionState + 2928) = v17;
    }
  }
  PowerMonitorDimStateTelemetry((__int64)ActivityId);
}
