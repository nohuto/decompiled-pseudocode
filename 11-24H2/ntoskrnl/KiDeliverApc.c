/*
 * XREFs of KiDeliverApc @ 0x1402C6540
 * Callers:
 *     KiSatisfyThreadWait @ 0x14027E6C0 (KiSatisfyThreadWait.c)
 *     KiExitThreadWait @ 0x14027F5C0 (KiExitThreadWait.c)
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x14032EC3C (KeWaitForAlertByThreadId.c)
 *     KiBeginThreadWait @ 0x1403305F0 (KiBeginThreadWait.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KiContinueEx @ 0x1403D4630 (KiContinueEx.c)
 *     KiApcInterrupt @ 0x1406B00E0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 * Callees:
 *     IopCompletePageWrite @ 0x1402593B0 (IopCompletePageWrite.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     KiSchedulerApc @ 0x1402E00D0 (KiSchedulerApc.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x1402ED3E0 (MiStoreWriteModifiedCompleteApc.c)
 *     KiUpdateTebApc @ 0x14032CDE0 (KiUpdateTebApc.c)
 *     EtwpTraceImageUnloadApc @ 0x1403B35C0 (EtwpTraceImageUnloadApc.c)
 *     KiInitializeUserApc @ 0x1403D2E04 (KiInitializeUserApc.c)
 *     KeTestAlertThread @ 0x1403D4850 (KeTestAlertThread.c)
 *     EtwpApcPoolThunk @ 0x1403DD840 (EtwpApcPoolThunk.c)
 *     EtwpCovSampCaptureApc @ 0x1404340A0 (EtwpCovSampCaptureApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KiSchedulerApcTerminate @ 0x1408FDDD0 (KiSchedulerApcTerminate.c)
 *     PspUserApcReserveKernelRoutine @ 0x140A3C050 (PspUserApcReserveKernelRoutine.c)
 */

