/*
 * XREFs of RtlpHpTryAcquireQueuedLockExclusive @ 0x1402B6C98
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1402B7840 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall RtlpHpTryAcquireQueuedLockExclusive(volatile signed __int32 *BugCheckParameter2, int a2, __int64 a3)
{
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rax

  *(_QWORD *)(a3 + 8) = BugCheckParameter2;
  v4 = BugCheckParameter2;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(BugCheckParameter2) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, 2LL);
    }
    *(_QWORD *)(a3 + 16) = CurrentIrql;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      return 1LL;
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1LL);
    if ( !_interlockedbittestandset64(v4, 0LL) )
    {
      if ( v9 )
        *(_BYTE *)(v9 + 10) = 1;
      return 1LL;
    }
    if ( v9 )
      KeAbPostReleaseEx((ULONG_PTR)v4, v9);
    KeLeaveGuardedRegion();
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  return 0LL;
}
