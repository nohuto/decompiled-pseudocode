/*
 * XREFs of CmpDeleteKeyObject @ 0x14084B6B0
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     CmpWaitForLateUnloadWorker @ 0x14036D430 (CmpWaitForLateUnloadWorker.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x140848B50 (CmpReferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmUnlockHive @ 0x14084AA3C (CmUnlockHive.c)
 *     CmLockHive @ 0x14084AA78 (CmLockHive.c)
 *     CmpFireCleanupNotifications @ 0x14084AAD0 (CmpFireCleanupNotifications.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     CmpFreePostBlock @ 0x14086CC80 (CmpFreePostBlock.c)
 *     CmpPostNotify @ 0x140870084 (CmpPostNotify.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // r12
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID ***v5; // rdi
  struct _KTHREAD *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // r14
  PVOID **v9; // rax
  signed __int64 v10; // rdx
  ULONG_PTR v11; // rtt
  PVOID v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // r14
  __int64 *v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // rsi
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rcx
  char *v22; // rdi
  char v23; // r9
  unsigned int i; // r8d
  signed __int64 v25; // rax
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  struct _PRIVILEGE_SET *v28; // rdi
  ULONG_PTR *p_Attributes; // r15
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v33; // rax
  PVOID **v34; // rcx
  PVOID *v35; // r8
  PVOID ***v36; // rdx
  PVOID *v37; // rcx
  __int64 v38; // rcx
  PVOID **v39; // rdi
  __int64 v40; // r9
  struct _KEVENT *v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // r13
  __int64 *v44; // rax
  __int64 *v45; // rsi
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  struct _WORK_QUEUE_ITEM *v48; // rcx
  signed __int32 v49[8]; // [rsp+0h] [rbp-B9h] BYREF
  PVOID P; // [rsp+40h] [rbp-79h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-71h]
  __int128 v52; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v53[2]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v54; // [rsp+70h] [rbp-49h] BYREF
  __int128 v55; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v56[3]; // [rsp+90h] [rbp-29h] BYREF
  int v57; // [rsp+A8h] [rbp-11h]
  __int128 v58; // [rsp+ACh] [rbp-Dh]
  __int64 v59; // [rsp+BCh] [rbp+3h]
  int v60; // [rsp+C4h] [rbp+Bh]
  _OWORD v61[4]; // [rsp+C8h] [rbp+Fh] BYREF
  char v62; // [rsp+120h] [rbp+67h]

  v2 = 0;
  v54 = 0LL;
  v3 = 0LL;
  v62 = 0;
  v52 = 0LL;
  memset(v61, 0, 32);
  v55 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v54);
  v53[1] = v53;
  v53[0] = v53;
  CmpInitializeDelayDerefContext(&v55);
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    return CmCleanupThreadInfo((_KAFFINITY_EX **)&v54);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v61[0] = a1;
      CmpCallCallBacksEx(14, (unsigned int)v61, 0, 1, 25, a1, (__int64)v53);
      if ( *(_DWORD *)a1 == 1803104306 )
      {
        v5 = (PVOID ***)(a1 + 72);
        if ( *v5 != (PVOID **)v5 )
        {
          CmpFireCleanupNotifications(a1);
          p_P = &P;
          P = &P;
          v6 = KeGetCurrentThread();
          --v6->KernelApcDisable;
          v7 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
          v8 = v7;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
            ExfAcquirePushLockExclusiveEx(&CmpContextListLock, v7, (__int64)&CmpContextListLock);
          if ( v8 )
            *((_BYTE *)v8 + 10) = 1;
          while ( 1 )
          {
            v9 = *v5;
            if ( *v5 == (PVOID **)v5 )
              break;
            if ( v9[1] != (PVOID *)v5 )
              goto LABEL_80;
            v34 = (PVOID **)*v9;
            if ( (*v9)[1] != v9 )
              goto LABEL_80;
            *v5 = v34;
            v34[1] = (PVOID *)v5;
            v35 = v9[2];
            if ( v35[1] != v9 + 2 )
              goto LABEL_80;
            v36 = (PVOID ***)v9[3];
            if ( *v36 != v9 + 2 )
              goto LABEL_80;
            *v36 = (PVOID **)v35;
            v35[1] = v36;
            v37 = p_P;
            if ( v36 == (PVOID ***)v35 )
              v2 = 1;
            if ( *p_P != &P )
              goto LABEL_80;
            v9[1] = p_P;
            *v9 = &P;
            *v37 = v9;
            p_P = (PVOID *)v9;
          }
          _m_prefetchw(&CmpContextListLock);
          v10 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v10 = 0LL;
          if ( (CmpContextListLock & 2) != 0
            || (v11 = CmpContextListLock,
                v11 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v10,
                         CmpContextListLock)) )
          {
            ExfReleasePushLock(&CmpContextListLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v2 )
          {
            _InterlockedOr(v49, 0);
            if ( CallbackListDeleteEvent )
              ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
          }
          while ( 1 )
          {
            v12 = P;
            if ( P == &P )
              break;
            if ( *((PVOID **)P + 1) != &P )
              goto LABEL_80;
            v33 = *(_QWORD *)P;
            if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
              goto LABEL_80;
            P = *(PVOID *)P;
            *(_QWORD *)(v33 + 8) = &P;
            ExFreePoolWithTag(v12, 0x63634D43u);
          }
          v2 = 0;
        }
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
    ObfDereferenceObject((PVOID)(v13 & 0xFFFFFFFFFFFFFFFEuLL));
  *((_QWORD *)&v52 + 1) = &v52;
  *(_QWORD *)&v52 = &v52;
  CmpLockRegistry();
  v15 = *(_QWORD **)(a1 + 8);
  if ( v15 )
  {
    if ( *(_DWORD *)a1 == 1803104306 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v16 = KeAbPreAcquire((__int64)(v15 + 6), 0LL);
        v17 = v16;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v15 + 12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v15 + 6, v16, (__int64)(v15 + 6));
        if ( v17 )
          *((_BYTE *)v17 + 10) = 1;
        v15[7] = KeGetCurrentThread();
        if ( *(_QWORD *)(a1 + 16) )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
          CmLockHive(v18);
          v21 = *(_QWORD *)(a1 + 16);
          if ( !v21 )
            goto LABEL_101;
          if ( *(_QWORD *)(v21 + 16) != v21 + 16 )
            CmpPostNotify(v21, v19, v20, 267, 0, 0LL, (__int64)&v52);
          v22 = *(char **)(a1 + 16);
          if ( v22 )
          {
            SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v22 + 56));
            **((_QWORD **)v22 + 1) = *(_QWORD *)v22;
            if ( *(_QWORD *)v22 )
              *(_QWORD *)(*(_QWORD *)v22 + 8LL) = *((_QWORD *)v22 + 1);
            *(_QWORD *)(a1 + 16) = 0LL;
            CmUnlockHive(v18);
            ExFreePoolWithTag(v22, 0);
          }
          else
          {
LABEL_101:
            CmUnlockHive(v18);
          }
        }
        CmpUnlockKcb((ULONG_PTR)v15);
      }
      v23 = 0;
      if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
LABEL_37:
        for ( i = 0; i < 4; ++i )
        {
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i + 136), 0LL, a1);
          if ( a1 == v25 )
            goto LABEL_42;
          if ( (unsigned __int64)(v25 - 1) <= 1 )
          {
            CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
            v23 = 1;
            goto LABEL_37;
          }
        }
        if ( !v23 )
        {
          v43 = *(_QWORD *)(a1 + 8);
          v44 = KeAbPreAcquire(v43 + 48, 0LL);
          v45 = v44;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 48), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v43 + 48), v44, v43 + 48);
          if ( v45 )
            *((_BYTE *)v45 + 10) = 1;
          v23 = 1;
          *(_QWORD *)(v43 + 56) = KeGetCurrentThread();
        }
        v46 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(v46 + 8) != a1 + 32 || (v47 = *(_QWORD **)(a1 + 40), *v47 != a1 + 32) )
LABEL_80:
          __fastfail(3u);
        *v47 = v46;
        *(_QWORD *)(v46 + 8) = v47;
LABEL_42:
        *(_WORD *)(a1 + 48) &= ~0x40u;
        if ( v23 )
          CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      }
      v3 = v15[4];
      _m_prefetchw((const void *)(v3 + 4232));
      v26 = *(_DWORD *)(v3 + 4232);
      if ( v26 )
      {
        do
        {
          v27 = v26;
          v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4232), v26 + 1, v26);
        }
        while ( v27 != v26 && v26 );
      }
      if ( *(_BYTE *)(v3 + 2944) == 1 )
      {
        v2 = 1;
        v62 = 1;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 16;
      }
      v28 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v28 )
      {
        if ( SLOWORD(v28->PrivilegeCount) >= 0 )
        {
          p_Attributes = (ULONG_PTR *)&v28->Privilege[0].Attributes;
          v30 = (unsigned __int16)(LOWORD(v28->PrivilegeCount) + 1);
          do
          {
            if ( *p_Attributes )
              CmpDereferenceKeyControlBlock(*p_Attributes);
            p_Attributes += 3;
            --v30;
          }
          while ( v30 );
          v2 = v62;
        }
        CmSiFreeMemory(v28);
        CmpDrainDelayDerefContext((_QWORD **)&v55);
      }
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
      {
        v42 = *(_QWORD *)(a1 + 104);
        MmUnlockPages((PMDL)(v42 + 64));
        MmUnlockPages((PMDL)v42);
        CmSiFreeMemory((PPRIVILEGE_SET)v42);
        *(_QWORD *)(a1 + 104) = 0LL;
        *(_WORD *)(a1 + 48) &= ~0x20u;
      }
    }
    else
    {
      v3 = v15[4];
      CmpReferenceHive(v3);
      if ( *(_BYTE *)(v3 + 2944) == 1 )
      {
        v2 = 1;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 17;
      }
    }
    CmpDereferenceKeyControlBlock((ULONG_PTR)v15);
  }
  CmpUnlockRegistry(v14);
  while ( 1 )
  {
    v31 = v52;
    if ( (__int128 *)v52 == &v52 )
      break;
    if ( *(__int128 **)(v52 + 8) != &v52 )
      goto LABEL_80;
    v38 = *(_QWORD *)v52;
    if ( *(_QWORD *)(*(_QWORD *)v52 + 8LL) != (_QWORD)v52 )
      goto LABEL_80;
    *(_QWORD *)&v52 = *(_QWORD *)v52;
    v39 = (PVOID **)(v31 - 16);
    *(_QWORD *)(v38 + 8) = &v52;
    v40 = *(_QWORD *)(v31 - 16 + 64);
    if ( (unsigned __int16)*(_DWORD *)(v31 - 16 + 56) != 3 )
    {
      v41 = *(struct _KEVENT **)v40;
      goto LABEL_85;
    }
    v48 = *(struct _WORK_QUEUE_ITEM **)(v40 + 8);
    if ( v48 )
      ExQueueWorkItem(v48, *(WORK_QUEUE_TYPE *)(v40 + 16));
    v41 = (struct _KEVENT *)*v39[8];
    if ( v41 )
    {
LABEL_85:
      KeSetEvent(v41, 0, 0);
      ObfDereferenceObject(*v39[8]);
      CmpFreePostBlock(v39);
    }
    else
    {
      CmpFreePostBlock(v39);
    }
  }
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v53[0] != v53 )
  {
    v56[1] = 0LL;
    v56[2] = v61;
    v59 = 0LL;
    v60 = 0;
    v58 = 0LL;
    v56[0] = 0LL;
    v57 = 0;
    CmpCallCallBacksEx(25, (unsigned int)v56, 0, 0, 25, 0LL, (__int64)v53);
  }
  if ( v2 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker(v3);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v3);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v54);
}
