/*
 * XREFs of KeWaitForAlertByThreadId @ 0x14020765C
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     RtlpRunOnceWaitForInit @ 0x1407872A8 (RtlpRunOnceWaitForInit.c)
 *     NtWaitForAlertByThreadId @ 0x1409E2D00 (NtWaitForAlertByThreadId.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAbUmPostWait @ 0x140207AA0 (KiAbUmPostWait.c)
 *     KiCheckWaitNext @ 0x1402092E0 (KiCheckWaitNext.c)
 *     KiPerformWaitDeferredWork @ 0x14024F1A0 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  _QWORD *SchedulerSharedSystemSlot; // rdx
  signed __int32 *SchedulerAssist; // r8
  __int64 CurrentIrql; // rcx
  int v9; // ebx
  unsigned __int64 WaitIrql; // rsi
  unsigned int v11; // r14d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // r8
  unsigned __int8 v18; // si
  __int64 ThreadTimerDelay; // rdx
  unsigned int i; // ecx
  __int64 v21; // rdx
  __int64 v22; // r8
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  int v25; // eax
  __int64 v26; // rdx
  int v27; // [rsp+30h] [rbp-20h]
  __int64 v28; // [rsp+30h] [rbp-20h]
  unsigned __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h]
  int v32; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v29 = 0LL;
  v32 = 0;
  v4 = (int)a2;
  v27 = 0;
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
        v28 = SchedulerSharedSystemSlot[i];
        if ( (void *)(v28 & 0x7FFFFFFFFFFFFFFCLL) == a3 )
        {
          LOBYTE(v28) = v28 | 1;
          SchedulerSharedSystemSlot[i] = v28;
          break;
        }
      }
    }
    SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v23 = *SchedulerAssist;
      do
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange(SchedulerAssist, v23 & 0xFFDFFFFF, v23);
      }
      while ( v24 != v23 );
      if ( (v23 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick();
    }
    _enable();
    v27 = 1;
  }
  v9 = KiCheckWaitNext((_DWORD)CurrentThread, v4, 0, (unsigned int)&v29, (__int64)&v32);
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v30 = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      v11 = 0;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql) )
          {
            HvlNotifyLongSpinWait(v11);
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
      KiDeliverApc(0LL, 0LL, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v21) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v21, v22);
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
      v15 = 257;
LABEL_45:
      CurrentThread->WaitReason = 0;
      KiFastExitThreadWait(KeGetCurrentPrcb(), (ULONG_PTR)CurrentThread);
      goto LABEL_25;
    }
    v12 = v29;
    if ( v32 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v13 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v12 = v29;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v12 = v29 + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v32 )
        goto LABEL_24;
      if ( !v29 )
        goto LABEL_66;
      v13 = MEMORY[0xFFFFF78000000014];
    }
    if ( v13 > v12 )
    {
LABEL_66:
      v15 = 258;
      goto LABEL_45;
    }
LABEL_24:
    CurrentThread->WaitBlock[0].Object = a3;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    v15 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v9, 0LL);
    CurrentThread->WaitReason = 0;
    v9 = 0;
    if ( v15 != 256 )
      goto LABEL_25;
    v18 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = 2;
      LOBYTE(CurrentIrql) = v18;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14, v16);
    }
    CurrentThread->WaitIrql = v18;
  }
  v30 = 0LL;
  v25 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread);
  CurrentThread->ThreadLock = 0LL;
  if ( v25 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb());
  }
  else
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v26) = WaitIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
    }
    __writecr8(WaitIrql);
  }
  v15 = 192;
LABEL_25:
  if ( v27 )
    KiAbUmPostWait(CurrentThread, a3);
  return v15;
}
