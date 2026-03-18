/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x140213800
 * Callers:
 *     RtlpHpVsChunkFree @ 0x1402E1780 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsChunkSplit @ 0x1402E3A80 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402F8650 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsContextAllocate @ 0x1403CA760 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsContextMultiAlloc @ 0x14043C778 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsSlotFreeList @ 0x1404EFFFC (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1404F021C (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsSlotAllocate @ 0x1404F074C (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v6 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v6 = ExpWaitForSpinLockExclusiveAndAcquire(a1, CurrentIrql);
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
