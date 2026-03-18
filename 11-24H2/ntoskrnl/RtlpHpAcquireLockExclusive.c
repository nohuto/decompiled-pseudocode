/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x14020D790
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1402B55B8 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402B61E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402B8E70 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402B9010 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpSegLockAcquire @ 0x1402BC9B4 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegMgrLock @ 0x1402C0D1C (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402C25F4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLargeLockAcquire @ 0x140420E08 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpVaMgrCtxFree @ 0x140421038 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140421420 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14045CC3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpFixedVsFree @ 0x14049D650 (RtlpHpFixedVsFree.c)
 *     RtlpHpFixedVsAllocate @ 0x1404A3AC0 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpHeapExtendContext @ 0x1404A803C (RtlpHpHeapExtendContext.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140604534 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1406048CC (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpRegisterEnvironment @ 0x1406053F0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1406058F0 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpLfhContextLockExtension @ 0x140606780 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140606A80 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x140606C4C (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140606D74 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall RtlpHpAcquireLockExclusive(int *a1, int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // rdi

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v5 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire(a1, CurrentIrql, a3);
      v6 = *a1;
      v7 = (unsigned int)*a1;
      for ( LODWORD(v7) = v7 & 0xBFFFFFFF; (_DWORD)v7 != 0x80000000; LODWORD(v7) = v7 & 0xBFFFFFFF )
      {
        if ( (v6 & 0x40000000) == 0 )
          _InterlockedOr(a1, 0x40000000u);
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
        v6 = *a1;
        v7 = (unsigned int)*a1;
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
    v10 = KeAbPreAcquire(a1, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64(a1, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1, v10, a1);
    if ( v11 )
      *(_BYTE *)(v11 + 10) = 1;
    return -1;
  }
}
