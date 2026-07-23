/*
 * XREFs of TpReleaseTimer @ 0x180088160
 * Callers:
 *     RtlDeleteTimer @ 0x180087440 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x1800F1B08 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x1800F5CD0 (RtlDeleteTimerQueueEx.c)
 *     RtlpHpGCTimerEnable @ 0x1801408D0 (RtlpHpGCTimerEnable.c)
 * Callees:
 *     TppFreeWait @ 0x18004CEA0 (TppFreeWait.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  volatile int Flags; // eax
  signed __int32 v3; // eax
  _TP_POOL *Pool; // rdx
  char v5; // al
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  void *ThreadPoolData; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !Timer
    || Timer->WaitTimer
    || (Flags = Timer->Work.CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL
     || *(PTP_TIMER *)(*(_QWORD *)ThreadPoolData + 240LL) != Timer)
    || (__int64 (__fastcall **)())Timer->Work.CleanupGroupMember.VFuncs != TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
      return;
LABEL_16:
    TppRaiseInvalidParameter();
    return;
  }
  _m_prefetchw(&Timer->Work.CleanupGroupMember.168);
  v3 = _InterlockedOr(&Timer->Work.CleanupGroupMember.Flags, 0x10000u);
  if ( (v3 & 0x10000) != 0 )
    goto LABEL_16;
  if ( (v3 & 0x30000) == 0 )
  {
    Timer->Work.CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
    RtlAcquireSRWLockExclusive(&Timer->Lock);
    Pool = Timer->Work.CleanupGroupMember.Pool;
    ++Timer->BlockInsert;
    v5 = TppCancelTimer(Timer, &Pool->TimerQueue, 0LL);
    if ( _InterlockedExchangeAdd(&Timer->Work.CleanupGroupMember.Refcount.Refcount, -((v5 != 0) + 1)) == (v5 != 0) + 1 )
    {
      Free = Timer->Work.CleanupGroupMember.VFuncs->Free;
      if ( (char *)Free == (char *)TppFreeWait )
      {
        TppFreeWait((__int64)Timer);
      }
      else if ( (char *)Free == (char *)TppTimerpFree )
      {
        TppTimerpFree(Timer);
      }
      else
      {
        Free(&Timer->Work.CleanupGroupMember);
      }
    }
  }
}
