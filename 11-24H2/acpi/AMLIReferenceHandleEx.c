/*
 * XREFs of AMLIReferenceHandleEx @ 0x140015FC0
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x140014A50 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddress @ 0x140015038 (GetPciAddress.c)
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 *     GetOpRegionScope @ 0x14001612C (GetOpRegionScope.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x14001DC20 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     IsPciBusAsync @ 0x14001E9A0 (IsPciBusAsync.c)
 *     PciConfigInternal @ 0x14001F82C (PciConfigInternal.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x14001F8C0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x14001FC20 (ACPIBuildProcessDeviceGenericEval.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     CmosConfigSpaceHandler @ 0x140028EA0 (CmosConfigSpaceHandler.c)
 *     OSNotifyDeviceEnum @ 0x1400297A0 (OSNotifyDeviceEnum.c)
 *     ACPIBuildDeviceExtension @ 0x140047880 (ACPIBuildDeviceExtension.c)
 *     GetOpRegionScopeWorker @ 0x140049280 (GetOpRegionScopeWorker.c)
 *     IsPciDevice @ 0x140049380 (IsPciDevice.c)
 *     ACPIBuildPowerResourceExtension @ 0x140058A34 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x140058F90 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1400591B0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x140059470 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIEcStartDevice @ 0x14005FAE0 (ACPIEcStartDevice.c)
 *     AcpiHandleInternalNotify @ 0x140064954 (AcpiHandleInternalNotify.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x14009ABC0 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIReferenceHandleEx(__int64 a1)
{
  __int64 result; // rax

  dword_1400890B8 = 0;
  result = (unsigned int)gdwfAMLI;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
