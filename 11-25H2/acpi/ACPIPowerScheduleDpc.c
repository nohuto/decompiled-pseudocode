/*
 * XREFs of ACPIPowerScheduleDpc @ 0x14001D5EC
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x14001C880 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x14001CB70 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDeviceInternalQueueRequest @ 0x14001D388 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDeviceCompletePhase3Common @ 0x14001D478 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDeviceCompleteRequest @ 0x140026ACC (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildDeviceDpc @ 0x14002A280 (ACPIBuildDeviceDpc.c)
 *     ACPITableLoadCallBack @ 0x140051AD0 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1400C715C (ACPIInitStartACPI.c)
 * Callees:
 *     <none>
 */

char ACPIPowerScheduleDpc()
{
  int v0; // eax

  v0 = AcpiPowerDpcFlags | 2;
  AcpiPowerDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiPowerDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
  }
  return v0;
}
