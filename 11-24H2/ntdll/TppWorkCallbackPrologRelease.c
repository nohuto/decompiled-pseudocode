/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x1800222C0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001F480 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x180020920 (TppTimerpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180022BB0 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180069230 (TppSimplepExecuteCallback.c)
 * Callees:
 *     LdrUnlockLoaderLock @ 0x180003D60 (LdrUnlockLoaderLock.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TpCallbackMayRunLong @ 0x180022040 (TpCallbackMayRunLong.c)
 *     RtlSetThreadSubProcessTag @ 0x180022160 (RtlSetThreadSubProcessTag.c)
 *     TppWorkCancelPendingCallbacks @ 0x180022AB0 (TppWorkCancelPendingCallbacks.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     LdrAddRefDll @ 0x18006F1D0 (LdrAddRefDll.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800703A0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrLockLoaderLock @ 0x1800F3720 (LdrLockLoaderLock.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180164C40 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r15
  unsigned __int32 v7; // ecx
  signed __int32 v8; // eax
  int v9; // r13d
  int v10; // r14d
  unsigned __int32 v11; // ecx
  __int64 (__fastcall *v12)(__int64); // rdx
  void *v13; // rcx
  _QWORD *v14; // rsi
  __int64 (__fastcall *v16)(__int64); // rax
  __int64 v17; // rcx
  _DWORD *SharedData; // rdx
  __int64 v19; // rdx
  _DWORD *v20; // rdx
  __int64 v21; // rdi
  int v22; // ecx
  __int64 v23; // r8
  signed __int32 v24; // eax
  __int64 *v25; // rbx
  __int64 v26; // r14
  __int64 **v27; // rax
  signed __int32 v28; // edx
  signed __int32 v29; // ett
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  __int64 (__fastcall *v32)(__int64); // rax
  int v33; // eax
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
  _QWORD *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rdi
  int v55; // eax
  unsigned __int64 v56; // rdx
  signed __int64 v57; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v58; // [rsp+28h] [rbp-C0h] BYREF
  int v59; // [rsp+34h] [rbp-B4h]
  __int64 v60; // [rsp+38h] [rbp-B0h]
  __int128 v61; // [rsp+40h] [rbp-A8h]
  _DWORD v62[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v63; // [rsp+58h] [rbp-90h]
  __int128 v64; // [rsp+60h] [rbp-88h]
  __int64 v65; // [rsp+70h] [rbp-78h]
  __int64 v66; // [rsp+78h] [rbp-70h]
  __int64 v67; // [rsp+80h] [rbp-68h]
  __int64 v68; // [rsp+88h] [rbp-60h]
  __int64 v69; // [rsp+90h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = *(_QWORD *)(a2 + 136);
  v59 = a3;
  v60 = a1;
  v6 = a1;
  v58 = 0LL;
  if ( v4 )
    LdrLockLoaderLock(0LL, 0LL, &v58);
  _m_prefetchw((const void *)(a2 + 232));
  v7 = *(_DWORD *)(a2 + 232);
  do
  {
    v8 = v7;
    if ( v7 >> 1 )
    {
      v9 = 1;
      v10 = 1;
      v11 = v7 & 1 | (2 * (v7 >> 1) - 2);
      if ( v11 >= 2 )
        goto LABEL_8;
      v11 |= 1u;
    }
    else
    {
      v9 = 0;
      v11 = v7 | 1;
    }
    v10 = 0;
LABEL_8:
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v11, v8);
  }
  while ( v8 != v7 );
  if ( !v4 )
    goto LABEL_10;
  if ( v9 )
  {
    v55 = LdrAddRefDll(0LL, v4);
    v56 = v58;
    if ( v55 >= 0 )
    {
      *(_DWORD *)(v6 + 144) |= 0x100u;
      *(_QWORD *)(v6 + 168) = v4;
      goto LABEL_117;
    }
    LdrUnlockLoaderLock(0, v58);
    v41 = 0;
    v61 = 0LL;
    _m_prefetchw((const void *)(a2 + 56));
    v42 = *(_QWORD *)(a2 + 56);
    do
    {
      if ( v41 )
      {
        RtlReleaseSRWLockExclusive(a2 + 64);
        v41 = 0;
      }
      v43 = (v42 - 1) ^ (v42 ^ (v42 - 1)) & 0xF000000000000000uLL;
      if ( ((v42 - 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v42 >> 60) & 8) != 0 )
      {
        v44 = (volatile signed __int32 *)(a2 + 64);
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
          RtlpAcquireSRWLockExclusiveContended(a2 + 64);
      }
      v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 56), v43, v42);
      v48 = v42 == v49;
      v42 = v49;
    }
    while ( !v48 );
    v6 = v60;
    v10 = 0;
    v9 = 0;
    if ( v41 )
    {
      v50 = *(_QWORD **)(a2 + 72);
      *(_QWORD *)(a2 + 72) = 0LL;
      RtlReleaseSRWLockExclusive(a2 + 64);
      if ( v50 )
      {
        do
        {
          v54 = (_QWORD *)*v50;
          ZwAlertThreadByThreadId(v50[1], v51, v52, v53);
          v50 = v54;
        }
        while ( v54 );
      }
    }
    TppWorkCancelPendingCallbacks(a2);
  }
  else
  {
    v56 = v58;
LABEL_117:
    LdrUnlockLoaderLock(0, v56);
  }
LABEL_10:
  v12 = TppWorkpFree;
  if ( !v10 )
    goto LABEL_11;
  _InterlockedAdd((volatile signed __int32 *)a2, 2u);
  v17 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v19 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v19 = 2147353478LL;
  if ( *(_BYTE *)v19 )
  {
    v65 = *(_QWORD *)(a2 + 144);
    v66 = a2 + 200;
    v67 = *(_QWORD *)(a2 + 80);
    v68 = *(_QWORD *)(a2 + 88);
    v69 = *(_QWORD *)(a2 + 104);
    v62[0] = 0;
    v62[1] = 471859200;
    v63 = 0LL;
    v64 = 0LL;
    v20 = NtCurrentPeb()->SharedData;
    if ( v20 && *v20 )
      v17 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v17, 132098LL, 40LL, v62);
  }
  v21 = *(_QWORD *)(a2 + 144);
  v22 = *(_DWORD *)(a2 + 192);
  if ( !v21 )
    v21 = TppPoolpGlobalPool;
  if ( v21 == TppPoolpSerializedPool )
    v22 = 1;
  v23 = *(unsigned int *)(a2 + 208);
  _m_prefetchw((const void *)(v21 + 428));
  v24 = *(_DWORD *)(v21 + 428);
  while ( 2 )
  {
    if ( v24 == -2 )
    {
      v28 = v23;
LABEL_50:
      v29 = v24;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 428), v28, v24);
      if ( v29 == v24 )
        goto LABEL_44;
      continue;
    }
    break;
  }
  if ( v24 != (_DWORD)v23 && v24 != -1 )
  {
    v28 = -1;
    goto LABEL_50;
  }
