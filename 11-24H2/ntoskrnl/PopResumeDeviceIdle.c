/*
 * XREFs of PopResumeDeviceIdle @ 0x1404D25A8
 * Callers:
 *     PoClearBroadcast @ 0x140A881F0 (PoClearBroadcast.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140E6759C = 0;
  KeReleaseSpinLock(&PopDopeGlobalLock, v0);
}
