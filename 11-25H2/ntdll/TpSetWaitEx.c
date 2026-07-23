/*
 * XREFs of TpSetWaitEx @ 0x180041AF0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x180001008 (EtwpRegisterTpNotificationOnce.c)
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 *     RtlpWnfNotificationThread @ 0x180040FB0 (RtlpWnfNotificationThread.c)
 *     EtwpNotificationThread @ 0x1800451D0 (EtwpNotificationThread.c)
 *     RtlpTpWaitCheckReset @ 0x1800EC620 (RtlpTpWaitCheckReset.c)
 *     TpSetWait @ 0x1800F4940 (TpSetWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F90FC (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppSetTimer @ 0x18003EB00 (TppSetTimer.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppFreeWait @ 0x180041EB0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x180041F00 (TppTimerpFree.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppRaiseHandleStatus @ 0x1800D71E8 (TppRaiseHandleStatus.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180164450 (ZwAssociateWaitCompletionPacket.c)
 *     ZwCancelWaitCompletionPacket @ 0x1801644F0 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  volatile int Flags; // eax
  int v7; // ebp
  char *SchedulerSharedDataSlot; // r8
  _TP_POOL *Pool; // rdi
  _RTL_SRWLOCK *p_Lock; // r14
  unsigned int i; // edx
  _RTL_SRWLOCK **v12; // rcx
  char v13; // r12
  $70F0342839F9DFBA27FB3868CDAA5D77 *p_WaitFlags; // r15
  signed int v15; // edi
  unsigned __int8 v16; // al
  _BOOL8 v17; // rsi
  _TP_POOL *v18; // r15
  void *WaitPkt; // rcx
  NTSTATUS v20; // eax
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  _LARGE_INTEGER *v23; // rcx
  unsigned __int8 v24; // al
  NTSTATUS v25; // eax
  __int64 QuadPart; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // r8d
  unsigned __int8 AllFlags; // al
  BOOLEAN AlreadySignaled; // [rsp+80h] [rbp+8h] BYREF
  _LARGE_INTEGER *v32; // [rsp+90h] [rbp+18h]

  v32 = Timeout;
  Flags = Wait->Timer.Work.CleanupGroupMember.Flags;
  if ( (Flags & 0x10000) != 0
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)())Wait->Timer.Work.CleanupGroupMember.VFuncs != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !Handle && NtCurrentPeb()->Ldr->ShutdownInProgress )
      return 0;
  }
  else if ( !Reserved )
  {
    v7 = 0;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    Pool = Wait->Timer.Work.CleanupGroupMember.Pool;
    p_Lock = &Wait->Timer.Lock;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v12 = (_RTL_SRWLOCK **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v12 )
        {
          if ( v12 )
            *v12 = p_Lock;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_Lock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&Wait->Timer.Lock);
    if ( Wait->Handle )
    {
      v25 = ZwCancelWaitCompletionPacket(Wait->WaitPkt, 0);
      if ( !v25 )
      {
        v13 = 1;
        Wait->Handle = 0LL;
        p_WaitFlags = &Wait->WaitFlags;
        v15 = -(TppCancelTimer((__int64)Wait, &Pool->TimerQueue.Lock, 1) != 0) - 1;
        if ( (Wait->WaitFlags.AllFlags & 4) != 0 )
        {
          TppBarrierAdjust((_RTL_SRWLOCK *)&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, -1, 0);
          p_WaitFlags->AllFlags &= ~4u;
        }
LABEL_17:
        p_WaitFlags->AllFlags &= ~1u;
        v16 = p_WaitFlags->AllFlags & 0xFD;
        p_WaitFlags->AllFlags = v16;
        v17 = v15 != 0;
        if ( !Handle || Wait->Timer.BlockInsert )
          goto LABEL_29;
        if ( !v13 )
        {
          v23 = v32;
          v24 = v16 | 1;
          Wait->NextWaitHandle = Handle;
          p_WaitFlags->AllFlags = v24;
          if ( v23 )
          {
            p_WaitFlags->AllFlags = v24 | 2;
            Wait->NextWaitTimeout = *v23;
          }
LABEL_25:
          if ( v15 > 0 )
          {
            _InterlockedAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v15);
            RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
            return v17;
          }
LABEL_29:
          RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
          if ( v15 < 0 && _InterlockedExchangeAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v15) == -v15 )
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
          return v17;
        }
        if ( Wait->Handle )
          goto LABEL_29;
        v18 = Wait->Timer.Work.CleanupGroupMember.Pool;
        WaitPkt = Wait->WaitPkt;
        AlreadySignaled = 0;
        Wait->Handle = Handle;
        v20 = ZwAssociateWaitCompletionPacket(
                WaitPkt,
                v18->CompletionPort,
                Handle,
                &Wait->Direct,
                Wait,
                0,
                0LL,
                &AlreadySignaled);
        if ( v20 < 0 )
        {
          Wait->Handle = 0LL;
          TppRaiseHandleStatus((unsigned int)v20, Handle, Wait);
        }
        else
        {
          if ( v32 && !AlreadySignaled )
          {
            QuadPart = v32->QuadPart;
            if ( v32->QuadPart < 0 )
            {
              v28 = -QuadPart;
            }
            else
            {
              if ( QuadPart <= MEMORY[0x7FFE0014] )
              {
                LODWORD(v27) = 0;
                goto LABEL_52;
              }
              v28 = QuadPart - MEMORY[0x7FFE0014];
            }
            v27 = v28 >> 16;
            v29 = 300;
            if ( v27 > 0x12C )
            {
LABEL_53:
              TppSetTimer((__int64)Wait, &v18->TimerQueue.Lock, (__int64 *)v32, 0LL, v29);
              v7 = 2;
              goto LABEL_24;
            }
LABEL_52:
            v29 = v27;
            goto LABEL_53;
          }
          v7 = 1;
        }
LABEL_24:
        v15 += v7;
        goto LABEL_25;
      }
      if ( v25 != 259 && v25 != -1073741536 )
        TppRaiseInvalidParameter();
      p_WaitFlags = &Wait->WaitFlags;
      v13 = 0;
      AllFlags = Wait->WaitFlags.AllFlags;
      if ( (AllFlags & 4) == 0 )
      {
        p_WaitFlags->AllFlags = AllFlags | 4;
        TppBarrierAdjust((_RTL_SRWLOCK *)&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, 1, 0);
      }
    }
    else
    {
      v13 = 1;
      p_WaitFlags = &Wait->WaitFlags;
    }
    v15 = 0;
    goto LABEL_17;
  }
  TppRaiseInvalidParameter();
  return 0;
}
