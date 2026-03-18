/*
 * XREFs of ExDisableAllLookasideLists @ 0x14064B288
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B739A0 (VfInitSystemNoRebootNeeded.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void ExDisableAllLookasideLists()
{
  KIRQL v0; // al
  __int64 *i; // rdx
  KIRQL v2; // al
  __int64 *j; // rdx

  ExMinimumLookasideDepth = 0;
  v0 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  for ( i = (__int64 *)ExNPagedLookasideListHead; i != &ExNPagedLookasideListHead; i = (__int64 *)*i )
    *((_DWORD *)i - 12) = -65536;
  KeReleaseSpinLock(&ExNPagedLookasideLock, v0);
  v2 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  for ( j = (__int64 *)ExPagedLookasideListHead; j != &ExPagedLookasideListHead; j = (__int64 *)*j )
    *((_DWORD *)j - 12) = -65536;
  KeReleaseSpinLock(&ExPagedLookasideLock, v2);
}
