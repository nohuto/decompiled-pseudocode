/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x1402BB160
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
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v6; // r9
  unsigned int i; // eax
  char *v8; // r10
  unsigned __int64 v9; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  struct _KTHREAD *v12; // rcx
  bool v13; // zf
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // ett
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = a2;
  if ( a1 )
  {
    v9 = *(unsigned __int8 *)(a2 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)v2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v9);
    __writecr8(v9);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    v6 = v2 & 0x7FFFFFFFFFFFFFFCLL;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v8 = (char *)KernelAbEntries + 88 * i;
      a2 = *((_QWORD *)v8 + 2);
      if ( (a2 & 0x7FFFFFFFFFFFFFFCLL) == v6 && v8[26] && (a2 & 1) == 0 )
      {
        v8[26] = 0;
        KiAbEntryFreeAndEnableInterrupts((__int64)(v8 + 16), (ULONG_PTR)CurrentThread, v2, 1, 0LL);
        goto LABEL_17;
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
    v13 = v12->SpecialApcDisable++ == -1;
    if ( v13 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
      KiCheckForKernelApcDelivery(v12, a2, SchedulerAssist, v6);
  }
  *(_QWORD *)(v3 + 8) = 0LL;
}
