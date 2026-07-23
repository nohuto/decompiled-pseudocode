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

LOGICAL __fastcall TppSingleTimerExpiration(_RTL_SRWLOCK *BaseAddress, PRTL_SRWLOCK SRWLock, char a3)
{
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  _RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rdi
  char v10; // al
  __int64 Ptr_high; // rax
  LOGICAL result; // eax
  __int64 (__fastcall *v13)(); // rax
  __int64 v14; // rdx
  __int64 **Value; // rdi
  __int64 v16; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
  {
    v16 = 1LL;
    if ( !a3 )
      v16 = 16LL;
    TppETWTimerExpiration(&SRWLock[v16], BaseAddress);
  }
  v8 = BaseAddress + 30;
  v9 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  RtlAcquireSRWLockExclusive(BaseAddress + 30);
  v10 = BYTE2(BaseAddress[44].Value);
  BYTE2(BaseAddress[44].Value) = 0;
  if ( (v10 & 4) == 0 )
  {
    if ( *((_BYTE *)&BaseAddress[44].0 + 1) )
    {
      BaseAddress[41].Value = 0LL;
      if ( !(unsigned __int8)TppWaitTimerExpiration(BaseAddress) )
        goto LABEL_8;
    }
    else
    {
      Ptr_high = HIDWORD(BaseAddress[43].Ptr);
      if ( (_DWORD)Ptr_high )
      {
        if ( a3 )
        {
          BaseAddress[41].Value = v9;
          v8 = BaseAddress + 30;
        }
        v14 = 10000 * Ptr_high + BaseAddress[41].Value;
        BaseAddress[41].Value = v14;
        if ( v14 <= v9 )
          BaseAddress[41].Value = v9 + 10000 * Ptr_high - (v9 - v14) % (10000 * Ptr_high);
        _InterlockedIncrement((volatile signed __int32 *)BaseAddress);
        RtlAcquireSRWLockExclusive(SRWLock);
        TppEnqueueTimer((__int64)&SRWLock[16], (__int64)BaseAddress);
        TppUpdateSubQueueTimer(&SRWLock[16], 0LL);
        RtlReleaseSRWLockExclusive(SRWLock);
      }
    }
    TppWorkPost(BaseAddress);
LABEL_8:
    RtlReleaseSRWLockExclusive(v8);
    goto LABEL_9;
  }
  HIDWORD(BaseAddress[43].Ptr) = 0;
  BaseAddress[41].Value = 0LL;
  Value = (__int64 **)BaseAddress[42].Value;
  BaseAddress[42].Value = 0LL;
  RtlReleaseSRWLockExclusive(BaseAddress + 30);
  TppIteWakeWaiters(Value);
LABEL_9:
  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v13 = *(__int64 (__fastcall **)())BaseAddress[1].Value;
    if ( v13 == TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(BaseAddress);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
    }
    else if ( (char *)v13 == (char *)TppAlpcpFree )
    {
      return TppAlpcpFree(BaseAddress);
    }
    else if ( (char *)v13 == (char *)TppWorkpFree )
    {
      return TppWorkpFree(BaseAddress);
    }
    else
    {
      return ((__int64 (__fastcall *)(_RTL_SRWLOCK *))v13)(BaseAddress);
    }
  }
  return result;
}
