/*
 * XREFs of IoAllocateController @ 0x1404BF880
 * Callers:
 *     DifIoAllocateControllerWrapper @ 0x1406193D0 (DifIoAllocateControllerWrapper.c)
 * Callees:
 *     KeInsertDeviceQueue @ 0x140334EB0 (KeInsertDeviceQueue.c)
 *     IoFreeController @ 0x140593290 (IoFreeController.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
    && (unsigned int)guard_dispatch_icall_no_overrides(DeviceObject, DeviceObject->CurrentIrp) == 2 )
  {
    IoFreeController(ControllerObject);
  }
}
