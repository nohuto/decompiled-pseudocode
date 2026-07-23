/*
 * XREFs of SshpQueryBlockerPendingDelete @ 0x1404897B0
 * Callers:
 *     SshpPurgeBlockersWorker @ 0x140A36BF0 (SshpPurgeBlockersWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool __fastcall SshpQueryBlockerPendingDelete(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al
  bool v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v3 = (SpinLock[1] & 8) != 0;
  KeReleaseSpinLock(SpinLock, v2);
  return v3;
}
