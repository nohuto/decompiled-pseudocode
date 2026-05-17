/*
 * XREFs of TpPostTask @ 0x18003D360
 * Callers:
 *     TppDirectExecuteCallback @ 0x18003BD60 (TppDirectExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1801661D0 (NtReleaseWorkerFactoryWorker.c)
 */

signed __int64 __fastcall TpPostTask(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  signed __int32 v7; // eax
  __int64 *v8; // r14
  __int64 v9; // rdi
  volatile signed __int32 *v10; // rsi
  char *SchedulerSharedDataSlot; // r8
  __int64 i; // rdx
  volatile signed __int32 **v13; // rcx
  __int64 **v14; // rax
  signed __int32 v15; // edx
  signed __int32 v16; // ett
  int v17; // eax
  __int64 v18; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v20; // rax
  signed __int64 result; // rax
  __int64 v22; // rdx
  signed __int64 v23; // rtt
  signed __int64 v24; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = TppPoolpSerializedPool;
      goto LABEL_3;
    }
    v4 = TppPoolpGlobalPool;
  }
  if ( v4 == TppPoolpSerializedPool )
LABEL_3:
    a3 = 1;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw((const void *)(v4 + 428));
  v7 = *(_DWORD *)(v4 + 428);
  do
  {
    if ( v7 == -2 )
    {
      v15 = v6;
      goto LABEL_19;
    }
    if ( v7 == (_DWORD)v6 || v7 == -1 )
      break;
    v15 = -1;
LABEL_19:
    v16 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 428), v15, v7);
  }
  while ( v16 != v7 );
  v8 = (__int64 *)(a1 + 16);
  v9 = *(_QWORD *)(v4 + 8LL * a3 + 16) + 24 * v6;
  v10 = (volatile signed __int32 *)(v9 + 16);
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v13 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v13 )
      {
        if ( v13 )
          *v13 = v10;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v10, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v9 + 16);
  v14 = *(__int64 ***)(v9 + 8);
  if ( *v14 != (__int64 *)v9 )
    __fastfail(3u);
  *v8 = v9;
  v8[1] = (__int64)v14;
  *v14 = v8;
  *(_QWORD *)(v9 + 8) = v8;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v9 + 16));
  if ( !v4 || (v17 = *(_DWORD *)(v4 + 440)) == 0 )
    v17 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v4 + 424) != v17 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v4 + 72));
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
  }
  v18 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v20 = *ThreadPoolData;
    if ( *(_QWORD *)(v20 + 48) == v4 && *(_DWORD *)(v20 + 128) == 3 )
    {
      *(_DWORD *)(v20 + 128) = 4;
      v18 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v4 + 8));
  result = *(_QWORD *)(v4 + 8);
  LODWORD(v24) = result;
  do
  {
    if ( (v24 & 0xFFFF0000) != 0 || (_DWORD)v18 )
    {
      v22 = 0LL;
    }
    else
    {
      LODWORD(v24) = (unsigned __int16)v24 | ((v24 & 0xFFFF0000) + 0x10000);
      v22 = 1LL;
    }
    v23 = result;
    HIDWORD(v24) = HIDWORD(result) + 1;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v24, result);
    LODWORD(v24) = result;
  }
  while ( v23 != result );
  if ( (_DWORD)v22 )
    return NtReleaseWorkerFactoryWorker(*(_QWORD *)(v4 + 56), v22, v18);
  return result;
}
