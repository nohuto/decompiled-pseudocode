/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x140336AF0
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x14026C140 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpSegMgrLock @ 0x14035CE14 (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14035E2C4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14035FCA0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1403605B0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x140360750 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpSegLockAcquire @ 0x1403640F4 (RtlpHpSegLockAcquire.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403D81F0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403D8DE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLargeLockAcquire @ 0x1404590DC (RtlpHpLargeLockAcquire.c)
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1404596F4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpFixedVsFree @ 0x140498450 (RtlpHpFixedVsFree.c)
 *     RtlpHpHeapExtendContext @ 0x1404A2A8C (RtlpHpHeapExtendContext.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140601B74 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x140601F0C (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpRegisterEnvironment @ 0x140602A30 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140602F30 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpLfhContextLockExtension @ 0x140603DC0 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1406040C0 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14060428C (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall RtlpHpAcquireLockExclusive(int *a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // edi
  int i; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rax
  char *v9; // rdi

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v4 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v4 = ExpWaitForSpinLockExclusiveAndAcquire(a1, CurrentIrql);
      for ( i = *a1; (*a1 & 0xBFFFFFFF) != 0x80000000; i = *a1 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(a1, 0x40000000u);
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
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
    v8 = (char *)KeAbPreAcquire((__int64)a1, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64(a1, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v8, (__int64)a1);
    if ( v9 )
      v9[10] = 1;
    return -1;
  }
}
