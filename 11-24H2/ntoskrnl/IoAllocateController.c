/*
 * XREFs of IoAllocateController @ 0x1404BE150
 * Callers:
 *     DifIoAllocateControllerWrapper @ 0x140625390 (DifIoAllocateControllerWrapper.c)
 * Callees:
 *     KeInsertDeviceQueue @ 0x14038E850 (KeInsertDeviceQueue.c)
 *     IoFreeController @ 0x140596940 (IoFreeController.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoAllocateController(
        PCONTROLLER_OBJECT ControllerObject,
        PDEVICE_OBJECT DeviceObject,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  DeviceObject->Queue.Wcb.DeviceRoutine = ExecutionRoutine;
  DeviceObject->Queue.Wcb.DeviceContext = Context;
  if ( !KeInsertDeviceQueue(&ControllerObject->DeviceWaitQueue, (PKDEVICE_QUEUE_ENTRY)&DeviceObject->Queue)
    && (unsigned int)guard_dispatch_icall_no_overrides(DeviceObject, DeviceObject->CurrentIrp, 0LL, Context) == 2 )
  {
    IoFreeController(ControllerObject);
  }
}
