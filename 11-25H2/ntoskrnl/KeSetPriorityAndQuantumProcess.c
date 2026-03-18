/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x1402691AC
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x140269154 (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     KiSetBasePriorityAndClearDecrement @ 0x14020D7F0 (KiSetBasePriorityAndClearDecrement.c)
 *     EtwTracePriority @ 0x14020E1D8 (EtwTracePriority.c)
 *     KiSetForegroundBoost @ 0x140269714 (KiSetForegroundBoost.c)
 *     KiClearForegroundBoost @ 0x14026974C (KiClearForegroundBoost.c)
 *     KeSetQuantumProcess @ 0x14026A954 (KeSetQuantumProcess.c)
 *     KeFlushProcessWriteBuffers @ 0x14027118C (KeFlushProcessWriteBuffers.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402A1FC8 (KiPriQueueThreadPriorityChanged.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, unsigned int a2, UCHAR a3, int a4, int a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v9; // r15
  int v10; // edi
  int v11; // r14d
  unsigned int v12; // r12d
  char v13; // si
  __int64 CurrentIrql; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 Queue; // rcx
  _QWORD *v19; // r13
  _KTHREAD *v20; // rbx
  unsigned int v21; // edi
  int BasePriority; // r14d
  __int64 v23; // r8
  int v24; // edi
  char Saturation; // al
  char v26; // si
  __int64 updated; // rax
  struct _KPRCB *v28; // rcx
  __int64 CycleTime; // rdi
  signed __int32 *SchedulerAssist; // r8
  __int64 v31; // rcx
  char v32; // al
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  _KTHREAD *v35; // rbx
  unsigned int v36; // edi
  int v37; // r8d
  int v38; // edi
  int v39; // edx
  char v40; // al
  __int64 v41; // rax
  struct _KPRCB *v42; // rcx
  __int64 v43; // rdi
  signed __int32 *v44; // r8
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  __int64 v47; // rcx
  char v48; // dl
  char v49; // di
  int v50; // [rsp+30h] [rbp-48h] BYREF
  int Priority; // [rsp+34h] [rbp-44h]
  int v52; // [rsp+38h] [rbp-40h]
  int v53; // [rsp+3Ch] [rbp-3Ch]
  int v54; // [rsp+40h] [rbp-38h]
  __int64 v55; // [rsp+48h] [rbp-30h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-28h]
  _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  _QWORD *v58; // [rsp+60h] [rbp-18h]
  __int64 v59; // [rsp+68h] [rbp-10h]
  char v61; // [rsp+C8h] [rbp+50h]

  result = (unsigned int)*(char *)(a1 + 144);
  v7 = 0LL;
  v50 = 0;
  v9 = a1;
  if ( (_DWORD)result != a2 || a4 != a5 )
  {
    if ( (_UNKNOWN *)a1 == &KiInitialProcess )
      return result;
    v10 = 1;
    Priority = 0;
    if ( a2 )
      v10 = a2;
    v61 = 0;
    v55 = 0LL;
    v54 = WORD2(PerfGlobalGroupMask) & 0x2000;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v59 = CurrentIrql;
    v15 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v15) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v15);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
    if ( a3 )
      *(_BYTE *)(v9 + 145) = a3;
    if ( a5 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v9 + 136), 0xDu);
    }
    else if ( a4 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v9 + 136), 0xDu);
    }
    v16 = *(char *)(v9 + 144);
    v17 = (unsigned int)(v10 - v16);
    v52 = v16;
    v53 = v10 - v16;
    LOBYTE(v17) = 1;
    *(_BYTE *)(v9 + 144) = v10;
    KeFlushProcessWriteBuffers(v17);
    v19 = *(_QWORD **)(v9 + 48);
    v58 = (_QWORD *)(v9 + 48);
    if ( v19 == (_QWORD *)(v9 + 48) )
    {
LABEL_24:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
      LOBYTE(v23) = v59;
      KiProcessDeferredReadyList(CurrentPrcb, &v55, v23);
      return (unsigned int)v52;
    }
    if ( v10 < 16 )
    {
      while ( 1 )
      {
        v20 = (_KTHREAD *)(v19 - 95);
        if ( a3 )
          v20->SchedulerApc.SpareByte1 = a3;
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v20->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Queue) )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v20->ThreadLock );
        }
        if ( a5 )
        {
          KiSetForegroundBoost(v19 - 95);
        }
        else if ( a4 )
        {
          KiClearForegroundBoost(v19 - 95);
        }
        BasePriority = v20->BasePriority;
        Queue = (unsigned int)v52;
        if ( BasePriority <= v52 || BasePriority < 16 )
          break;
        v20->ThreadLock = 0LL;
