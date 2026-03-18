/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x14043B1B4
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14043B090 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140A115D8 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     IoAllocateWorkItem @ 0x14043B2D0 (IoAllocateWorkItem.c)
 *     IoQueueWorkItemEx @ 0x14043B330 (IoQueueWorkItemEx.c)
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
