/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0
 * Callers:
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x14048B9CC (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402D8B94 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402DE7C8 (KiPrepareReadyThreadForRescheduling.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        char a4,
        struct _KPRCB *a5,
        _QWORD *a6,
        volatile signed __int64 *a7,
        volatile signed __int64 **a8,
        struct _SINGLE_LIST_ENTRY *a9)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v10; // edi
  volatile signed __int64 **v11; // r14
  volatile signed __int64 *v13; // r13
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned int v21; // edx
  struct _KPRCB **v22; // rax
  char v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int i; // r8d
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // r12
  unsigned int v31; // ebx
  char v32; // r14
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v34; // al
  unsigned int v35; // ebx
  int v36; // ecx
  unsigned __int64 v37; // r9
  __int64 *v38; // r8
  int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rdx
  struct _KPRCB *v42; // [rsp+60h] [rbp+8h]
  char v43; // [rsp+78h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v11 = a8;
  v13 = a7;
  StaticRescheduleContext = 0LL;
  v43 = 0;
  v42 = CurrentPrcb;
  if ( a4 == 1 )
  {
    v35 = *(char *)(a1 + 195);
    KiRemoveThreadFromAnyReadyQueue(a5, (__int64)a7, a1, v35);
    KiPrepareReadyThreadForRescheduling(a1, v35, (__int64 *)a9);
LABEL_35:
    CurrentPrcb = v42;
    goto LABEL_36;
  }
  if ( a4 == 2 )
  {
    if ( a2 )
    {
      v17 = *((_DWORD *)KiGlobalState + a5->Number);
      v18 = *a2;
      v19 = v17 >> 6;
      if ( (unsigned int)v19 >= v18 || ((*(_QWORD *)&a2[4 * v19 + 4] >> (v17 & 0x3F)) & 1) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) != 2 )
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          goto LABEL_36;
        }
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
        v16 = a5->NextThread == 0LL;
        goto LABEL_11;
      }
    }
  }
  else if ( a4 == 3 && a2 )
  {
    v16 = (unsigned int)KeCheckProcessorAffinityEx(a2, a5->Number) == 0;
LABEL_11:
    if ( !v16 )
      goto LABEL_36;
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, a6);
    v20 = 0LL;
    v21 = 0;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      while ( 1 )
      {
        v22 = (struct _KPRCB **)((char *)StaticRescheduleContext + 40 * v21);
        if ( v22[2] == a5 )
          break;
        if ( ++v21 >= StaticRescheduleContext->ProcessorCount )
          goto LABEL_17;
      }
      v20 = v22 + 2;
    }
LABEL_17:
    v20[34] |= 2u;
    v23 = v20[32];
    v24 = *(_QWORD *)v20;
    *((_QWORD *)v20 + 2) = *(_QWORD *)(*(_QWORD *)v20 + 24LL);
    v20[32] = v23 & 0xC0 | 5;
    v25 = *(_QWORD *)(v24 + 24);
    v20[33] &= ~1u;
    *((_QWORD *)v20 + 3) = v25;
    if ( (v23 & 2) != 0 )
    {
      for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
      {
        v27 = (char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i;
        if ( v27 != v20 )
        {
          v27[34] |= 2u;
          v28 = *(_QWORD *)v27;
          *((_QWORD *)v27 + 2) = *(_QWORD *)(*(_QWORD *)v27 + 24LL);
          v27[32] = v27[32] & 0xC0 | 5;
          v29 = *(_QWORD *)(v28 + 24);
          v27[33] &= ~1u;
          *((_QWORD *)v27 + 3) = v29;
        }
      }
      if ( (v23 & 2) != 0 )
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, a9);
    v30 = 0;
    v43 = 0;
    if ( (WORD2(xmmword_140FC6B50) & 0x400) != 0 )
      v30 = 2;
    v31 = 0;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      v32 = 0;
      do
      {
        v32 |= KiCommitRescheduleContextEntry(
                 (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                       + 32 * v31
                                                       + 8 * v31),
                 v42,
                 v30,
                 a9);
        ++v31;
      }
      while ( v31 < StaticRescheduleContext->ProcessorCount );
      v13 = a7;
      v43 = v32;
      v11 = a8;
    }
    if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
    {
      CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
      v34 = CoreControlBlock->ScanStartIndex + 1;
      CoreControlBlock->ScanStartIndex = v34;
      if ( v34 >= CoreControlBlock->ProcessorCount )
        CoreControlBlock->ScanStartIndex = 0;
    }
    goto LABEL_35;
  }
LABEL_36:
  if ( !a5 )
    goto LABEL_43;
  v36 = *(_DWORD *)a6;
  v37 = *a6 & 0xFFFFFFFFFFFFFFFEuLL;
  a7 = (volatile signed __int64 *)v37;
  if ( (v36 & 1) == 0 )
  {
    v38 = (__int64 *)&a7;
    v39 = 1;
    goto LABEL_41;
  }
  v38 = (__int64 *)(*(_QWORD *)(v37 + 36440) + 8LL);
  v39 = **(unsigned __int8 **)(v37 + 36440);
  if ( **(_BYTE **)(v37 + 36440) )
  {
    do
LABEL_41:
      _InterlockedAnd64((volatile signed __int64 *)(v38[--v39] + 48), 0LL);
    while ( v39 );
  }
  *a6 = 0LL;
LABEL_43:
  if ( !v13 )
    goto LABEL_51;
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    _m_prefetchw(v11);
    v40 = (__int64)*v11;
    if ( !*v11 )
    {
      if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
        goto LABEL_51;
      v40 = KxWaitForLockChainValid((__int64 *)v11);
    }
    *v11 = 0LL;
    v41 = (__int64)v11[1];
    if ( (((unsigned __int8)v41 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v40 + 8), v41)) & 4) != 0 )
      KeWakeAddressAll(v40 + 8, v41);
  }
  else
  {
    _InterlockedAnd64(v13, 0LL);
  }
LABEL_51:
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v43 )
  {
    if ( StaticRescheduleContext->ProcessorCount )
    {
      do
      {
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * v10 + 8 * v10),
          CurrentPrcb,
          0LL,
          0LL);
        ++v10;
      }
      while ( v10 < StaticRescheduleContext->ProcessorCount );
    }
    KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  }
}
