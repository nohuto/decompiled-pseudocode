/*
 * XREFs of TpSetTimerEx @ 0x180087860
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1800656C0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x18006BE00 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlUpdateTimer @ 0x180086A00 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x180087440 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180089920 (RtlCreateTimer.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 *     TpSetTimer @ 0x1800F0F90 (TpSetTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x180130950 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppETWTimerCancelled @ 0x180087180 (TppETWTimerCancelled.c)
 *     TppSetTimer @ 0x180087CF0 (TppSetTimer.c)
 *     TpIsTimerSet @ 0x180087F90 (TpIsTimerSet.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppPHExtractMin @ 0x180088F30 (TppPHExtractMin.c)
 *     TppUpdateSubQueueTimer @ 0x180088FE0 (TppUpdateSubQueueTimer.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     NtWaitForAlertByThreadId @ 0x180163CA0 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  ULONG v5; // r13d
  PLARGE_INTEGER v6; // rbp
  PTP_TIMER v7; // rbx
  volatile int Flags; // eax
  bool v9; // si
  volatile signed __int32 *p_Lock; // rdi
  char *SchedulerSharedDataSlot; // r8
  _RTL_SRWLOCK *v12; // r15
  volatile signed __int32 **v13; // rcx
  unsigned __int8 TimerStatus; // al
  bool v15; // r14
  unsigned __int8 v16; // r14
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  __int64 v19; // r13
  __int64 v20; // rcx
  _TP_TIMER *v21; // rcx
  $9253F69FEEAB265FFDF3F2A8014994C4 *v22; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *p_Children; // rcx
  _LIST_ENTRY *v26; // r8
  _LIST_ENTRY *v27; // r9
  _TP_TIMER *v28; // rax
  _LIST_ENTRY **v29; // rcx
  _TPP_PH_LINKS *p_WindowStartLinks; // r11
  _LIST_ENTRY *v31; // rax
  _LIST_ENTRY *v32; // rdx
  _LIST_ENTRY *v33; // rax
  _LIST_ENTRY *v34; // rdx
  _LIST_ENTRY *v35; // r8
  signed __int64 First; // rax
  signed __int64 v37; // rdx
  _QWORD v38[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = Period;
  v6 = DueTime;
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
            for ( DueTime = 0LL; (unsigned int)DueTime < 8; DueTime = (PLARGE_INTEGER)(unsigned int)((_DWORD)DueTime + 1) )
            {
              v13 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * (_QWORD)DueTime];
              if ( !*v13 )
              {
                if ( v13 )
                  *v13 = p_Lock;
                break;
              }
            }
          }
          if ( _interlockedbittestandset64(p_Lock, 0LL) )
            RtlpAcquireSRWLockExclusiveContended(
              (unsigned __int64)&v7->Lock,
              (unsigned __int64)DueTime,
              SchedulerSharedDataSlot,
              *(char **)&WindowLength);
          TimerStatus = v7->TimerStatus;
          v15 = (TimerStatus & 2) != 0;
          if ( (TimerStatus & 1) == 0 )
          {
            v7->DueTime = 0LL;
            if ( !v6 )
              RtlReleaseSRWLockExclusive(&v7->Lock);
            v16 = 0;
LABEL_19:
            if ( v6 && v7->BlockInsert )
            {
              RtlReleaseSRWLockExclusive(&v7->Lock);
              v9 = 0;
            }
            if ( v16 )
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
                return v16;
              }
            }
            else
            {
              if ( !v9 )
                return v16;
              if ( TpIsTimerSet(v7) )
              {
LABEL_26:
                RtlReleaseSRWLockExclusive(&v7->Lock);
                return v16;
              }
              _InterlockedIncrement(&v7->Work.CleanupGroupMember.Refcount.Refcount);
            }
            TppSetTimer(v7, v12, v6, v5, WindowLength);
            goto LABEL_26;
          }
          v19 = (__int64)&v12[1];
          if ( (TimerStatus & 2) == 0 )
            v19 = (__int64)&v12[16];
          if ( RtlGetCurrentServiceSessionId() )
            v20 = (__int64)NtCurrentPeb()->SharedData + 556;
          else
            v20 = 2147353478LL;
          if ( *(_BYTE *)v20 )
            TppETWTimerCancelled(v19, (__int64)v7);
          RtlAcquireSRWLockExclusive(v12);
          if ( v7->Inserted )
          {
            v21 = *(_TP_TIMER **)(v19 + 16);
            v22 = &v7->248;
            if ( &v7->248 != ($9253F69FEEAB265FFDF3F2A8014994C4 *)v21 )
            {
              Flink = v22->WindowEndLinks.Siblings.Flink;
              if ( ($9253F69FEEAB265FFDF3F2A8014994C4 *)v22->WindowEndLinks.Siblings.Flink->Blink != v22 )
                goto LABEL_50;
              Blink = v7->WindowEndLinks.Siblings.Blink;
              if ( ($9253F69FEEAB265FFDF3F2A8014994C4 *)Blink->Flink != v22
                || (Blink->Flink = Flink,
                    Flink->Blink = Blink,
                    p_Children = &v7->WindowEndLinks.Children,
                    v7->WindowEndLinks.Siblings.Blink = &v7->WindowEndLinks.Siblings,
                    v22->WindowEndLinks.Siblings.Flink = &v22->WindowEndLinks.Siblings,
                    v26 = v7->WindowEndLinks.Children.Flink,
                    v27 = *(_LIST_ENTRY **)(v19 + 16),
                    v26->Blink != &v7->ExpirationLinks + 1) )
              {
LABEL_50:
                __fastfail(3u);
              }
              v27->Blink = p_Children;
              v27->Flink = v26;
              v26->Blink = v27;
              p_Children->Flink = v27;
              v21 = (_TP_TIMER *)&v7->248;
              *(_QWORD *)(v19 + 16) = v22;
            }
            v21->Work.CleanupGroupMember.FinalizationCallback = 0LL;
            TppPHExtractMin(v19 + 16);
            v28 = *(_TP_TIMER **)(v19 + 8);
            v29 = (_LIST_ENTRY **)(v19 + 8);
            p_WindowStartLinks = &v7->WindowStartLinks;
            if ( &v7->WindowStartLinks != (_TPP_PH_LINKS *)v28 )
            {
              v31 = p_WindowStartLinks->Siblings.Flink;
              if ( (_TPP_PH_LINKS *)p_WindowStartLinks->Siblings.Flink->Blink != p_WindowStartLinks )
                goto LABEL_50;
              v32 = v7->WindowStartLinks.Siblings.Blink;
              if ( (_TPP_PH_LINKS *)v32->Flink != p_WindowStartLinks )
                goto LABEL_50;
              v32->Flink = v31;
              v31->Blink = v32;
              v33 = &v7->WindowStartLinks.Children;
              v7->WindowStartLinks.Siblings.Blink = &v7->WindowStartLinks.Siblings;
              p_WindowStartLinks->Siblings.Flink = &p_WindowStartLinks->Siblings;
              v34 = v7->WindowStartLinks.Children.Flink;
              v35 = *v29;
              if ( v34->Blink != &v7->WindowStartLinks.Children )
                goto LABEL_50;
              v35->Blink = v33;
              v35->Flink = v34;
              v34->Blink = v35;
              v33->Flink = v35;
              v28 = (_TP_TIMER *)&v7->WindowStartLinks;
              *v29 = &p_WindowStartLinks->Siblings;
            }
            v28->Work.CleanupGroupMember.FinalizationCallback = 0LL;
            TppPHExtractMin(v29);
            TppUpdateSubQueueTimer(v19, v15);
            v7->Inserted = 0;
            RtlReleaseSRWLockExclusive(v12);
            v7->Period = 0;
            v7->DueTime = 0LL;
            v7->TimerStatus = 0;
            if ( !v6 )
              RtlReleaseSRWLockExclusive(&v7->Lock);
            v16 = 1;
          }
          else
          {
            RtlReleaseSRWLockExclusive(v12);
            v7->TimerStatus |= 4u;
            v38[1] = NtCurrentTeb()->ClientId.UniqueThread;
            _m_prefetchw(&v7->CancelIte);
            First = (signed __int64)v7->CancelIte.First;
            do
            {
              v37 = First;
              v38[0] = First;
              First = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&v7->CancelIte,
                        (signed __int64)v38,
                        First);
            }
            while ( First != v37 );
            RtlReleaseSRWLockExclusive(&v7->Lock);
            NtWaitForAlertByThreadId(&v7->CancelIte, 0LL);
            if ( v6 )
              RtlAcquireSRWLockExclusive(&v7->Lock);
            v16 = 0;
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
