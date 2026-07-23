/*
 * XREFs of KeCanUseHaltOnAddress @ 0x1404F7F60
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403F4770 (KiSwapDirectoryTableBaseTarget.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1404057CC (KxWaitForLockOwnerShipWithIrql.c)
 *     KeSignalCallDpcSynchronize @ 0x1404282B0 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x14042D650 (ExpGetPoolTagInfoTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x14043B750 (MiDemoteSlabEntriesDpc.c)
 *     KiSetSystemTimeDpc @ 0x140477490 (KiSetSystemTimeDpc.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404AEE90 (MiUpdatePageThresholdsDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1404B2C80 (MiWritePteHighLevelIsr.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BB7A0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ExpLimitInsertDpc @ 0x140653350 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x1406598D0 (ExpAeThresholdInitWorker.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14066E010 (MiFreeUnusedPfnPagesDpc.c)
 *     MiMakeIoRangePermanentDpc @ 0x140677810 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationWorker @ 0x14067D7B0 (MiReapplyImportOptimizationWorker.c)
 *     MiDbgCopyMemoryTarget @ 0x14067FB00 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140687770 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14068FA90 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     MiDpcGangTarget @ 0x140692720 (MiDpcGangTarget.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
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
