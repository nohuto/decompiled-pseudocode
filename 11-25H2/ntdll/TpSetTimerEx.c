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

__int64 __fastcall TpSetTimerEx(_PEB_LDR_DATA *Ldr, __int64 i, __int64 a3, int a4)
{
  int v5; // r13d
  __int64 v6; // rbp
  _PEB_LDR_DATA *v7; // rbx
  int ShutdownThreadId; // eax
  bool v9; // si
  volatile signed __int32 *p_EntryInProgress; // rdi
  char *SchedulerSharedDataSlot; // r8
  volatile signed __int32 *v12; // r15
  volatile signed __int32 **v13; // rcx
  char v14; // al
  bool v15; // r14
  unsigned __int8 v16; // r14
  __int64 (__fastcall *v18)(); // rax
  volatile signed __int32 *v19; // r13
  __int64 v20; // rcx
  _PEB_LDR_DATA *v21; // rcx
  char *p_ShutdownInProgress; // rax
  __int64 v23; // rcx
  char **v24; // r8
  _PEB_LDR_DATA *v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // r9
  _PEB_LDR_DATA *v28; // rax
  _LIST_ENTRY ***v29; // rcx
  _LIST_ENTRY **p_Blink; // r11
  _LIST_ENTRY *v31; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY **v33; // rax
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v35; // r8
  signed __int64 v36; // rax
  signed __int64 v37; // rdx
  _QWORD v38[2]; // [rsp+30h] [rbp-38h] BYREF
  int v39; // [rsp+80h] [rbp+18h]

  v39 = a3;
  v5 = a3;
  v6 = i;
  v7 = Ldr;
  if ( Ldr )
  {
    if ( !BYTE1(Ldr[4].Length) )
    {
      ShutdownThreadId = (int)Ldr[1].ShutdownThreadId;
      if ( (ShutdownThreadId & 0x10000) == 0
        && (ShutdownThreadId & 0x20000) == 0
        && Ldr->SsHandle == TppTimerpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
        {
          v9 = i != 0;
          p_EntryInProgress = (volatile signed __int32 *)&v7[2].EntryInProgress;
          SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
          v12 = (volatile signed __int32 *)&v7[1].InInitializationOrderModuleList.Blink[7];
          if ( SchedulerSharedDataSlot )
          {
            for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
            {
              v13 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
              if ( !*v13 )
              {
                if ( v13 )
                  *v13 = p_EntryInProgress;
                break;
              }
            }
          }
          if ( _interlockedbittestandset64(p_EntryInProgress, 0LL) )
            RtlpAcquireSRWLockExclusiveContended(&v7[2].EntryInProgress);
          v14 = BYTE2(v7[4].Length);
          v15 = (v14 & 2) != 0;
          if ( (v14 & 1) == 0 )
          {
            v7[3].EntryInProgress = 0LL;
            if ( !v6 )
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v7[2].EntryInProgress);
            v16 = 0;
LABEL_19:
            if ( v6 && HIBYTE(v7[4].Length) )
            {
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v7[2].EntryInProgress);
              v9 = 0;
            }
            if ( v16 )
            {
              if ( !v9 )
              {
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
                {
                  v18 = *(__int64 (__fastcall **)())v7->SsHandle;
                  if ( v18 == TppSimplepFree )
                  {
                    TppCleanupGroupMemberDestroy(v7);
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), v7);
                  }
                  else if ( (char *)v18 == (char *)TppAlpcpFree )
                  {
                    TppAlpcpFree(v7, i, SchedulerSharedDataSlot);
                  }
                  else if ( (char *)v18 == (char *)TppWorkpFree )
                  {
                    TppWorkpFree(v7, i, SchedulerSharedDataSlot);
                  }
                  else
                  {
                    ((void (__fastcall *)(_PEB_LDR_DATA *))v18)(v7);
                  }
                }
                return v16;
              }
            }
            else
            {
              if ( !v9 )
                return v16;
              if ( (unsigned int)TpIsTimerSet(v7) )
              {
LABEL_26:
                RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v7[2].EntryInProgress);
                return v16;
              }
              _InterlockedIncrement((volatile signed __int32 *)v7);
            }
            TppSetTimer((_DWORD)v7, (_DWORD)v12, v6, v5, a4);
            goto LABEL_26;
          }
          v19 = v12 + 2;
          if ( (v14 & 2) == 0 )
            v19 = v12 + 32;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v20 = (__int64)NtCurrentPeb()->SharedData + 556;
          else
            v20 = 2147353478LL;
          if ( *(_BYTE *)v20 )
            TppETWTimerCancelled(v19, v7);
          RtlAcquireSRWLockExclusive(v12);
          if ( LOBYTE(v7[4].Length) )
          {
            v21 = (_PEB_LDR_DATA *)*((_QWORD *)v19 + 2);
            p_ShutdownInProgress = (char *)&v7[2].ShutdownInProgress;
            if ( &v7[2].ShutdownInProgress != (unsigned __int8 *)v21 )
            {
              v23 = *(_QWORD *)p_ShutdownInProgress;
              if ( *(char **)(*(_QWORD *)p_ShutdownInProgress + 8LL) != p_ShutdownInProgress )
                goto LABEL_50;
              v24 = (char **)v7[2].ShutdownThreadId;
              if ( *v24 != p_ShutdownInProgress
                || (*v24 = (char *)v23,
                    *(_QWORD *)(v23 + 8) = v24,
                    v25 = v7 + 3,
                    v7[2].ShutdownThreadId = &v7[2].ShutdownInProgress,
                    *(_QWORD *)p_ShutdownInProgress = p_ShutdownInProgress,
                    v26 = *(_QWORD *)&v7[3].Length,
                    v27 = (_QWORD *)*((_QWORD *)v19 + 2),
                    *(_PEB_LDR_DATA **)(v26 + 8) != &v7[3]) )
              {
LABEL_50:
                __fastfail(3u);
              }
              v27[1] = v25;
              *v27 = v26;
              *(_QWORD *)(v26 + 8) = v27;
              *(_QWORD *)&v25->Length = v27;
              v21 = (_PEB_LDR_DATA *)((char *)v7 + 248);
              *((_QWORD *)v19 + 2) = p_ShutdownInProgress;
            }
            v21->InMemoryOrderModuleList.Flink = 0LL;
            TppPHExtractMin(v19 + 4);
            v28 = (_PEB_LDR_DATA *)*((_QWORD *)v19 + 1);
            v29 = (_LIST_ENTRY ***)(v19 + 2);
            p_Blink = &v7[3].InLoadOrderModuleList.Blink;
            if ( &v7[3].InLoadOrderModuleList.Blink != (_LIST_ENTRY **)v28 )
            {
              v31 = *p_Blink;
              if ( (_LIST_ENTRY **)(*p_Blink)->Blink != p_Blink )
                goto LABEL_50;
              Flink = v7[3].InMemoryOrderModuleList.Flink;
              if ( (_LIST_ENTRY **)Flink->Flink != p_Blink )
                goto LABEL_50;
              Flink->Flink = v31;
              v31->Blink = Flink;
              v33 = &v7[3].InMemoryOrderModuleList.Blink;
              v7[3].InMemoryOrderModuleList.Flink = (_LIST_ENTRY *)&v7[3].InLoadOrderModuleList.Blink;
              *p_Blink = (_LIST_ENTRY *)p_Blink;
              Blink = v7[3].InMemoryOrderModuleList.Blink;
              v35 = (_LIST_ENTRY *)*v29;
              if ( (_LIST_ENTRY **)Blink->Blink != &v7[3].InMemoryOrderModuleList.Blink )
                goto LABEL_50;
              v35->Blink = (_LIST_ENTRY *)v33;
              v35->Flink = Blink;
              Blink->Blink = v35;
              *v33 = v35;
              v28 = (_PEB_LDR_DATA *)((char *)v7 + 288);
              *v29 = p_Blink;
            }
            v28->InMemoryOrderModuleList.Flink = 0LL;
            TppPHExtractMin(v29);
            TppUpdateSubQueueTimer(v19, v15);
            LOBYTE(v7[4].Length) = 0;
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)v12);
            HIDWORD(v7[3].ShutdownThreadId) = 0;
            v7[3].EntryInProgress = 0LL;
            BYTE2(v7[4].Length) = 0;
            if ( !v6 )
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v7[2].EntryInProgress);
            v16 = 1;
          }
          else
          {
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)v12);
            BYTE2(v7[4].Length) |= 4u;
            v38[1] = NtCurrentTeb()->ClientId.UniqueThread;
            _m_prefetchw(&v7[3].ShutdownInProgress);
            v36 = *(_QWORD *)&v7[3].ShutdownInProgress;
            do
            {
              v37 = v36;
              v38[0] = v36;
              v36 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&v7[3].ShutdownInProgress,
                      (signed __int64)v38,
                      v36);
            }
            while ( v36 != v37 );
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v7[2].EntryInProgress);
            NtWaitForAlertByThreadId(&v7[3].ShutdownInProgress, 0LL);
            if ( v6 )
              RtlAcquireSRWLockExclusive((volatile signed __int32 *)&v7[2].EntryInProgress);
            v16 = 0;
          }
          v5 = v39;
          goto LABEL_19;
        }
      }
    }
  }
  if ( i || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, i, a3);
  return 0LL;
}
