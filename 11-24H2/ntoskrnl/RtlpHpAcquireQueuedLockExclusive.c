/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x140336C60
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     RtlpHpVsSlotFreeList @ 0x14035C0D0 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x14035C460 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsChunkFree @ 0x1403645D0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsChunkSplit @ 0x140366900 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextAllocate @ 0x14036781C (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x140367A10 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1403682CC (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

signed __int64 __fastcall RtlpHpAcquireQueuedLockExclusive(int *a1, int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // esi
  int i; // edx
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v10; // rdi

  *(_QWORD *)(a3 + 8) = a1;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v6 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v6 = ExpWaitForSpinLockExclusiveAndAcquire(a1, CurrentIrql);
      for ( i = *a1; (*a1 & 0xBFFFFFFF) != 0x80000000; i = *a1 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(a1, 0x40000000u);
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1, CurrentIrql);
    }
    result = CurrentIrql;
    *(_QWORD *)(a3 + 16) = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    result = (signed __int64)KeAbPreAcquire((__int64)a1, 0LL);
    v10 = result;
    if ( _interlockedbittestandset64(a1, 0LL) )
      result = ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, (char *)result, (__int64)a1);
    if ( v10 )
      *(_BYTE *)(v10 + 10) = 1;
  }
  return result;
}