LABEL_22:
        v19 = (_QWORD *)*v19;
        if ( v19 == v58 )
          goto LABEL_23;
      }
      v24 = BasePriority + v53;
      if ( BasePriority + v53 >= 16 )
      {
        v24 = 15;
      }
      else if ( v24 <= 0 )
      {
        v24 = 1;
      }
      Saturation = v20->Saturation;
      v50 = v24;
      if ( Saturation )
      {
        if ( v52 < 16 )
        {
          v26 = 0;
          goto LABEL_49;
        }
        if ( Saturation <= 0 )
          v50 = 1;
        else
          v50 = 15;
      }
      if ( v20 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        CycleTime = v20->CycleTime;
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v19 - 95, 0LL);
        v28 = KeGetCurrentPrcb();
        CycleTime = updated;
        SchedulerAssist = (signed __int32 *)v28->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v33 = *SchedulerAssist;
          do
          {
            v34 = v33;
            v33 = _InterlockedCompareExchange(SchedulerAssist, v33 & 0xFFDFFFFF, v33);
          }
          while ( v34 != v33 );
          if ( (v33 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
        _enable();
      }
      v31 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v19 - 95);
      if ( (*((_DWORD *)&v20->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v20->116 + 1, 5u);
      v24 = v50;
      v26 = 0;
      v20->QuantumTarget = v31;
      if ( v24 != BasePriority )
      {
        KiSetBasePriorityAndClearDecrement((__int64)(v19 - 95), &v50);
        v26 = 1;
      }
      v12 = KiComputeThreadPriority(v19 - 95, 0LL);
      if ( v12 != v20->Priority )
      {
        Priority = v20->Priority;
        v32 = KiSetPriorityThread(v19 - 95, &v55, v12);
        v12 = v20->Priority;
        v61 = v32;
      }
      if ( v26 )
      {
        Queue = (unsigned __int64)v20->Queue;
        if ( Queue && (*(_BYTE *)Queue & 0x7F) == 0x15 )
        {
          KiPriQueueThreadPriorityChanged(Queue, v19 - 95);
          v24 = v50;
LABEL_50:
          if ( v54 )
          {
            if ( v61 )
            {
              v61 = 0;
              EtwTracePriority((__int64)(v19 - 95), 0x530u, Priority, v12, 0LL);
            }
            if ( v26 )
            {
              if ( BasePriority != v24 )
                EtwTracePriority((__int64)(v19 - 95), 0x531u, BasePriority, v24, &v50);
            }
          }
          goto LABEL_22;
        }
        v24 = v50;
      }
LABEL_49:
      v20->ThreadLock = 0LL;
      goto LABEL_50;
    }
    while ( 1 )
    {
      v35 = (_KTHREAD *)(v19 - 95);
      if ( a3 )
        v35->SchedulerApc.SpareByte1 = a3;
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v35->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v36 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Queue) )
          {
            HvlNotifyLongSpinWait(v36);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v35->ThreadLock );
      }
      v37 = 16;
      v38 = v53 + v35->BasePriority;
      v39 = 31;
      if ( v38 >= 16 )
      {
        if ( v38 > 31 )
          v38 = 31;
        v50 = v38;
      }
      else
      {
        v38 = 16;
        v50 = 16;
      }
      if ( a5 )
      {
        KiSetForegroundBoost(v19 - 95);
        v39 = 31;
        v37 = 16;
      }
      else if ( a4 )
      {
        KiClearForegroundBoost(v19 - 95);
      }
      v40 = v35->Saturation;
      if ( v40 )
      {
        if ( v52 >= v37 )
          goto LABEL_86;
        if ( v40 <= 0 )
          v50 = v37;
        else
          v50 = v39;
      }
      v11 = v35->BasePriority;
      if ( v35 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        v43 = v35->CycleTime;
      }
      else
      {
        _disable();
        v41 = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v19 - 95, 0LL);
        v42 = KeGetCurrentPrcb();
        v43 = v41;
        v44 = (signed __int32 *)v42->SchedulerAssist;
        if ( v44 )
        {
          _m_prefetchw(v44);
          v45 = *v44;
          do
          {
            v46 = v45;
            v45 = _InterlockedCompareExchange(v44, v45 & 0xFFDFFFFF, v45);
          }
          while ( v46 != v45 );
          if ( (v45 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
        _enable();
      }
      v47 = v43 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v19 - 95);
      if ( (*((_DWORD *)&v35->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v35->116 + 1, 5u);
      v35->QuantumTarget = v47;
      KiSetBasePriorityAndClearDecrement((__int64)(v19 - 95), &v50);
      v12 = KiComputeThreadPriority(v19 - 95, 0LL);
      v49 = v48 + 1;
      Priority = v35->Priority;
      v13 = v48 + 1;
      if ( (unsigned __int8)KiSetPriorityThread(v19 - 95, &v55, v12) )
      {
        v12 = v35->Priority;
        v61 = v49;
      }
      Queue = (unsigned __int64)v35->Queue;
      if ( Queue && (*(_BYTE *)Queue & 0x7F) == 0x15 )
      {
        KiPriQueueThreadPriorityChanged(Queue, v19 - 95);
        v38 = v50;
        goto LABEL_87;
      }
      v38 = v50;
LABEL_86:
      v35->ThreadLock = 0LL;
LABEL_87:
      if ( v54 )
      {
        if ( v61 )
        {
          v61 = 0;
          EtwTracePriority((__int64)(v19 - 95), 0x530u, Priority, v12, 0LL);
        }
        if ( v13 )
        {
          v13 = 0;
          if ( v11 != v38 )
            EtwTracePriority((__int64)(v19 - 95), 0x531u, v11, v38, &v50);
        }
      }
      v19 = (_QWORD *)*v19;
      if ( v19 == v58 )
      {
LABEL_23:
        v9 = a1;
        goto LABEL_24;
      }
    }
  }
  if ( a3 )
  {
    LOBYTE(v7) = a3;
    KeSetQuantumProcess(a1, v7);
  }
  return a2;
}
