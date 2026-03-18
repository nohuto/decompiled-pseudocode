/*
 * XREFs of ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007FAF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x14008058C (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 *     _lambda_25828e919f6f014123ebe7d58fe0bd3b_::operator() @ 0x1401AA924 (_lambda_25828e919f6f014123ebe7d58fe0bd3b_--operator().c)
 *     _lambda_d15561d970b8cd1158562b53bc5433ff_::operator() @ 0x1401BDBC0 (_lambda_d15561d970b8cd1158562b53bc5433ff_--operator().c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1401CF1A0 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 *     DpiFdoExcludeAdapterAccess @ 0x140240710 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleTargetConnectionState @ 0x140242850 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024772C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402487C8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiPnpEnableVga @ 0x14024A8C4 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x14024A9D0 (DpiPnpNotifyGdi.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x14024B250 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandleStartSessionDone @ 0x14024BAD8 (DpiMiracastHandleStartSessionDone.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x140259A94 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14028DB88 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1402CB420 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x140311738 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     DpiPdoIsChildConnected @ 0x14031D668 (DpiPdoIsChildConnected.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031DC40 (DpiFdoInvalidateChildRelations.c)
 *     DxgkWriteDiagEntry @ 0x14031DEC0 (DxgkWriteDiagEntry.c)
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x14031EF08 (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 *     LogSetTimingSourceMask @ 0x14031FBA8 (LogSetTimingSourceMask.c)
 *     DxgkInvalidateMonitorConnections @ 0x14038E2E0 (DxgkInvalidateMonitorConnections.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x14038E710 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403B3AEC (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403D51C4 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     DpiMiracastHandlePowerCallback @ 0x1403E8D60 (DpiMiracastHandlePowerCallback.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1403EC644 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     DxgkHandleMiracastEscape @ 0x1404028D8 (DxgkHandleMiracastEscape.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140428EBC (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoHandleChildConnectionChange @ 0x14042B7C0 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400241D0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
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
    WdLogGlobalForLineNumber = 8715;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(io_pHeader != NULL) && (io_pHeader->Size > 0)",
      8715LL,
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
        a2 = *(unsigned int *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 122) + 144LL);
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
      v11 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 120);
      if ( v11 )
        return DXGDIAGNOSTICS::WriteDiagnosticEntry(v11, a1);
      WdLogSingleEntry2(2LL, a1, Global);
      WdLogGlobalForLineNumber = 8780;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
      WdLogGlobalForLineNumber = 8730;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
    WdLogGlobalForLineNumber = 8721;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
