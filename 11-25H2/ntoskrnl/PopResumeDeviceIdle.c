/*
 * XREFs of PopResumeDeviceIdle @ 0x1404DA1A8
 * Callers:
 *     PoClearBroadcast @ 0x140A86FE8 (PoClearBroadcast.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void PopResumeDeviceIdle()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140E6717C = 0;
  KeReleaseSpinLock(&PopDopeGlobalLock, v0);
}
