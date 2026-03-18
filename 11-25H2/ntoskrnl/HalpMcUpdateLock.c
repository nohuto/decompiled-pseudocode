/*
 * XREFs of HalpMcUpdateLock @ 0x1404BB93C
 * Callers:
 *     HalpPowerStateCallback @ 0x14036D0F0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14053EEB0 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x1406F5C90 (HalpLoadMicrocode.c)
 * Callees:
 *     MmLockPreChargedPagedPool @ 0x140AB94D0 (MmLockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateLock()
{
  if ( McMicrocodePatchRecord && McMicrocodePatchRecordCharged )
    MmLockPreChargedPagedPool(McMicrocodePatchRecord, (unsigned int)McMicrocodePatchRecordSize);
  return 0LL;
}
