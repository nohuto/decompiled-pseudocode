/*
 * XREFs of HalpMcUpdateUnlock @ 0x1404AE2F8
 * Callers:
 *     HalpPowerStateCallback @ 0x1404AE270 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1405416E0 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 * Callees:
 *     MmUnlockPreChargedPagedPool @ 0x140AAD8F0 (MmUnlockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateUnlock()
{
  if ( McMicrocodePatchRecord && McMicrocodePatchRecordCharged )
    MmUnlockPreChargedPagedPool(McMicrocodePatchRecord, (unsigned int)McMicrocodePatchRecordSize);
  return 0LL;
}
