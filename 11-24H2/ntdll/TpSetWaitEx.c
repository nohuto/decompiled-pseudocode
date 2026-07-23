/*
 * XREFs of TpSetWaitEx @ 0x18004CAE0
 * Callers:
 *     EtwpNotificationThread @ 0x18004A9F0 (EtwpNotificationThread.c)
 *     RtlpWnfNotificationThread @ 0x18004C6F0 (RtlpWnfNotificationThread.c)
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18008AB90 (RtlDeregisterWaitEx.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800E54C4 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpTpWaitCheckReset @ 0x1800E6C10 (RtlpTpWaitCheckReset.c)
 *     TpSetWait @ 0x1800ED6C0 (TpSetWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F1BEC (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppFreeWait @ 0x18004CEA0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x18004CEF0 (TppTimerpFree.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseHandleStatus @ 0x1800870A8 (TppRaiseHandleStatus.c)
 *     TppSetTimer @ 0x180087CF0 (TppSetTimer.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180161280 (ZwAssociateWaitCompletionPacket.c)
 *     ZwCancelWaitCompletionPacket @ 0x180161320 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  volatile int Flags; // eax
  PTP_WAIT ApcContext; // rbx
  int v7; // ebp
  char *SchedulerSharedDataSlot; // r8
  _TP_POOL *Pool; // rdi
  volatile signed __int32 *p_Lock; // r14
  unsigned int i; // edx
  volatile signed __int32 **v12; // rcx
  char v13; // r12
  $5EF85B52A0D327422FDCD2EC062617DA *p_WaitFlags; // r15
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
  __int64 v26; // rcx
  __int64 QuadPart; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // r8d
  unsigned __int8 AllFlags; // al
  BOOLEAN AlreadySignaled; // [rsp+80h] [rbp+8h] BYREF
  PLARGE_INTEGER v33; // [rsp+90h] [rbp+18h]

  v33 = Timeout;
  Flags = Wait->Timer.Work.CleanupGroupMember.Flags;
  ApcContext = Wait;
  if ( (Flags & 0x10000) != 0
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)())Wait->Timer.Work.CleanupGroupMember.VFuncs != TppWaitpCleanupGroupMemberVFuncs
    || (Wait = (PTP_WAIT)NtCurrentPeb()->Ldr, LOBYTE(Wait->Timer.Work.CleanupGroupMember.CallbackBarrier.WaitList.First)) )
  {
    if ( !Handle )
    {
      Wait = (PTP_WAIT)NtCurrentPeb()->Ldr;
      if ( LOBYTE(Wait->Timer.Work.CleanupGroupMember.CallbackBarrier.WaitList.First) )
        return 0;
    }
  }
  else if ( !Reserved )
  {
    v7 = 0;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    Pool = ApcContext->Timer.Work.CleanupGroupMember.Pool;
    p_Lock = (volatile signed __int32 *)&ApcContext->Timer.Lock;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v12 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v12 )
        {
          if ( v12 )
            *v12 = p_Lock;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(p_Lock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&ApcContext->Timer.Lock);
    if ( ApcContext->Handle )
    {
      v25 = ZwCancelWaitCompletionPacket(ApcContext->WaitPkt, 0);
      if ( !v25 )
      {
        v13 = 1;
        ApcContext->Handle = 0LL;
        p_WaitFlags = &ApcContext->WaitFlags;
        v15 = -((unsigned __int8)TppCancelTimer(ApcContext, &Pool->TimerQueue, 1LL) != 0) - 1;
        if ( (ApcContext->WaitFlags.AllFlags & 4) != 0 )
        {
          TppBarrierAdjust((_RTL_SRWLOCK *)&ApcContext->Timer.Work.CleanupGroupMember.CallbackBarrier, -1, 0);
          p_WaitFlags->AllFlags &= ~4u;
        }
LABEL_17:
        p_WaitFlags->AllFlags &= ~1u;
        v16 = p_WaitFlags->AllFlags & 0xFD;
        p_WaitFlags->AllFlags = v16;
        v17 = v15 != 0;
        if ( !Handle || ApcContext->Timer.BlockInsert )
          goto LABEL_29;
        if ( !v13 )
        {
          v23 = v33;
          v24 = v16 | 1;
          ApcContext->NextWaitHandle = Handle;
          p_WaitFlags->AllFlags = v24;
          if ( v23 )
          {
            p_WaitFlags->AllFlags = v24 | 2;
            ApcContext->NextWaitTimeout = *v23;
          }
LABEL_25:
          if ( v15 > 0 )
          {
            _InterlockedAdd(&ApcContext->Timer.Work.CleanupGroupMember.Refcount.Refcount, v15);
            RtlReleaseSRWLockExclusive(&ApcContext->Timer.Lock);
            return v17;
          }
LABEL_29:
          RtlReleaseSRWLockExclusive(&ApcContext->Timer.Lock);
          if ( v15 < 0
            && _InterlockedExchangeAdd(&ApcContext->Timer.Work.CleanupGroupMember.Refcount.Refcount, v15) == -v15 )
          {
            Free = ApcContext->Timer.Work.CleanupGroupMember.VFuncs->Free;
            if ( (char *)Free == (char *)TppFreeWait )
            {
              TppFreeWait(ApcContext);
            }
            else if ( (char *)Free == (char *)TppTimerpFree )
            {
              TppTimerpFree(ApcContext);
            }
            else
            {
              Free(&ApcContext->Timer.Work.CleanupGroupMember);
            }
          }
          return v17;
        }
        if ( ApcContext->Handle )
          goto LABEL_29;
        v18 = ApcContext->Timer.Work.CleanupGroupMember.Pool;
        WaitPkt = ApcContext->WaitPkt;
        AlreadySignaled = 0;
        ApcContext->Handle = Handle;
        v20 = ZwAssociateWaitCompletionPacket(
                WaitPkt,
                v18->CompletionPort,
                Handle,
                &ApcContext->Direct,
                ApcContext,
                0,
                0LL,
                &AlreadySignaled);
        if ( v20 < 0 )
        {
          ApcContext->Handle = 0LL;
          TppRaiseHandleStatus((unsigned int)v20, Handle, ApcContext);
        }
        else
        {
          if ( v33 && !AlreadySignaled )
          {
            QuadPart = v33->QuadPart;
            if ( v33->QuadPart < 0 )
            {
              v29 = -QuadPart;
            }
            else
            {
              if ( QuadPart <= MEMORY[0x7FFE0014] )
              {
                LODWORD(v28) = 0;
                goto LABEL_52;
              }
              v29 = QuadPart - MEMORY[0x7FFE0014];
            }
            v28 = v29 >> 16;
            v30 = 300;
            if ( v28 > 0x12C )
            {
LABEL_53:
              TppSetTimer(ApcContext, &v18->TimerQueue, v33, 0LL, v30);
              v7 = 2;
              goto LABEL_24;
            }
LABEL_52:
            v30 = v28;
            goto LABEL_53;
          }
          v7 = 1;
        }
LABEL_24:
        v15 += v7;
        goto LABEL_25;
      }
      if ( v25 != 259 && v25 != -1073741536 )
        TppRaiseInvalidParameter(v26);
      p_WaitFlags = &ApcContext->WaitFlags;
      v13 = 0;
      AllFlags = ApcContext->WaitFlags.AllFlags;
      if ( (AllFlags & 4) == 0 )
      {
        p_WaitFlags->AllFlags = AllFlags | 4;
        TppBarrierAdjust((_RTL_SRWLOCK *)&ApcContext->Timer.Work.CleanupGroupMember.CallbackBarrier, 1, 0);
      }
    }
    else
    {
      v13 = 1;
      p_WaitFlags = &ApcContext->WaitFlags;
    }
    v15 = 0;
    goto LABEL_17;
  }
  TppRaiseInvalidParameter(Wait);
  return 0;
}
