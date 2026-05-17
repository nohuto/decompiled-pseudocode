/*
 * XREFs of TppSingleTimerExpiration @ 0x18006BE80
 * Callers:
 *     TppTimerQueueExpiration @ 0x18006B9F0 (TppTimerQueueExpiration.c)
 * Callees:
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkPost @ 0x180055B40 (TppWorkPost.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppWaitTimerExpiration @ 0x18006A560 (TppWaitTimerExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x18006C700 (TppUpdateSubQueueTimer.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     TppEnqueueTimer @ 0x18006C9E0 (TppEnqueueTimer.c)
 *     TppIteWakeWaiters @ 0x18006CB10 (TppIteWakeWaiters.c)
 *     TppETWTimerExpiration @ 0x180111020 (TppETWTimerExpiration.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppSingleTimerExpiration(unsigned __int64 a1, volatile signed __int32 *a2, char a3)
{
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  volatile signed __int64 *v8; // rsi
  __int64 v9; // rdi
  volatile signed __int32 **v10; // rdx
  unsigned __int64 v11; // r8
  char *v12; // r9
  char v13; // al
  __int64 v14; // rax
  __int64 result; // rax
  __int64 (__fastcall *v16)(unsigned __int64); // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
  {
    v20 = 2LL;
    if ( !a3 )
      v20 = 32LL;
    TppETWTimerExpiration(&a2[v20], a1);
  }
  v8 = (volatile signed __int64 *)(a1 + 240);
  v9 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), MEMORY[0x7FFE03B0], 0x7FFE03B0uLL);
  v13 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v13 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      *(_QWORD *)(a1 + 328) = 0LL;
      if ( !TppWaitTimerExpiration(a1) )
        goto LABEL_8;
    }
    else
    {
      v14 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v14 )
      {
        if ( a3 )
        {
          *(_QWORD *)(a1 + 328) = v9;
          v8 = (volatile signed __int64 *)(a1 + 240);
        }
        v17 = 10000 * v14;
        v18 = 10000 * v14 + *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v18;
        if ( v18 <= v9 )
        {
          v18 = (v9 - v18) % v17;
          *(_QWORD *)(a1 + 328) = v9 + v17 - v18;
        }
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2, (volatile signed __int32 **)v18, v11);
        TppEnqueueTimer(a2 + 32, a1);
        TppUpdateSubQueueTimer(a2 + 32, 0LL);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)a2);
      }
    }
    TppWorkPost(a1, v10, v11, v12);
LABEL_8:
    RtlReleaseSRWLockExclusive(v8);
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v19 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  TppIteWakeWaiters(v19);
LABEL_9:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v16 = **(__int64 (__fastcall ***)(unsigned __int64))(a1 + 8);
    if ( (char *)v16 == (char *)TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy((_QWORD *)a1);
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
    }
    else if ( v16 == TppAlpcpFree )
    {
      return TppAlpcpFree(a1);
    }
    else if ( (char *)v16 == (char *)TppWorkpFree )
    {
      return TppWorkpFree(a1);
    }
    else
    {
      return v16(a1);
    }
  }
  return result;
}