LABEL_44:
  v25 = (__int64 *)(a2 + 216);
  v26 = *(_QWORD *)(v21 + 8LL * v22 + 16) + 24 * v23;
  RtlAcquireSRWLockExclusive(v26 + 16);
  v27 = *(__int64 ***)(v26 + 8);
  if ( *v27 != (__int64 *)v26 )
    __fastfail(3u);
  *v25 = v26;
  *(_QWORD *)(a2 + 224) = v27;
  *v27 = v25;
  *(_QWORD *)(v26 + 8) = v25;
  RtlReleaseSRWLockExclusive(v26 + 16);
  if ( !v21 || (v33 = *(_DWORD *)(v21 + 440)) == 0 )
    v33 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v21 + 424) != v33 )
  {
    RtlAcquireSRWLockExclusive(v21 + 72);
    TppAdjustRunningThreadGoalWithLock(v21);
    RtlReleaseSRWLockExclusive(v21 + 72);
  }
  a3 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v35 = *ThreadPoolData;
    if ( *(_QWORD *)(v35 + 48) == v21 && *(_DWORD *)(v35 + 128) == 3 )
    {
      *(_DWORD *)(v35 + 128) = 4;
      a3 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v21 + 8));
  v36 = *(_QWORD *)(v21 + 8);
  LODWORD(v57) = v36;
  do
  {
    HIDWORD(v57) = HIDWORD(v36) + 1;
    if ( (v57 & 0xFFFF0000) != 0 || (_DWORD)a3 )
    {
      v37 = 0;
    }
    else
    {
      v37 = 1;
      LODWORD(v57) = (unsigned __int16)v57 | ((v57 & 0xFFFF0000) + 0x10000);
    }
    v38 = v57;
    v39 = v36;
    v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8), v57, v36);
    LODWORD(v57) = v36;
  }
  while ( v39 != v36 );
  if ( v37 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(v21 + 56), v38, a3);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) != 1 )
  {
LABEL_84:
    v12 = TppWorkpFree;
    goto LABEL_11;
  }
  v40 = **(__int64 (__fastcall ***)())(a2 + 8);
  if ( v40 == TppSimplepFree )
  {
    TppCleanupGroupMemberDestroy((_QWORD *)a2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a2);
    goto LABEL_84;
  }
  if ( (char *)v40 == (char *)TppAlpcpFree )
  {
    TppAlpcpFree(a2);
    v12 = TppWorkpFree;
  }
  else
  {
    if ( (char *)v40 == (char *)TppWorkpFree )
      TppWorkpFree(a2);
    else
      ((void (__fastcall *)(__int64, signed __int64, __int64))v40)(a2, v38, a3);
    v12 = TppWorkpFree;
  }
