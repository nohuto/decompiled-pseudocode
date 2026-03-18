/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x140615730
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x140BA3E64 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA7084 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 */

void __fastcall ViIrpDatabaseReleaseLockShared(KIRQL a1)
{
  ExReleaseSpinLockShared(&ViIrpDatabaseLock, a1);
}
