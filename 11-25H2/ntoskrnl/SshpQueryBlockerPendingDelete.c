/*
 * XREFs of SshpQueryBlockerPendingDelete @ 0x14048FC80
 * Callers:
 *     SshpPurgeBlockersWorker @ 0x140A3D940 (SshpPurgeBlockersWorker.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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
