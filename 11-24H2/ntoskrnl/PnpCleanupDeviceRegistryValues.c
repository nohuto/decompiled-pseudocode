/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x140A0D54C
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140A0EDE0 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A68158 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     PiDeviceRegistration @ 0x140A0CBC4 (PiDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(unsigned __int16 *a1)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return PiDeviceRegistration(a1, 0, 0LL);
}
