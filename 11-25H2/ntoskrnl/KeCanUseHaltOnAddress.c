/*
 * XREFs of KeCanUseHaltOnAddress @ 0x1404F81B0
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14040AF50 (KiSwapDirectoryTableBaseTarget.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14041FAB0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeSignalCallDpcSynchronize @ 0x140439280 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x14043C240 (ExpGetPoolTagInfoTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x14044E510 (MiDemoteSlabEntriesDpc.c)
 *     KiSetSystemTimeDpc @ 0x14047ACB0 (KiSetSystemTimeDpc.c)
 *     MiJumpStackTarget @ 0x140480160 (MiJumpStackTarget.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404B4D30 (MiUpdatePageThresholdsDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8D10 (MiWritePteHighLevelIsr.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BA330 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ExpLimitInsertDpc @ 0x140648D50 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x14064F220 (ExpAeThresholdInitWorker.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140661300 (MiFreeUnusedPfnPagesDpc.c)
 *     MiMakeIoRangePermanentDpc @ 0x14066ABE0 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationWorker @ 0x140670E10 (MiReapplyImportOptimizationWorker.c)
 *     MiDbgCopyMemoryTarget @ 0x1406730E0 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x14067ADB0 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x1406830D0 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     MiDpcGangTarget @ 0x1406861F0 (MiDpcGangTarget.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 */

bool KeCanUseHaltOnAddress()
{
  char v0; // bl
  unsigned __int8 CurrentIrql; // al

  v0 = KiHaltOnAddressFlags;
  if ( (KiHaltOnAddressFlags & 2) == 0 || !KeAreInterruptsEnabled() )
    return 0;
  CurrentIrql = KeGetCurrentIrql();
  return (v0 & 4) != 0 || CurrentIrql < 0xEu;
}
