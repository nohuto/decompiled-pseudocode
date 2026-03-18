/*
 * XREFs of RtlpHpReleaseLockExclusive @ 0x14031FBD0
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402F8BBC (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402FA074 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrCommitComplete @ 0x1402FA834 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpSegMgrUnlock @ 0x1402FA950 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpFixedVsAllocate @ 0x14038FCB0 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403C73E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLockRelease @ 0x1403C7FF4 (RtlpHpSegLockRelease.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403C801C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1403C8420 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1403CA5D0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLargeLockRelease @ 0x1403CBC24 (RtlpHpLargeLockRelease.c)
 *     RtlpHpVaMgrAlloc @ 0x1403CBCE4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403CC28C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14044FFDC (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpFixedVsFree @ 0x14049E570 (RtlpHpFixedVsFree.c)
 *     RtlpHpHeapExtendContext @ 0x1404A769C (RtlpHpHeapExtendContext.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405F81F4 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405F858C (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpRegisterEnvironment @ 0x1405F90B0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1405F95B0 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x1405FA60C (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1405FA740 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1405FA90C (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1405FAA34 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall RtlpHpReleaseLockExclusive(ULONG_PTR BugCheckParameter2, int a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r9
  __int64 i; // rdx
  __int64 v8; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  struct _KTHREAD *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 v13; // eax
  unsigned __int32 v14; // ett
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  if ( a2 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)BugCheckParameter2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(BugCheckParameter2, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
    __writecr8(v3);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    for ( i = 0LL; (unsigned int)i < KernelAbEntries->EntryCount; i = (unsigned int)(i + 1) )
    {
      v8 = (__int64)&KernelAbEntries->Entries[(unsigned int)i];
      if ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(v8 + 10)
        && (*(_QWORD *)v8 & 1) == 0 )
      {
        *(_BYTE *)(v8 + 10) = 0;
        KiAbEntryFreeAndEnableInterrupts(v8, (ULONG_PTR)CurrentThread, BugCheckParameter2, 1, 0LL);
        goto LABEL_10;
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v13 = *SchedulerAssist;
      do
      {
        i = v13;
        LODWORD(i) = v13 & 0xFFDFFFFF;
        v14 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
LABEL_10:
    v10 = KeGetCurrentThread();
    if ( v10->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    {
      KiCheckForKernelApcDelivery(v10, i, SchedulerAssist, KernelAbEntries);
    }
  }
}
