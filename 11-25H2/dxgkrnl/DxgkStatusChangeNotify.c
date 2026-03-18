/*
 * XREFs of DxgkStatusChangeNotify @ 0x14030F070
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14004DC54 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14004F61C (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     DxgkNotifyMonitorChange @ 0x1401889D8 (DxgkNotifyMonitorChange.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401B7D90 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140285A10 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030EBAC (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x14030EF50 (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     DxgkSetDisplayMode @ 0x14030F550 (DxgkSetDisplayMode.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140311874 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x140312F00 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B4E8 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0qp_EtwWriteTransfer @ 0x14004D204 (McTemplateK0qp_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int updated; // esi
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  const wchar_t *v19; // r9
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-50h]
  int v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  char v24; // [rsp+60h] [rbp-10h]
  unsigned int ProcessSessionId; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int ActiveConsoleId; // [rsp+A8h] [rbp+38h] BYREF
  unsigned int ServerSiloServiceSessionId; // [rsp+B0h] [rbp+40h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2195;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2195);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2195);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    McTemplateK0qp_EtwWriteTransfer(v8, v7, v9, *a1);
  v10 = *a1;
  if ( (int)v10 <= 7 )
  {
    if ( (_DWORD)v10 == 7 )
      goto LABEL_23;
    if ( (_DWORD)v10 == 1 )
    {
      WdLogSingleEntry1(4LL, ProcessSessionId);
      WdLogGlobalForLineNumber = 4949;
      updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
      if ( ProcessSessionId != ServerSiloServiceSessionId )
        goto LABEL_10;
      if ( ActiveConsoleId == -1 )
        goto LABEL_10;
      WdLogSingleEntry1(4LL, ActiveConsoleId);
      WdLogGlobalForLineNumber = 4965;
      v15 = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ActiveConsoleId, 0, 0);
      if ( v15 >= 0 )
        goto LABEL_10;
      v16 = v15;
      WdLogSingleEntry2(2LL, ActiveConsoleId, v15);
      WdLogGlobalForLineNumber = 4977;
LABEL_32:
      v18 = ActiveConsoleId;
      v19 = L"Failed to send OCCLUSION WNF notification to active session %u, status = 0x%I64x.";
      goto LABEL_33;
    }
    if ( (_DWORD)v10 == 2 || (_DWORD)v10 == 3 || (_DWORD)v10 == 4 || (unsigned int)(v10 - 5) < 2 )
      goto LABEL_9;
LABEL_39:
    WdLogSingleEntry1(1LL, v10);
    v21 = *a1;
    WdLogGlobalForLineNumber = 5032;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Unsupported state change notification type. (pNotification->Type = 0x%I64x)",
      v21,
      0LL,
      0LL,
      0LL,
      0LL);
    updated = -1073741637;
    goto LABEL_10;
  }
  if ( (_DWORD)v10 == 8 || (_DWORD)v10 == 9 || (_DWORD)v10 == 10 )
  {
LABEL_9:
    updated = 0;
    goto LABEL_10;
  }
  if ( (_DWORD)v10 != 11 )
  {
    if ( (_DWORD)v10 == 12 )
    {
      WdLogSingleEntry1(4LL, ProcessSessionId);
      WdLogGlobalForLineNumber = 4985;
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, a1 + 4, 16LL, 0LL, &ProcessSessionId, 0, 0);
      if ( ProcessSessionId == ActiveConsoleId )
        goto LABEL_10;
      if ( ActiveConsoleId == -1 )
        goto LABEL_10;
      WdLogSingleEntry1(4LL, ActiveConsoleId);
      WdLogGlobalForLineNumber = 5001;
      v20 = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, a1 + 4, 16LL, 0LL, &ActiveConsoleId, 0, 0);
      if ( v20 >= 0 )
        goto LABEL_10;
      v16 = v20;
      WdLogSingleEntry2(2LL, ActiveConsoleId, v20);
      WdLogGlobalForLineNumber = 5013;
      goto LABEL_32;
    }
    goto LABEL_39;
  }
LABEL_23:
  WdLogSingleEntry1(4LL, ProcessSessionId);
  WdLogGlobalForLineNumber = 4905;
  updated = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
  if ( ServerSiloServiceSessionId == -1 )
  {
    WdLogSingleEntry1(2LL, ProcessSessionId);
    WdLogGlobalForLineNumber = 4918;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get service session ID from server silo of current session %u.",
      ProcessSessionId,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_10;
  }
  if ( ServerSiloServiceSessionId != ProcessSessionId )
  {
    v17 = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ServerSiloServiceSessionId, 0, 0);
    if ( v17 < 0 )
    {
      v16 = v17;
      WdLogSingleEntry2(2LL, ServerSiloServiceSessionId, v17);
      v18 = ServerSiloServiceSessionId;
      v19 = L"Failed to send MODE_CHANGE WNF notification to service session %u, status = 0x%I64x.";
      WdLogGlobalForLineNumber = 4941;
LABEL_33:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v19, v18, v16, 0LL, 0LL, 0LL);
    }
  }
LABEL_10:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v22);
  return updated;
}
