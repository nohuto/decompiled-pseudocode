/*
 * XREFs of TpWaitForWait @ 0x18008B410
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18008AB90 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x1800876C0 (TppCancelWait.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppWorkWait @ 0x18008B630 (TppWorkWait.c)
 */

void __cdecl TpWaitForWait(PTP_WAIT Wait, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  char v3; // r14
  _TP_POOL *Pool; // rdi
  unsigned int v7; // ecx
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  Flags = Wait->Timer.Work.CleanupGroupMember.Flags;
  v3 = 0;
  v9 = 0;
  if ( (Flags & 0x10000) != 0
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)())Wait->Timer.Work.CleanupGroupMember.VFuncs != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    if ( CancelPendingCallbacks )
    {
      Pool = Wait->Timer.Work.CleanupGroupMember.Pool;
      RtlAcquireSRWLockExclusive(&Wait->Timer.Lock);
      ++Wait->Timer.BlockInsert;
      TppCancelWait((__int64)Wait, (__int64)&Pool->TimerQueue, 2, &v9);
      if ( Wait->Timer.Work.CleanupGroupMember.CallbackBarrier.Ptr.0 )
        v3 = 1;
      else
        --Wait->Timer.BlockInsert;
      RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
      TppWorkWait(Wait, CancelPendingCallbacks);
      if ( v3 )
      {
        RtlAcquireSRWLockExclusive(&Wait->Timer.Lock);
        --Wait->Timer.BlockInsert;
        RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
      }
    }
    else
    {
      TppWorkWait(Wait, CancelPendingCallbacks);
    }
    v7 = v9;
    if ( v9 && _InterlockedExchangeAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v9) == -v7 )
    {
      Free = Wait->Timer.Work.CleanupGroupMember.VFuncs->Free;
      if ( (char *)Free == (char *)TppFreeWait )
      {
        TppFreeWait((__int64)Wait);
      }
      else if ( (char *)Free == (char *)TppTimerpFree )
      {
        TppTimerpFree(Wait);
      }
      else
      {
        Free(&Wait->Timer.Work.CleanupGroupMember);
      }
    }
  }
}
