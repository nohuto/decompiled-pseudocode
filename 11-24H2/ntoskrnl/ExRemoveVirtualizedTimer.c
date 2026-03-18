/*
 * XREFs of ExRemoveVirtualizedTimer @ 0x1403E4090
 * Callers:
 *     PspProcessUnbindVirtualizedTimers @ 0x1403E3FE0 (PspProcessUnbindVirtualizedTimers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x1403E4104 (ExpTimerResume.c)
 */

__int64 __fastcall ExRemoveVirtualizedTimer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi

  v1 = a1 - 288;
  v2 = *(_QWORD *)(a1 - 288 + 280);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 - 288 + 64));
  *(_QWORD *)(v1 + 280) = 0LL;
  if ( (*(_BYTE *)(v1 + 304) & 2) != 0 )
    ExpTimerResume((PKTIMER)v1);
  KxReleaseSpinLock((volatile signed __int64 *)(v1 + 64));
  return v2;
}
