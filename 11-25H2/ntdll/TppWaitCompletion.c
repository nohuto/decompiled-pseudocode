/*
 * XREFs of TppWaitCompletion @ 0x180041270
 * Callers:
 *     TppDirectExecuteCallback @ 0x18003BD60 (TppDirectExecuteCallback.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18003FA60 (TppUpdateSubQueueTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppFreeWait @ 0x180041EB0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x180041F00 (TppTimerpFree.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppSetupNextWait @ 0x1800D70F0 (TppSetupNextWait.c)
 *     TppPHDelete @ 0x1800E08A0 (TppPHDelete.c)
 *     TppETWTimerCancelled @ 0x1801134B0 (TppETWTimerCancelled.c)
 *     NtWaitForAlertByThreadId @ 0x180166E70 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall TppWaitCompletion(PTP_CALLBACK_INSTANCE a1, __int64 a2, _TP_WAIT *a3)
{
  _RTL_SRWLOCK *p_Lock; // rbp
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  _RTL_SRWLOCK **v8; // rcx
  unsigned __int8 TimerStatus; // al
  _RTL_SRWLOCK *v10; // r14
  char v11; // di
  int v12; // edi
  signed int v13; // edi
  unsigned __int8 AllFlags; // al
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  __int64 v17; // r15
  unsigned __int64 v18; // r15
  __int64 v19; // rcx
  _LARGE_INTEGER *p_NextWaitTimeout; // r8
  signed __int64 First; // rax
  signed __int64 v22; // rdx
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  p_Lock = &a3->Timer.Lock;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v8 = (_RTL_SRWLOCK **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v8 )
      {
        if ( v8 )
          *v8 = p_Lock;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Lock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(p_Lock);
  TimerStatus = a3->Timer.TimerStatus;
  v10 = &a3->Timer.Work.CleanupGroupMember.Pool->TimerQueue.Lock;
  v11 = (TimerStatus & 2) != 0;
  if ( (TimerStatus & 1) != 0 )
  {
    v17 = 1LL;
    if ( (TimerStatus & 2) == 0 )
      v17 = 16LL;
    v18 = (unsigned __int64)&v10[v17];
    if ( RtlGetCurrentServiceSessionId() )
      v19 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v19 = 2147353478LL;
    if ( *(_BYTE *)v19 )
      TppETWTimerCancelled(v18, a3);
    RtlAcquireSRWLockExclusive(v10);
    if ( a3->Timer.Inserted )
    {
      TppPHDelete(v18 + 16, &a3->Timer.248);
      TppPHDelete(v18 + 8, &a3->Timer.WindowStartLinks);
      TppUpdateSubQueueTimer(v18, v11);
      a3->Timer.Inserted = 0;
      RtlReleaseSRWLockExclusive(v10);
      a3->Timer.Period = 0;
      v12 = 0;
      a3->Timer.DueTime = 0LL;
      a3->Timer.TimerStatus = 0;
    }
    else
    {
      RtlReleaseSRWLockExclusive(v10);
      a3->Timer.TimerStatus |= 4u;
      v23[1] = NtCurrentTeb()->ClientId.UniqueThread;
      _m_prefetchw(&a3->Timer.CancelIte);
      First = (signed __int64)a3->Timer.CancelIte.First;
      do
      {
        v22 = First;
        v23[0] = First;
        First = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&a3->Timer.CancelIte,
                  (signed __int64)v23,
                  First);
      }
      while ( First != v22 );
      RtlReleaseSRWLockExclusive(p_Lock);
      NtWaitForAlertByThreadId(&a3->Timer.CancelIte, 0LL);
      RtlAcquireSRWLockExclusive(p_Lock);
      v12 = 1;
    }
  }
  else
  {
    a3->Timer.DueTime = 0LL;
    v12 = 1;
  }
  v13 = v12 - 1;
  if ( (a3->WaitFlags.AllFlags & 4) == 0 )
    TppBarrierAdjust(&a3->Timer.Work.CleanupGroupMember.CallbackBarrier, 1LL, 0LL);
  AllFlags = a3->WaitFlags.AllFlags;
  a3->Handle = 0LL;
  if ( (AllFlags & 1) != 0 )
  {
    p_NextWaitTimeout = &a3->NextWaitTimeout;
    if ( (AllFlags & 2) == 0 )
      p_NextWaitTimeout = 0LL;
    v13 += TppSetupNextWait(a3, a3->NextWaitHandle, p_NextWaitTimeout);
  }
  a3->WaitFlags.AllFlags = 0;
  if ( v13 > 0 )
  {
    _InterlockedAdd(&a3->Timer.Work.CleanupGroupMember.Refcount.Refcount, v13);
    RtlReleaseSRWLockExclusive(p_Lock);
  }
  else
  {
    RtlReleaseSRWLockExclusive(p_Lock);
    if ( v13 < 0 && _InterlockedExchangeAdd(&a3->Timer.Work.CleanupGroupMember.Refcount.Refcount, v13) == -v13 )
    {
      Free = a3->Timer.Work.CleanupGroupMember.VFuncs->Free;
      if ( (char *)Free == (char *)TppFreeWait )
      {
        TppFreeWait(a3);
      }
      else if ( (char *)Free == (char *)TppTimerpFree )
      {
        TppTimerpFree(a3);
      }
      else
      {
        Free(&a3->Timer.Work.CleanupGroupMember);
      }
    }
  }
  return TppExecuteWaitCallback(a1, a3, 0);
}
