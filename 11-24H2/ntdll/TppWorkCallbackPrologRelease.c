/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x18004ECC0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18004BE80 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18004D320 (TppTimerpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x18004F5B0 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180084DC0 (TppSimplepExecuteCallback.c)
 * Callees:
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     TpCallbackMayRunLong @ 0x18004EA40 (TpCallbackMayRunLong.c)
 *     RtlSetThreadSubProcessTag @ 0x18004EB60 (RtlSetThreadSubProcessTag.c)
 *     TppWorkCancelPendingCallbacks @ 0x18004F4B0 (TppWorkCancelPendingCallbacks.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180051CB4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     LdrAddRefDll @ 0x18008BAB0 (LdrAddRefDll.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18008CC80 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrLockLoaderLock @ 0x1800A0610 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x1800F22A0 (LdrUnlockLoaderLock.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180160E60 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180163000 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(PTP_CALLBACK_INSTANCE Instance, _QWORD *BaseAddress, int a3)
{
  void *v3; // rbx
  PTP_CALLBACK_INSTANCE v5; // r15
  unsigned __int32 v6; // ecx
  signed __int32 v7; // eax
  int v8; // r13d
  int v9; // r14d
  unsigned __int32 v10; // ecx
  LOGICAL (__fastcall *v11)(void *); // rdx
  void *v12; // rcx
  unsigned __int64 *v13; // rsi
  LOGICAL (__fastcall *v15)(void *); // rax
  __int64 v16; // rcx
  _DWORD *SharedData; // rdx
  __int64 v18; // rdx
  _DWORD *v19; // rdx
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v22; // r8
  signed __int32 v23; // eax
  _RTL_SRWLOCK **v24; // rbx
  _RTL_SRWLOCK *v25; // r14
  _RTL_SRWLOCK **Value; // rax
  signed __int32 v27; // edx
  signed __int32 v28; // ett
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  LOGICAL (__fastcall *v31)(void *); // rax
  int v32; // eax
  __int64 v33; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v35; // rax
  signed __int64 v36; // rax
  int v37; // ecx
  signed __int64 v38; // rdx
  signed __int64 v39; // rtt
  __int64 (__fastcall *v40)(); // rax
  char v41; // bp
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  volatile signed __int32 *v44; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  volatile signed __int32 **v47; // rdx
  bool v48; // zf
  signed __int64 v49; // rax
  __int64 **v50; // rbx
  __int64 *v51; // rdi
  NTSTATUS v52; // eax
  PVOID v53; // rdx
  signed __int64 v54; // [rsp+20h] [rbp-C8h]
  PVOID Cookie; // [rsp+28h] [rbp-C0h] BYREF
  int v56; // [rsp+34h] [rbp-B4h]
  PTP_CALLBACK_INSTANCE v57; // [rsp+38h] [rbp-B0h]
  __int128 v58; // [rsp+40h] [rbp-A8h]
  _DWORD Fields[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v60; // [rsp+58h] [rbp-90h]
  __int128 v61; // [rsp+60h] [rbp-88h]
  __int64 v62; // [rsp+70h] [rbp-78h]
  char *v63; // [rsp+78h] [rbp-70h]
  __int64 v64; // [rsp+80h] [rbp-68h]
  __int64 v65; // [rsp+88h] [rbp-60h]
  __int64 v66; // [rsp+90h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h]

  v3 = (void *)BaseAddress[17];
  v56 = a3;
  v57 = Instance;
  v5 = Instance;
  Cookie = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0, 0LL, &Cookie);
  _m_prefetchw(BaseAddress + 29);
  v6 = *((_DWORD *)BaseAddress + 58);
  do
  {
    v7 = v6;
    if ( v6 >> 1 )
    {
      v8 = 1;
      v9 = 1;
      v10 = v6 & 1 | (2 * (v6 >> 1) - 2);
      if ( v10 >= 2 )
        goto LABEL_8;
      v10 |= 1u;
    }
    else
    {
      v8 = 0;
      v10 = v6 | 1;
    }
    v9 = 0;
LABEL_8:
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)BaseAddress + 58, v10, v7);
  }
  while ( v7 != v6 );
  if ( !v3 )
    goto LABEL_10;
  if ( v8 )
  {
    v52 = LdrAddRefDll(0, v3);
    v53 = Cookie;
    if ( v52 >= 0 )
    {
      v5->CallbackEpilogFlags |= 0x100u;
      v5->RaceDll = v3;
      goto LABEL_117;
    }
    LdrUnlockLoaderLock(0, Cookie);
    v41 = 0;
    v58 = 0LL;
    _m_prefetchw(BaseAddress + 7);
    v42 = BaseAddress[7];
    do
    {
      if ( v41 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
        v41 = 0;
      }
      v43 = (v42 - 1) ^ (v42 ^ (v42 - 1)) & 0xF000000000000000uLL;
      if ( ((v42 - 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v42 >> 60) & 8) != 0 )
      {
        v44 = (volatile signed __int32 *)(BaseAddress + 8);
        v43 &= ~0x8000000000000000uLL;
        v41 = 1;
        SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          for ( i = 0; i < 8; ++i )
          {
            v47 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
            if ( !*v47 )
            {
              if ( v47 )
                *v47 = v44;
              break;
            }
          }
        }
        if ( _interlockedbittestandset64(v44, 0LL) )
          RtlpAcquireSRWLockExclusiveContended(BaseAddress + 8);
      }
      v49 = _InterlockedCompareExchange64(BaseAddress + 7, v43, v42);
      v48 = v42 == v49;
      v42 = v49;
    }
    while ( !v48 );
    v5 = v57;
    v9 = 0;
    v8 = 0;
    if ( v41 )
    {
      v50 = (__int64 **)BaseAddress[9];
      BaseAddress[9] = 0LL;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
      if ( v50 )
      {
        do
        {
          v51 = *v50;
          ZwAlertThreadByThreadId(v50[1]);
          v50 = (__int64 **)v51;
        }
        while ( v51 );
      }
    }
    TppWorkCancelPendingCallbacks(BaseAddress);
  }
  else
  {
    v53 = Cookie;
LABEL_117:
    LdrUnlockLoaderLock(0, v53);
  }
LABEL_10:
  v11 = TppWorkpFree;
  if ( !v9 )
    goto LABEL_11;
  _InterlockedAdd((volatile signed __int32 *)BaseAddress, 2u);
  v16 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v18 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v18 = 2147353478LL;
  if ( *(_BYTE *)v18 )
  {
    v62 = BaseAddress[18];
    v63 = (char *)(BaseAddress + 25);
    v64 = BaseAddress[10];
    v65 = BaseAddress[11];
    v66 = BaseAddress[13];
    Fields[0] = 0;
    Fields[1] = 471859200;
    v60 = 0LL;
    v61 = 0LL;
    v19 = NtCurrentPeb()->SharedData;
    if ( v19 && *v19 )
      v16 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v16, 0x20402u, 0x28u, Fields);
  }
  v20 = BaseAddress[18];
  v21 = *((_DWORD *)BaseAddress + 48);
  if ( !v20 )
    v20 = TppPoolpGlobalPool;
  if ( (PVOID)v20 == TppPoolpSerializedPool )
    v21 = 1;
  v22 = *((unsigned int *)BaseAddress + 52);
  _m_prefetchw((const void *)(v20 + 428));
  v23 = *(_DWORD *)(v20 + 428);
  while ( 2 )
  {
    if ( v23 == -2 )
    {
      v27 = v22;
LABEL_50:
      v28 = v23;
      v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 428), v27, v23);
      if ( v28 == v23 )
        goto LABEL_44;
      continue;
    }
    break;
  }
  if ( v23 != (_DWORD)v22 && v23 != -1 )
  {
    v27 = -1;
    goto LABEL_50;
  }
