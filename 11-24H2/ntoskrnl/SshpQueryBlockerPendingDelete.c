/*
 * XREFs of SshpQueryBlockerPendingDelete @ 0x14048F5A0
 * Callers:
 *     SshpPurgeBlockersWorker @ 0x140A41310 (SshpPurgeBlockersWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
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
