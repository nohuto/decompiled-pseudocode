/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x1402F0434
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1402F0310 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409BF9E8 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     IoAllocateWorkItem @ 0x1402F0550 (IoAllocateWorkItem.c)
 *     IoQueueWorkItemEx @ 0x1402F05B0 (IoQueueWorkItemEx.c)
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
