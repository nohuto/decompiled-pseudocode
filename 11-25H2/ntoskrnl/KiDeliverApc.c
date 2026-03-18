/*
 * XREFs of KiDeliverApc @ 0x140286490
 * Callers:
 *     KiContinueEx @ 0x140260E20 (KiContinueEx.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiExitThreadWait @ 0x1402E5EA0 (KiExitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiSatisfyThreadWait @ 0x1402F4960 (KiSatisfyThreadWait.c)
 *     KiBeginThreadWait @ 0x1403059F0 (KiBeginThreadWait.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KiApcInterrupt @ 0x1406A3E70 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 * Callees:
 *     KiUpdateTebApc @ 0x140207180 (KiUpdateTebApc.c)
 *     KiInitializeUserApc @ 0x140260620 (KiInitializeUserApc.c)
 *     KeTestAlertThread @ 0x140261EE0 (KeTestAlertThread.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     KiSchedulerApc @ 0x1402F2C80 (KiSchedulerApc.c)
 *     EtwpApcPoolThunk @ 0x14030A360 (EtwpApcPoolThunk.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwpCovSampCaptureApc @ 0x140348740 (EtwpCovSampCaptureApc.c)
 *     IopCompletePageWrite @ 0x14035A5E0 (IopCompletePageWrite.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x14040E600 (MiStoreWriteModifiedCompleteApc.c)
 *     EtwpTraceImageUnloadApc @ 0x140447E00 (EtwpTraceImageUnloadApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     KiSchedulerApcTerminate @ 0x1408F47B0 (KiSchedulerApcTerminate.c)
 *     PspUserApcReserveKernelRoutine @ 0x140A41D70 (PspUserApcReserveKernelRoutine.c)
 */

