/*
 * XREFs of TpReleaseWait @ 0x18008ADA0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18008AB90 (RtlDeregisterWaitEx.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800E54C4 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F1BEC (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 *     ZwCancelWaitCompletionPacket @ 0x180161320 (ZwCancelWaitCompletionPacket.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  volatile int Flags; // eax
  volatile int v3; // eax
  volatile int v4; // ett
  _TP_POOL *Pool; // rsi
  $5EF85B52A0D327422FDCD2EC062617DA *p_WaitFlags; // rsi
  int v7; // edi
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  NTSTATUS v9; // eax
  char v10; // al
  int v11; // r15d
  unsigned __int8 AllFlags; // al
  void *ThreadPoolData; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Flags = Wait->Timer.Work.CleanupGroupMember.Flags;
  if ( (Flags & 0x10000) != 0
    || (Flags & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL
     || *(PTP_WAIT *)(*(_QWORD *)ThreadPoolData + 240LL) != Wait)
    || (__int64 (__fastcall **)())Wait->Timer.Work.CleanupGroupMember.VFuncs != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
      return;
LABEL_20:
    TppRaiseInvalidParameter();
    return;
  }
  _m_prefetchw(&Wait->Timer.Work.CleanupGroupMember.168);
  v3 = Wait->Timer.Work.CleanupGroupMember.Flags;
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(&Wait->Timer.Work.CleanupGroupMember.Flags, v3 | 0x10000, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 0x10000) != 0 )
    goto LABEL_20;
  if ( (v3 & 0x30000) != 0 )
    return;
  Pool = Wait->Timer.Work.CleanupGroupMember.Pool;
  Wait->Timer.Work.CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
  RtlAcquireSRWLockExclusive(&Wait->Timer.Lock);
  if ( Wait->Handle )
  {
    v9 = ZwCancelWaitCompletionPacket(Wait->WaitPkt, 1u);
    if ( !v9 )
    {
      Wait->Handle = 0LL;
      v10 = TppCancelTimer((__int64)Wait, &Pool->TimerQueue.Lock, 1);
      p_WaitFlags = &Wait->WaitFlags;
      v11 = -(v10 != 0);
      v7 = v11 - 1;
      if ( (Wait->WaitFlags.AllFlags & 4) != 0 )
      {
        TppBarrierAdjust((_RTL_SRWLOCK *)&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, -1, 0);
        p_WaitFlags->AllFlags &= ~4u;
        v7 = v11 - 1;
      }
      goto LABEL_12;
    }
    if ( v9 != 259 && v9 != -1073741536 )
      TppRaiseInvalidParameter();
    p_WaitFlags = &Wait->WaitFlags;
    AllFlags = Wait->WaitFlags.AllFlags;
    if ( (AllFlags & 4) == 0 )
    {
      p_WaitFlags->AllFlags = AllFlags | 4;
      TppBarrierAdjust((_RTL_SRWLOCK *)&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, 1, 0);
    }
  }
  else
  {
    p_WaitFlags = &Wait->WaitFlags;
  }
  v7 = 0;
LABEL_12:
  p_WaitFlags->AllFlags &= ~1u;
  p_WaitFlags->AllFlags &= ~2u;
  ++Wait->Timer.BlockInsert;
  RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
  if ( _InterlockedExchangeAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v7 - 1) == 1 - v7 )
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
