/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x1404643D0
 * Callers:
 *     PpmAllocWmiEvent @ 0x1405D34FC (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x140AA1848 (WmipSetTraceNotify.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     WmipDoFindRegEntryByDevice @ 0x140464418 (WmipDoFindRegEntryByDevice.c)
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
