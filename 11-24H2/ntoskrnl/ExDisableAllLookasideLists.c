/*
 * XREFs of ExDisableAllLookasideLists @ 0x14065587C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B85980 (VfInitSystemNoRebootNeeded.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
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
