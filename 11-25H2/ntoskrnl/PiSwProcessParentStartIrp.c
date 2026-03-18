/*
 * XREFs of PiSwProcessParentStartIrp @ 0x140A7FC24
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140833970 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     IoInvalidateDeviceRelations @ 0x1404943F0 (IoInvalidateDeviceRelations.c)
 *     PiSwFindChildren @ 0x140836178 (PiSwFindChildren.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  PVOID DeviceNode; // rbx
  __int64 Children; // rbx

  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  PiSwLock();
  Children = PiSwFindChildren((__int64)DeviceNode + 40);
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
