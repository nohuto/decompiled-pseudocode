/*
 * XREFs of RtlpHpReleaseLockExclusive @ 0x140360D90
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x14026C140 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpSegLockRelease @ 0x14035CDEC (RtlpHpSegLockRelease.c)
 *     RtlpHpSegMgrUnlock @ 0x14035CE38 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpSegMgrCommitComplete @ 0x14035D3F4 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14035DE94 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14035E2C4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14035FCA0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1403605B0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x140360750 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403D81F0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403D8DE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLargeLockRelease @ 0x140459268 (RtlpHpLargeLockRelease.c)
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1404596F4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpFixedVsFree @ 0x140498450 (RtlpHpFixedVsFree.c)
 *     RtlpHpHeapExtendContext @ 0x1404A2A8C (RtlpHpHeapExtendContext.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140601B74 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x140601F0C (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpRegisterEnvironment @ 0x140602A30 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140602F30 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140603F8C (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1406040C0 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14060428C (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall RtlpHpReleaseLockExclusive(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v7; // r9
  unsigned int i; // eax
  char *v9; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  struct _KTHREAD *v12; // rcx
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // ett
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  if ( (_DWORD)a2 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)BugCheckParameter2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)BugCheckParameter2, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
    __writecr8(v3);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    v7 = 0LL;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v9 = (char *)KernelAbEntries + 88 * i;
      a2 = *((_QWORD *)v9 + 2);
      if ( (a2 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL) && v9[26] && (a2 & 1) == 0 )
      {
        v9[26] = 0;
        KiAbEntryFreeAndEnableInterrupts((__int64)(v9 + 16), (ULONG_PTR)CurrentThread, BugCheckParameter2, 1LL, 0LL);
        goto LABEL_17;
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v14 = *SchedulerAssist;
      do
      {
        a2 = v14;
        LODWORD(a2) = v14 & 0xFFDFFFFF;
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v14 & 0xFFDFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
LABEL_17:
    v12 = KeGetCurrentThread();
    if ( v12->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    {
      KiCheckForKernelApcDelivery(v12, a2, SchedulerAssist, v7);
    }
  }
}
