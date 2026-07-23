/*
 * XREFs of KeWaitForAlertByThreadId @ 0x14032EC3C
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     RtlpRunOnceWaitForInit @ 0x1407871D8 (RtlpRunOnceWaitForInit.c)
 *     NtWaitForAlertByThreadId @ 0x1409DD760 (NtWaitForAlertByThreadId.c)
 * Callees:
 *     KiPerformWaitDeferredWork @ 0x14027F7B0 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     KiAbUmPostWait @ 0x14032F080 (KiAbUmPostWait.c)
 *     KiCheckWaitNext @ 0x1403308C0 (KiCheckWaitNext.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  _QWORD *SchedulerSharedSystemSlot; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 WaitIrql; // rsi
  unsigned int v13; // r14d
  int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // esi
  unsigned __int8 v21; // si
  __int64 ThreadTimerDelay; // rdx
  unsigned int i; // ecx
  __int64 v24; // rdx
  __int64 CurrentIrql; // rcx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  int v28; // eax
  __int64 v29; // rdx
  int v30; // [rsp+30h] [rbp-20h]
  __int64 v31; // [rsp+30h] [rbp-20h]
  __int64 v32; // [rsp+38h] [rbp-18h] BYREF
  _QWORD *v33[2]; // [rsp+40h] [rbp-10h] BYREF
  int v35; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v32 = 0LL;
  v35 = 0;
  v4 = (int)a2;
  v30 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    return 257;
  if ( a2 && !*a2 )
    return 258;
  if ( a3 && a1 == 1 )
  {
    _disable();
    SchedulerSharedSystemSlot = CurrentThread->SchedulerSharedSystemSlot;
    if ( SchedulerSharedSystemSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v31 = SchedulerSharedSystemSlot[i];
        if ( (void *)(v31 & 0x7FFFFFFFFFFFFFFCLL) == a3 )
        {
          LOBYTE(v31) = v31 | 1;
          SchedulerSharedSystemSlot[i] = v31;
          break;
        }
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v26 = *SchedulerAssist;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(SchedulerAssist, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v30 = 1;
  }
  v9 = KiCheckWaitNext((_DWORD)CurrentThread, v4, 0, (unsigned int)&v32, (__int64)&v35);
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v33[0] = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      v13 = 0;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)WaitIrql )
        break;
      KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 1u);
      KiDeliverApc(0, 0LL, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v24) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v24);
      }
      CurrentThread->WaitIrql = 0;
    }
    if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && a1 )
      break;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 37;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    {
      v19 = 257;
LABEL_46:
      CurrentThread->WaitReason = 0;
      KiFastExitThreadWait(KeGetCurrentPrcb(), (ULONG_PTR)CurrentThread, v9, v11);
      goto LABEL_26;
    }
    v11 = v32;
    v14 = v35;
    v15 = v32;
    if ( v35 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v16 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v15 = v32;
      v11 = v32;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v15 = v32 + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v35 )
        goto LABEL_25;
      if ( !v32 )
        goto LABEL_67;
      v16 = MEMORY[0xFFFFF78000000014];
      v11 = v32;
    }
    if ( v16 > v15 )
    {
LABEL_67:
      v19 = 258;
      goto LABEL_46;
    }
    v14 = v35;
LABEL_25:
    CurrentThread->WaitBlock[0].Object = a3;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    v19 = KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, v14, v11, v9, 0LL);
    CurrentThread->WaitReason = 0;
    v9 = 0;
    if ( v19 != 256 )
      goto LABEL_26;
    v21 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v17) = 2;
      LOBYTE(v18) = v21;
      KiRaiseIrqlProcessIrqlFlags(v18, v17);
    }
    CurrentThread->WaitIrql = v21;
  }
  v33[0] = 0LL;
  LOBYTE(v10) = 1;
  v28 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread, v9, v10, (__int64)v33);
  CurrentThread->ThreadLock = 0LL;
  if ( v28 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v33, WaitIrql);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v29) = WaitIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
    }
    __writecr8(WaitIrql);
  }
  v19 = 192;
LABEL_26:
  if ( v30 )
    KiAbUmPostWait(CurrentThread, a3);
  return v19;
}
