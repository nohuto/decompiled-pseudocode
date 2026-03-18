/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x14020D900
 * Callers:
 *     RtlpHpVsSlotFreeList @ 0x1402B3510 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1402B3AF0 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsContextAllocate @ 0x1402B7840 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsChunkFree @ 0x1402BCE90 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF1C0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotAllocate @ 0x1402C00DC (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402C08BC (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsContextMultiAlloc @ 0x1402C0B14 (RtlpHpVsContextMultiAlloc.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall RtlpHpAcquireQueuedLockExclusive(int *a1, int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // esi
  int v7; // edx
  __int64 v8; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdi

  *(_QWORD *)(a3 + 8) = a1;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v6 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v6 = ExpWaitForSpinLockExclusiveAndAcquire(a1, CurrentIrql, a3);
      v7 = *a1;
      v8 = (unsigned int)*a1;
      LODWORD(v8) = v8 & 0xBFFFFFFF;
      if ( (_DWORD)v8 != 0x80000000 )
      {
        do
        {
          if ( (v7 & 0x40000000) == 0 )
            _InterlockedOr(a1, 0x40000000u);
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
          v7 = *a1;
        }
        while ( (*a1 & 0xBFFFFFFF) != 0x80000000 );
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
    result = KeAbPreAcquire(a1, 0LL, 0LL);
    v11 = result;
    if ( _interlockedbittestandset64(a1, 0LL) )
      result = ExfAcquirePushLockExclusiveEx(a1, result, a1);
    if ( v11 )
      *(_BYTE *)(v11 + 10) = 1;
  }
  return result;
}
