/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x1404470CC
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x140447074 (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402D8290 (KiPriQueueThreadPriorityChanged.c)
 *     EtwTracePriority @ 0x140330F04 (EtwTracePriority.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     KiSetForegroundBoost @ 0x14044762C (KiSetForegroundBoost.c)
 *     KiClearForegroundBoost @ 0x1404476C0 (KiClearForegroundBoost.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1404476F4 (KiSetBasePriorityAndClearDecrement.c)
 *     KeSetQuantumProcess @ 0x140447788 (KeSetQuantumProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
  _QWORD *v18; // r13
  _KTHREAD *v19; // rbx
  unsigned int v20; // edi
  int BasePriority; // r14d
  int v22; // edi
  char Saturation; // al
  char v24; // si
  unsigned __int64 updated; // rax
  struct _KPRCB *v26; // rcx
  unsigned __int64 CycleTime; // rdi
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  char v31; // al
  volatile signed __int32 *p_Lock; // rcx
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  _KTHREAD *v35; // rbx
  unsigned int v36; // edi
  int v37; // r8d
  int v38; // edi
  int v39; // edx
  char v40; // al
  unsigned __int64 v41; // rax
  struct _KPRCB *v42; // rcx
  unsigned __int64 v43; // rdi
  signed __int32 *v44; // r8
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  unsigned __int64 v47; // rcx
  __int64 v48; // r9
  volatile signed __int32 *v49; // rcx
  int v50; // [rsp+30h] [rbp-48h] BYREF
  int Priority; // [rsp+34h] [rbp-44h]
  int v52; // [rsp+38h] [rbp-40h]
  int v53; // [rsp+3Ch] [rbp-3Ch]
  int v54; // [rsp+40h] [rbp-38h]
  _QWORD *v55; // [rsp+48h] [rbp-30h] BYREF
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
      LOBYTE(v7) = 2;
      LOBYTE(v15) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v15, v7);
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
    v18 = *(_QWORD **)(v9 + 48);
    v58 = (_QWORD *)(v9 + 48);
    if ( v18 == (_QWORD *)(v9 + 48) )
    {
LABEL_49:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
      KiProcessDeferredReadyList(CurrentPrcb, &v55, v59);
      return (unsigned int)v52;
    }
    if ( v10 < 16 )
    {
      while ( 1 )
      {
        v19 = (_KTHREAD *)(v18 - 95);
        if ( a3 )
          v19->SchedulerApc.SpareByte1 = a3;
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v19->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v20);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v19->ThreadLock );
        }
        if ( a5 )
        {
          KiSetForegroundBoost(v18 - 95);
        }
        else if ( a4 )
        {
          KiClearForegroundBoost(v18 - 95);
        }
        BasePriority = v19->BasePriority;
        if ( BasePriority <= v52 || BasePriority < 16 )
          break;
        v19->ThreadLock = 0LL;
LABEL_47:
        v18 = (_QWORD *)*v18;
        if ( v18 == v58 )
          goto LABEL_48;
      }
      v22 = BasePriority + v53;
      if ( BasePriority + v53 >= 16 )
      {
        v22 = 15;
      }
      else if ( v22 <= 0 )
      {
        v22 = 1;
      }
      Saturation = v19->Saturation;
      v50 = v22;
      if ( Saturation )
      {
        if ( v52 < 16 )
        {
          v24 = 0;
          goto LABEL_45;
        }
        if ( Saturation <= 0 )
          v50 = 1;
        else
          v50 = 15;
      }
      if ( v19 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        CycleTime = v19->CycleTime;
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, (__int64)(v18 - 95), 0LL);
        v26 = KeGetCurrentPrcb();
        CycleTime = updated;
        SchedulerAssist = (signed __int32 *)v26->SchedulerAssist;
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
            KiRemoveSystemWorkPriorityKick((__int64)v26);
        }
        _enable();
      }
      v29 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)(v18 - 95));
      if ( (*((_DWORD *)&v19->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v19->116 + 1, 5u);
      v22 = v50;
      v24 = 0;
      v19->QuantumTarget = v29;
      if ( v22 != BasePriority )
      {
        KiSetBasePriorityAndClearDecrement(v18 - 95, &v50);
        v24 = 1;
      }
      v12 = KiComputeThreadPriority((__int64)(v18 - 95), 0, 0);
      if ( v12 != v19->Priority )
      {
        Priority = v19->Priority;
        v31 = KiSetPriorityThread((_KTHREAD *)(v18 - 95), (__int64)&v55, v12, v30);
        v12 = v19->Priority;
        v61 = v31;
      }
      if ( v24 )
      {
        p_Lock = &v19->Queue->Lock;
        if ( p_Lock && (*(_BYTE *)p_Lock & 0x7F) == 0x15 )
        {
          KiPriQueueThreadPriorityChanged(p_Lock, (__int64)(v18 - 95));
          v22 = v50;
LABEL_46:
          if ( v54 )
          {
            if ( v61 )
            {
              v61 = 0;
              EtwTracePriority((__int64)(v18 - 95), 0x530u, Priority, v12, 0LL);
            }
            if ( v24 && BasePriority != v22 )
              EtwTracePriority((__int64)(v18 - 95), 0x531u, BasePriority, v22, &v50);
          }
          goto LABEL_47;
        }
        v22 = v50;
      }
LABEL_45:
      v19->ThreadLock = 0LL;
      goto LABEL_46;
    }
    while ( 1 )
    {
      v35 = (_KTHREAD *)(v18 - 95);
      if ( a3 )
        v35->SchedulerApc.SpareByte1 = a3;
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v35->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v36 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
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
        KiSetForegroundBoost(v18 - 95);
        v39 = 31;
        v37 = 16;
      }
      else if ( a4 )
      {
        KiClearForegroundBoost(v18 - 95);
      }
      v40 = v35->Saturation;
      if ( v40 )
      {
        if ( v52 >= v37 )
          goto LABEL_81;
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
        v41 = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, (__int64)(v18 - 95), 0LL);
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
            KiRemoveSystemWorkPriorityKick((__int64)v42);
        }
        _enable();
      }
      v47 = v43 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)(v18 - 95));
      if ( (*((_DWORD *)&v35->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v35->116 + 1, 5u);
      v35->QuantumTarget = v47;
      KiSetBasePriorityAndClearDecrement(v18 - 95, &v50);
      v12 = KiComputeThreadPriority((__int64)(v18 - 95), 0, 0);
      Priority = v35->Priority;
      v13 = 1;
      if ( KiSetPriorityThread((_KTHREAD *)(v18 - 95), (__int64)&v55, v12, v48) )
      {
        v12 = v35->Priority;
        v61 = 1;
      }
      v49 = &v35->Queue->Lock;
      if ( v49 && (*(_BYTE *)v49 & 0x7F) == 0x15 )
      {
        KiPriQueueThreadPriorityChanged(v49, (__int64)(v18 - 95));
        v38 = v50;
        goto LABEL_82;
      }
      v38 = v50;
LABEL_81:
      v35->ThreadLock = 0LL;
LABEL_82:
      if ( v54 )
      {
        if ( v61 )
        {
          v61 = 0;
          EtwTracePriority((__int64)(v18 - 95), 0x530u, Priority, v12, 0LL);
        }
        if ( v13 )
        {
          v13 = 0;
          if ( v11 != v38 )
            EtwTracePriority((__int64)(v18 - 95), 0x531u, v11, v38, &v50);
        }
      }
      v18 = (_QWORD *)*v18;
      if ( v18 == v58 )
      {
LABEL_48:
        v9 = a1;
        goto LABEL_49;
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
