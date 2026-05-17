/*
 * XREFs of TpPostTask @ 0x18006EFB0
 * Callers:
 *     TppDirectExecuteCallback @ 0x18006D650 (TppDirectExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180164C40 (NtReleaseWorkerFactoryWorker.c)
 */

signed __int64 __fastcall TpPostTask(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned __int64 i; // rdx
  __int64 *v9; // r14
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rsi
  _QWORD *SchedulerSharedDataSlot; // r8
  volatile signed __int32 **v13; // rcx
  __int64 **v14; // rax
  signed __int32 v15; // edx
  signed __int32 v16; // ett
  volatile signed __int32 **v17; // rdx
  unsigned __int64 v18; // r8
  int v19; // eax
  __int64 v20; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v22; // rax
  signed __int64 result; // rax
  __int64 v24; // rdx
  signed __int64 v25; // rtt
  signed __int64 v26; // [rsp+30h] [rbp+8h]

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
  i = a3;
  v9 = (__int64 *)(a1 + 16);
  v10 = *(_QWORD *)(v4 + 8LL * a3 + 16) + 24 * v6;
  v11 = (volatile signed __int32 *)(v10 + 16);
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v13 = (volatile signed __int32 **)&SchedulerSharedDataSlot[i];
      if ( !*v13 )
      {
        if ( v13 )
          *v13 = v11;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v11, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v10 + 16, i, SchedulerSharedDataSlot, a4);
  v14 = *(__int64 ***)(v10 + 8);
  if ( *v14 != (__int64 *)v10 )
    __fastfail(3u);
  *v9 = v10;
  v9[1] = (__int64)v14;
  *v14 = v9;
  *(_QWORD *)(v10 + 8) = v9;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 16));
  if ( !v4 || (v19 = *(_DWORD *)(v4 + 440)) == 0 )
    v19 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v4 + 424) != v19 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v4 + 72), v17, v18);
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
  }
  v20 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v22 = *ThreadPoolData;
    if ( *(_QWORD *)(v22 + 48) == v4 && *(_DWORD *)(v22 + 128) == 3 )
    {
      *(_DWORD *)(v22 + 128) = 4;
      v20 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v4 + 8));
  result = *(_QWORD *)(v4 + 8);
  LODWORD(v26) = result;
  do
  {
    if ( (v26 & 0xFFFF0000) != 0 || (_DWORD)v20 )
    {
      v24 = 0LL;
    }
    else
    {
      LODWORD(v26) = (unsigned __int16)v26 | ((v26 & 0xFFFF0000) + 0x10000);
      v24 = 1LL;
    }
    v25 = result;
    HIDWORD(v26) = HIDWORD(result) + 1;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v26, result);
    LODWORD(v26) = result;
  }
  while ( v25 != result );
  if ( (_DWORD)v24 )
    return NtReleaseWorkerFactoryWorker(*(_QWORD *)(v4 + 56), v24, v20);
  return result;
}
