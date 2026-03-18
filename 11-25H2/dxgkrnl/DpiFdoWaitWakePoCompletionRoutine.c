/*
 * XREFs of DpiFdoWaitWakePoCompletionRoutine @ 0x14008B1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoWaitWakePoCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PVOID DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( IoStatus->Status < 0 )
  {
    WdLogSingleEntry1(4LL, IoStatus->Status);
    WdLogGlobalForLineNumber = 459;
  }
  *((_QWORD *)DeviceExtension + 345) = 0LL;
  IoQueueWorkItemEx(
    *((PIO_WORKITEM *)DeviceExtension + 346),
    DpiFdoWaitWakePoCompletionWorkItem,
    DelayedWorkQueue,
    (PVOID)IoStatus->Status);
}
