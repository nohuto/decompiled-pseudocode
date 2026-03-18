/*
 * XREFs of PowerUnDimMonitor @ 0x140090E48
 * Callers:
 *     PowerOnMonitor @ 0x1400906D0 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     DrvSetMonitorBrightness @ 0x14008DCD0 (DrvSetMonitorBrightness.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140091014 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x1400911C4 (DrvSetMonitorsDimState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x140142130 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall PowerUnDimMonitor(__int64 a1)
{
  __int64 UserSessionState; // rdi
  __int64 v2; // rcx
  int v3; // esi
  int v4; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  int (*v12)(void); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v16; // eax
  void (*v17)(void); // rax
  __int128 v18; // [rsp+38h] [rbp-59h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v20[96]; // [rsp+68h] [rbp-29h] BYREF

  memset(ActivityId, 0, 24);
  UserSessionState = W32GetUserSessionState(a1);
  ActivityId[0].Data1 = 2;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 0;
  if ( !*(_WORD *)(W32GetUserSessionState(v2) + 69008) )
  {
    v3 = *(_DWORD *)(UserSessionState + 2928);
    v4 = *(_DWORD *)(UserSessionState + 2908);
    memset(v20, 0, 0x58uLL);
    if ( v3 == v4 )
    {
      if ( *(_DWORD *)(UserSessionState + 2896) == 1 )
        goto LABEL_4;
    }
    else
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v20, 0);
      v5 = *(_DWORD *)(UserSessionState + 2932);
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
    v18 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(0LL, &v18);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v3 != v4 )
    {
      v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48) + 2360LL);
      if ( v12 )
      {
        if ( v12() >= 0 )
        {
          v17 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 48) + 2368LL);
          if ( v17 )
            v17();
        }
      }
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
      (*(void (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 304))(v20);
      v16 = *(_DWORD *)(UserSessionState + 2932);
      *(_DWORD *)(UserSessionState + 2908) = v16;
      *(_DWORD *)(UserSessionState + 2928) = v16;
    }
  }
LABEL_4:
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
