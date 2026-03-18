/*
 * XREFs of AMLIFreeDataBuffs @ 0x140040074
 * Callers:
 *     ACPIFanSetTripPoints @ 0x1400964E8 (ACPIFanSetTripPoints.c)
 *     ACPIQuerySpareDsm @ 0x14009826C (ACPIQuerySpareDsm.c)
 *     ACPIAmliEvaluatePcch @ 0x14009A9E0 (ACPIAmliEvaluatePcch.c)
 *     ACPIEcGetGpeVector @ 0x14009C9D8 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x14009CA7C (ACPIEcGetUid.c)
 *     ACPIEvaluateDsmMethodOnBurstModeThreshold @ 0x14009CC5C (ACPIEvaluateDsmMethodOnBurstModeThreshold.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x14009DCC8 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIGetUniqueId @ 0x14009F5D0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x14009F6A0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x14009F780 (ACPIModuleIsValidSpare.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1400A0A60 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIPepEpmNotify @ 0x1400A1250 (ACPIPepEpmNotify.c)
 *     ACPIPepInitializeEpmNotificationSupport @ 0x1400A1328 (ACPIPepInitializeEpmNotificationSupport.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1400A1578 (ACPIPepInitializePlatformNotificationSupport.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1400A5090 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1400A6348 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus @ 0x1400A64C4 (ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus.c)
 *     ACPIThermalBuildConstraints @ 0x1400A7698 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalStartDevice @ 0x1400A78E0 (ACPIThermalStartDevice.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1400AEEAC (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIProcessorDeviceControl @ 0x1400B48A0 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalWorker @ 0x1400B5660 (ACPIThermalWorker.c)
 *     AcpiGetIdleWakeInfo @ 0x1400B9C10 (AcpiGetIdleWakeInfo.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1400B9DA0 (ACPIPepPlatformEntryExitNotify.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1400B9E94 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIAmliEvaluateOsc @ 0x1400BA520 (ACPIAmliEvaluateOsc.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1400C077C (ACPIQueryCacheCoherencyAttribute.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_140089138 = 0;
  pszDest = 0;
  return FreeDataBuffs(a1, 1u);
}
