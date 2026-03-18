/*
 * XREFs of PiSwProcessParentStartIrp @ 0x140A11698
 * Callers:
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140A115D8 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     IoInvalidateDeviceRelations @ 0x1404931D0 (IoInvalidateDeviceRelations.c)
 *     PiSwLock @ 0x1408B9494 (PiSwLock.c)
 *     PiSwFindChildren @ 0x1408BA5E0 (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  __int64 Children; // rbx

  PiSwLock();
  Children = PiSwFindChildren();
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
