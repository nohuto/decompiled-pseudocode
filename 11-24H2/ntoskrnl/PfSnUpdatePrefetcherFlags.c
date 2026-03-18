/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x1405CC770
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1405CC740 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x140B5B684 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140E67010);
  v5 = dword_140E67110;
  if ( a2 )
    dword_140E67110 |= a1;
  else
    dword_140E67110 &= ~a1;
  KeReleaseSpinLock(&qword_140E67010, v4);
  return v5;
}
