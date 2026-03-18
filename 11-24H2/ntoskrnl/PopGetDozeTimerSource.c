/*
 * XREFs of PopGetDozeTimerSource @ 0x1405D8078
 * Callers:
 *     PopWnfAudioCallback @ 0x140A3B7C0 (PopWnfAudioCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopGetDozeTimerSource()
{
  unsigned int v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140F0BDB4 )
    v0 = dword_140F0BDB8;
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
  return v0;
}
