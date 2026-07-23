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

int __fastcall TpPostTask(__int64 a1, char *a2, int a3, __int64 a4)
{
  char *v4; // rbx
  __int64 v6; // rcx
  signed __int32 v7; // eax
  _RTL_SRWLOCK **v8; // r14
  _RTL_SRWLOCK *v9; // rdi
  volatile signed __int32 *v10; // rsi
  char *SchedulerSharedDataSlot; // r8
  __int64 i; // rdx
  volatile signed __int32 **v13; // rcx
  _RTL_SRWLOCK **Value; // rax
  signed __int32 v15; // edx
  signed __int32 v16; // ett
  int v17; // eax
  int v18; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v20; // rax
  signed __int64 v21; // rax
  int v22; // edx
  signed __int64 v23; // rtt
  signed __int64 v25; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = (char *)TppPoolpSerializedPool;
      goto LABEL_3;
    }
    v4 = (char *)TppPoolpGlobalPool;
  }
  if ( v4 == TppPoolpSerializedPool )
LABEL_3:
    a3 = 1;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw(v4 + 428);
  v7 = *((_DWORD *)v4 + 107);
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
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 107, v15, v7);
  }
  while ( v16 != v7 );
  v8 = (_RTL_SRWLOCK **)(a1 + 16);
  v9 = (_RTL_SRWLOCK *)(*(_QWORD *)&v4[8 * a3 + 16] + 24 * v6);
  v10 = (volatile signed __int32 *)&v9[2];
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
    RtlpAcquireSRWLockExclusiveContended(&v9[2]);
  Value = (_RTL_SRWLOCK **)v9[1].Value;
  if ( *Value != v9 )
    __fastfail(3u);
  *v8 = v9;
  v8[1] = (_RTL_SRWLOCK *)Value;
  *Value = (_RTL_SRWLOCK *)v8;
  v9[1].Value = (unsigned __int64)v8;
  RtlReleaseSRWLockExclusive(v9 + 2);
  if ( !v4 || (v17 = *((_DWORD *)v4 + 110)) == 0 )
    v17 = MEMORY[0x7FFE03C0];
  if ( *((_DWORD *)v4 + 106) != v17 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 9);
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v4 + 9);
  }
  v18 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v20 = *ThreadPoolData;
    if ( *(char **)(v20 + 48) == v4 && *(_DWORD *)(v20 + 128) == 3 )
    {
      *(_DWORD *)(v20 + 128) = 4;
      v18 = 1;
    }
  }
  _m_prefetchw(v4 + 8);
  v21 = *((_QWORD *)v4 + 1);
  LODWORD(v25) = v21;
  do
  {
    if ( (v25 & 0xFFFF0000) != 0 || v18 )
    {
      v22 = 0;
    }
    else
    {
      LODWORD(v25) = (unsigned __int16)v25 | ((v25 & 0xFFFF0000) + 0x10000);
      v22 = 1;
    }
    v23 = v21;
    HIDWORD(v25) = HIDWORD(v21) + 1;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, v25, v21);
    LODWORD(v25) = v21;
  }
  while ( v23 != v21 );
  if ( v22 )
    LODWORD(v21) = NtReleaseWorkerFactoryWorker(*((HANDLE *)v4 + 7));
  return v21;
}
