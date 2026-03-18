/*
 * XREFs of KeCanUseHaltOnAddress @ 0x1404FA680
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140311500 (KiSwapDirectoryTableBaseTarget.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14040D57C (KxWaitForLockOwnerShipWithIrql.c)
 *     KeSignalCallDpcSynchronize @ 0x140435830 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x14043AE10 (ExpGetPoolTagInfoTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x140442780 (MiDemoteSlabEntriesDpc.c)
 *     KiSetSystemTimeDpc @ 0x14047BEC0 (KiSetSystemTimeDpc.c)
 *     MiJumpStackTarget @ 0x140480E20 (MiJumpStackTarget.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404B4650 (MiUpdatePageThresholdsDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8330 (MiWritePteHighLevelIsr.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BE170 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ExpLimitInsertDpc @ 0x140654C50 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x14065B1B0 (ExpAeThresholdInitWorker.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14066CE40 (MiFreeUnusedPfnPagesDpc.c)
 *     MiMakeIoRangePermanentDpc @ 0x140676640 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationWorker @ 0x14067C5D0 (MiReapplyImportOptimizationWorker.c)
 *     MiDbgCopyMemoryTarget @ 0x14067E900 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140686640 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14068E960 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     MiDpcGangTarget @ 0x140691650 (MiDpcGangTarget.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
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
