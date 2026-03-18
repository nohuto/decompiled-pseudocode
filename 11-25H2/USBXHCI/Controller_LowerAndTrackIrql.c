/*
 * XREFs of Controller_LowerAndTrackIrql @ 0x140019630
 * Callers:
 *     Control_Transfer_Map @ 0x140004C90 (Control_Transfer_Map.c)
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x140008750 (RootHub_AcquireReadModifyWriteLock.c)
 *     Command_HandleCommandCompletionEvent @ 0x140008884 (Command_HandleCommandCompletionEvent.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008F4C (RootHub_DetectAndAcknowledgePortResume.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x140009D50 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DetectLinkErrorState @ 0x14000A288 (RootHub_DetectLinkErrorState.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14000A910 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x14000B510 (Interrupter_WdfEvtInterruptEnable.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x14000B6C0 (Interrupter_WdfEvtInterruptDisable.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x14001AA60 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x14001C3D0 (Bulk_MapStage.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x14001CA40 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MapStage @ 0x14001EC00 (Isoch_MapStage.c)
 *     Control_WdfEvtIoDefault @ 0x140022110 (Control_WdfEvtIoDefault.c)
 *     Interrupter_AcquireEventRingLock @ 0x140023380 (Interrupter_AcquireEventRingLock.c)
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
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
    if ( (unsigned int)CurrentProcessorNumber >= *((_DWORD *)a1 + 320) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v3,
          4,
          335,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          CurrentProcessorNumber);
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v7, 2uLL, 1uLL);
    }
    v4 = a1[159];
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
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          CurrentProcessorNumber);
      }
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v8, 2uLL, 2uLL);
    }
    *(_BYTE *)(v5 + v4) = 0;
    *(_BYTE *)(v5 + a1[159] + 1) = -1;
    KeLowerIrql(v6);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a1[9], v10, 4, 337, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, CurrentIrql);
    }
    Debug_FreAssertMsg(
      (__int64)"Expected to be called at DISPATCH_LEVEL.",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      14154);
    Controller_ReportFatalError((int)a1, 0, 4136, 0, 0LL, 0LL, 0LL);
  }
}
