/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x1404639F0
 * Callers:
 *     PpmAllocWmiEvent @ 0x1405D7E5C (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x140AA6BEC (WmipSetTraceNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x140463A38 (WmipDoFindRegEntryByDevice.c)
 */

ULONG __stdcall IoWMIDeviceObjectToProviderId(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 RegEntryByDevice; // rax
  KIRQL v5; // r8
  ULONG v6; // ebx

  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(DeviceObject, v3, v2);
  v6 = 0;
  if ( RegEntryByDevice )
    v6 = *(_DWORD *)(RegEntryByDevice + 56);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v5);
  return v6;
}
