/*
 * XREFs of LinkNodeAddLinkNode @ 0x1400701F4
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x14003B890 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeAddLinkNode(_QWORD *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(RootDeviceExtension + 768));
  Context[31] = WorkItem;
  if ( !WorkItem )
    return 3221225626LL;
  IoQueueWorkItem(WorkItem, LinkNodepAddLinkNodeWorker, DelayedWorkQueue, Context);
  return 0LL;
}
