/*
 * XREFs of TppWorkPost @ 0x180011780
 * Callers:
 *     TpPostWork @ 0x18003EF70 (TpPostWork.c)
 *     TppSingleTimerExpiration @ 0x18003F720 (TppSingleTimerExpiration.c)
 *     TpSimpleTryPost @ 0x1800EB150 (TpSimpleTryPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1801661D0 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWorkPost(__int64 a1)
{
  char v2; // bp
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  volatile signed __int32 *v5; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  volatile signed __int32 **v8; // rdx
  bool v9; // zf
  signed __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  __int64 result; // rax
  int v14; // edx
  int v15; // ett
  __int64 v16; // rcx
  _DWORD *SharedData; // rdx
  __int64 v18; // rdx
  _DWORD *v19; // rdx
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v22; // r8
  signed __int32 v23; // eax
  __int64 *v24; // r14
  __int64 v25; // rbx
  volatile signed __int32 *v26; // rbp
  char *v27; // r8
  unsigned int j; // edx
  volatile signed __int32 **v29; // rcx
  __int64 **v30; // rax
  signed __int32 v31; // edx
  signed __int32 v32; // ett
  int v33; // eax
  __int64 v34; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v36; // rax
  int v37; // ecx
  signed __int64 v38; // rdx
  __int64 v39; // rtt
  __int64 (__fastcall *v40)(); // rax
  signed __int64 v41; // [rsp+20h] [rbp-B8h]
  _DWORD v42[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v43; // [rsp+48h] [rbp-90h]
  __int128 v44; // [rsp+50h] [rbp-88h]
  __int64 v45; // [rsp+60h] [rbp-78h]
  __int64 v46; // [rsp+68h] [rbp-70h]
  __int64 v47; // [rsp+70h] [rbp-68h]
  __int64 v48; // [rsp+78h] [rbp-60h]
  __int64 v49; // [rsp+80h] [rbp-58h]
  __int128 v50; // [rsp+90h] [rbp-48h]

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 56);
  do
  {
    if ( v2 )
    {
      RtlReleaseSRWLockExclusive(a1 + 64);
      v2 = 0;
    }
    v4 = (v3 + 1) ^ (v3 ^ (v3 + 1)) & 0xF000000000000000uLL;
    if ( ((v3 + 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v3 >> 60) & 8) != 0 )
    {
      v5 = (volatile signed __int32 *)(a1 + 64);
      v4 &= ~0x8000000000000000uLL;
      v2 = 1;
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          v8 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
          if ( !*v8 )
          {
            if ( v8 )
              *v8 = v5;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v5, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(a1 + 64);
    }
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v4, v3);
    v9 = v3 == v10;
    v3 = v10;
  }
  while ( !v9 );
  if ( v2 )
  {
    v11 = *(_QWORD **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 64);
    if ( v11 )
    {
      do
      {
        v12 = (_QWORD *)*v11;
        ZwAlertThreadByThreadId(v11[1]);
        v11 = v12;
      }
      while ( v12 );
    }
  }
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(result) = *(_DWORD *)(a1 + 232);
  do
  {
    v14 = result & 1;
    v15 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 232),
                             (result + 2) & 0xFFFFFFFE,
                             result);
  }
  while ( v15 != (_DWORD)result );
  if ( !v14 )
    return result;
  _InterlockedAdd((volatile signed __int32 *)a1, 2u);
  v50 = 0LL;
  *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
  v16 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v18 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v18 = 2147353478LL;
  if ( *(_BYTE *)v18 )
  {
    v45 = *(_QWORD *)(a1 + 144);
    v46 = a1 + 200;
    v47 = *(_QWORD *)(a1 + 80);
    v48 = *(_QWORD *)(a1 + 88);
    v49 = *(_QWORD *)(a1 + 104);
    v42[0] = 0;
    v42[1] = 471859200;
    v43 = 0LL;
    v44 = 0LL;
    v19 = NtCurrentPeb()->SharedData;
    if ( v19 && *v19 )
      v16 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v16, 132098LL, 40LL, v42);
  }
  v20 = *(_QWORD *)(a1 + 144);
  v21 = *(_DWORD *)(a1 + 192);
  if ( !v20 )
    v20 = TppPoolpGlobalPool;
  if ( v20 == TppPoolpSerializedPool )
    v21 = 1;
  v22 = *(unsigned int *)(a1 + 208);
  _m_prefetchw((const void *)(v20 + 428));
  v23 = *(_DWORD *)(v20 + 428);
  do
  {
    if ( v23 == -2 )
    {
      v31 = v22;
      goto LABEL_48;
    }
    if ( v23 == (_DWORD)v22 || v23 == -1 )
      break;
    v31 = -1;
LABEL_48:
    v32 = v23;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 428), v31, v23);
  }
  while ( v32 != v23 );
  v24 = (__int64 *)(a1 + 216);
  v25 = *(_QWORD *)(v20 + 8LL * v21 + 16) + 24 * v22;
  v26 = (volatile signed __int32 *)(v25 + 16);
  v27 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v27 )
  {
    for ( j = 0; j < 8; ++j )
    {
      v29 = (volatile signed __int32 **)&v27[8 * j];
      if ( !*v29 )
      {
        if ( v29 )
          *v29 = v26;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v26, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v25 + 16);
  v30 = *(__int64 ***)(v25 + 8);
  if ( *v30 != (__int64 *)v25 )
    __fastfail(3u);
  *v24 = v25;
  *(_QWORD *)(a1 + 224) = v30;
  *v30 = v24;
  *(_QWORD *)(v25 + 8) = v24;
  RtlReleaseSRWLockExclusive(v25 + 16);
  if ( !v20 || (v33 = *(_DWORD *)(v20 + 440)) == 0 )
    v33 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v20 + 424) != v33 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v20 + 72));
    TppAdjustRunningThreadGoalWithLock(v20);
    RtlReleaseSRWLockExclusive(v20 + 72);
  }
  v34 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v36 = *ThreadPoolData;
    if ( *(_QWORD *)(v36 + 48) == v20 && *(_DWORD *)(v36 + 128) == 3 )
    {
      *(_DWORD *)(v36 + 128) = 4;
      v34 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v20 + 8));
  result = *(_QWORD *)(v20 + 8);
  LODWORD(v41) = result;
  do
  {
    HIDWORD(v41) = HIDWORD(result) + 1;
    if ( (v41 & 0xFFFF0000) != 0 || (_DWORD)v34 )
    {
      v37 = 0;
    }
    else
    {
      v37 = 1;
      LODWORD(v41) = (unsigned __int16)v41 | ((v41 & 0xFFFF0000) + 0x10000);
    }
    v38 = v41;
    v39 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v41, result);
    LODWORD(v41) = result;
  }
  while ( v39 != result );
  if ( v37 )
    result = NtReleaseWorkerFactoryWorker(*(_QWORD *)(v20 + 56), v38, v34);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    v40 = **(__int64 (__fastcall ***)())(a1 + 8);
    if ( v40 == TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(a1);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
    }
    else if ( (char *)v40 == (char *)TppAlpcpFree )
    {
      return TppAlpcpFree(a1, v38, v34);
    }
    else if ( (char *)v40 == (char *)TppWorkpFree )
    {
      return TppWorkpFree(a1, v38, v34);
    }
    else
    {
      return ((__int64 (__fastcall *)(__int64, signed __int64, __int64))v40)(a1, v38, v34);
    }
  }
  return result;
}
