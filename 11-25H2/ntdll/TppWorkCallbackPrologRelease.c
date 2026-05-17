/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x180043350
 * Callers:
 *     TppExecuteWaitCallback @ 0x180040740 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x180042330 (TppTimerpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x18007CF90 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x1800D60D0 (TppSimplepExecuteCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrAddRefDll @ 0x18003D580 (LdrAddRefDll.c)
 *     LdrUnlockLoaderLock @ 0x18003F1D0 (LdrUnlockLoaderLock.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppWorkCancelPendingCallbacks @ 0x180043B40 (TppWorkCancelPendingCallbacks.c)
 *     RtlSetThreadSubProcessTag @ 0x180043C00 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x180043D00 (TpCallbackMayRunLong.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     LdrLockLoaderLock @ 0x1800F5290 (LdrLockLoaderLock.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1801661D0 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  unsigned __int32 v6; // ecx
  signed __int32 v7; // eax
  int v8; // r13d
  int v9; // r14d
  unsigned __int32 v10; // ecx
  __int64 (__fastcall *v11)(__int64); // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rcx
  _DWORD *SharedData; // rdx
  __int64 v18; // rdx
  _DWORD *v19; // rdx
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v22; // r8
  signed __int32 v23; // eax
  __int64 *v24; // rbx
  __int64 v25; // r14
  __int64 **v26; // rax
  signed __int32 v27; // edx
  signed __int32 v28; // ett
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  __int64 (__fastcall *v31)(__int64); // rax
  int v32; // eax
  __int64 *ThreadPoolData; // rax
  __int64 v34; // rax
  signed __int64 v35; // rax
  int v36; // ecx
  signed __int64 v37; // rdx
  signed __int64 v38; // rtt
  __int64 (__fastcall *v39)(); // rax
  char v40; // bp
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rbx
  volatile signed __int32 *v43; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  volatile signed __int32 **v46; // rdx
  bool v47; // zf
  signed __int64 v48; // rax
  _QWORD *v49; // rbx
  _QWORD *v50; // rdi
  int v51; // eax
  unsigned __int64 v52; // rdx
  signed __int64 v53; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v54; // [rsp+28h] [rbp-C0h] BYREF
  int v55; // [rsp+34h] [rbp-B4h]
  __int64 v56; // [rsp+38h] [rbp-B0h]
  __int128 v57; // [rsp+40h] [rbp-A8h]
  _DWORD v58[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v59; // [rsp+58h] [rbp-90h]
  __int128 v60; // [rsp+60h] [rbp-88h]
  __int64 v61; // [rsp+70h] [rbp-78h]
  __int64 v62; // [rsp+78h] [rbp-70h]
  __int64 v63; // [rsp+80h] [rbp-68h]
  __int64 v64; // [rsp+88h] [rbp-60h]
  __int64 v65; // [rsp+90h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h]

  v3 = *(_QWORD *)(a2 + 136);
  v55 = a3;
  v56 = a1;
  v5 = a1;
  v54 = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0LL, 0LL, &v54);
  _m_prefetchw((const void *)(a2 + 232));
  v6 = *(_DWORD *)(a2 + 232);
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
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v10, v7);
  }
  while ( v7 != v6 );
  if ( !v3 )
    goto LABEL_10;
  if ( v8 )
  {
    v51 = LdrAddRefDll(0, v3);
    v52 = v54;
    if ( v51 >= 0 )
    {
      *(_DWORD *)(v5 + 144) |= 0x100u;
      *(_QWORD *)(v5 + 168) = v3;
      goto LABEL_117;
    }
    LdrUnlockLoaderLock(0, v54);
    v40 = 0;
    v57 = 0LL;
    _m_prefetchw((const void *)(a2 + 56));
    v41 = *(_QWORD *)(a2 + 56);
    do
    {
      if ( v40 )
      {
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 64));
        v40 = 0;
      }
      v42 = (v41 - 1) ^ (v41 ^ (v41 - 1)) & 0xF000000000000000uLL;
      if ( ((v41 - 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v41 >> 60) & 8) != 0 )
      {
        v43 = (volatile signed __int32 *)(a2 + 64);
        v42 &= ~0x8000000000000000uLL;
        v40 = 1;
        SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          for ( i = 0; i < 8; ++i )
          {
            v46 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
            if ( !*v46 )
            {
              if ( v46 )
                *v46 = v43;
              break;
            }
          }
        }
        if ( _interlockedbittestandset64(v43, 0LL) )
          RtlpAcquireSRWLockExclusiveContended(a2 + 64);
      }
      v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 56), v42, v41);
      v47 = v41 == v48;
      v41 = v48;
    }
    while ( !v47 );
    v5 = v56;
    v9 = 0;
    v8 = 0;
    if ( v40 )
    {
      v49 = *(_QWORD **)(a2 + 72);
      *(_QWORD *)(a2 + 72) = 0LL;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 64));
      if ( v49 )
      {
        do
        {
          v50 = (_QWORD *)*v49;
          ZwAlertThreadByThreadId(v49[1]);
          v49 = v50;
        }
        while ( v50 );
      }
    }
    TppWorkCancelPendingCallbacks(a2);
  }
  else
  {
    v52 = v54;
LABEL_117:
    LdrUnlockLoaderLock(0, v52);
  }
