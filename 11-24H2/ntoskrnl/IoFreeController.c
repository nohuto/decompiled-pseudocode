/*
 * XREFs of IoFreeController @ 0x140593920
 * Callers:
 *     IoAllocateController @ 0x1404B9310 (IoAllocateController.c)
 *     DifIoFreeControllerWrapper @ 0x1406268C0 (DifIoFreeControllerWrapper.c)
 * Callees:
 *     KeRemoveDeviceQueue @ 0x14038A4B0 (KeRemoveDeviceQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoFreeController(PCONTROLLER_OBJECT ControllerObject)
{
  struct _KDEVICE_QUEUE *p_DeviceWaitQueue; // rbx
  PKDEVICE_QUEUE_ENTRY v2; // rax

  p_DeviceWaitQueue = &ControllerObject->DeviceWaitQueue;
  do
    v2 = KeRemoveDeviceQueue(p_DeviceWaitQueue);
  while ( v2 && (unsigned int)guard_dispatch_icall_no_overrides(&v2[-4].SortKey, v2[-2].DeviceListEntry.Flink) == 2 );
}
