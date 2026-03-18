/*
 * XREFs of HalpMcUpdateUnlock @ 0x14036D0B0
 * Callers:
 *     HalpPowerStateCallback @ 0x14036D0F0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14053EEB0 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x1406F5C90 (HalpLoadMicrocode.c)
 * Callees:
 *     MmUnlockPreChargedPagedPool @ 0x140AA8410 (MmUnlockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateUnlock()
{
  if ( McMicrocodePatchRecord && McMicrocodePatchRecordCharged )
    MmUnlockPreChargedPagedPool(McMicrocodePatchRecord, (unsigned int)McMicrocodePatchRecordSize);
  return 0LL;
}
