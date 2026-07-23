/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x14045A130
 * Callers:
 *     PpmAllocWmiEvent @ 0x1405D53DC (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x140AA1CE8 (WmipSetTraceNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x14045A178 (WmipDoFindRegEntryByDevice.c)
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
