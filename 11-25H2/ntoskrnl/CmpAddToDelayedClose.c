/*
 * XREFs of CmpAddToDelayedClose @ 0x140848A10
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x14044AE54 (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14045AC7C (CmpArmDelayedCloseTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall CmpAddToDelayedClose(ULONG_PTR BugCheckParameter2)
{
  __int64 *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // eax

  v2 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
    ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v2);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
  CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
  v4 = (_QWORD *)(BugCheckParameter2 + 224);
  if ( (_QWORD *)*v4 != v4 )
    KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
  v5 = CmpDelayedLRUListHead;
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v4 = CmpDelayedLRUListHead;
  *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v5 + 8) = v4;
  CmpDelayedLRUListHead = BugCheckParameter2 + 224;
  v6 = CmpDelayedCloseElements;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
  ++qword_140FD9448;
  CmpDelayedCloseElements = v6 + 1;
  if ( v6 + 1 <= (unsigned int)CmpDelayedCloseSize )
  {
    KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
  }
  else
  {
    KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
    CmpArmDelayedCloseTimer();
  }
}
