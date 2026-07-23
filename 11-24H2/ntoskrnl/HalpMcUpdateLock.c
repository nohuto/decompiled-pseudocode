/*
 * XREFs of HalpMcUpdateLock @ 0x1404B5C2C
 * Callers:
 *     HalpPowerStateCallback @ 0x1404A8B80 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14053EFE0 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 * Callees:
 *     MmLockPreChargedPagedPool @ 0x140AB8640 (MmLockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateLock()
{
  if ( McMicrocodePatchRecord && McMicrocodePatchRecordCharged )
    MmLockPreChargedPagedPool(McMicrocodePatchRecord, (unsigned int)McMicrocodePatchRecordSize);
  return 0LL;
}