LABEL_44:
  v24 = (_RTL_SRWLOCK **)(BaseAddress + 27);
  v25 = (_RTL_SRWLOCK *)(*(_QWORD *)(v20 + 8LL * v21 + 16) + 24 * v22);
  RtlAcquireSRWLockExclusive(v25 + 2);
  Value = (_RTL_SRWLOCK **)v25[1].Value;
  if ( *Value != v25 )
    __fastfail(3u);
  *v24 = v25;
  BaseAddress[28] = Value;
  *Value = (_RTL_SRWLOCK *)v24;
  v25[1].Value = (unsigned __int64)v24;
  RtlReleaseSRWLockExclusive(v25 + 2);
  if ( !v20 || (v32 = *(_DWORD *)(v20 + 440)) == 0 )
    v32 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v20 + 424) != v32 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v20 + 72));
    TppAdjustRunningThreadGoalWithLock(v20);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v20 + 72));
  }
  v33 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v35 = *ThreadPoolData;
    if ( *(_QWORD *)(v35 + 48) == v20 && *(_DWORD *)(v35 + 128) == 3 )
    {
      *(_DWORD *)(v35 + 128) = 4;
      v33 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v20 + 8));
  v36 = *(_QWORD *)(v20 + 8);
  LODWORD(v54) = v36;
  do
  {
    HIDWORD(v54) = HIDWORD(v36) + 1;
    if ( (v54 & 0xFFFF0000) != 0 || (_DWORD)v33 )
    {
      v37 = 0;
    }
    else
    {
      v37 = 1;
      LODWORD(v54) = (unsigned __int16)v54 | ((v54 & 0xFFFF0000) + 0x10000);
    }
    v38 = v54;
    v39 = v36;
    v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v54, v36);
    LODWORD(v54) = v36;
  }
  while ( v39 != v36 );
  if ( v37 )
    NtReleaseWorkerFactoryWorker(*(HANDLE *)(v20 + 56));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) != 1 )
  {
LABEL_84:
    v11 = TppWorkpFree;
    goto LABEL_11;
  }
  v40 = *(__int64 (__fastcall **)())BaseAddress[1];
  if ( v40 == TppSimplepFree )
  {
    TppCleanupGroupMemberDestroy(BaseAddress);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
    goto LABEL_84;
  }
  if ( (char *)v40 == (char *)TppAlpcpFree )
  {
    TppAlpcpFree(BaseAddress);
    v11 = TppWorkpFree;
  }
  else
  {
    if ( (char *)v40 == (char *)TppWorkpFree )
      TppWorkpFree(BaseAddress);
    else
      ((void (__fastcall *)(_QWORD *, signed __int64, __int64))v40)(BaseAddress, v38, v33);
    v11 = TppWorkpFree;
  }
