/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x1405C81A0
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1405C8170 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x140B4B714 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140E66D50);
  v5 = dword_140E66E50;
  if ( a2 )
    dword_140E66E50 |= a1;
  else
    dword_140E66E50 &= ~a1;
  KeReleaseSpinLock(&qword_140E66D50, v4);
  return v5;
}
