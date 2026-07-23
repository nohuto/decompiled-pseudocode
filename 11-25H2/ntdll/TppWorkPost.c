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

int __fastcall TppWorkPost(_RTL_SRWLOCK *BaseAddress)
{
  char v2; // bp
  unsigned __int64 Value; // rdi
  unsigned __int64 v4; // rbx
  volatile signed __int32 *v5; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  volatile signed __int32 **v8; // rdx
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rax
  int v14; // edx
  int v15; // ett
  __int64 v16; // rcx
  _DWORD *SharedData; // rdx
  __int64 v18; // rdx
  _DWORD *v19; // rdx
  __int64 v20; // rdi
  int v21; // ecx
  __int64 Value_low; // r8
  signed __int32 v23; // eax
  _RTL_SRWLOCK *v24; // r14
  _RTL_SRWLOCK *v25; // rbx
  volatile signed __int32 *v26; // rbp
  char *v27; // r8
  unsigned int j; // edx
  volatile signed __int32 **v29; // rcx
  _RTL_SRWLOCK **v30; // rax
  signed __int32 v31; // edx
  signed __int32 v32; // ett
  int v33; // eax
  __int64 v34; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v36; // rax
  int v37; // ecx
  signed __int64 v38; // rdx
  signed __int64 v39; // rtt
  __int64 (__fastcall *v40)(); // rax
  signed __int64 v42; // [rsp+20h] [rbp-B8h]
  _DWORD Fields[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v44; // [rsp+48h] [rbp-90h]
  __int128 v45; // [rsp+50h] [rbp-88h]
  unsigned __int64 v46; // [rsp+60h] [rbp-78h]
  _RTL_SRWLOCK *v47; // [rsp+68h] [rbp-70h]
  unsigned __int64 v48; // [rsp+70h] [rbp-68h]
  unsigned __int64 v49; // [rsp+78h] [rbp-60h]
  unsigned __int64 v50; // [rsp+80h] [rbp-58h]
  __int128 v51; // [rsp+90h] [rbp-48h]

  v2 = 0;
  _m_prefetchw(&BaseAddress[7]);
  Value = BaseAddress[7].Value;
  do
  {
    if ( v2 )
    {
      RtlReleaseSRWLockExclusive(BaseAddress + 8);
      v2 = 0;
    }
    v4 = (Value + 1) ^ (Value ^ (Value + 1)) & 0xF000000000000000uLL;
    if ( ((Value + 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((Value >> 60) & 8) != 0 )
    {
      v5 = (volatile signed __int32 *)&BaseAddress[8];
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
        RtlpAcquireSRWLockExclusiveContended(&BaseAddress[8]);
    }
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)&BaseAddress[7], v4, Value);
    v9 = Value == v10;
    Value = v10;
  }
  while ( !v9 );
  if ( v2 )
  {
    v11 = BaseAddress[9].Value;
    BaseAddress[9].Value = 0LL;
    RtlReleaseSRWLockExclusive(BaseAddress + 8);
    if ( v11 )
    {
      do
      {
        v12 = *(_QWORD *)v11;
        ZwAlertThreadByThreadId(*(HANDLE *)(v11 + 8));
        v11 = v12;
      }
      while ( v12 );
    }
  }
  _m_prefetchw(&BaseAddress[29]);
  LODWORD(v13) = BaseAddress[29].0;
  do
  {
    v14 = v13 & 1;
    v15 = v13;
    LODWORD(v13) = _InterlockedCompareExchange((volatile signed __int32 *)&BaseAddress[29], (v13 + 2) & 0xFFFFFFFE, v13);
  }
  while ( v15 != (_DWORD)v13 );
  if ( !v14 )
    return v13;
  _InterlockedAdd((volatile signed __int32 *)BaseAddress, 2u);
  v51 = 0LL;
  BaseAddress[16].0 = *($2F38BEDF952D5DA5F266621B11247D04 *)NtCurrentTeb()->WorkingOnBehalfTicket;
  v16 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v18 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v18 = 2147353478LL;
  if ( *(_BYTE *)v18 )
  {
    v46 = BaseAddress[18].Value;
    v47 = BaseAddress + 25;
    v48 = BaseAddress[10].Value;
    v49 = BaseAddress[11].Value;
    v50 = BaseAddress[13].Value;
    Fields[0] = 0;
    Fields[1] = 471859200;
    v44 = 0LL;
    v45 = 0LL;
    v19 = NtCurrentPeb()->SharedData;
    if ( v19 && *v19 )
      v16 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v16, 0x20402u, 0x28u, Fields);
  }
  v20 = BaseAddress[18].Value;
  v21 = (int)BaseAddress[24].0;
  if ( !v20 )
    v20 = TppPoolpGlobalPool;
  if ( (PVOID)v20 == TppPoolpSerializedPool )
    v21 = 1;
  Value_low = LODWORD(BaseAddress[26].Value);
  _m_prefetchw((const void *)(v20 + 428));
  v23 = *(_DWORD *)(v20 + 428);
  do
  {
    if ( v23 == -2 )
    {
      v31 = Value_low;
      goto LABEL_48;
    }
    if ( v23 == (_DWORD)Value_low || v23 == -1 )
      break;
    v31 = -1;
LABEL_48:
    v32 = v23;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 428), v31, v23);
  }
  while ( v32 != v23 );
  v24 = BaseAddress + 27;
  v25 = (_RTL_SRWLOCK *)(*(_QWORD *)(v20 + 8LL * v21 + 16) + 24 * Value_low);
  v26 = (volatile signed __int32 *)&v25[2];
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
    RtlpAcquireSRWLockExclusiveContended(&v25[2]);
  v30 = (_RTL_SRWLOCK **)v25[1].Value;
  if ( *v30 != v25 )
    __fastfail(3u);
  v24->Value = (unsigned __int64)v25;
  BaseAddress[28].Value = (unsigned __int64)v30;
  *v30 = v24;
  v25[1].Value = (unsigned __int64)v24;
  RtlReleaseSRWLockExclusive(v25 + 2);
  if ( !v20 || (v33 = *(_DWORD *)(v20 + 440)) == 0 )
    v33 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v20 + 424) != v33 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v20 + 72));
    TppAdjustRunningThreadGoalWithLock(v20);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v20 + 72));
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
  v13 = *(_QWORD *)(v20 + 8);
  LODWORD(v42) = v13;
  do
  {
    HIDWORD(v42) = HIDWORD(v13) + 1;
    if ( (v42 & 0xFFFF0000) != 0 || (_DWORD)v34 )
    {
      v37 = 0;
    }
    else
    {
      v37 = 1;
      LODWORD(v42) = (unsigned __int16)v42 | ((v42 & 0xFFFF0000) + 0x10000);
    }
    v38 = v42;
    v39 = v13;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v42, v13);
    LODWORD(v42) = v13;
  }
  while ( v39 != v13 );
  if ( v37 )
    LODWORD(v13) = NtReleaseWorkerFactoryWorker(*(HANDLE *)(v20 + 56));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) == 1 )
  {
    v40 = *(__int64 (__fastcall **)())BaseAddress[1].Value;
    if ( v40 == TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(BaseAddress);
      LODWORD(v13) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
    }
    else if ( (char *)v40 == (char *)TppAlpcpFree )
    {
      LODWORD(v13) = TppAlpcpFree(BaseAddress, v38, v34);
    }
    else if ( (char *)v40 == (char *)TppWorkpFree )
    {
      LODWORD(v13) = TppWorkpFree(BaseAddress, v38, v34);
    }
    else
    {
      LODWORD(v13) = ((__int64 (__fastcall *)(_RTL_SRWLOCK *, signed __int64, __int64))v40)(BaseAddress, v38, v34);
    }
  }
  return v13;
}
