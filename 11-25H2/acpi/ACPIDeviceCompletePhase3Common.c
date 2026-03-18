/*
 * XREFs of ACPIDeviceCompletePhase3Common @ 0x14001D478
 * Callers:
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x14001CCE0 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x14001D940 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDeviceCompletePhase3Off @ 0x140029F00 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x14002A040 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1400318F0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIDeviceCompleteOscReevalPhase @ 0x14004D540 (ACPIDeviceCompleteOscReevalPhase.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x14005CBD0 (ACPIDeviceCompletePhase3Reset.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x14001D5EC (ACPIPowerScheduleDpc.c)
 */

void __fastcall ACPIDeviceCompletePhase3Common(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
