/*
 * XREFs of PowerDimUndimResend @ 0x1400920B8
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvSetMonitorBrightness @ 0x14008DCD0 (DrvSetMonitorBrightness.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140091014 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x1400911C4 (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x1400E5440 (DrvDxgkWriteDiagEntry.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x140142130 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall PowerDimUndimResend(__int64 a1)
{
  __int64 UserSessionState; // rdi
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // esi
  char v6; // r12
  char Data3; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // [rsp+38h] [rbp-69h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v14[96]; // [rsp+68h] [rbp-39h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  memset(ActivityId, 0, 24);
  v3 = 0;
  if ( !*(_WORD *)(W32GetUserSessionState(v2) + 69008) && !*(_DWORD *)(W32GetUserGdiSessionState() + 36) )
  {
    if ( *(_BYTE *)(UserSessionState + 2964) || (v5 = *(_DWORD *)(UserSessionState + 2928), v5 == -1) )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      v9 = W32GetUserSessionState(v4);
      DrvSetMonitorBrightness(
        *(_QWORD *)(*(_QWORD *)(v9 + 57008) + 16LL),
        v5,
        v10,
        v11,
        (_BYTE *)(UserSessionState + 2964),
        1);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    Data3 = ActivityId[0].Data3;
    if ( *(_DWORD *)(UserSessionState + 2896) == 2 )
      Data3 = 1;
    LOBYTE(ActivityId[0].Data3) = Data3;
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    LOBYTE(v8) = ActivityId[0].Data3;
    v12 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(v8, &v12);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v6 && *(_BYTE *)(UserSessionState + 2964) )
    {
      memset(v14, 0, 0x58uLL);
      LOBYTE(v3) = *(_DWORD *)(UserSessionState + 2928) == *(_DWORD *)(UserSessionState + 2916);
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v14, v3);
      DrvDxgkWriteDiagEntry(v14);
    }
  }
  PowerMonitorDimStateTelemetry((__int64)ActivityId);
}
