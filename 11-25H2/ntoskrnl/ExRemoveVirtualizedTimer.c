/*
 * XREFs of ExRemoveVirtualizedTimer @ 0x1402F4844
 * Callers:
 *     PspProcessUnbindVirtualizedTimers @ 0x1402F4794 (PspProcessUnbindVirtualizedTimers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x1402F48B8 (ExpTimerResume.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
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
  KxReleaseSpinLock(v1 + 64);
  return v2;
}
