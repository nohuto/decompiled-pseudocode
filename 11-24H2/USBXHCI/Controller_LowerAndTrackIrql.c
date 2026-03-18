/*
 * XREFs of Controller_LowerAndTrackIrql @ 0x14000DC30
 * Callers:
 *     Command_HandleCommandRingStoppedEvent @ 0x14000A09C (Command_HandleCommandRingStoppedEvent.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14000A640 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     RootHub_DetectLinkErrorState @ 0x14000AEF8 (RootHub_DetectLinkErrorState.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x14000B2A0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x14000B478 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000BED4 (RootHub_AcquireReadModifyWriteLock.c)
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
 *     Interrupter_AcquireEventRingLock @ 0x140022440 (Interrupter_AcquireEventRingLock.c)
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
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_LowerAndTrackIrql(_QWORD *a1)
{
  __int64 CurrentProcessorNumber; // rdi
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rdx
  KIRQL v6; // cl
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rax
  KIRQL CurrentIrql; // al
  int v10; // edx

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    if ( (unsigned int)CurrentProcessorNumber >= *((_DWORD *)a1 + 318) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v3,
          4,
          335,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          CurrentProcessorNumber);
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v7, 2uLL, 1uLL);
    }
    v4 = a1[158];
    v5 = 2 * CurrentProcessorNumber;
    v6 = *(_BYTE *)(2 * CurrentProcessorNumber + v4 + 1);
    if ( !*(_BYTE *)(2 * CurrentProcessorNumber + v4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v5,
          4,
          336,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          CurrentProcessorNumber);
      }
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v8, 2uLL, 2uLL);
    }
    *(_BYTE *)(v5 + v4) = 0;
    *(_BYTE *)(v5 + a1[158] + 1) = -1;
    KeLowerIrql(v6);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a1[9], v10, 4, 337, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, CurrentIrql);
    }
    Debug_FreAssertMsg(
      "Expected to be called at DISPATCH_LEVEL.",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      14184LL);
    Controller_ReportFatalError((int)a1, 0, 4136, 0, 0LL, 0LL, 0LL);
  }
}
