/*
 * XREFs of KiDeliverApc @ 0x14031D9B0
 * Callers:
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x14020765C (KeWaitForAlertByThreadId.c)
 *     KiBeginThreadWait @ 0x140209010 (KiBeginThreadWait.c)
 *     KiSatisfyThreadWait @ 0x14024E0B0 (KiSatisfyThreadWait.c)
 *     KiExitThreadWait @ 0x14024EFB0 (KiExitThreadWait.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiContinueEx @ 0x1403E6A90 (KiContinueEx.c)
 *     KiApcInterrupt @ 0x1406AF140 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 * Callees:
 *     KiUpdateTebApc @ 0x140205800 (KiUpdateTebApc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSchedulerApc @ 0x140295D20 (KiSchedulerApc.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x14036B640 (MiStoreWriteModifiedCompleteApc.c)
 *     IopCompletePageWrite @ 0x140370E60 (IopCompletePageWrite.c)
 *     EtwpTraceImageUnloadApc @ 0x1403C4A00 (EtwpTraceImageUnloadApc.c)
 *     KiInitializeUserApc @ 0x1403E5264 (KiInitializeUserApc.c)
 *     KeTestAlertThread @ 0x1403E6CB0 (KeTestAlertThread.c)
 *     EtwpApcPoolThunk @ 0x1403ED870 (EtwpApcPoolThunk.c)
 *     EtwpCovSampCaptureApc @ 0x14043E480 (EtwpCovSampCaptureApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KiSchedulerApcTerminate @ 0x1408A7B70 (KiSchedulerApcTerminate.c)
 *     PspUserApcReserveKernelRoutine @ 0x140A46390 (PspUserApcReserveKernelRoutine.c)
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
  void (__fastcall *v14)(__int64, __int64, _QWORD *, ULONG_PTR *, _QWORD *); // r12
  __int64 v15; // rcx
  __int64 (__fastcall **v16)(int, int, int, int, __int64); // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  ULONG_PTR v19; // r8
  __int64 v20; // rcx
  __int64 (__fastcall **v21)(int, int, int, int, __int64); // rax
  _LIST_ENTRY *v22; // r15
  __int64 (__fastcall *v23)(int, int, int, int, __int64); // r13
  __int64 v24; // rcx
  unsigned int v25; // r14d
  unsigned __int8 UserApcPendingAll; // r14
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v28; // r12
  __int64 (__fastcall *Flink)(int, int, int, int, __int64); // r8
  bool v30; // zf
  int v31; // r10d
  int v32; // r9d
  _LIST_ENTRY *v33; // r10
  struct _LIST_ENTRY *Blink; // rax
  int v35; // eax
  unsigned __int8 v36; // al
  unsigned __int8 v37; // al
  _LIST_ENTRY *j; // rcx
  __int64 v39; // rcx
  signed __int32 v40[8]; // [rsp+0h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h] BYREF
  __int64 (*v44)(); // [rsp+50h] [rbp-18h] BYREF
  _KTRAP_FRAME *v45; // [rsp+58h] [rbp-10h]
  int v46; // [rsp+A8h] [rbp+40h]
  int v47; // [rsp+B0h] [rbp+48h]
  __int64 v48; // [rsp+B8h] [rbp+50h] BYREF

  v46 = (int)a2;
  P = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  v48 = 0LL;
  if ( a3 )
  {
    SegCs = a3->SegCs;
    Rip = a3->Rip;
    if ( SegCs == 51 )
    {
      if ( Rip > qword_140FC6488 && Rip <= qword_140FC6478 )
        a3->Rip = qword_140FC6488;
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
  v45 = TrapFrame;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( CurrentThread->SpecialApcDisable )
    goto LABEL_37;
  _InterlockedOr(v40, 0);
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
    v14 = (void (__fastcall *)(__int64, __int64, _QWORD *, ULONG_PTR *, _QWORD *))*((_QWORD *)a2 + 2);
    v44 = (__int64 (*)())*((_QWORD *)a2 + 4);
    P = (PVOID)*((_QWORD *)a2 + 5);
    v42 = *((_QWORD *)a2 + 6);
    v48 = *((_QWORD *)a2 + 7);
    if ( v44 )
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
        EtwpApcPoolThunk(v13, (unsigned int)&v44, (unsigned int)&P, (unsigned int)&v42, (__int64)&v48);
      }
      else
      {
        BugCheckParameter4 = (ULONG_PTR)&v48;
        if ( (char *)v14 == (char *)EtwpCovSampCaptureApc )
          EtwpCovSampCaptureApc(v13, &v44, &P, &v42, BugCheckParameter4);
        else
          guard_dispatch_icall_no_overrides(v13, &v44, &P, &v42);
      }
      if ( !v44 )
        goto LABEL_31;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
      __writecr8(0LL);
      if ( (char *)v44 == (char *)KiSchedulerApc )
      {
        KiSchedulerApc((__int64)P);
      }
      else if ( (char *)v44 == (char *)EtwpTraceImageUnloadApc )
      {
        EtwpTraceImageUnloadApc(P);
      }
      else if ( v44 == KiUpdateTebApc )
      {
        KiUpdateTebApc();
      }
      else
      {
        guard_dispatch_icall_no_overrides(P, v42, v48, v17);
      }
      v18 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(v18, 1LL);
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
      v20 = *(_QWORD *)a2;
      if ( *(__int64 (__fastcall **)(int, int, int, int, __int64))(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_41;
      v21 = (__int64 (__fastcall **)(int, int, int, int, __int64))*((_QWORD *)a2 + 1);
      if ( *v21 != a2 )
        goto LABEL_41;
      *v21 = (__int64 (__fastcall *)(int, int, int, int, __int64))v20;
      *(_QWORD *)(v20 + 8) = v21;
      *(_BYTE *)(v13 + 82) = 0;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(1uLL);
      CurrentThread->ApcState.InProgressFlags |= 2u;
      if ( v14 == IopCompleteRequest )
      {
        IopCompleteRequest(v13, (__int64)&v44, &P, (ULONG_PTR *)&v42, &v48);
        goto LABEL_78;
      }
      if ( (char *)v14 == (char *)IopCompletePageWrite )
      {
        IopCompletePageWrite(v13, &v44, &P, &v42, &v48);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
      else
      {
        BugCheckParameter4 = (ULONG_PTR)&v48;
        if ( (char *)v14 == (char *)MiStoreWriteModifiedCompleteApc )
        {
          MiStoreWriteModifiedCompleteApc(v13, &v44, &P, &v42, BugCheckParameter4);
          CurrentThread->ApcState.InProgressFlags &= ~2u;
        }
        else
        {
          guard_dispatch_icall_no_overrides(v13, &v44, &P, &v42);
LABEL_78:
          CurrentThread->ApcState.InProgressFlags &= ~2u;
        }
      }
    }
  }
  if ( a1 == 1 )
  {
    v22 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v22->Flink != v22 )
    {
      v23 = 0LL;
      v44 = 0LL;
      P = 0LL;
      v42 = 0LL;
      v48 = 0LL;
      v47 = 0;
      v24 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(v24, a2);
      }
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v25 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v25);
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
      for ( i = v22->Flink; ; i = i->Flink )
      {
        v28 = 0LL;
        if ( i == v22 )
          goto LABEL_66;
        a2 = (__int64 (__fastcall *)(int, int, int, int, __int64))&i[-1];
        _m_prefetchw(&i[-1]);
        Flink = (__int64 (__fastcall *)(int, int, int, int, __int64))i[1].Flink;
        v30 = Flink == KeSpecialUserApcKernelRoutine;
        if ( Flink == KeSpecialUserApcKernelRoutine )
          goto LABEL_59;
        if ( (UserApcPendingAll & 2) != 0 )
          break;
      }
      v30 = Flink == KeSpecialUserApcKernelRoutine;
LABEL_59:
      v31 = 2;
      if ( !v30 )
        v31 = 0;
      v32 = v31 | 4;
      v30 = (*((_BYTE *)a2 + 1) & 1) == 0;
      v44 = (__int64 (*)())*((_QWORD *)a2 + 6);
      if ( v30 )
        v32 = v31;
      P = (PVOID)*((_QWORD *)a2 + 7);
      v42 = *((_QWORD *)a2 + 8);
      v48 = *((_QWORD *)a2 + 9);
      v33 = i->Flink;
      if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
LABEL_41:
        __fastfail(3u);
      Blink->Flink = v33;
      v28 = i - 1;
      v33->Blink = Blink;
      v23 = Flink;
      *((_BYTE *)a2 + 82) = 0;
      v47 = v32;
      if ( i != (_LIST_ENTRY *)16 )
      {
        v36 = CurrentThread->ApcState.UserApcPendingAll;
        v47 = v32;
        if ( (v36 & 1) != 0 )
        {
          v37 = v36 & 0xFE;
          v47 = v32;
          CurrentThread->ApcState.UserApcPendingAll = v37;
          a2 = KeSpecialUserApcKernelRoutine;
          for ( j = v22->Flink; j != v22; j = j->Flink )
          {
            if ( (__int64 (__fastcall *)(int, int, int, int, __int64))j[1].Flink == KeSpecialUserApcKernelRoutine )
            {
              CurrentThread->ApcState.UserApcPendingAll = v37 | 1;
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
      if ( v28 )
      {
        if ( (char *)v23 == (char *)KiSchedulerApcTerminate )
        {
          KiSchedulerApcTerminate(v28, &v44, &P, &v42, &v48);
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
          BugCheckParameter4 = (ULONG_PTR)&v48;
          if ( (char *)v23 == (char *)PspUserApcReserveKernelRoutine )
            PspUserApcReserveKernelRoutine(v28, &v44, &P, &v42, BugCheckParameter4);
          else
            guard_dispatch_icall_no_overrides(v28, &v44, &P, &v42);
          if ( !v44 && (UserApcPendingAll & 2) != 0 )
          {
            LOBYTE(v39) = 1;
            KeTestAlertThread(v39);
          }
          else
          {
            v35 = v47 | 1;
            if ( (UserApcPendingAll & 2) == 0 )
              v35 = v47;
            KiInitializeUserApc(v46, (_DWORD)a3, (_DWORD)v44, (_DWORD)P, v42, v48, v35);
          }
        }
      }
    }
  }
  TrapFrame = v45;
LABEL_37:
  v19 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v19 != Process )
    KeBugCheckEx(5u, Process, v19, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
