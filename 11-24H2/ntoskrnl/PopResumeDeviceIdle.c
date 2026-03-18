/*
 * XREFs of PopResumeDeviceIdle @ 0x1404D9158
 * Callers:
 *     PoClearBroadcast @ 0x140A8BD00 (PoClearBroadcast.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140E6743C = 0;
  KeReleaseSpinLock(&PopDopeGlobalLock, v0);
}