LABEL_11:
  if ( v56 )
  {
    _m_prefetchw(BaseAddress + 21);
    v29 = *((_DWORD *)BaseAddress + 42);
    do
    {
      v30 = v29;
      v29 = _InterlockedCompareExchange((volatile signed __int32 *)BaseAddress + 42, v29 | 0x10000, v29);
    }
    while ( v30 != v29 );
    if ( (v29 & 0x30000) == 0 )
    {
      BaseAddress[23] = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) == 1 )
      {
        v31 = *(LOGICAL (__fastcall **)(void *))BaseAddress[1];
        if ( (char *)v31 == (char *)TppSimplepFree )
        {
          TppCleanupGroupMemberDestroy(BaseAddress);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
        }
        else if ( (char *)v31 == (char *)TppAlpcpFree )
        {
          TppAlpcpFree(BaseAddress);
        }
        else if ( v31 == TppWorkpFree )
        {
          TppWorkpFree(BaseAddress);
        }
        else
        {
          ((void (__fastcall *)(_QWORD *, LOGICAL (__fastcall *)(void *)))v31)(BaseAddress, TppWorkpFree);
        }
      }
    }
  }
  if ( v8 )
  {
    if ( (unsigned __int64)(BaseAddress[12] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v5->ActivationFrame.Size = 72LL;
      v5->ActivationFrame.Format = 1;
      RtlActivateActivationContextUnsafeFast(v5, BaseAddress[12]);
      *((_BYTE *)v5 + 76) |= 1u;
    }
    v5->CallbackEpilogFlags |= 0x240u;
    v5->CleanupGroupMember = (_TPP_CLEANUP_GROUP_MEMBER *)BaseAddress;
    if ( (BaseAddress[21] & 3) == 1 )
      TpCallbackMayRunLong(v5);
    v12 = (void *)BaseAddress[13];
    if ( v12 )
    {
      v5->SubProcessTag = v12;
      RtlSetThreadSubProcessTag(v12);
    }
    NtCurrentTeb()->ActivityId = (_GUID)*((_OWORD *)BaseAddress + 7);
    v13 = BaseAddress + 16;
    if ( v13 )
    {
      if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *v13 )
        goto LABEL_23;
      if ( NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v13, 8u) >= 0 )
      {
        *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v13;
LABEL_23:
        v5->WorkOnBehalf = *v13;
      }
    }
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) == 1 )
    {
      v15 = *(LOGICAL (__fastcall **)(void *))BaseAddress[1];
      if ( (char *)v15 == (char *)TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy(BaseAddress);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
      }
      else if ( (char *)v15 == (char *)TppAlpcpFree )
      {
        TppAlpcpFree(BaseAddress);
      }
      else if ( v15 == TppWorkpFree )
      {
        TppWorkpFree(BaseAddress);
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, LOGICAL (__fastcall *)(void *)))v15)(BaseAddress, v11);
      }
    }
    return 0LL;
  }
}
