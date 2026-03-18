/*
 * XREFs of ACPIBuildCompleteGeneric @ 0x14001FA50
 * Callers:
 *     ACPIBuildProcessDeviceGenericEval @ 0x14001FC20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x14001FF30 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x140020340 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x140021920 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140029280 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140029900 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x14004E8A0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x140053BF0 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1400583C0 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x140058C10 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x140058E20 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x140059060 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1400591B0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x140059B60 (ACPIBuildProcessThermalZoneHid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x14001E430 (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildCompleteGeneric(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // eax

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a4 + 48) = a2;
  *(_DWORD *)(a4 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), v4);
}
