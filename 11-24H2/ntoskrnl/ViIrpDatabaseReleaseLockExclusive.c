/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x140613CD0
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140B93D28 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140BA5F10 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140BA8DE4 (IovpCompleteRequest2.c)
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140BA9000 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall ViIrpDatabaseReleaseLockExclusive(KIRQL a1)
{
  ExReleaseSpinLockExclusive(&ViIrpDatabaseLock, a1);
}
