/*
 * XREFs of PowerUnDimMonitor @ 0x1C007A998
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0133F40 (PowerOnMonitor.c)
 * Callees:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C007A6B0 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C00BAC38 (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x1C00BAE20 (DrvSetMonitorsDimState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C00C12A4 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

void __fastcall PowerUnDimMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // edi
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rcx
  int v33; // eax
  __int64 DxgkWin32kInterface; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // ebx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int128 v53; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v55[96]; // [rsp+68h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  ActivityId[0].Data1 = 2;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 0;
  if ( !gProtocolType )
  {
    v4 = SGDGetUserSessionState(a1, a2, a3, a4);
    v9 = SGDGetUserSessionState(v6, v5, v7, v8);
    v10 = *(_DWORD *)(v4 + 3112);
    v11 = *(_DWORD *)(v9 + 3092);
    memset(v55, 0, 0x58uLL);
    if ( v10 == v11 )
    {
      if ( *(_DWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 3080) == 1 )
        goto LABEL_2;
    }
    else
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v55, 0);
      v20 = SGDGetUserSessionState(v17, v16, v18, v19) + 3148;
      SGDGetUserSessionState(v22, v21, v23, v24);
      v29 = SGDGetUserSessionState(v26, v25, v27, v28);
      DrvSetMonitorBrightness(*((_QWORD *)gpDispInfo + 2), *(_DWORD *)(v29 + 3116), v30, v31, v20, 0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v53 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(0LL, &v53);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v10 != v11 )
    {
      if ( qword_1C02959C0 )
      {
        v33 = qword_1C02959C0();
        if ( v33 >= 0 && qword_1C02959C8 )
          qword_1C02959C8();
      }
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v32, a2);
      (*(void (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 304))(v55);
      v39 = *(_DWORD *)(SGDGetUserSessionState(v36, v35, v37, v38) + 3116);
      *(_DWORD *)(SGDGetUserSessionState(v41, v40, v42, v43) + 3092) = v39;
      v48 = *(_DWORD *)(SGDGetUserSessionState(v45, v44, v46, v47) + 3092);
      *(_DWORD *)(SGDGetUserSessionState(v50, v49, v51, v52) + 3112) = v48;
    }
  }
LABEL_2:
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId, a2, a3, a4);
}
