/*
 * XREFs of KeBoostPriorityThread @ 0x1404B71EC
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x140A17558 (ExpCreateWorkerThread.c)
 * Callees:
 *     EtwTracePriority @ 0x14020E1D8 (EtwTracePriority.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, int a2)
{
  void *v2; // rax
  __int64 v4; // rbx
  int v5; // esi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  int v8; // edi
  _KTHREAD *CurrentThread; // r12
  int v10; // r14d
  int v11; // eax
  char v12; // cl
  char v13; // dl
  int v14; // r15d
  unsigned __int64 updated; // rax
  struct _KPRCB *v16; // rcx
  unsigned __int64 v17; // rdi
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  unsigned __int64 v21; // rcx
  _QWORD *v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = &KiInitialProcess;
  v4 = a1;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v23 = 0LL;
    v5 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v4 + 64) );
    }
    v10 = *(char *)(v4 + 195);
    if ( a2 > *(char *)(v4 + 870) && v10 < 16 )
    {
      v11 = *(char *)(v4 + 563);
      v12 = v11 + a2;
      if ( v11 + a2 >= 16 )
        v12 = 15;
      *(_BYTE *)(v4 + 870) = v12 - v11;
      v14 = KiComputeThreadPriority(v4, 0);
      if ( v14 > v10 )
      {
        if ( (_KTHREAD *)v4 == CurrentThread && CurrentPrcb->NestingLevel == v13 )
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v4, 0LL);
          v16 = KeGetCurrentPrcb();
          v17 = updated;
          SchedulerAssist = (signed __int32 *)v16->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v19 = *SchedulerAssist;
            do
            {
              v20 = v19;
              v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
            }
            while ( v20 != v19 );
            if ( (v19 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v16);
          }
          _enable();
        }
        else
        {
          v17 = *(_QWORD *)(v4 + 72);
        }
        v21 = v17 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v4);
        if ( (*(_DWORD *)(v4 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 5u);
        *(_QWORD *)(v4 + 32) = v21;
        KiSetPriorityThread((_BYTE *)v4, (__int64)&v23, v14);
        v5 = v14;
      }
    }
    *(_QWORD *)(v4 + 64) = 0LL;
    LOBYTE(v2) = KiProcessDeferredReadyList(CurrentPrcb, &v23, CurrentIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v5 )
      LOBYTE(v2) = EtwTracePriority(v4, 0x530u, v10, v5, 0LL);
  }
  return (char)v2;
}
