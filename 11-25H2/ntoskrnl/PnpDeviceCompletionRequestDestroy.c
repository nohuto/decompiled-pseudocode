/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x140463AE4
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1404639C0 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140833970 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     IoQueueWorkItemEx @ 0x1402E56E0 (IoQueueWorkItemEx.c)
 *     IoAllocateWorkItem @ 0x140463C00 (IoAllocateWorkItem.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroy(PVOID Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 14, 0xFFFFFFFF) == 1 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 2) + 32LL));
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, PnpDeviceCompletionRequestDestroyWorkItem, DelayedWorkQueue, Context);
  }
}
