/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x1405C9EE0
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1405C9EB0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x140B5D6F4 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140E67160);
  v5 = dword_140E67260;
  if ( a2 )
    dword_140E67260 |= a1;
  else
    dword_140E67260 &= ~a1;
  KeReleaseSpinLock(&qword_140E67160, v4);
  return v5;
}
