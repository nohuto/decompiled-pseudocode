/*
 * XREFs of TpSetTimerEx @ 0x18003E670
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180011E60 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180031FA0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlDeleteTimer @ 0x18003B680 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18003B9A0 (RtlCreateTimer.c)
 *     TpSetTimer @ 0x1800F8690 (TpSetTimer.c)
 *     RtlUpdateTimer @ 0x1800FBA30 (RtlUpdateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x180134200 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppSetTimer @ 0x18003EB00 (TppSetTimer.c)
 *     TpIsTimerSet @ 0x18003EDA0 (TpIsTimerSet.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppUpdateSubQueueTimer @ 0x18003FA60 (TppUpdateSubQueueTimer.c)
 *     TppPHExtractMin @ 0x18003FC40 (TppPHExtractMin.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppETWTimerCancelled @ 0x1801134B0 (TppETWTimerCancelled.c)
 *     NtWaitForAlertByThreadId @ 0x180166E70 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  ULONG v5; // r13d
  PTP_TIMER v7; // rbx
  volatile int Flags; // eax
  bool v9; // si
  volatile signed __int32 *p_Lock; // rdi
  char *SchedulerSharedDataSlot; // r8
  _RTL_SRWLOCK *v12; // r15
  __int64 i; // rdx
  volatile signed __int32 **v14; // rcx
  unsigned __int8 TimerStatus; // al
  bool v16; // r14
  unsigned __int8 v17; // r14
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  _RTL_SRWLOCK *v20; // r13
  __int64 v21; // rcx
  _TP_TIMER *Value; // rcx
  $41104713E0404CE4566A247FD5C6724F *v23; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *p_Children; // rcx
  _LIST_ENTRY *v27; // r8
  _LIST_ENTRY *v28; // r9
  _TP_TIMER *v29; // rax
  _LIST_ENTRY **v30; // rcx
  _TPP_PH_LINKS *p_WindowStartLinks; // r11
  _LIST_ENTRY *v32; // rax
  _LIST_ENTRY *v33; // rdx
  _LIST_ENTRY *v34; // rax
  _LIST_ENTRY *v35; // rdx
  _LIST_ENTRY *v36; // r8
  signed __int64 First; // rax
  signed __int64 v38; // rdx
  _QWORD v39[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = Period;
  v7 = Timer;
  if ( Timer )
  {
    if ( !Timer->WaitTimer )
    {
      Flags = Timer->Work.CleanupGroupMember.Flags;
      if ( (Flags & 0x10000) == 0
        && (Flags & 0x20000) == 0
        && (__int64 (__fastcall **)())Timer->Work.CleanupGroupMember.VFuncs == TppTimerpCleanupGroupMemberVFuncs )
      {
        Timer = (PTP_TIMER)NtCurrentPeb()->Ldr;
        if ( !LOBYTE(Timer->Work.CleanupGroupMember.CallbackBarrier.WaitList.First) )
        {
          v9 = DueTime != 0LL;
          p_Lock = (volatile signed __int32 *)&v7->Lock;
          SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
          v12 = &v7->Work.CleanupGroupMember.Pool->TimerQueue.Lock;
          if ( SchedulerSharedDataSlot )
          {
            for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
            {
              v14 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
              if ( !*v14 )
              {
                if ( v14 )
                  *v14 = p_Lock;
                break;
              }
            }
          }
          if ( _interlockedbittestandset64(p_Lock, 0LL) )
            RtlpAcquireSRWLockExclusiveContended(&v7->Lock);
          TimerStatus = v7->TimerStatus;
          v16 = (TimerStatus & 2) != 0;
          if ( (TimerStatus & 1) == 0 )
          {
            v7->DueTime = 0LL;
            if ( !DueTime )
              RtlReleaseSRWLockExclusive(&v7->Lock);
            v17 = 0;
LABEL_19:
            if ( DueTime && v7->BlockInsert )
            {
              RtlReleaseSRWLockExclusive(&v7->Lock);
              v9 = 0;
            }
            if ( v17 )
            {
              if ( !v9 )
              {
                if ( _InterlockedExchangeAdd(&v7->Work.CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
                {
                  Free = v7->Work.CleanupGroupMember.VFuncs->Free;
                  if ( (char *)Free == (char *)TppSimplepFree )
                  {
                    TppCleanupGroupMemberDestroy(v7);
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, v7);
                  }
                  else if ( (char *)Free == (char *)TppAlpcpFree )
                  {
                    TppAlpcpFree(v7);
                  }
                  else if ( (char *)Free == (char *)TppWorkpFree )
                  {
                    TppWorkpFree(v7);
                  }
                  else
                  {
                    Free(&v7->Work.CleanupGroupMember);
                  }
                }
                return v17;
              }
            }
            else
            {
              if ( !v9 )
                return v17;
              if ( TpIsTimerSet(v7) )
              {
LABEL_26:
                RtlReleaseSRWLockExclusive(&v7->Lock);
                return v17;
              }
              _InterlockedIncrement(&v7->Work.CleanupGroupMember.Refcount.Refcount);
            }
            TppSetTimer(v7, v12, DueTime, v5, WindowLength);
            goto LABEL_26;
          }
          v20 = v12 + 1;
          if ( (TimerStatus & 2) == 0 )
            v20 = v12 + 16;
          if ( RtlGetCurrentServiceSessionId() )
            v21 = (__int64)NtCurrentPeb()->SharedData + 556;
          else
            v21 = 2147353478LL;
          if ( *(_BYTE *)v21 )
            TppETWTimerCancelled(v20, v7);
          RtlAcquireSRWLockExclusive(v12);
          if ( v7->Inserted )
          {
            Value = (_TP_TIMER *)v20[2].Value;
            v23 = &v7->248;
            if ( &v7->248 != ($41104713E0404CE4566A247FD5C6724F *)Value )
            {
              Flink = v23->WindowEndLinks.Siblings.Flink;
              if ( ($41104713E0404CE4566A247FD5C6724F *)v23->WindowEndLinks.Siblings.Flink->Blink != v23 )
                goto LABEL_50;
              Blink = v7->WindowEndLinks.Siblings.Blink;
              if ( ($41104713E0404CE4566A247FD5C6724F *)Blink->Flink != v23
                || (Blink->Flink = Flink,
                    Flink->Blink = Blink,
                    p_Children = &v7->WindowEndLinks.Children,
                    v7->WindowEndLinks.Siblings.Blink = &v7->WindowEndLinks.Siblings,
                    v23->WindowEndLinks.Siblings.Flink = &v23->WindowEndLinks.Siblings,
                    v27 = v7->WindowEndLinks.Children.Flink,
                    v28 = (_LIST_ENTRY *)v20[2].Value,
                    v27->Blink != &v7->ExpirationLinks + 1) )
              {
LABEL_50:
                __fastfail(3u);
              }
              v28->Blink = p_Children;
              v28->Flink = v27;
              v27->Blink = v28;
              p_Children->Flink = v28;
              Value = (_TP_TIMER *)&v7->248;
              v20[2].Value = (unsigned __int64)v23;
            }
            Value->Work.CleanupGroupMember.FinalizationCallback = 0LL;
            TppPHExtractMin(&v20[2]);
            v29 = (_TP_TIMER *)v20[1].Value;
            v30 = (_LIST_ENTRY **)&v20[1];
            p_WindowStartLinks = &v7->WindowStartLinks;
            if ( &v7->WindowStartLinks != (_TPP_PH_LINKS *)v29 )
            {
              v32 = p_WindowStartLinks->Siblings.Flink;
              if ( (_TPP_PH_LINKS *)p_WindowStartLinks->Siblings.Flink->Blink != p_WindowStartLinks )
                goto LABEL_50;
              v33 = v7->WindowStartLinks.Siblings.Blink;
              if ( (_TPP_PH_LINKS *)v33->Flink != p_WindowStartLinks )
                goto LABEL_50;
              v33->Flink = v32;
              v32->Blink = v33;
              v34 = &v7->WindowStartLinks.Children;
              v7->WindowStartLinks.Siblings.Blink = &v7->WindowStartLinks.Siblings;
              p_WindowStartLinks->Siblings.Flink = &p_WindowStartLinks->Siblings;
              v35 = v7->WindowStartLinks.Children.Flink;
              v36 = *v30;
              if ( v35->Blink != &v7->WindowStartLinks.Children )
                goto LABEL_50;
              v36->Blink = v34;
              v36->Flink = v35;
              v35->Blink = v36;
              v34->Flink = v36;
              v29 = (_TP_TIMER *)&v7->WindowStartLinks;
              *v30 = &p_WindowStartLinks->Siblings;
            }
            v29->Work.CleanupGroupMember.FinalizationCallback = 0LL;
            TppPHExtractMin(v30);
            TppUpdateSubQueueTimer(v20, v16);
            v7->Inserted = 0;
            RtlReleaseSRWLockExclusive(v12);
            v7->Period = 0;
            v7->DueTime = 0LL;
            v7->TimerStatus = 0;
            if ( !DueTime )
              RtlReleaseSRWLockExclusive(&v7->Lock);
            v17 = 1;
          }
          else
          {
            RtlReleaseSRWLockExclusive(v12);
            v7->TimerStatus |= 4u;
            v39[1] = NtCurrentTeb()->ClientId.UniqueThread;
            _m_prefetchw(&v7->CancelIte);
            First = (signed __int64)v7->CancelIte.First;
            do
            {
              v38 = First;
              v39[0] = First;
              First = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&v7->CancelIte,
                        (signed __int64)v39,
                        First);
            }
            while ( First != v38 );
            RtlReleaseSRWLockExclusive(&v7->Lock);
            NtWaitForAlertByThreadId(&v7->CancelIte, 0LL);
            if ( DueTime )
              RtlAcquireSRWLockExclusive(&v7->Lock);
            v17 = 0;
          }
          v5 = Period;
          goto LABEL_19;
        }
      }
    }
  }
  if ( DueTime
    || (Timer = (PTP_TIMER)NtCurrentPeb()->Ldr, !LOBYTE(Timer->Work.CleanupGroupMember.CallbackBarrier.WaitList.First)) )
  {
    TppRaiseInvalidParameter(Timer);
  }
  return 0;
}
