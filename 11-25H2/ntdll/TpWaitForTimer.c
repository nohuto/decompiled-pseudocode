/*
 * XREFs of TpWaitForTimer @ 0x18003FF90
 * Callers:
 *     RtlDeleteTimer @ 0x18003B680 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     TppETWCallbackCancel @ 0x1801144BC (TppETWCallbackCancel.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  char v5; // bp
  char v6; // si
  _TP_POOL *Pool; // rdx
  unsigned __int32 Exchange; // ecx
  unsigned __int32 v9; // edi
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  bool v13; // zf
  signed __int32 v14; // eax

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
      ++Timer->BlockInsert;
      v6 = TppCancelTimer((__int64)Timer, &Pool->TimerQueue.Lock, 1);
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
        v9 = Exchange >> 1;
        if ( !(Exchange >> 1) )
          break;
        v14 = _InterlockedCompareExchange(&Timer->Work.WorkState.Exchange, Exchange & 1, Exchange);
        v13 = Exchange == v14;
        Exchange = v14;
        if ( v13 )
          goto LABEL_14;
      }
    }
    v9 = 0;
LABEL_14:
    TppBarrierAdjust(&Timer->Work.CleanupGroupMember.CallbackBarrier, -v9, 1LL);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v11 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 && v9 )
      TppETWCallbackCancel(
        Timer->Work.CleanupGroupMember.Pool,
        (_DWORD)Timer + 200,
        Timer->Work.CleanupGroupMember.Callback,
        Timer->Work.CleanupGroupMember.Context,
        (__int64)Timer->Work.CleanupGroupMember.SubProcessTag,
        v9);
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
