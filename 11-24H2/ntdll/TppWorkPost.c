/*
 * XREFs of TppWorkPost @ 0x18006B720
 * Callers:
 *     TpSimpleTryPost @ 0x180086E30 (TpSimpleTryPost.c)
 *     TppSingleTimerExpiration @ 0x180088760 (TppSingleTimerExpiration.c)
 *     TpPostWork @ 0x1800D2170 (TpPostWork.c)
 * Callees:
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180051CB4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180160E60 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180163000 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall TppWorkPost(_RTL_SRWLOCK *BaseAddress, char **a2, __int64 a3, char *SchedulerSharedDataSlot)
{
  char v5; // bp
  unsigned __int64 Value; // rdi
  unsigned __int64 v7; // rbx
  char *v8; // r8
  unsigned int i; // ecx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  signed __int64 v14; // rax
  int v15; // edx
  int v16; // ett
  __int64 v17; // rcx
  _DWORD *SharedData; // rdx
  __int64 v19; // rdx
  _DWORD *v20; // rdx
  __int64 v21; // rdi
  int v22; // ecx
  __int64 Value_low; // r8
  signed __int32 v24; // eax
  unsigned __int64 j; // rdx
  _RTL_SRWLOCK *v26; // r14
  _RTL_SRWLOCK *v27; // rbx
  volatile signed __int32 *v28; // rbp
  char *v29; // r8
  volatile signed __int32 **v30; // rcx
  _RTL_SRWLOCK **v31; // rax
  signed __int32 v32; // edx
  signed __int32 v33; // ett
  int v34; // eax
  __int64 v35; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v37; // rax
  int v38; // ecx
  signed __int64 v39; // rdx
  signed __int64 v40; // rtt
  LOGICAL (__fastcall *v41)(void *); // rax
  signed __int64 v43; // [rsp+20h] [rbp-B8h]
  _DWORD Fields[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v45; // [rsp+48h] [rbp-90h]
  __int128 v46; // [rsp+50h] [rbp-88h]
  unsigned __int64 v47; // [rsp+60h] [rbp-78h]
  _RTL_SRWLOCK *v48; // [rsp+68h] [rbp-70h]
  unsigned __int64 v49; // [rsp+70h] [rbp-68h]
  unsigned __int64 v50; // [rsp+78h] [rbp-60h]
  unsigned __int64 v51; // [rsp+80h] [rbp-58h]
  __int128 v52; // [rsp+90h] [rbp-48h]

  v5 = 0;
  _m_prefetchw(&BaseAddress[7]);
  Value = BaseAddress[7].Value;
  do
  {
    if ( v5 )
    {
      RtlReleaseSRWLockExclusive(BaseAddress + 8);
      v5 = 0;
    }
    v7 = (Value + 1) ^ (Value ^ (Value + 1)) & 0xF000000000000000uLL;
    if ( ((Value + 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((Value >> 60) & 8) != 0 )
    {
      v8 = (char *)&BaseAddress[8];
      v7 &= ~0x8000000000000000uLL;
      v5 = 1;
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          a2 = (char **)&SchedulerSharedDataSlot[8 * i];
          if ( !*a2 )
          {
            if ( a2 )
              *a2 = v8;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(
          (unsigned __int64)&BaseAddress[8],
          (unsigned __int64)a2,
          v8,
          SchedulerSharedDataSlot);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&BaseAddress[7], v7, Value);
    v10 = Value == v11;
    Value = v11;
  }
  while ( !v10 );
  if ( v5 )
  {
    v12 = BaseAddress[9].Value;
    BaseAddress[9].Value = 0LL;
    RtlReleaseSRWLockExclusive(BaseAddress + 8);
    if ( v12 )
    {
      do
      {
        v13 = *(_QWORD *)v12;
        ZwAlertThreadByThreadId(*(HANDLE *)(v12 + 8));
        v12 = v13;
      }
      while ( v13 );
    }
  }
  _m_prefetchw(&BaseAddress[29]);
  LODWORD(v14) = BaseAddress[29].0;
  do
  {
    v15 = v14 & 1;
    v16 = v14;
    LODWORD(v14) = _InterlockedCompareExchange((volatile signed __int32 *)&BaseAddress[29], (v14 + 2) & 0xFFFFFFFE, v14);
  }
  while ( v16 != (_DWORD)v14 );
  if ( !v15 )
    return v14;
  _InterlockedAdd((volatile signed __int32 *)BaseAddress, 2u);
  v52 = 0LL;
  BaseAddress[16].0 = *($2F38BEDF952D5DA5F266621B11247D04 *)NtCurrentTeb()->WorkingOnBehalfTicket;
  v17 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v19 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v19 = 2147353478LL;
  if ( *(_BYTE *)v19 )
  {
    v47 = BaseAddress[18].Value;
    v48 = BaseAddress + 25;
    v49 = BaseAddress[10].Value;
    v50 = BaseAddress[11].Value;
    v51 = BaseAddress[13].Value;
    Fields[0] = 0;
    Fields[1] = 471859200;
    v45 = 0LL;
    v46 = 0LL;
    v20 = NtCurrentPeb()->SharedData;
    if ( v20 && *v20 )
      v17 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v17, 0x20402u, 0x28u, Fields);
  }
  v21 = BaseAddress[18].Value;
  v22 = (int)BaseAddress[24].0;
  if ( !v21 )
    v21 = TppPoolpGlobalPool;
  if ( (PVOID)v21 == TppPoolpSerializedPool )
    v22 = 1;
  Value_low = LODWORD(BaseAddress[26].Value);
  _m_prefetchw((const void *)(v21 + 428));
  v24 = *(_DWORD *)(v21 + 428);
  do
  {
    if ( v24 == -2 )
    {
      v32 = Value_low;
      goto LABEL_48;
    }
    if ( v24 == (_DWORD)Value_low || v24 == -1 )
      break;
    v32 = -1;
LABEL_48:
    v33 = v24;
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 428), v32, v24);
  }
  while ( v33 != v24 );
  j = v22;
  v26 = BaseAddress + 27;
  v27 = (_RTL_SRWLOCK *)(*(_QWORD *)(v21 + 8LL * v22 + 16) + 24 * Value_low);
  v28 = (volatile signed __int32 *)&v27[2];
  v29 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v29 )
  {
    for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
    {
      v30 = (volatile signed __int32 **)&v29[8 * (unsigned int)j];
      if ( !*v30 )
      {
        if ( v30 )
          *v30 = v28;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v28, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((unsigned __int64)&v27[2], j, v29, SchedulerSharedDataSlot);
  v31 = (_RTL_SRWLOCK **)v27[1].Value;
  if ( *v31 != v27 )
    __fastfail(3u);
  v26->Value = (unsigned __int64)v27;
  BaseAddress[28].Value = (unsigned __int64)v31;
  *v31 = v26;
  v27[1].Value = (unsigned __int64)v26;
  RtlReleaseSRWLockExclusive(v27 + 2);
  if ( !v21 || (v34 = *(_DWORD *)(v21 + 440)) == 0 )
    v34 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v21 + 424) != v34 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v21 + 72));
    TppAdjustRunningThreadGoalWithLock(v21);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v21 + 72));
  }
  v35 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v37 = *ThreadPoolData;
    if ( *(_QWORD *)(v37 + 48) == v21 && *(_DWORD *)(v37 + 128) == 3 )
    {
      *(_DWORD *)(v37 + 128) = 4;
      v35 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v21 + 8));
  v14 = *(_QWORD *)(v21 + 8);
  LODWORD(v43) = v14;
  do
  {
    HIDWORD(v43) = HIDWORD(v14) + 1;
    if ( (v43 & 0xFFFF0000) != 0 || (_DWORD)v35 )
    {
      v38 = 0;
    }
    else
    {
      v38 = 1;
      LODWORD(v43) = (unsigned __int16)v43 | ((v43 & 0xFFFF0000) + 0x10000);
    }
    v39 = v43;
    v40 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8), v43, v14);
    LODWORD(v43) = v14;
  }
  while ( v40 != v14 );
  if ( v38 )
    LODWORD(v14) = NtReleaseWorkerFactoryWorker(*(HANDLE *)(v21 + 56));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) == 1 )
  {
    v41 = *(LOGICAL (__fastcall **)(void *))BaseAddress[1].Value;
    if ( (char *)v41 == (char *)TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(BaseAddress);
      LODWORD(v14) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
    }
    else if ( (char *)v41 == (char *)TppAlpcpFree )
    {
      LODWORD(v14) = TppAlpcpFree(BaseAddress);
    }
    else if ( v41 == TppWorkpFree )
    {
      LODWORD(v14) = TppWorkpFree(BaseAddress);
    }
    else
    {
      LODWORD(v14) = ((__int64 (__fastcall *)(_RTL_SRWLOCK *, signed __int64, __int64))v41)(BaseAddress, v39, v35);
    }
  }
  return v14;
}
