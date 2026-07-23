/*
 * XREFs of KeBoostPriorityThread @ 0x1404DD768
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x1408F8A28 (ExpCreateWorkerThread.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     EtwTracePriority @ 0x140330F04 (EtwTracePriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, int a2)
{
  void *v2; // rax
  __int64 v4; // rbx
  int v5; // ebp
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // r12
  int v9; // r15d
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  char v14; // di
  int v15; // edi
  int v16; // r14d
  unsigned __int64 updated; // rax
  struct _KPRCB *v18; // rcx
  unsigned __int64 v19; // rdi
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  unsigned __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v26; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v27; // [rsp+80h] [rbp+18h] BYREF

  v2 = &KiInitialProcess;
  v4 = a1;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v27 = 0LL;
    v5 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v26 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(_QWORD *)(v4 + 64) );
    }
    v9 = *(char *)(v4 + 195);
    if ( a2 > *(char *)(v4 + 870) && v9 < 16 )
    {
      v10 = (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(a1) == 0;
      v12 = *(char *)(v4 + 563);
      if ( v10 )
      {
        v13 = v12 + a2;
        if ( v13 >= 16 )
          LOBYTE(v13) = 15;
        v14 = v13 - v12;
      }
      else
      {
        v11 = v12 + (*(unsigned __int16 *)(v4 + 518) & 0xFu);
        if ( (int)v11 >= 16 )
          v11 = 15LL;
        v15 = v11 + a2;
        if ( v15 >= 16 )
          LOBYTE(v15) = 15;
        v14 = v15 - v11;
      }
      Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v11);
      *(_BYTE *)(v4 + 870) = v14;
      v16 = KiComputeThreadPriority(v4, 0, 0);
      if ( v16 > v9 )
      {
        if ( (_KTHREAD *)v4 != CurrentThread || CurrentPrcb->NestingLevel )
        {
          v19 = *(_QWORD *)(v4 + 72);
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v4, 0LL);
          v18 = KeGetCurrentPrcb();
          v19 = updated;
          SchedulerAssist = (signed __int32 *)v18->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v21 = *SchedulerAssist;
            do
            {
              v22 = v21;
              v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
            }
            while ( v22 != v21 );
            if ( (v21 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v18);
          }
          _enable();
        }
        v23 = v19 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v4);
        if ( (*(_DWORD *)(v4 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 5u);
        *(_QWORD *)(v4 + 32) = v23;
        KiSetPriorityThread((_KTHREAD *)v4, (__int64)&v27, (unsigned int)v16, v24);
        v5 = v16;
      }
    }
    *(_QWORD *)(v4 + 64) = 0LL;
    LOBYTE(v2) = KiProcessDeferredReadyList(CurrentPrcb, &v27, CurrentIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v5 )
      LOBYTE(v2) = EtwTracePriority(v4, 0x530u, v9, v5, 0LL);
  }
  return (char)v2;
}
