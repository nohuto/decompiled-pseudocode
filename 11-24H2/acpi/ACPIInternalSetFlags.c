/*
 * XREFs of ACPIInternalSetFlags @ 0x14003FF48
 * Callers:
 *     ACPIFilterIrpQueryIdCompletion @ 0x14009E6C0 (ACPIFilterIrpQueryIdCompletion.c)
 *     PcisuppAcquirePciInterfaces @ 0x1400A9094 (PcisuppAcquirePciInterfaces.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400AE5B0 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIBusIrpQueryId @ 0x1400B8CC0 (ACPIBusIrpQueryId.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1400B9E94 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1400BCC50 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1400C077C (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIInternalIsPci @ 0x1400C0C40 (ACPIInternalIsPci.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
