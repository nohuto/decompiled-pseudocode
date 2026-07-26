/*
 * XREFs of NdisQueueIoWorkItem @ 0x14004CBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisQueueIoWorkItem(
        NDIS_HANDLE NdisIoWorkItemHandle,
        NDIS_IO_WORKITEM_ROUTINE Routine,
        PVOID WorkItemContext)
{
  *((_QWORD *)NdisIoWorkItemHandle + 4) = Routine;
  *((_QWORD *)NdisIoWorkItemHandle + 5) = WorkItemContext;
  IoQueueWorkItem(
    *((PIO_WORKITEM *)NdisIoWorkItemHandle + 2),
    ndisDispatchIoWorkItem,
    CriticalWorkQueue,
    NdisIoWorkItemHandle);
}