LABEL_11:
  if ( v59 )
  {
    _m_prefetchw((const void *)(a2 + 168));
    v30 = *(_DWORD *)(a2 + 168);
    do
    {
      v31 = v30;
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 168), v30 | 0x10000, v30);
    }
    while ( v31 != v30 );
    if ( (v30 & 0x30000) == 0 )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      {
        v32 = **(__int64 (__fastcall ***)(__int64))(a2 + 8);
        if ( (char *)v32 == (char *)TppSimplepFree )
        {
          TppCleanupGroupMemberDestroy((_QWORD *)a2);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a2);
        }
        else if ( v32 == TppAlpcpFree )
        {
          TppAlpcpFree(a2);
        }
        else if ( v32 == TppWorkpFree )
        {
          TppWorkpFree(a2);
        }
        else
        {
          ((void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64)))v32)(a2, TppWorkpFree);
        }
      }
    }
  }
  if ( v9 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)v6 = 72LL;
      *(_DWORD *)(v6 + 8) = 1;
      RtlActivateActivationContextUnsafeFast(v6, *(_QWORD *)(a2 + 96));
      *(_BYTE *)(v6 + 76) |= 1u;
    }
    *(_DWORD *)(v6 + 144) |= 0x240u;
    *(_QWORD *)(v6 + 184) = a2;
    if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
      TpCallbackMayRunLong(v6);
    v13 = *(void **)(a2 + 104);
    if ( v13 )
    {
      *(_QWORD *)(v6 + 80) = v13;
      RtlSetThreadSubProcessTag(v13, (__int64)v12, a3, a4);
    }
    NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
    v14 = (_QWORD *)(a2 + 128);
    if ( v14 )
    {
      if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *v14 )
        goto LABEL_23;
      if ( (int)NtSetInformationThread(-2LL, 44LL, v14) >= 0 )
      {
        *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v14;
LABEL_23:
        *(_QWORD *)(v6 + 248) = *v14;
      }
    }
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
    {
      v16 = **(__int64 (__fastcall ***)(__int64))(a2 + 8);
      if ( (char *)v16 == (char *)TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy((_QWORD *)a2);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a2);
      }
      else if ( v16 == TppAlpcpFree )
      {
        TppAlpcpFree(a2);
      }
      else if ( v16 == TppWorkpFree )
      {
        TppWorkpFree(a2);
      }
      else
      {
        ((void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64)))v16)(a2, v12);
      }
    }
    return 0LL;
  }
}
