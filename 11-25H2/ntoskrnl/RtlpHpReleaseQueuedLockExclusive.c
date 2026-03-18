/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x140320690
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
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v6; // r9
  __int64 i; // rdx
  __int64 v8; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  struct _KTHREAD *v10; // rcx
  bool v11; // zf
  unsigned __int64 v12; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // ett
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a2 + 8);
  if ( a1 )
  {
    v12 = *(unsigned __int8 *)(a2 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)v2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v12);
    __writecr8(v12);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    v6 = v2 & 0x7FFFFFFFFFFFFFFCLL;
    for ( i = 0LL; (unsigned int)i < KernelAbEntries->EntryCount; i = (unsigned int)(i + 1) )
    {
      v8 = (__int64)&KernelAbEntries->Entries[(unsigned int)i];
      if ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) == v6 && *(_BYTE *)(v8 + 10) && (*(_QWORD *)v8 & 1) == 0 )
      {
        *(_BYTE *)(v8 + 10) = 0;
        KiAbEntryFreeAndEnableInterrupts(v8, (ULONG_PTR)CurrentThread, v2, 1, 0LL);
        goto LABEL_10;
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v14 = *SchedulerAssist;
      do
      {
        i = v14;
        LODWORD(i) = v14 & 0xFFDFFFFF;
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v14 & 0xFFDFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
LABEL_10:
    v10 = KeGetCurrentThread();
    v11 = v10->SpecialApcDisable++ == -1;
    if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
      KiCheckForKernelApcDelivery(v10, i, SchedulerAssist, v6);
  }
  *(_QWORD *)(a2 + 8) = 0LL;
}
