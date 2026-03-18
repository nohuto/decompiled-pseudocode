/*
 * XREFs of PopGetDozeTimerSource @ 0x1405D3718
 * Callers:
 *     PopWnfAudioCallback @ 0x140A36A30 (PopWnfAudioCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 PopGetDozeTimerSource()
{
  unsigned int v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140F0A9D4 )
    v0 = dword_140F0A9D8;
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
  return v0;
}
