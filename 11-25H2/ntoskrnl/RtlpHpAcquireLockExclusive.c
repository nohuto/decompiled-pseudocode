/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x140212CB0
 * Callers:
 *     RtlpHpSegLockAcquire @ 0x1402E129C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402FA074 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrLock @ 0x1402FA978 (RtlpHpSegMgrLock.c)
 *     RtlpHpFixedVsAllocate @ 0x14038FCB0 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403C73E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403C801C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1403C8420 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1403CA5D0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLargeLockAcquire @ 0x1403CB6A0 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpVaMgrAlloc @ 0x1403CBCE4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403CC28C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14044FFDC (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpFixedVsFree @ 0x14049E570 (RtlpHpFixedVsFree.c)
 *     RtlpHpHeapExtendContext @ 0x1404A769C (RtlpHpHeapExtendContext.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405F81F4 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405F858C (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpRegisterEnvironment @ 0x1405F90B0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1405F95B0 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpLfhContextLockExtension @ 0x1405FA440 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1405FA740 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1405FA90C (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1405FAA34 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall RtlpHpAcquireLockExclusive(int *a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // rdi

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v4 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v4 = ExpWaitForSpinLockExclusiveAndAcquire(a1, CurrentIrql);
      v5 = *a1;
      v6 = (unsigned int)*a1;
      for ( LODWORD(v6) = v6 & 0xBFFFFFFF; (_DWORD)v6 != 0x80000000; LODWORD(v6) = v6 & 0xBFFFFFFF )
      {
        if ( (v5 & 0x40000000) == 0 )
          _InterlockedOr(a1, 0x40000000u);
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
        v5 = *a1;
        v6 = (unsigned int)*a1;
      }
      return CurrentIrql;
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1, CurrentIrql);
      return CurrentIrql;
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire(a1, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64(a1, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1, v9, a1);
    if ( v10 )
      *(_BYTE *)(v10 + 10) = 1;
    return -1;
  }
}
