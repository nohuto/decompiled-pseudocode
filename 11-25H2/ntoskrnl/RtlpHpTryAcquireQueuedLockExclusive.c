/*
 * XREFs of RtlpHpTryAcquireQueuedLockExclusive @ 0x1404F0F38
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1403CA760 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall RtlpHpTryAcquireQueuedLockExclusive(__int64 BugCheckParameter2, int a2, __int64 a3)
{
  volatile signed __int32 *v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx

  *(_QWORD *)(a3 + 8) = BugCheckParameter2;
  v4 = (volatile signed __int32 *)BugCheckParameter2;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(BugCheckParameter2) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2);
    }
    *(_QWORD *)(a3 + 16) = CurrentIrql;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      return 1LL;
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v6 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    if ( !_interlockedbittestandset64(v4, 0LL) )
    {
      if ( v6 )
        *((_BYTE *)v6 + 10) = 1;
      return 1LL;
    }
    if ( v6 )
      KeAbPostReleaseEx((ULONG_PTR)v4, (ULONG_PTR)v6);
    KeLeaveGuardedRegion();
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  return 0LL;
}
