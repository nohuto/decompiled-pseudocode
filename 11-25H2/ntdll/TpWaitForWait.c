/*
 * XREFs of TpWaitForWait @ 0x18003D030
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003E2E0 (TppCancelWait.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppWorkWait @ 0x180041190 (TppWorkWait.c)
 */

void __cdecl TpWaitForWait(PTP_WAIT Wait, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  char v3; // r14
  _TP_POOL *Pool; // rdi
  unsigned int v7; // ecx
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  _PEB_LDR_DATA *Ldr; // rcx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  Flags = Wait->Timer.Work.CleanupGroupMember.Flags;
  v3 = 0;
  v10 = 0;
  if ( (Flags & 0x10000) != 0
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)())Wait->Timer.Work.CleanupGroupMember.VFuncs != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr);
  }
  else
  {
    if ( CancelPendingCallbacks )
    {
      Pool = Wait->Timer.Work.CleanupGroupMember.Pool;
      RtlAcquireSRWLockExclusive(&Wait->Timer.Lock);
      ++Wait->Timer.BlockInsert;
      TppCancelWait(Wait, &Pool->TimerQueue, 2LL, &v10);
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
    v7 = v10;
    if ( v10 && _InterlockedExchangeAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v10) == -v7 )
    {
      Free = Wait->Timer.Work.CleanupGroupMember.VFuncs->Free;
      if ( (char *)Free == (char *)TppFreeWait )
      {
        TppFreeWait(Wait);
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
