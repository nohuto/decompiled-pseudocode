/*
 * XREFs of TpSetTimerEx @ 0x18006AF80
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004D510 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18004FAE0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180056220 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlUpdateTimer @ 0x18006A310 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x18006AB60 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18006D040 (RtlCreateTimer.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 *     TpSetTimer @ 0x1800F6A30 (TpSetTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x180132720 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppETWTimerCancelled @ 0x18006AA90 (TppETWTimerCancelled.c)
 *     TppSetTimer @ 0x18006B410 (TppSetTimer.c)
 *     TpIsTimerSet @ 0x18006B6B0 (TpIsTimerSet.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppPHExtractMin @ 0x18006C650 (TppPHExtractMin.c)
 *     TppUpdateSubQueueTimer @ 0x18006C700 (TppUpdateSubQueueTimer.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     NtWaitForAlertByThreadId @ 0x1801658E0 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpSetTimerEx(_PEB_LDR_DATA *Ldr, unsigned __int64 i, int a3, unsigned __int64 a4)
{
  int v4; // r12d
  int v5; // r13d
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  int ShutdownThreadId; // eax
  bool v9; // si
  volatile signed __int32 *v10; // rdi
  _QWORD *SchedulerSharedDataSlot; // r8
  volatile signed __int32 *v12; // r15
  volatile signed __int32 **v13; // rcx
  char v14; // al
  bool v15; // r14
  unsigned __int8 v16; // r14
  void (__fastcall *v18)(unsigned __int64); // rax
  __int64 v19; // r13
  volatile signed __int32 **v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // r8
  _QWORD *v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // r9
  unsigned __int64 v30; // rax
  _QWORD **v31; // rcx
  _QWORD *v32; // r11
  __int64 v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // r8
  signed __int64 v38; // rax
  signed __int64 v39; // rdx
  volatile signed __int32 **v40; // rdx
  unsigned __int64 v41; // r8
  _QWORD v42[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = i;
  v7 = (unsigned __int64)Ldr;
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
          v10 = (volatile signed __int32 *)(v7 + 240);
          SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
          v12 = (volatile signed __int32 *)(*(_QWORD *)(v7 + 144) + 112LL);
          if ( SchedulerSharedDataSlot )
          {
            for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
            {
              v13 = (volatile signed __int32 **)&SchedulerSharedDataSlot[i];
              if ( !*v13 )
              {
                if ( v13 )
                  *v13 = v10;
                break;
              }
            }
          }
          if ( _interlockedbittestandset64(v10, 0LL) )
            RtlpAcquireSRWLockExclusiveContended(v7 + 240, i, SchedulerSharedDataSlot, a4);
          v14 = *(_BYTE *)(v7 + 354);
          v15 = (v14 & 2) != 0;
          if ( (v14 & 1) == 0 )
          {
            *(_QWORD *)(v7 + 328) = 0LL;
            if ( !v6 )
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v7 + 240));
            v16 = 0;
LABEL_19:
            if ( v6 && *(_BYTE *)(v7 + 355) )
            {
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v7 + 240));
              v9 = 0;
            }
            if ( v16 )
            {
              if ( !v9 )
              {
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
                {
                  v18 = **(void (__fastcall ***)(unsigned __int64))(v7 + 8);
                  if ( (char *)v18 == (char *)TppSimplepFree )
                  {
                    TppCleanupGroupMemberDestroy((_QWORD *)v7);
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, v7);
                  }
                  else if ( (char *)v18 == (char *)TppAlpcpFree )
                  {
                    TppAlpcpFree(v7);
                  }
                  else if ( (char *)v18 == (char *)TppWorkpFree )
                  {
                    TppWorkpFree(v7);
                  }
                  else
                  {
                    v18(v7);
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
                RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v7 + 240));
                return v16;
              }
              _InterlockedIncrement((volatile signed __int32 *)v7);
            }
            TppSetTimer(v7, (_DWORD)v12, v6, v5, v4);
            goto LABEL_26;
          }
          v19 = (__int64)(v12 + 2);
          if ( (v14 & 2) == 0 )
            v19 = (__int64)(v12 + 32);
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v22 = (__int64)NtCurrentPeb()->SharedData + 556;
          else
            v22 = 2147353478LL;
          if ( *(_BYTE *)v22 )
            TppETWTimerCancelled(v19, v7);
          RtlAcquireSRWLockExclusive(v12, v20, v21);
          if ( *(_BYTE *)(v7 + 352) )
          {
            v23 = *(_QWORD *)(v19 + 16);
            v24 = v7 + 248;
            if ( v7 + 248 != v23 )
            {
              v25 = *(_QWORD *)v24;
              if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
                goto LABEL_50;
              v26 = *(_QWORD **)(v7 + 256);
              if ( *v26 != v24
                || (*v26 = v25,
                    *(_QWORD *)(v25 + 8) = v26,
                    v27 = (_QWORD *)(v7 + 264),
                    *(_QWORD *)(v7 + 256) = v7 + 248,
                    *(_QWORD *)v24 = v24,
                    v28 = *(_QWORD *)(v7 + 264),
                    v29 = *(_QWORD **)(v19 + 16),
                    *(_QWORD *)(v28 + 8) != v7 + 264) )
              {
LABEL_50:
                __fastfail(3u);
              }
              v29[1] = v27;
              *v29 = v28;
              *(_QWORD *)(v28 + 8) = v29;
              *v27 = v29;
              v23 = v7 + 248;
              *(_QWORD *)(v19 + 16) = v24;
            }
            *(_QWORD *)(v23 + 32) = 0LL;
            TppPHExtractMin(v19 + 16);
            v30 = *(_QWORD *)(v19 + 8);
            v31 = (_QWORD **)(v19 + 8);
            v32 = (_QWORD *)(v7 + 288);
            if ( v7 + 288 != v30 )
            {
              v33 = *v32;
              if ( *(_QWORD **)(*v32 + 8LL) != v32 )
                goto LABEL_50;
              v34 = *(_QWORD **)(v7 + 296);
              if ( (_QWORD *)*v34 != v32 )
                goto LABEL_50;
              *v34 = v33;
              *(_QWORD *)(v33 + 8) = v34;
              v35 = (_QWORD *)(v7 + 304);
              *(_QWORD *)(v7 + 296) = v7 + 288;
              *v32 = v32;
              v36 = *(_QWORD *)(v7 + 304);
              v37 = *v31;
              if ( *(_QWORD *)(v36 + 8) != v7 + 304 )
                goto LABEL_50;
              v37[1] = v35;
              *v37 = v36;
              *(_QWORD *)(v36 + 8) = v37;
              *v35 = v37;
              v30 = v7 + 288;
              *v31 = v32;
            }
            *(_QWORD *)(v30 + 32) = 0LL;
            TppPHExtractMin(v31);
            TppUpdateSubQueueTimer(v19, v15);
            *(_BYTE *)(v7 + 352) = 0;
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)v12);
            *(_DWORD *)(v7 + 348) = 0;
            *(_QWORD *)(v7 + 328) = 0LL;
            *(_BYTE *)(v7 + 354) = 0;
            if ( !v6 )
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v7 + 240));
            v16 = 1;
          }
          else
          {
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)v12);
            *(_BYTE *)(v7 + 354) |= 4u;
            v42[1] = NtCurrentTeb()->ClientId.UniqueThread;
            _m_prefetchw((const void *)(v7 + 336));
            v38 = *(_QWORD *)(v7 + 336);
            do
            {
              v39 = v38;
              v42[0] = v38;
              v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 336), (signed __int64)v42, v38);
            }
            while ( v38 != v39 );
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v7 + 240));
            NtWaitForAlertByThreadId(v7 + 336, 0LL);
            if ( v6 )
              RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v7 + 240), v40, v41);
            v16 = 0;
          }
          v5 = a3;
          goto LABEL_19;
        }
      }
    }
  }
  if ( i || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr);
  return 0LL;
}