void __fastcall KiDeliverApc(char a1, __int64 (__fastcall *a2)(int, int, int, int, __int64), __int64 a3)
{
  __int16 v5; // ax
  unsigned __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // rbx
  _KTRAP_FRAME *TrapFrame; // r14
  ULONG_PTR Process; // r12
  __int64 (__fastcall **v10)(int, int, int, int, __int64); // r14
  __int64 CurrentIrql; // rcx
  unsigned int v12; // esi
  char *v13; // rsi
  __int64 (__fastcall *v14)(_DWORD, _DWORD, _DWORD, _DWORD, __int64); // r15
  __int64 v15; // rcx
  __int64 (__fastcall **v16)(int, int, int, int, __int64); // rax
  __int64 v17; // rcx
  ULONG_PTR v18; // r8
  __int64 v19; // rcx
  __int64 (__fastcall **v20)(int, int, int, int, __int64); // rax
  _LIST_ENTRY *v21; // r14
  unsigned int v22; // r13d
  __int64 v23; // rcx
  unsigned int v24; // esi
  unsigned __int8 UserApcPendingAll; // si
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v27; // r15
  __int64 (__fastcall *Flink)(int, int, int, int, __int64); // r8
  bool v29; // zf
  int v30; // r10d
  int v31; // r9d
  _LIST_ENTRY *v32; // r10
  struct _LIST_ENTRY *Blink; // rax
  unsigned int v34; // eax
  unsigned __int8 v35; // al
  unsigned __int8 v36; // al
  _LIST_ENTRY *j; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  signed __int32 v40[8]; // [rsp+0h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  __int64 (*v43)(); // [rsp+48h] [rbp-20h] BYREF
  _KTRAP_FRAME *v44; // [rsp+50h] [rbp-18h]
  __int64 (__fastcall *v45)(int, int, int, int, __int64); // [rsp+58h] [rbp-10h]
  __int64 v46; // [rsp+A8h] [rbp+40h]
  __int64 v47; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+50h] BYREF

  v46 = (__int64)a2;
  P = 0LL;
  v43 = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  if ( a3 )
  {
    v5 = *(_WORD *)(a3 + 368);
    v6 = *(_QWORD *)(a3 + 360);
    if ( v5 == 51 )
    {
      if ( v6 > qword_140FC64C8 && v6 <= qword_140FC64B8 )
        *(_QWORD *)(a3 + 360) = qword_140FC64C8;
    }
    else if ( v5 == 16
           && v6 > (unsigned __int64)&ExpInterlockedPopEntrySListResume
           && v6 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
    {
      *(_QWORD *)(a3 + 48) |= 0x10000uLL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v44 = TrapFrame;
  CurrentThread->TrapFrame = (_KTRAP_FRAME *)a3;
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql) )
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
    v13 = (char *)a2 - 16;
    _m_prefetchw((char *)a2 - 16);
    v14 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))*((_QWORD *)a2 + 2);
    v43 = (__int64 (*)())*((_QWORD *)a2 + 4);
    P = (PVOID)*((_QWORD *)a2 + 5);
    v48 = *((_QWORD *)a2 + 6);
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
      v13[82] = 0;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(1uLL);
      CurrentThread->ApcState.InProgressFlags = 1;
      if ( v14 == EtwpApcPoolThunk )
      {
        EtwpApcPoolThunk((_DWORD)v13, (unsigned int)&v43, (unsigned int)&P, (unsigned int)&v48, (__int64)&v47);
      }
      else
      {
        BugCheckParameter4 = (ULONG_PTR)&v47;
        if ( (char *)v14 == (char *)EtwpCovSampCaptureApc )
          EtwpCovSampCaptureApc(v13, &v43, &P, &v48, BugCheckParameter4);
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
        KiSchedulerApc(P, v48, v47);
      }
      else if ( (char *)v43 == (char *)EtwpTraceImageUnloadApc )
      {
        EtwpTraceImageUnloadApc(P);
      }
      else if ( v43 == KiUpdateTebApc )
      {
        KiUpdateTebApc();
      }
      else
      {
        guard_dispatch_icall_no_overrides(P, v48);
      }
      v17 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(v17);
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
      v13[82] = 0;
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
        IopCompleteRequest((_DWORD)v13, (unsigned int)&v43, (unsigned int)&P, (unsigned int)&v48, (__int64)&v47);
        goto LABEL_81;
      }
      if ( (char *)v14 == (char *)IopCompletePageWrite )
      {
        IopCompletePageWrite(v13, &v43, &P, &v48, &v47);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
      else
      {
        BugCheckParameter4 = (ULONG_PTR)&v47;
        if ( (char *)v14 == (char *)MiStoreWriteModifiedCompleteApc )
        {
          MiStoreWriteModifiedCompleteApc(v13, &v43, &P, &v48, BugCheckParameter4);
          CurrentThread->ApcState.InProgressFlags &= ~2u;
        }
        else
        {
          guard_dispatch_icall_no_overrides(v13, &v43);
LABEL_81:
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
      v45 = 0LL;
      v22 = 0;
      v43 = 0LL;
      P = 0LL;
      v48 = 0LL;
      v47 = 0LL;
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v23);
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
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
      v43 = (__int64 (*)())*((_QWORD *)a2 + 6);
      if ( v29 )
        v31 = v30;
      P = (PVOID)*((_QWORD *)a2 + 7);
      v48 = *((_QWORD *)a2 + 8);
      v47 = *((_QWORD *)a2 + 9);
      v32 = i->Flink;
      if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
LABEL_41:
        __fastfail(3u);
      Blink->Flink = v32;
      v27 = i - 1;
      v32->Blink = Blink;
      v22 = v31;
      *((_BYTE *)a2 + 82) = 0;
      v45 = Flink;
      if ( i != (_LIST_ENTRY *)16 )
      {
        v35 = CurrentThread->ApcState.UserApcPendingAll;
        v45 = Flink;
        if ( (v35 & 1) != 0 )
        {
          v36 = v35 & 0xFE;
          v45 = Flink;
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
        if ( (char *)v45 == (char *)KiSchedulerApcTerminate )
        {
          KiSchedulerApcTerminate(v27, &v43, &P, &v48, &v47);
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
          if ( (char *)v45 == (char *)PspUserApcReserveKernelRoutine )
          {
            PspUserApcReserveKernelRoutine(v27, &v43, &P, &v48, &v47);
          }
          else
          {
            BugCheckParameter4 = (ULONG_PTR)&v47;
            guard_dispatch_icall_no_overrides(v27, &v43);
          }
          if ( !v43 && (UserApcPendingAll & 2) != 0 )
          {
            LOBYTE(v39) = 1;
            KeTestAlertThread(v39, v38);
          }
          else
          {
            v34 = v22 | 1;
            if ( (UserApcPendingAll & 2) == 0 )
              v34 = v22;
            KiInitializeUserApc(v46, a3, (__int64)v43, (__int64)P, v48, v47, v34);
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
