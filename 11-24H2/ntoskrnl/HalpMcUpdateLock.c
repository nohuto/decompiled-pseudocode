/*
 * XREFs of HalpMcUpdateLock @ 0x1404BAD8C
 * Callers:
 *     HalpPowerStateCallback @ 0x1404AE270 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1405416E0 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 * Callees:
 *     MmLockPreChargedPagedPool @ 0x140ABD5D0 (MmLockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateLock()
{
  if ( McMicrocodePatchRecord && McMicrocodePatchRecordCharged )
    MmLockPreChargedPagedPool(McMicrocodePatchRecord, (unsigned int)McMicrocodePatchRecordSize);
  return 0LL;
}
