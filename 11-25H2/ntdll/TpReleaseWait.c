/*
 * XREFs of TpReleaseWait @ 0x18003C9C0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x180001008 (EtwpRegisterTpNotificationOnce.c)
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F90FC (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     ZwCancelWaitCompletionPacket @ 0x1801644F0 (ZwCancelWaitCompletionPacket.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  volatile int Flags; // eax
  volatile unsigned int v3; // eax
  _PEB_LDR_DATA *Ldr; // rcx
  volatile unsigned int v5; // ett
  _TP_POOL *Pool; // rsi
  $70F0342839F9DFBA27FB3868CDAA5D77 *p_WaitFlags; // rsi
  int v8; // edi
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  char v12; // al
  int v13; // r15d
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
    Ldr = NtCurrentPeb()->Ldr;
    if ( Ldr->ShutdownInProgress )
      return;
LABEL_20:
    TppRaiseInvalidParameter(Ldr);
    return;
  }
  _m_prefetchw(&Wait->Timer.Work.CleanupGroupMember.168);
  v3 = Wait->Timer.Work.CleanupGroupMember.Flags;
  do
  {
    Ldr = (_PEB_LDR_DATA *)v3;
    LODWORD(Ldr) = v3 | 0x10000;
    v5 = v3;
    v3 = _InterlockedCompareExchange(&Wait->Timer.Work.CleanupGroupMember.Flags, v3 | 0x10000, v3);
  }
  while ( v5 != v3 );
  if ( (v3 & 0x10000) != 0 )
    goto LABEL_20;
  if ( (v3 & 0x30000) != 0 )
    return;
  Pool = Wait->Timer.Work.CleanupGroupMember.Pool;
  Wait->Timer.Work.CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
  RtlAcquireSRWLockExclusive(&Wait->Timer.Lock);
  if ( Wait->Handle )
  {
    v10 = ZwCancelWaitCompletionPacket(Wait->WaitPkt, 1u);
    if ( !v10 )
    {
      Wait->Handle = 0LL;
      v12 = TppCancelTimer(Wait, &Pool->TimerQueue, 1LL);
      p_WaitFlags = &Wait->WaitFlags;
      v13 = -(v12 != 0);
      v8 = v13 - 1;
      if ( (Wait->WaitFlags.AllFlags & 4) != 0 )
      {
        TppBarrierAdjust(&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, 0xFFFFFFFFLL, 0LL);
        p_WaitFlags->AllFlags &= ~4u;
        v8 = v13 - 1;
      }
      goto LABEL_12;
    }
    if ( v10 != 259 && v10 != -1073741536 )
      TppRaiseInvalidParameter(v11);
    p_WaitFlags = &Wait->WaitFlags;
    AllFlags = Wait->WaitFlags.AllFlags;
    if ( (AllFlags & 4) == 0 )
    {
      p_WaitFlags->AllFlags = AllFlags | 4;
      TppBarrierAdjust(&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, 1LL, 0LL);
    }
  }
  else
  {
    p_WaitFlags = &Wait->WaitFlags;
  }
  v8 = 0;
LABEL_12:
  p_WaitFlags->AllFlags &= ~1u;
  p_WaitFlags->AllFlags &= ~2u;
  ++Wait->Timer.BlockInsert;
  RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
  if ( _InterlockedExchangeAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v8 - 1) == 1 - v8 )
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