void __fastcall KiDeliverApc(char a1, __int64 (__fastcall *a2)(int, int, int, int, __int64), _KTRAP_FRAME *a3)
{
  unsigned __int16 SegCs; // ax
  unsigned __int64 Rip; // r8
  struct _KTHREAD *CurrentThread; // rbx
  _KTRAP_FRAME *TrapFrame; // r15
  ULONG_PTR Process; // rsi
  __int64 (__fastcall **v10)(int, int, int, int, __int64); // r15
  __int64 CurrentIrql; // rcx
  unsigned int v12; // r14d
  __int64 v13; // r14
  void (__fastcall *v14)(__int64); // r12
  __int64 v15; // rcx
  __int64 (__fastcall **v16)(int, int, int, int, __int64); // rax
  __int64 v17; // rcx
  ULONG_PTR v18; // r8
  __int64 v19; // rcx
  __int64 (__fastcall **v20)(int, int, int, int, __int64); // rax
  _LIST_ENTRY *v21; // r15
  __int64 (__fastcall *v22)(int, int, int, int, __int64); // r13
  __int64 v23; // rcx
  unsigned int v24; // r14d
  unsigned __int8 UserApcPendingAll; // r14
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v27; // r12
  __int64 (__fastcall *Flink)(int, int, int, int, __int64); // r8
  bool v29; // zf
  int v30; // r10d
  int v31; // r9d
  _LIST_ENTRY *v32; // r10
  struct _LIST_ENTRY *Blink; // rax
  int v34; // eax
  unsigned __int8 v35; // al
  unsigned __int8 v36; // al
  _LIST_ENTRY *j; // rcx
  __int64 v38; // rcx
  signed __int32 v39[8]; // [rsp+0h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-48h]
  __int64 v41; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h] BYREF
  __int64 (__fastcall *v43)(PVOID); // [rsp+50h] [rbp-18h] BYREF
  _KTRAP_FRAME *v44; // [rsp+58h] [rbp-10h]
  int v45; // [rsp+A8h] [rbp+40h]
  int v46; // [rsp+B0h] [rbp+48h]
  __int64 v47; // [rsp+B8h] [rbp+50h] BYREF

  v45 = (int)a2;
  P = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v47 = 0LL;
  if ( a3 )
  {
    SegCs = a3->SegCs;
    Rip = a3->Rip;
    if ( SegCs == 51 )
    {
      if ( Rip > qword_140FC7508 && Rip <= qword_140FC74F8 )
        a3->Rip = qword_140FC7508;
    }
    else if ( SegCs == 16
           && Rip > (unsigned __int64)&ExpInterlockedPopEntrySListResume
           && Rip <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
    {
      a3->Rax |= 0x10000uLL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v44 = TrapFrame;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( CurrentThread->SpecialApcDisable )
    goto LABEL_37;
  _InterlockedOr(v39, 0);
  v10 = (__int64 (__fastcall **)(int, int, int, int, __int64))&CurrentThread->152;
  while ( (char *)*v10 != (char *)v10 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentThread->ThreadLock );
    }
    a2 = *v10;
    if ( (char *)*v10 == (char *)v10 )
    {
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(1uLL);
      break;
    }
    CurrentThread->ApcState.KernelApcPending = 0;
    v13 = (__int64)a2 - 16;
    _m_prefetchw((char *)a2 - 16);
    v14 = (void (__fastcall *)(__int64))*((_QWORD *)a2 + 2);
    v43 = (__int64 (__fastcall *)(PVOID))*((_QWORD *)a2 + 4);
    P = (PVOID)*((_QWORD *)a2 + 5);
    v41 = *((_QWORD *)a2 + 6);
    v47 = *((_QWORD *)a2 + 7);
    if ( v43 )
    {
      if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
        goto LABEL_71;
      v15 = *(_QWORD *)a2;
      if ( *(__int64 (__fastcall **)(int, int, int, int, __int64))(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_41;
      v16 = (__int64 (__fastcall **)(int, int, int, int, __int64))*((_QWORD *)a2 + 1);
      if ( *v16 != a2 )
        goto LABEL_41;
      *v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))v15;
      *(_QWORD *)(v15 + 8) = v16;
      *(_BYTE *)(v13 + 82) = 0;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(1uLL);
      CurrentThread->ApcState.InProgressFlags = 1;
      if ( (char *)v14 == (char *)EtwpApcPoolThunk )
      {
        EtwpApcPoolThunk(v13, (unsigned int)&v43, (unsigned int)&P, (unsigned int)&v41, (__int64)&v47);
      }
      else
      {
        BugCheckParameter4 = (ULONG_PTR)&v47;
        if ( (char *)v14 == (char *)EtwpCovSampCaptureApc )
          EtwpCovSampCaptureApc(v13, &v43, &P, &v41, BugCheckParameter4);
        else
          guard_dispatch_icall_no_overrides(v13, &v43);
      }
      if ( !v43 )
        goto LABEL_31;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
      __writecr8(0LL);
      if ( (char *)v43 == (char *)KiSchedulerApc )
      {
        KiSchedulerApc(P, v41, v47);
      }
      else if ( v43 == EtwpTraceImageUnloadApc )
      {
        EtwpTraceImageUnloadApc(P);
      }
      else if ( (char *)v43 == (char *)KiUpdateTebApc )
      {
        KiUpdateTebApc(P, v41, v47);
      }
      else
      {
        guard_dispatch_icall_no_overrides(P, v41);
      }
      v17 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(v17, 1LL);
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
LABEL_31:
        CurrentThread->ApcState.InProgressFlags = 0;
      }
    }
    else
    {
      v19 = *(_QWORD *)a2;
      if ( *(__int64 (__fastcall **)(int, int, int, int, __int64))(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_41;
      v20 = (__int64 (__fastcall **)(int, int, int, int, __int64))*((_QWORD *)a2 + 1);
      if ( *v20 != a2 )
        goto LABEL_41;
      *v20 = (__int64 (__fastcall *)(int, int, int, int, __int64))v19;
      *(_QWORD *)(v19 + 8) = v20;
      *(_BYTE *)(v13 + 82) = 0;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(1uLL);
      CurrentThread->ApcState.InProgressFlags |= 2u;
      if ( (char *)v14 == (char *)IopCompleteRequest )
      {
        IopCompleteRequest(v13, (unsigned int)&v43, (unsigned int)&P, (unsigned int)&v41, (__int64)&v47);
        goto LABEL_78;
      }
      if ( v14 == IopCompletePageWrite )
      {
        BugCheckParameter4 = (ULONG_PTR)&v47;
        IopCompletePageWrite(v13);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
      else
      {
        BugCheckParameter4 = (ULONG_PTR)&v47;
        if ( (char *)v14 == (char *)MiStoreWriteModifiedCompleteApc )
        {
          MiStoreWriteModifiedCompleteApc(v13, &v43, &P, &v41, BugCheckParameter4);
          CurrentThread->ApcState.InProgressFlags &= ~2u;
        }
        else
        {
          guard_dispatch_icall_no_overrides(v13, &v43);
LABEL_78:
          CurrentThread->ApcState.InProgressFlags &= ~2u;
        }
      }
    }
  }
  if ( a1 == 1 )
  {
    v21 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v21->Flink != v21 )
    {
      v22 = 0LL;
      v43 = 0LL;
      P = 0LL;
      v41 = 0LL;
      v47 = 0LL;
      v46 = 0;
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(v23, a2);
      }
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v24);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      CurrentThread->ApcState.UserApcPendingAll = UserApcPendingAll & 0xFD;
      for ( i = v21->Flink; ; i = i->Flink )
      {
        v27 = 0LL;
        if ( i == v21 )
          goto LABEL_66;
        a2 = (__int64 (__fastcall *)(int, int, int, int, __int64))&i[-1];
        _m_prefetchw(&i[-1]);
        Flink = (__int64 (__fastcall *)(int, int, int, int, __int64))i[1].Flink;
        v29 = Flink == KeSpecialUserApcKernelRoutine;
        if ( Flink == KeSpecialUserApcKernelRoutine )
          goto LABEL_59;
        if ( (UserApcPendingAll & 2) != 0 )
          break;
      }
      v29 = Flink == KeSpecialUserApcKernelRoutine;
LABEL_59:
      v30 = 2;
      if ( !v29 )
        v30 = 0;
      v31 = v30 | 4;
      v29 = (*((_BYTE *)a2 + 1) & 1) == 0;
      v43 = (__int64 (__fastcall *)(PVOID))*((_QWORD *)a2 + 6);
      if ( v29 )
        v31 = v30;
      P = (PVOID)*((_QWORD *)a2 + 7);
      v41 = *((_QWORD *)a2 + 8);
      v47 = *((_QWORD *)a2 + 9);
      v32 = i->Flink;
      if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
LABEL_41:
        __fastfail(3u);
      Blink->Flink = v32;
      v27 = i - 1;
      v32->Blink = Blink;
      v22 = Flink;
      *((_BYTE *)a2 + 82) = 0;
      v46 = v31;
      if ( i != (_LIST_ENTRY *)16 )
      {
        v35 = CurrentThread->ApcState.UserApcPendingAll;
        v46 = v31;
        if ( (v35 & 1) != 0 )
        {
          v36 = v35 & 0xFE;
          v46 = v31;
          CurrentThread->ApcState.UserApcPendingAll = v36;
          a2 = KeSpecialUserApcKernelRoutine;
          for ( j = v21->Flink; j != v21; j = j->Flink )
          {
            if ( (__int64 (__fastcall *)(int, int, int, int, __int64))j[1].Flink == KeSpecialUserApcKernelRoutine )
            {
              CurrentThread->ApcState.UserApcPendingAll = v36 | 1;
              break;
            }
          }
        }
      }
LABEL_66:
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(1uLL);
      if ( v27 )
      {
        if ( (char *)v22 == (char *)KiSchedulerApcTerminate )
        {
          KiSchedulerApcTerminate(v27, &v43, &P, &v41, &v47);
LABEL_71:
          CurrentThread->ThreadLock = 0LL;
          if ( KiIrqlFlags )
          {
            LOBYTE(a2) = 1;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
          }
          __writecr8(1uLL);
        }
        else
        {
          BugCheckParameter4 = (ULONG_PTR)&v47;
          if ( (char *)v22 == (char *)PspUserApcReserveKernelRoutine )
            PspUserApcReserveKernelRoutine(v27, &v43, &P, &v41, BugCheckParameter4);
          else
            guard_dispatch_icall_no_overrides(v27, &v43);
          if ( !v43 && (UserApcPendingAll & 2) != 0 )
          {
            LOBYTE(v38) = 1;
            KeTestAlertThread(v38);
          }
          else
          {
            v34 = v46 | 1;
            if ( (UserApcPendingAll & 2) == 0 )
              v34 = v46;
            KiInitializeUserApc(v45, (_DWORD)a3, (_DWORD)v43, (_DWORD)P, v41, v47, v34);
          }
        }
      }
    }
  }
  TrapFrame = v44;
LABEL_37:
  v18 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v18 != Process )
    KeBugCheckEx(5u, Process, v18, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
