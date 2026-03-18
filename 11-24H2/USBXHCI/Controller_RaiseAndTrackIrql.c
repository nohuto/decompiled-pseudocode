/*
 * XREFs of Controller_RaiseAndTrackIrql @ 0x14000DA20
 * Callers:
 *     Command_HandleCommandRingStoppedEvent @ 0x14000A09C (Command_HandleCommandRingStoppedEvent.c)
 *     RootHub_DetectLinkErrorState @ 0x14000AEF8 (RootHub_DetectLinkErrorState.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x14000B2A0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x14000B478 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000C924 (RootHub_ReleaseReadModifyWriteLock.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x14000D810 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x14000DE40 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MapStage @ 0x140010000 (Isoch_MapStage.c)
 *     Bulk_MapStage @ 0x1400176E0 (Bulk_MapStage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x140017A08 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x14001B6E0 (Interrupter_WdfEvtInterruptEnable.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x14001B890 (Interrupter_WdfEvtInterruptDisable.c)
 *     Control_Transfer_Map @ 0x14001E4D0 (Control_Transfer_Map.c)
 *     Control_EP_StartMapping @ 0x14001FB00 (Control_EP_StartMapping.c)
 *     Control_WdfEvtIoDefault @ 0x140021340 (Control_WdfEvtIoDefault.c)
 *     Interrupter_ReleaseEventRingLock @ 0x140022364 (Interrupter_ReleaseEventRingLock.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140022E7C (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x140025750 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Isoch_EP_StartMapping @ 0x140031D50 (Isoch_EP_StartMapping.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x1400386B0 (Interrupter_WdfEvtInterruptIsr.c)
 *     Bulk_EP_StartMapping @ 0x140038C50 (Bulk_EP_StartMapping.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C838 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x14004BE80 (Control_WdfEvtWorkItemForTransferCompletion.c)
 *     Control_WdfWorkItemForCanceledOnQueueTransferCompletion @ 0x14004BF60 (Control_WdfWorkItemForCanceledOnQueueTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x14004C820 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x14004D380 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 *     ESM_SmWorker @ 0x1400550B0 (ESM_SmWorker.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 */

char __fastcall Controller_RaiseAndTrackIrql(__int64 a1)
{
  int v2; // edx
  KIRQL v3; // di
  ULONG CurrentProcessorNumber; // eax
  int v5; // edx
  __int64 v6; // rcx
  char result; // al
  __int64 v8; // rdx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  int v14; // r9d

  if ( KeGetCurrentIrql() == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v2, 4, 333, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalError(a1, 0, 4134, 0, 0LL, 0LL, 0LL);
    return 0;
  }
  else
  {
    v3 = KfRaiseIrql(2u);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 1272) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v5,
          4,
          334,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          CurrentProcessorNumber);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalError(a1, 0, 4135, 0, 0LL, 0LL, 0LL);
      KeLowerIrql(v3);
      return 0;
    }
    else
    {
      v6 = CurrentProcessorNumber;
      result = 1;
      v8 = 2 * v6;
      *(_BYTE *)(v8 + *(_QWORD *)(a1 + 1264)) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 1264) + v8 + 1) = v3;
    }
  }
  return result;
}
