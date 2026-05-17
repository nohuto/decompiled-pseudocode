/*
 * XREFs of TppWorkPost @ 0x180055B40
 * Callers:
 *     TpSimpleTryPost @ 0x18006A740 (TpSimpleTryPost.c)
 *     TppSingleTimerExpiration @ 0x18006BE80 (TppSingleTimerExpiration.c)
 *     TpPostWork @ 0x1800D6E00 (TpPostWork.c)
 * Callees:
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180164C40 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWorkPost(
        unsigned __int64 a1,
        volatile signed __int32 **a2,
        __int64 a3,
        char *SchedulerSharedDataSlot)
{
  char v5; // bp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  volatile signed __int32 *v8; // r8
  unsigned int i; // ecx
  bool v10; // zf
  signed __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rdi
  __int64 result; // rax
  int v17; // edx
  int v18; // ett
  __int64 v19; // rcx
  _DWORD *SharedData; // rdx
  __int64 v21; // rdx
  _DWORD *v22; // rdx
  __int64 v23; // rdi
  int v24; // ecx
  __int64 v25; // r8
  signed __int32 v26; // eax
  unsigned __int64 j; // rdx
  __int64 *v28; // r14
  __int64 v29; // rbx
  volatile signed __int32 *v30; // rbp
  _QWORD *v31; // r8
  volatile signed __int32 **v32; // rcx
  __int64 **v33; // rax
  signed __int32 v34; // edx
  signed __int32 v35; // ett
  volatile signed __int32 **v36; // rdx
  unsigned __int64 v37; // r8
  int v38; // eax
  __int64 v39; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v41; // rax
  int v42; // ecx
  signed __int64 v43; // rdx
  __int64 v44; // rtt
  __int64 (__fastcall *v45)(__int64); // rax
  signed __int64 v46; // [rsp+20h] [rbp-B8h]
  _DWORD v47[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v48; // [rsp+48h] [rbp-90h]
  __int128 v49; // [rsp+50h] [rbp-88h]
  __int64 v50; // [rsp+60h] [rbp-78h]
  unsigned __int64 v51; // [rsp+68h] [rbp-70h]
  __int64 v52; // [rsp+70h] [rbp-68h]
  __int64 v53; // [rsp+78h] [rbp-60h]
  __int64 v54; // [rsp+80h] [rbp-58h]
  __int128 v55; // [rsp+90h] [rbp-48h]

  v5 = 0;
  _m_prefetchw((const void *)(a1 + 56));
  v6 = *(_QWORD *)(a1 + 56);
  do
  {
    if ( v5 )
    {
      RtlReleaseSRWLockExclusive(a1 + 64);
      v5 = 0;
    }
    v7 = (v6 + 1) ^ (v6 ^ (v6 + 1)) & 0xF000000000000000uLL;
    if ( ((v6 + 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v6 >> 60) & 8) != 0 )
    {
      v8 = (volatile signed __int32 *)(a1 + 64);
      v7 &= ~0x8000000000000000uLL;
      v5 = 1;
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          a2 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
          if ( !*a2 )
          {
            if ( a2 )
              *a2 = v8;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v8, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(
          a1 + 64,
          (unsigned __int64)a2,
          v8,
          (unsigned __int64)SchedulerSharedDataSlot);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v7, v6);
    v10 = v6 == v11;
    v6 = v11;
  }
  while ( !v10 );
  if ( v5 )
  {
    v12 = *(_QWORD **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 64);
    if ( v12 )
    {
      do
      {
        v15 = (_QWORD *)*v12;
        ZwAlertThreadByThreadId(v12[1], v13, v14, SchedulerSharedDataSlot);
        v12 = v15;
      }
      while ( v15 );
    }
  }
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(result) = *(_DWORD *)(a1 + 232);
  do
  {
    v17 = result & 1;
    v18 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 232),
                             (result + 2) & 0xFFFFFFFE,
                             result);
  }
  while ( v18 != (_DWORD)result );
  if ( !v17 )
    return result;
  _InterlockedAdd((volatile signed __int32 *)a1, 2u);
  v55 = 0LL;
  *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
  v19 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v21 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v21 = 2147353478LL;
  if ( *(_BYTE *)v21 )
  {
    v50 = *(_QWORD *)(a1 + 144);
    v51 = a1 + 200;
    v52 = *(_QWORD *)(a1 + 80);
    v53 = *(_QWORD *)(a1 + 88);
    v54 = *(_QWORD *)(a1 + 104);
    v47[0] = 0;
    v47[1] = 471859200;
    v48 = 0LL;
    v49 = 0LL;
    v22 = NtCurrentPeb()->SharedData;
    if ( v22 && *v22 )
      v19 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v19, 132098LL, 40LL, v47);
  }
  v23 = *(_QWORD *)(a1 + 144);
  v24 = *(_DWORD *)(a1 + 192);
  if ( !v23 )
    v23 = TppPoolpGlobalPool;
  if ( v23 == TppPoolpSerializedPool )
    v24 = 1;
  v25 = *(unsigned int *)(a1 + 208);
  _m_prefetchw((const void *)(v23 + 428));
  v26 = *(_DWORD *)(v23 + 428);
  do
  {
    if ( v26 == -2 )
    {
      v34 = v25;
      goto LABEL_48;
    }
    if ( v26 == (_DWORD)v25 || v26 == -1 )
      break;
    v34 = -1;
LABEL_48:
    v35 = v26;
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 428), v34, v26);
  }
  while ( v35 != v26 );
  j = v24;
  v28 = (__int64 *)(a1 + 216);
  v29 = *(_QWORD *)(v23 + 8LL * v24 + 16) + 24 * v25;
  v30 = (volatile signed __int32 *)(v29 + 16);
  v31 = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v31 )
  {
    for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
    {
      v32 = (volatile signed __int32 **)&v31[(unsigned int)j];
      if ( !*v32 )
      {
        if ( v32 )
          *v32 = v30;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v30, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v29 + 16, j, v31, (unsigned __int64)SchedulerSharedDataSlot);
  v33 = *(__int64 ***)(v29 + 8);
  if ( *v33 != (__int64 *)v29 )
    __fastfail(3u);
  *v28 = v29;
  *(_QWORD *)(a1 + 224) = v33;
  *v33 = v28;
  *(_QWORD *)(v29 + 8) = v28;
  RtlReleaseSRWLockExclusive(v29 + 16);
  if ( !v23 || (v38 = *(_DWORD *)(v23 + 440)) == 0 )
    v38 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v23 + 424) != v38 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v23 + 72), v36, v37);
    TppAdjustRunningThreadGoalWithLock(v23);
    RtlReleaseSRWLockExclusive(v23 + 72);
  }
  v39 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v41 = *ThreadPoolData;
    if ( *(_QWORD *)(v41 + 48) == v23 && *(_DWORD *)(v41 + 128) == 3 )
    {
      *(_DWORD *)(v41 + 128) = 4;
      v39 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v23 + 8));
  result = *(_QWORD *)(v23 + 8);
  LODWORD(v46) = result;
  do
  {
    HIDWORD(v46) = HIDWORD(result) + 1;
    if ( (v46 & 0xFFFF0000) != 0 || (_DWORD)v39 )
    {
      v42 = 0;
    }
    else
    {
      v42 = 1;
      LODWORD(v46) = (unsigned __int16)v46 | ((v46 & 0xFFFF0000) + 0x10000);
    }
    v43 = v46;
    v44 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 8), v46, result);
    LODWORD(v46) = result;
  }
  while ( v44 != result );
  if ( v42 )
    result = NtReleaseWorkerFactoryWorker(*(_QWORD *)(v23 + 56), v43, v39);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    v45 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
    if ( (char *)v45 == (char *)TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy((_QWORD *)a1);
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
    }
    else if ( v45 == TppAlpcpFree )
    {
      return TppAlpcpFree(a1);
    }
    else if ( v45 == TppWorkpFree )
    {
      return TppWorkpFree(a1);
    }
    else
    {
      return ((__int64 (__fastcall *)(unsigned __int64, signed __int64, __int64))v45)(a1, v43, v39);
    }
  }
  return result;
}
