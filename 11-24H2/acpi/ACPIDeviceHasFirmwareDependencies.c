/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x140038694
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1400175C0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalLoopEx @ 0x140037A14 (ACPIThermalLoopEx.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1400AFB28 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1120) & 0x40) != 0 || *(_QWORD *)(a1 + 648) != 0LL;
}
