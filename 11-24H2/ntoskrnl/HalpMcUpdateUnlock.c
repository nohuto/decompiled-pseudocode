/*
 * XREFs of HalpMcUpdateUnlock @ 0x1404A8C08
 * Callers:
 *     HalpPowerStateCallback @ 0x1404A8B80 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14053EFE0 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 * Callees:
 *     MmUnlockPreChargedPagedPool @ 0x140AA8970 (MmUnlockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateUnlock()
{
  if ( McMicrocodePatchRecord && McMicrocodePatchRecordCharged )
    MmUnlockPreChargedPagedPool(McMicrocodePatchRecord, (unsigned int)McMicrocodePatchRecordSize);
  return 0LL;
}
