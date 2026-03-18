/*
 * XREFs of AMLIIsNamedChildPresent @ 0x140029050
 * Callers:
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 *     ACPIBusIrpQueryPower @ 0x140028D80 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x140028FBC (CmosGetOpRegionType.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1400294B0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140029900 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIRootIrpQueryPower @ 0x140029A30 (ACPIRootIrpQueryPower.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14003C120 (ACPIDispatchIrpDepPdoQueryID.c)
 *     EnableDisableCMOSRegions @ 0x140040CC0 (EnableDisableCMOSRegions.c)
 *     ACPIFilterIrpQueryPower @ 0x140045EA0 (ACPIFilterIrpQueryPower.c)
 *     ACPIBuildPdo @ 0x140046840 (ACPIBuildPdo.c)
 *     ACPIDockIrpQueryPower @ 0x140057710 (ACPIDockIrpQueryPower.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005CE50 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x14005CFE0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIDockIrpQueryCapabilities @ 0x140099350 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIInternalSetProximityDomain @ 0x1400AD988 (ACPIInternalSetProximityDomain.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400B78F0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1400BAA18 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // rcx

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  while ( v7 != v6 )
  {
    if ( a2 == *((_DWORD *)v6 + 10) )
      goto LABEL_6;
    v6 = (__int64 *)*v6;
  }
  v6 = 0LL;
LABEL_6:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return v6 != 0LL;
}
