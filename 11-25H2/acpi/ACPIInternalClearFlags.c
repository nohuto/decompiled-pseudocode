/*
 * XREFs of ACPIInternalClearFlags @ 0x14003E7CC
 * Callers:
 *     ACPIBusAndFilterIrpEject @ 0x140096CA0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIrpEject @ 0x1400990B0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x14009A030 (ACPIDockIrpStartDevice.c)
 *     PcisuppReleasePciInterfaces @ 0x1400A9244 (PcisuppReleasePciInterfaces.c)
 *     ACPIInternalSetSpare @ 0x1400AD5B4 (ACPIInternalSetSpare.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400AE5B0 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIDetectFilterMatch @ 0x1400AFA94 (ACPIDetectFilterMatch.c)
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
