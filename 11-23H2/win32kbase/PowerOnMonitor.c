/*
 * XREFs of PowerOnMonitor @ 0x1C0133F40
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0010ADC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0010BBC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     PowerUnDimMonitor @ 0x1C007A998 (PowerUnDimMonitor.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00BA8D0 (DrvDxgkLogCodePointPacket.c)
 *     DrvChangeD3RequestsState @ 0x1C00C2B38 (DrvChangeD3RequestsState.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00C342C (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C00C4290 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00C42B0 (EtwTracPowerOnMonitoreBegin.c)
 *     DrvSetMonitorPowerState @ 0x1C00C4CB0 (DrvSetMonitorPowerState.c)
 *     SetPointer @ 0x1C00C53D8 (SetPointer.c)
 *     DCompositionForceRender @ 0x1C00CA5F4 (DCompositionForceRender.c)
 *     IsSetPointerSupported @ 0x1C00CC610 (IsSetPointerSupported.c)
 *     ?PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x1C00D0BB8 (-PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C01322CC (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0132E8C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 */

char __fastcall PowerOnMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // ebx
  unsigned int v7; // ebp
  int v8; // r14d
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char result; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v5 = 0;
  v7 = a1;
  v8 = 0;
  v9 = *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2952);
  result = **(_BYTE **)(SGDGetUserSessionState(v11, v10, v12, v13) + 2896);
  if ( !result )
  {
    EtwTracPowerOnMonitoreBegin(v4, v15, v16);
    InputTraceLogging::Power::PowerOnMonitor();
    if ( !v9 )
    {
      if ( !gProtocolType )
      {
        if ( !*(_DWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 2952)
          && !*(_DWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 2972)
          && !*(_DWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 2976) )
        {
          v49 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v49, 4LL, 0LL, 0LL);
          v8 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v29 = *((_QWORD *)gptiCurrent + 57);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 8);
            if ( v30 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v30 + 64LL) & 1) != 0 )
                DCompositionForceRender(1LL, 0, 0, 0);
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0, 0);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(0LL);
        DisplayRestoreVidPnJournalBegin(v7);
        v35 = SGDGetUserSessionState(v32, v31, v33, v34);
        ArmPowerWatchdog(*(_QWORD *)(v35 + 736), 80);
        DrvSetMonitorPowerState(*((_QWORD *)gpDispInfo + 2), 1u, 0, a2);
        v40 = SGDGetUserSessionState(v37, v36, v38, v39);
        DisarmPowerWatchdog(*(_QWORD *)(v40 + 736));
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( qword_1C0295A00 && (int)qword_1C0295A00() >= 0 && qword_1C0295A08 )
          qword_1C0295A08();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
        UserSessionSwitchBlock_End();
        LOBYTE(v41) = 1;
        DrvChangeD3RequestsState(v41);
      }
      v5 = 1;
    }
    PowerUnDimMonitor(v18, v17, v19, v20);
    if ( *(_DWORD *)(SGDGetUserSessionState(v43, v42, v44, v45) + 3080) == 2 || v5 )
      UpdateDisplayState(1LL, v7, v9 == 0, v48);
    if ( !v9 && grpdeskRitInput && qword_1C02959F0 && (int)qword_1C02959F0() >= 0 && qword_1C02959F8 )
      qword_1C02959F8();
    if ( v8 )
    {
      v49 = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v49, 4LL, 0LL, 0LL);
    }
    return EtwTracePowerOnMonitorEnd(v4, v46, v47);
  }
  return result;
}
