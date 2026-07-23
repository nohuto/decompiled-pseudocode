/*
 * XREFs of RtlpHpTryAcquireQueuedLockExclusive @ 0x14036810C
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14036781C (RtlpHpVsContextAllocate.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall RtlpHpTryAcquireQueuedLockExclusive(__int64 BugCheckParameter2, int a2, __int64 a3)
{
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rax

  *(_QWORD *)(a3 + 8) = BugCheckParameter2;
  v4 = (volatile signed __int32 *)BugCheckParameter2;
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
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v4) )
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
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    if ( !_interlockedbittestandset64(v4, 0LL) )
    {
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      return 1LL;
    }
    if ( v9 )
      KeAbPostReleaseEx((ULONG_PTR)v4, (ULONG_PTR)v9);
    KeLeaveGuardedRegion();
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  return 0LL;
}
