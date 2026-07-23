/*
 * XREFs of TpWaitForTimer @ 0x1800889F0
 * Callers:
 *     RtlDeleteTimer @ 0x180087440 (RtlDeleteTimer.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppETWCallbackCancel @ 0x180086D54 (TppETWCallbackCancel.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  char v5; // bp
  char v6; // si
  _TP_POOL *Pool; // rdx
  __int64 v8; // r8
  unsigned __int32 Exchange; // ecx
  int v10; // edi
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  bool v14; // zf
  signed __int32 v15; // eax

  if ( !Timer
    || Timer->WaitTimer
    || (Flags = Timer->Work.CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)())Timer->Work.CleanupGroupMember.VFuncs != TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    v5 = 0;
    v6 = 0;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive(&Timer->Lock);
      Pool = Timer->Work.CleanupGroupMember.Pool;
      LOBYTE(v8) = 1;
      ++Timer->BlockInsert;
      v6 = TppCancelTimer(Timer, &Pool->TimerQueue, v8);
      if ( Timer->Work.CleanupGroupMember.CallbackBarrier.Ptr.0 )
        v5 = 1;
      else
        --Timer->BlockInsert;
      RtlReleaseSRWLockExclusive(&Timer->Lock);
    }
    _m_prefetchw((const void *)&Timer->Work.WorkState);
    Exchange = Timer->Work.WorkState.Exchange;
    if ( CancelPendingCallbacks )
    {
      while ( 1 )
      {
        v10 = Exchange >> 1;
        if ( !(Exchange >> 1) )
          break;
        v15 = _InterlockedCompareExchange(&Timer->Work.WorkState.Exchange, Exchange & 1, Exchange);
        v14 = Exchange == v15;
        Exchange = v15;
        if ( v14 )
          goto LABEL_14;
      }
    }
    v10 = 0;
LABEL_14:
    TppBarrierAdjust((_RTL_SRWLOCK *)&Timer->Work.CleanupGroupMember.CallbackBarrier, -v10, 1);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 && v10 )
      TppETWCallbackCancel(
        (__int64)Timer->Work.CleanupGroupMember.Pool,
        (__int64)&Timer->Work.Task,
        (__int64)Timer->Work.CleanupGroupMember.Callback,
        (__int64)Timer->Work.CleanupGroupMember.Context,
        (__int64)Timer->Work.CleanupGroupMember.SubProcessTag,
        v10);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive(&Timer->Lock);
      --Timer->BlockInsert;
      RtlReleaseSRWLockExclusive(&Timer->Lock);
    }
    if ( v6 && _InterlockedExchangeAdd(&Timer->Work.CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
    {
      Free = Timer->Work.CleanupGroupMember.VFuncs->Free;
      if ( (char *)Free == (char *)TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy(Timer);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, Timer);
      }
      else if ( (char *)Free == (char *)TppAlpcpFree )
      {
        TppAlpcpFree(Timer);
      }
      else if ( (char *)Free == (char *)TppWorkpFree )
      {
        TppWorkpFree(Timer);
      }
      else
      {
        Free(&Timer->Work.CleanupGroupMember);
      }
    }
  }
}
