/*
 * XREFs of TppSingleTimerExpiration @ 0x180088760
 * Callers:
 *     TppTimerQueueExpiration @ 0x1800882D0 (TppTimerQueueExpiration.c)
 * Callees:
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppWaitTimerExpiration @ 0x180086C50 (TppWaitTimerExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x180088FE0 (TppUpdateSubQueueTimer.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     TppEnqueueTimer @ 0x1800892C0 (TppEnqueueTimer.c)
 *     TppIteWakeWaiters @ 0x1800893F0 (TppIteWakeWaiters.c)
 *     TppETWTimerExpiration @ 0x18010C2E0 (TppETWTimerExpiration.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed __int32 __fastcall TppSingleTimerExpiration(_RTL_SRWLOCK *BaseAddress, PRTL_SRWLOCK SRWLock, char a3)
{
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  _RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rdi
  char **v10; // rdx
  __int64 v11; // r8
  char *v12; // r9
  char v13; // al
  __int64 Ptr_high; // rax
  signed __int32 result; // eax
  __int64 (__fastcall *v16)(_RTL_SRWLOCK *); // rax
  __int64 v17; // rdx
  unsigned __int64 Value; // rdi
  __int64 v19; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
  {
    v19 = 1LL;
    if ( !a3 )
      v19 = 16LL;
    TppETWTimerExpiration(&SRWLock[v19], BaseAddress);
  }
  v8 = BaseAddress + 30;
  v9 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  RtlAcquireSRWLockExclusive(BaseAddress + 30);
  v13 = BYTE2(BaseAddress[44].Value);
  BYTE2(BaseAddress[44].Value) = 0;
  if ( (v13 & 4) == 0 )
  {
    if ( *((_BYTE *)&BaseAddress[44].0 + 1) )
    {
      BaseAddress[41].Value = 0LL;
      if ( !TppWaitTimerExpiration((__int64)BaseAddress) )
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
        v17 = 10000 * Ptr_high + BaseAddress[41].Value;
        BaseAddress[41].Value = v17;
        if ( v17 <= v9 )
          BaseAddress[41].Value = v9 + 10000 * Ptr_high - (v9 - v17) % (10000 * Ptr_high);
        _InterlockedIncrement((volatile signed __int32 *)BaseAddress);
        RtlAcquireSRWLockExclusive(SRWLock);
        TppEnqueueTimer(&SRWLock[16], BaseAddress);
        TppUpdateSubQueueTimer(&SRWLock[16], 0LL);
        RtlReleaseSRWLockExclusive(SRWLock);
      }
    }
    TppWorkPost(BaseAddress, v10, v11, v12);
LABEL_8:
    RtlReleaseSRWLockExclusive(v8);
    goto LABEL_9;
  }
  HIDWORD(BaseAddress[43].Ptr) = 0;
  BaseAddress[41].Value = 0LL;
  Value = BaseAddress[42].Value;
  BaseAddress[42].Value = 0LL;
  RtlReleaseSRWLockExclusive(BaseAddress + 30);
  TppIteWakeWaiters(Value);
LABEL_9:
  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v16 = *(__int64 (__fastcall **)(_RTL_SRWLOCK *))BaseAddress[1].Value;
    if ( (char *)v16 == (char *)TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(BaseAddress);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
    }
    else if ( (char *)v16 == (char *)TppAlpcpFree )
    {
      return TppAlpcpFree(BaseAddress);
    }
    else if ( (char *)v16 == (char *)TppWorkpFree )
    {
      return TppWorkpFree(BaseAddress);
    }
    else
    {
      return v16(BaseAddress);
    }
  }
  return result;
}
