/*
 * XREFs of Controller_RaiseAndTrackIrql @ 0x14001C700
 * Callers:
 *     Control_Transfer_Map @ 0x140004C90 (Control_Transfer_Map.c)
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     Command_HandleCommandCompletionEvent @ 0x140008884 (Command_HandleCommandCompletionEvent.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x140008E18 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008F4C (RootHub_DetectAndAcknowledgePortResume.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x140009D50 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DetectLinkErrorState @ 0x14000A288 (RootHub_DetectLinkErrorState.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x14000B510 (Interrupter_WdfEvtInterruptEnable.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x14000B6C0 (Interrupter_WdfEvtInterruptDisable.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x14001AA60 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x14001C3D0 (Bulk_MapStage.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x14001CA40 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MapStage @ 0x14001EC00 (Isoch_MapStage.c)
 *     Control_WdfEvtIoDefault @ 0x140022110 (Control_WdfEvtIoDefault.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1400232A4 (Interrupter_ReleaseEventRingLock.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140025C8C (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x140025D50 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Bulk_EP_StartMapping @ 0x14002BE30 (Bulk_EP_StartMapping.c)
 *     Control_EP_StartMapping @ 0x14002FD30 (Control_EP_StartMapping.c)
 *     Isoch_EP_StartMapping @ 0x140033290 (Isoch_EP_StartMapping.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1400360C8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1400367E8 (Command_HandleCommandRingStoppedEvent.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x140039780 (Interrupter_WdfEvtInterruptIsr.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C8A8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x14004C790 (Control_WdfEvtWorkItemForTransferCompletion.c)
 *     Control_WdfWorkItemForCanceledOnQueueTransferCompletion @ 0x14004C870 (Control_WdfWorkItemForCanceledOnQueueTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x14004D130 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x14004DC50 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 *     ESM_SmWorker @ 0x140055A10 (ESM_SmWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x14004577C (WPP_RECORDER_SF_sds.c)
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
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v2, 4, 333, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
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
    if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 1280) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v5,
          4,
          334,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
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
      *(_BYTE *)(v8 + *(_QWORD *)(a1 + 1272)) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 1272) + v8 + 1) = v3;
    }
  }
  return result;
}
