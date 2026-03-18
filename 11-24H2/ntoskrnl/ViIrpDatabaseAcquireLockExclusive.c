/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x1406156C8
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140B91D28 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140BA3F10 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA3FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140BA6DE4 (IovpCompleteRequest2.c)
 *     IovFreeIrpPrivate @ 0x140BA6F30 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140BA7000 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
