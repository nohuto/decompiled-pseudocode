/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x14001ADC0
 * Callers:
 *     ACPIEcRemoveOpRegionHandler @ 0x14009CB48 (ACPIEcRemoveOpRegionHandler.c)
 *     DeRegisterOpRegionHandler @ 0x1400A2380 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1400A23C0 (RegisterOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1400BC510 (AcpiGetFullyQualifiedBiosName.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
}