LABEL_10:
  v11 = TppWorkpFree;
  if ( !v9 )
    goto LABEL_11;
  _InterlockedAdd((volatile signed __int32 *)a2, 2u);
  v16 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v18 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v18 = 2147353478LL;
  if ( *(_BYTE *)v18 )
  {
    v61 = *(_QWORD *)(a2 + 144);
    v62 = a2 + 200;
    v63 = *(_QWORD *)(a2 + 80);
    v64 = *(_QWORD *)(a2 + 88);
    v65 = *(_QWORD *)(a2 + 104);
    v58[0] = 0;
    v58[1] = 471859200;
    v59 = 0LL;
    v60 = 0LL;
    v19 = NtCurrentPeb()->SharedData;
    if ( v19 && *v19 )
      v16 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v16, 132098LL, 40LL, v58);
  }
  v20 = *(_QWORD *)(a2 + 144);
  v21 = *(_DWORD *)(a2 + 192);
  if ( !v20 )
    v20 = TppPoolpGlobalPool;
  if ( v20 == TppPoolpSerializedPool )
    v21 = 1;
  v22 = *(unsigned int *)(a2 + 208);
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
  v24 = (__int64 *)(a2 + 216);
  v25 = *(_QWORD *)(v20 + 8LL * v21 + 16) + 24 * v22;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v25 + 16));
  v26 = *(__int64 ***)(v25 + 8);
  if ( *v26 != (__int64 *)v25 )
    __fastfail(3u);
  *v24 = v25;
  *(_QWORD *)(a2 + 224) = v26;
  *v26 = v24;
  *(_QWORD *)(v25 + 8) = v24;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v25 + 16));
  if ( !v20 || (v32 = *(_DWORD *)(v20 + 440)) == 0 )
    v32 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v20 + 424) != v32 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v20 + 72));
    TppAdjustRunningThreadGoalWithLock(v20);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v20 + 72));
  }
  a3 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v34 = *ThreadPoolData;
    if ( *(_QWORD *)(v34 + 48) == v20 && *(_DWORD *)(v34 + 128) == 3 )
    {
      *(_DWORD *)(v34 + 128) = 4;
      a3 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v20 + 8));
  v35 = *(_QWORD *)(v20 + 8);
  LODWORD(v53) = v35;
  do
  {
    HIDWORD(v53) = HIDWORD(v35) + 1;
    if ( (v53 & 0xFFFF0000) != 0 || (_DWORD)a3 )
    {
      v36 = 0;
    }
    else
    {
      v36 = 1;
      LODWORD(v53) = (unsigned __int16)v53 | ((v53 & 0xFFFF0000) + 0x10000);
    }
    v37 = v53;
    v38 = v35;
    v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v53, v35);
    LODWORD(v53) = v35;
  }
  while ( v38 != v35 );
  if ( v36 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(v20 + 56), v37, a3);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) != 1 )
  {
LABEL_84:
    v11 = TppWorkpFree;
    goto LABEL_11;
  }
  v39 = **(__int64 (__fastcall ***)())(a2 + 8);
  if ( v39 == TppSimplepFree )
  {
    TppCleanupGroupMemberDestroy(a2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a2);
    goto LABEL_84;
  }
  if ( (char *)v39 == (char *)TppAlpcpFree )
  {
    TppAlpcpFree(a2, v37, a3);
    v11 = TppWorkpFree;
  }
  else
  {
    if ( (char *)v39 == (char *)TppWorkpFree )
      TppWorkpFree(a2);
    else
      ((void (__fastcall *)(__int64, signed __int64, __int64))v39)(a2, v37, a3);
    v11 = TppWorkpFree;
  }
LABEL_11:
  if ( v55 )
  {
    _m_prefetchw((const void *)(a2 + 168));
    v29 = *(_DWORD *)(a2 + 168);
    do
    {
      v30 = v29;
      v29 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 168), v29 | 0x10000, v29);
    }
    while ( v30 != v29 );
    if ( (v29 & 0x30000) == 0 )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      {
        v31 = **(__int64 (__fastcall ***)(__int64))(a2 + 8);
        if ( (char *)v31 == (char *)TppSimplepFree )
        {
          TppCleanupGroupMemberDestroy(a2);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a2);
        }
        else if ( (char *)v31 == (char *)TppAlpcpFree )
        {
          TppAlpcpFree(a2, TppWorkpFree, a3);
        }
        else if ( v31 == TppWorkpFree )
        {
          TppWorkpFree(a2);
        }
        else
        {
          ((void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64)))v31)(a2, TppWorkpFree);
        }
      }
    }
  }
  if ( v8 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)v5 = 72LL;
      *(_DWORD *)(v5 + 8) = 1;
      RtlActivateActivationContextUnsafeFast(v5, *(_QWORD *)(a2 + 96));
      *(_BYTE *)(v5 + 76) |= 1u;
    }
    *(_DWORD *)(v5 + 144) |= 0x240u;
    *(_QWORD *)(v5 + 184) = a2;
    if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
      TpCallbackMayRunLong(v5);
    v12 = *(_QWORD *)(a2 + 104);
    if ( v12 )
    {
      *(_QWORD *)(v5 + 80) = v12;
      RtlSetThreadSubProcessTag(v12);
    }
    NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
    v13 = (_QWORD *)(a2 + 128);
    if ( v13 )
    {
      if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *v13 )
        goto LABEL_23;
      if ( (int)NtSetInformationThread(-2LL, 44LL, v13) >= 0 )
      {
        *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v13;
LABEL_23:
        *(_QWORD *)(v5 + 248) = *v13;
      }
    }
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
    {
      v15 = **(__int64 (__fastcall ***)(__int64))(a2 + 8);
      if ( (char *)v15 == (char *)TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy(a2);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a2);
      }
      else if ( (char *)v15 == (char *)TppAlpcpFree )
      {
        TppAlpcpFree(a2, v11, a3);
      }
      else if ( v15 == TppWorkpFree )
      {
        TppWorkpFree(a2);
      }
      else
      {
        ((void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64)))v15)(a2, v11);
      }
    }
    return 0LL;
  }
}
