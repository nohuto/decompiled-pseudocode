/*
 * XREFs of AMLIGetNamedChild @ 0x14001D630
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x14001BD40 (ACPIFilterIrpSetPower.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x14001C1D0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x14001C360 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x14001CE80 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x14001D100 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x14001DC20 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x14001E030 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     IsPciBusAsyncWorker @ 0x14001EA60 (IsPciBusAsyncWorker.c)
 *     ACPIEcRunQueryMethod @ 0x14001F4A0 (ACPIEcRunQueryMethod.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x14001F8C0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x14001FC20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x14001FDA0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x14001FF30 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1400213A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x140021FA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x140023F10 (LinkNodepRestoreIrqRoutingWorker.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1400294B0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140034590 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIGetWorkerForInteger @ 0x140034B40 (ACPIGetWorkerForInteger.c)
 *     ACPIGetProcessorStatus @ 0x140034FAC (ACPIGetProcessorStatus.c)
 *     ACPIBuildMissingEjectionRelations @ 0x14003D6B8 (ACPIBuildMissingEjectionRelations.c)
 *     EnableDisableCMOSRegions @ 0x140040CC0 (EnableDisableCMOSRegions.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x140046670 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x140048850 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x140049610 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x140049E60 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x14004A0D0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x14004A1E0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x14004A900 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004B7B0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     IsPciDeviceWorker @ 0x14004C840 (IsPciDeviceWorker.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x14004CD90 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIInitDosDeviceName @ 0x14004DA9C (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x14004FA90 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x140058F90 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1400591B0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x140059470 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1400598C0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneHrv @ 0x140059C20 (ACPIBuildProcessThermalZoneHrv.c)
 *     ACPIBuildProcessThermalZoneSub @ 0x140059E90 (ACPIBuildProcessThermalZoneSub.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x140059F80 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIInternalEvaluateOST @ 0x140061980 (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x140065944 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x140066190 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIThermalGetSensorDevice @ 0x1400688AC (ACPIThermalGetSensorDevice.c)
 *     LinkNodepRunSrsWorker @ 0x140070260 (LinkNodepRunSrsWorker.c)
 *     ACPIFanStartDevice @ 0x140096820 (ACPIFanStartDevice.c)
 *     ACPIQuerySpareDsm @ 0x14009826C (ACPIQuerySpareDsm.c)
 *     ACPIDockIrpEject @ 0x1400990B0 (ACPIDockIrpEject.c)
 *     ACPIAmliEvaluatePcch @ 0x14009A9E0 (ACPIAmliEvaluatePcch.c)
 *     ACPIEcGetGpeVector @ 0x14009C9D8 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x14009CA7C (ACPIEcGetUid.c)
 *     EnableDisableIPMIRegions @ 0x14009EEB0 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x14009F5D0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x14009F6A0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x14009F780 (ACPIModuleIsValidSpare.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 *     ACPIThermalStartDevice @ 0x1400A78E0 (ACPIThermalStartDevice.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     LinkNodeWriteStateToHardware @ 0x1400B2D74 (LinkNodeWriteStateToHardware.c)
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 *     ACPIThermalWorker @ 0x1400B5660 (ACPIThermalWorker.c)
 *     AcpiGetIdleWakeInfo @ 0x1400B9C10 (AcpiGetIdleWakeInfo.c)
 *     ACPIAmliEvaluateDsm @ 0x1400B9FBC (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1400BA520 (ACPIAmliEvaluateOsc.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1400C0600 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1400C077C (ACPIQueryCacheCoherencyAttribute.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AMLIGetNamedChild(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // rcx
  __int64 *result; // rax

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  while ( 1 )
  {
    if ( v7 == v6 )
    {
      ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
      return 0LL;
    }
    if ( a2 == *((_DWORD *)v6 + 10) )
      break;
    v6 = (__int64 *)*v6;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( !v6 )
    return 0LL;
  result = v6 + 15;
  dword_1400890B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 32);
  return result;
}
