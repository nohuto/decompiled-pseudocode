/*
 * XREFs of KiInsertQueueDpc @ 0x140284920
 * Callers:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402DBCD0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     KiAddThreadToReadyQueue @ 0x1403E7AA0 (KiAddThreadToReadyQueue.c)
 *     EtwpCovSampLookasidePop @ 0x14045BD10 (EtwpCovSampLookasidePop.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E34 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     RtlBackoff @ 0x140284140 (RtlBackoff.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetDpcRequestFlag @ 0x1402AC800 (KiSetDpcRequestFlag.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F74FC (EtwTraceXSchedulerPriorityKickSend.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1404F7CA0 (EtwTraceDpcEnqueueEvent.c)
 *     KiCpuPartitionCheckDpcEnqueue @ 0x1404F8698 (KiCpuPartitionCheckDpcEnqueue.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  ULONG_PTR v5; // rsi
  volatile signed __int32 *v6; // r15
  bool v8; // dl
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rsi
  signed __int64 IsrDpcStats; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  int v18; // r11d
  __int64 v19; // r10
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  char v22; // al
  __int16 v23; // r9
  __int16 v24; // r10
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int16 v27; // tt
  __int16 v28; // r9
  __int16 v29; // tt
  char v30; // al
  __int64 v31; // r8
  int v32; // edx
  char v33; // r9
  int *v34; // rax
  struct _KPRCB *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  int v38; // eax
  bool v39; // zf
  _DWORD *SchedulerAssist; // rcx
  __int64 v41; // rsi
  bool v42; // [rsp+40h] [rbp-A8h]
  unsigned __int8 v43; // [rsp+41h] [rbp-A7h]
  int v44; // [rsp+44h] [rbp-A4h]
  int v45; // [rsp+48h] [rbp-A0h]
  unsigned int v46; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-98h]
  _BYTE v48[20]; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp-78h]
  unsigned __int64 v50; // [rsp+78h] [rbp-70h]
  unsigned __int64 v51; // [rsp+80h] [rbp-68h]
  unsigned __int64 v52; // [rsp+88h] [rbp-60h]
  unsigned __int64 v53; // [rsp+90h] [rbp-58h]
  unsigned __int64 v54; // [rsp+98h] [rbp-50h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]
  bool v56; // [rsp+F0h] [rbp+8h]
  unsigned __int64 v58; // [rsp+100h] [rbp+18h]

  v58 = a3;
  v5 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
  v6 = (volatile signed __int32 *)a4;
  v45 = 0;
  v44 = 0;
  v47 = 0LL;
  v43 = 0;
  v42 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v8 = 0;
  v56 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
    v8 = 0;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned __int16)v5 < 0x800u )
  {
    LODWORD(v11) = CurrentPrcb->Number;
    v12 = (__int64)CurrentPrcb;
    v8 = (_WORD)v5 != (unsigned __int16)v11;
    v56 = (_WORD)v5 != (unsigned __int16)v11;
  }
  else
  {
    v11 = (unsigned int)(v5 - 2048);
    v12 = KiProcessorBlock[v11];
    if ( !v12 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)KeNumberProcessors_0);
  }
  if ( (*(_QWORD *)(v12 + 200) & *(_QWORD *)(BugCheckParameter2 + 16)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v12 + 209));
  if ( *(_BYTE *)BugCheckParameter2 == 26 && *(_BYTE *)(v12 + 14520) )
    v13 = v12 + 14448;
  else
    v13 = v12 + 14400;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
  {
    KiAcquireSpinLockInstrumented(v13 + 16);
LABEL_14:
    v8 = v56;
    goto LABEL_15;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v13 + 16);
    goto LABEL_14;
  }
LABEL_15:
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( (_DWORD)v11 != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    a3 = *(unsigned int *)(v13 + 24);
    v44 = a3;
    *(_DWORD *)(v13 + 24) = a3 + 1;
    ++*(_DWORD *)(v13 + 28);
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = v58;
    if ( v42 )
    {
      v44 = *(_DWORD *)(v13 + 24);
      v45 = *(_DWORD *)(v13 + 28);
    }
    v16 = (_QWORD *)(BugCheckParameter2 + 8);
    v43 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v36 = *(_QWORD *)v13;
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v16;
      *v16 = v36;
      *(_QWORD *)v13 = v16;
    }
    else
    {
      *v16 = 0LL;
      **(_QWORD **)(v13 + 8) = v16;
      *(_QWORD *)(v13 + 8) = v16;
    }
    if ( v8 )
      *(_WORD *)(BugCheckParameter2 + 2) = v11;
    v17 = *(_QWORD *)(v12 + 36536);
    if ( v17 && v13 == v12 + 14400 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 28));
    }
    else if ( v13 != v12 + 14400 )
    {
      goto LABEL_18;
    }
    a4 = *(_QWORD *)(v12 + 14352);
    if ( a4 )
    {
      v18 = *(_DWORD *)(a4 + 4) >> 5;
      v19 = -1LL << (*(_BYTE *)(a4 + 4) & 0x1F);
      a3 = *(_QWORD *)(BugCheckParameter2 + 24) & v19;
      v53 = HIBYTE(a3);
      v52 = HIWORD(a3);
      v51 = a3 >> 40;
      v50 = HIDWORD(a3);
      v49 = a3 >> 24;
      if ( v18 )
      {
        v54 = a3;
        a4 = *(_QWORD *)(a4 + 8)
           + 8LL
           * (((_DWORD)v53
             + 37
             * ((unsigned __int8)v52
              + 37
              * ((unsigned __int8)v51
               + 37
               * ((unsigned __int8)v50
                + 37
                * ((unsigned __int8)v49 + 37 * (BYTE2(a3) + 37 * (BYTE1(a3) + 37 * ((unsigned __int8)a3 + 11623883)))))))) & (unsigned int)(v18 - 1));
        while ( 1 )
        {
          v20 = *(_QWORD *)a4;
          a4 = v20;
          if ( (v20 & 1) != 0 )
            break;
          if ( a3 == (v19 & *(_QWORD *)(v20 + 8)) )
          {
            v21 = *(_QWORD *)(v20 + 16);
            v47 = v21;
            if ( v21 > (unsigned int)KiLongDpcRuntimeThresholdCycles )
            {
              *(_DWORD *)(v13 + 40) = 1;
              v47 = v21;
            }
            break;
          }
        }
      }
    }
  }
LABEL_18:
  if ( v6 )
    _InterlockedAnd(v6, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 16), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v13 + 16), retaddr);
  if ( !v43 )
    goto LABEL_23;
  if ( v42 )
    EtwTraceDpcEnqueueEvent(
      -203591049
    * (KiWaitNever ^ __ROR8__(
                       *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(KiWaitAlways ^ BugCheckParameter2),
                       KiWaitNever)),
      *(_QWORD *)(BugCheckParameter2 + 24),
      v44,
      v45,
      v11,
      *(_BYTE *)(BugCheckParameter2 + 1),
      v47);
  if ( (WORD2(xmmword_140FC6B50) & 0x200) != 0 )
    KiCpuPartitionCheckDpcEnqueue(BugCheckParameter2, CurrentPrcb, v12, a4);
  if ( v13 != v12 + 14448 )
  {
    if ( *(_DWORD *)(v13 + 24) < *(_DWORD *)(v12 + 14504) )
    {
      v22 = *(_BYTE *)(BugCheckParameter2 + 1);
      if ( CurrentPrcb == (struct _KPRCB *)v12 )
      {
        if ( !v22 && *(_DWORD *)(v12 + 14508) >= *(_DWORD *)(v12 + 14512) )
          goto LABEL_72;
      }
      else if ( v22 != 3 && v22 != 2 )
      {
LABEL_72:
        if ( (KiSetDpcRequestFlag(v12 + 14524, 16LL, a3, a4) & 0xAF) != 0
          || (*(_QWORD *)(*(_QWORD *)(v12 + 192) + 64LL) & *(_QWORD *)(v12 + 200)) == 0LL )
        {
          goto LABEL_23;
        }
      }
    }
    v23 = 2;
    goto LABEL_52;
  }
  if ( (KiSetDpcRequestFlag(v12 + 14526, 2LL, a3, a4) & 0xAF) != 0 )
    goto LABEL_23;
  v23 = 4;
LABEL_52:
  v24 = 175;
  if ( (struct _KPRCB *)v12 == CurrentPrcb )
  {
    v24 = 169;
    v23 |= 0x20u;
  }
  v46 = 0;
  _m_prefetchw((const void *)(v12 + 14524));
  v25 = *(unsigned __int16 *)(v12 + 14524);
  v26 = (unsigned __int16)v25;
  LOWORD(v26) = v23 | v25;
  v27 = *(_WORD *)(v12 + 14524);
  if ( v27 != _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 14524), v23 | v25, v25) )
  {
    do
    {
      RtlBackoff(&v46);
      _m_prefetchw((const void *)(v12 + 14524));
      v25 = *(unsigned __int16 *)(v12 + 14524);
      v26 = (unsigned __int16)v25;
      LOWORD(v26) = v28 | v25;
      v29 = *(_WORD *)(v12 + 14524);
    }
    while ( v29 != _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 14524), v28 | v25, v25) );
  }
  if ( ((unsigned __int16)v25 & (unsigned __int16)v24) == 0 )
  {
    if ( (struct _KPRCB *)v12 == CurrentPrcb )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
        goto LABEL_23;
      }
      *(_OWORD *)&v48[4] = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v30 = HalpDisableInterrupts(v26, v25, KeGetCurrentPrcb());
        v32 = *(_DWORD *)(v31 + 168);
        v33 = v30;
        *(_DWORD *)(v31 + 168) = v32 | 4;
        if ( !v32 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v33 )
          _enable();
      }
      *(_DWORD *)v48 = 5;
    }
    else
    {
      if ( *(_QWORD *)(v12 + 8) == *(_QWORD *)(v12 + 24) && !*(_BYTE *)(v12 + 7) )
        goto LABEL_23;
      v34 = *(int **)(v12 + 36536);
      if ( v34 )
      {
        if ( CurrentPrcb->SchedulerAssist )
        {
          v37 = *v34;
          v38 = *v34 & 0x40000;
          if ( (v37 & 0x100000) != 0 || v38 && (unsigned __int8)v37 < KiVpThreadSystemWorkPriority )
          {
            v39 = HvlpVirtualProcessorsIdentityMapped == 0;
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            SchedulerAssist[3] = 2;
            v41 = *(unsigned int *)(v12 + 36);
            if ( v39 )
              LODWORD(v41) = (unsigned __int8)byte_140FCD2A1[2 * (unsigned int)v41] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v41] << 6);
            SchedulerAssist[2] = v41;
            if ( (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
              EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v12 + 36), 2LL);
            __writemsr(0x400000C2u, (unsigned int)v41);
          }
        }
      }
      v35 = KeGetCurrentPrcb();
      *(_QWORD *)v48 = 6LL;
      *(_DWORD *)&v48[8] = v11;
      ++v35->SynchCounters.IpiSendSoftwareInterruptCount;
      *(_QWORD *)&v48[12] = 0LL;
    }
    HalpInterruptSendIpi(v48, 47LL);
  }
LABEL_23:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v43;
}
