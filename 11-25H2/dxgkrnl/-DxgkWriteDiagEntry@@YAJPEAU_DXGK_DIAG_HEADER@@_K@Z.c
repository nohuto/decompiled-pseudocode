/*
 * XREFs of ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027940 (DxgkQueryConnectionChanges.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x140050188 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007F470 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x14007FF0C (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080698 (DxgkMiracastStartMiracastSession.c)
 *     _lambda_b98058a49004024dd1650fdaa637bde3_::operator() @ 0x1401A8404 (_lambda_b98058a49004024dd1650fdaa637bde3_--operator().c)
 *     _lambda_0e946522d05123f26763d9a2a20a36ba_::operator() @ 0x1401BAB6C (_lambda_0e946522d05123f26763d9a2a20a36ba_--operator().c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1401C9F10 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 *     DpiFdoExcludeAdapterAccess @ 0x140239C00 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleTargetConnectionState @ 0x14023BD30 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024092C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402419C8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiPnpEnableVga @ 0x140243AB4 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x140243BC0 (DpiPnpNotifyGdi.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x140244440 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandleStartSessionDone @ 0x140244CC8 (DpiMiracastHandleStartSessionDone.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x140252C5C (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1402BE070 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140355118 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     DpiPdoIsChildConnected @ 0x140374F80 (DpiPdoIsChildConnected.c)
 *     DpiFdoInvalidateChildRelations @ 0x140375560 (DpiFdoInvalidateChildRelations.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x140376448 (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 *     LogSetTimingSourceMask @ 0x1403770BC (LogSetTimingSourceMask.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403774A0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     DxgkInvalidateMonitorConnections @ 0x140378200 (DxgkInvalidateMonitorConnections.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1403AAA08 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403BFC70 (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DBBF4 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     DpiMiracastHandlePowerCallback @ 0x1403EEA30 (DpiMiracastHandlePowerCallback.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1403F2C4C (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 *     DxgkHandleMiracastEscape @ 0x14040A148 (DxgkHandleMiracastEscape.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1404291B4 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A1C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2)
{
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rbp
  __int64 CurrentProcess; // rax
  _DWORD *v7; // rsi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rbx
  DXGDIAGNOSTICS *v11; // rcx

  if ( !a1 || !*((_DWORD *)a1 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8706;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(io_pHeader != NULL) && (io_pHeader->Size > 0)",
      8706LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1 && *((_DWORD *)a1 + 1) >= 0x30u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( Global )
    {
      CurrentProcess = PsGetCurrentProcess(v4);
      *((_OWORD *)a1 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      if ( a2 == 0x200000000LL )
      {
        a2 = *(unsigned int *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 118) + 144LL);
        if ( a2 == 0xFFFFFFFFLL )
          a2 = 0x100000000LL;
      }
      v7 = (_DWORD *)((char *)a1 + 36);
      v8 = *((_DWORD *)a1 + 9);
      if ( a2 == 0x100000000LL )
      {
        *v7 = v8 | 0x80000000;
        v9 = *v7 ^ (PsGetCurrentProcessSessionId() ^ *v7) & 0x7FFFFFFF;
      }
      else
      {
        *v7 = v8 & 0x7FFFFFFF;
        v9 = a2 & 0x7FFFFFFF;
      }
      *v7 = v9;
      *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
      v10 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 1) = v10 * KeQueryTimeIncrement();
      v11 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 116);
      if ( v11 )
        return DXGDIAGNOSTICS::WriteDiagnosticEntry(v11, a1);
      WdLogSingleEntry2(2LL, a1, Global);
      WdLogGlobalForLineNumber = 8771;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Unable to obtain DXGGLOBAL Diagnosibility buffer; i_pHeader = 0x%I64x, DXGGLOBAL::m_pDxgGlobal = 0x%I64x",
        (__int64)a1,
        (__int64)Global,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 8721;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Unable to obtain DXGGLOBAL singleton; io_pHeader = 0x%I64x",
        (__int64)a1,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return 3221225860LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 8712;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid header; io_pHeader = 0x%I64x",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
