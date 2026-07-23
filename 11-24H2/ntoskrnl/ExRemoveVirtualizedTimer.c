/*
 * XREFs of ExRemoveVirtualizedTimer @ 0x14046BD44
 * Callers:
 *     PspProcessUnbindVirtualizedTimers @ 0x14046BC94 (PspProcessUnbindVirtualizedTimers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x14046BDB8 (ExpTimerResume.c)
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
