/*
 * XREFs of RtlpHpReleaseLockExclusive @ 0x1402B9650
 * Callers:
 *     RtlpHpSegLockRelease @ 0x1402B4434 (RtlpHpSegLockRelease.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1402B55B8 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402B61E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402B8E70 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402B9010 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpSegMgrUnlock @ 0x1402C0D40 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402C17F4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402C25F4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrCommitComplete @ 0x1402C2B44 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpLargeLockRelease @ 0x140420F94 (RtlpHpLargeLockRelease.c)
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
 *     RtlpHpLfhContextUnlockExtension @ 0x14060694C (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140606A80 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x140606C4C (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140606D74 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  if ( (_DWORD)a2 )
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
        KiAbEntryFreeAndEnableInterrupts((__int64)(v9 + 16), (ULONG_PTR)CurrentThread, BugCheckParameter2, 1, 0LL);
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
      && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    {
      KiCheckForKernelApcDelivery(v12, a2, SchedulerAssist, v7);
    }
  }
}
