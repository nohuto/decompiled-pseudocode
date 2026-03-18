/*
 * XREFs of ACPIDevicePowerProcessInvalid @ 0x14005CDF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteRequest @ 0x140026ACC (ACPIDeviceCompleteRequest.c)
 */

__int64 __fastcall ACPIDevicePowerProcessInvalid(__int64 a1)
{
  *(_DWORD *)(a1 + 256) = -1073741585;
  ACPIDeviceCompleteRequest((_QWORD *)a1);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  AcpiPowerDpcFlags |= 2u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  return 3221225711LL;
}
