/*
 * XREFs of CmpAddToDelayedClose @ 0x140840810
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x140441108 (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14044F4B0 (CmpArmDelayedCloseTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall CmpAddToDelayedClose(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // si
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // eax

  v2 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
    ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, (__int64)v2, v3, v4);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
  CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
  v6 = (_QWORD *)(BugCheckParameter2 + 224);
  if ( (_QWORD *)*v6 != v6 )
    KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
  v7 = CmpDelayedLRUListHead;
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v6 = CmpDelayedLRUListHead;
  *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v7 + 8) = v6;
  CmpDelayedLRUListHead = BugCheckParameter2 + 224;
  v8 = CmpDelayedCloseElements;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
  ++qword_140FDA428;
  CmpDelayedCloseElements = v8 + 1;
  if ( v8 + 1 <= (unsigned int)CmpDelayedCloseSize )
  {
    KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
  }
  else
  {
    KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
    CmpArmDelayedCloseTimer();
  }
}
