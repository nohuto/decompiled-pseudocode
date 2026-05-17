/*
 * XREFs of TppSingleTimerExpiration @ 0x18003F720
 * Callers:
 *     TppTimerQueueExpiration @ 0x18003F290 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppIteWakeWaiters @ 0x18003E510 (TppIteWakeWaiters.c)
 *     TppEnqueueTimer @ 0x18003E540 (TppEnqueueTimer.c)
 *     TppUpdateSubQueueTimer @ 0x18003FA60 (TppUpdateSubQueueTimer.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     TppWaitTimerExpiration @ 0x1800D6A74 (TppWaitTimerExpiration.c)
 *     TppETWTimerExpiration @ 0x180113E90 (TppETWTimerExpiration.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, volatile signed __int32 *a2, char a3)
{
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  volatile signed __int64 *v8; // rsi
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 result; // rax
  __int64 (__fastcall *v15)(); // rax
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
  {
    v18 = 2LL;
    if ( !a3 )
      v18 = 32LL;
    TppETWTimerExpiration(&a2[v18], a1);
  }
  v8 = (volatile signed __int64 *)(a1 + 240);
  v9 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240));
  v10 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v10 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      *(_QWORD *)(a1 + 328) = 0LL;
      if ( !(unsigned __int8)TppWaitTimerExpiration(a1) )
        goto LABEL_8;
    }
    else
    {
      v11 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v11 )
      {
        if ( a3 )
        {
          *(_QWORD *)(a1 + 328) = v9;
          v8 = (volatile signed __int64 *)(a1 + 240);
        }
        v16 = 10000 * v11 + *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v16;
        if ( v16 <= v9 )
          *(_QWORD *)(a1 + 328) = v9 + 10000 * v11 - (v9 - v16) % (10000 * v11);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        TppEnqueueTimer((__int64)(a2 + 32), a1);
        TppUpdateSubQueueTimer(a2 + 32, 0LL);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)a2);
      }
    }
    TppWorkPost(a1);
LABEL_8:
    RtlReleaseSRWLockExclusive(v8);
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v17 = *(_QWORD **)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  TppIteWakeWaiters(v17);
LABEL_9:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v15 = **(__int64 (__fastcall ***)())(a1 + 8);
    if ( v15 == TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(a1);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
    }
    else if ( (char *)v15 == (char *)TppAlpcpFree )
    {
      return TppAlpcpFree(a1, v12, v13);
    }
    else if ( (char *)v15 == (char *)TppWorkpFree )
    {
      return TppWorkpFree(a1, v12, v13);
    }
    else
    {
      return ((__int64 (__fastcall *)(__int64))v15)(a1);
    }
  }
  return result;
}
