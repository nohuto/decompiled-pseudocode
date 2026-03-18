/*
 * XREFs of CmpAddToDelayedClose @ 0x140844550
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1404489B8 (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14045A060 (CmpArmDelayedCloseTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall CmpAddToDelayedClose(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8
  unsigned __int8 CurrentIrql; // si
  _QWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // eax

  v2 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
    ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, (__int64)v2, v3);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
  CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
  v5 = (_QWORD *)(BugCheckParameter2 + 224);
  if ( (_QWORD *)*v5 != v5 )
    KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = CmpDelayedLRUListHead;
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v5 = CmpDelayedLRUListHead;
  *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v6 + 8) = v5;
  CmpDelayedLRUListHead = BugCheckParameter2 + 224;
  v7 = CmpDelayedCloseElements;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
  ++qword_140FD9418;
  CmpDelayedCloseElements = v7 + 1;
  if ( v7 + 1 <= (unsigned int)CmpDelayedCloseSize )
  {
    KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
  }
  else
  {
    KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
    CmpArmDelayedCloseTimer();
  }
}
