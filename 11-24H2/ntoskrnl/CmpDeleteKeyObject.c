/*
 * XREFs of CmpDeleteKeyObject @ 0x140843620
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402B98A0 (CmpWaitForLateUnloadWorker.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpReferenceHive @ 0x140840940 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmLockHive @ 0x140841F34 (CmLockHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmUnlockHive @ 0x140842A00 (CmUnlockHive.c)
 *     CmpFireCleanupNotifications @ 0x140842A40 (CmpFireCleanupNotifications.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     CmpPostNotify @ 0x14086D048 (CmpPostNotify.c)
 *     CmpFreePostBlock @ 0x14086EA70 (CmpFreePostBlock.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // r12
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID ***v5; // rdi
  struct _KTHREAD *v6; // rax
  char *v7; // rax
  char *v8; // r14
  PVOID **v9; // rax
  signed __int64 v10; // rdx
  ULONG_PTR v11; // rtt
  PVOID v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // r14
  char *v16; // rax
  char *v17; // rsi
  __int64 v18; // rsi
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rcx
  char *v22; // rdi
  char v23; // r9
  unsigned int i; // r8d
  signed __int64 v25; // rax
  __int64 v26; // rax
  PVOID **v27; // rcx
  PVOID *v28; // r8
  PVOID ***v29; // rdx
  PVOID *v30; // rcx
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  struct _PRIVILEGE_SET *v33; // rdi
  ULONG_PTR *p_Attributes; // r15
  __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v39; // rcx
  PVOID **v40; // rdi
  __int64 v41; // r9
  struct _KEVENT *v42; // rcx
  __int64 v43; // r13
  char *v44; // rax
  char *v45; // rsi
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  struct _WORK_QUEUE_ITEM *v48; // rcx
  signed __int32 v49[8]; // [rsp+0h] [rbp-B9h] BYREF
  PVOID P; // [rsp+40h] [rbp-79h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-71h]
  __int128 v52; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v53[2]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v54; // [rsp+70h] [rbp-49h] BYREF
  __int64 v55; // [rsp+80h] [rbp-39h]
  __int128 v56; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v57[3]; // [rsp+98h] [rbp-21h] BYREF
  int v58; // [rsp+B0h] [rbp-9h]
  __int128 v59; // [rsp+B4h] [rbp-5h]
  __int64 v60; // [rsp+C4h] [rbp+Bh]
  int v61; // [rsp+CCh] [rbp+13h]
  _OWORD v62[4]; // [rsp+D0h] [rbp+17h] BYREF
  char v63; // [rsp+120h] [rbp+67h]

  v55 = 0LL;
  v2 = 0;
  v54 = 0LL;
  v3 = 0LL;
  v63 = 0;
  v52 = 0LL;
  memset(v62, 0, 32);
  v56 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v54);
  v53[1] = v53;
  v53[0] = v53;
  CmpInitializeDelayDerefContext(&v56);
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v54);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v62[0] = a1;
      CmpCallCallBacksEx(14, (unsigned int)v62, 0, 1, 25, a1, (__int64)v53);
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
          v7 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
          v8 = v7;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
            ExfAcquirePushLockExclusiveEx(&CmpContextListLock, v7, (__int64)&CmpContextListLock);
          if ( v8 )
            v8[10] = 1;
          while ( 1 )
          {
            v9 = *v5;
            if ( *v5 == (PVOID **)v5 )
              break;
            if ( v9[1] != (PVOID *)v5 )
              goto LABEL_52;
            v27 = (PVOID **)*v9;
            if ( (*v9)[1] != v9 )
              goto LABEL_52;
            *v5 = v27;
            v27[1] = (PVOID *)v5;
            v28 = v9[2];
            if ( v28[1] != v9 + 2 )
              goto LABEL_52;
            v29 = (PVOID ***)v9[3];
            if ( *v29 != v9 + 2 )
              goto LABEL_52;
            *v29 = (PVOID **)v28;
            v28[1] = v29;
            v30 = p_P;
            if ( v29 == (PVOID ***)v28 )
              v2 = 1;
            if ( *p_P != &P )
              goto LABEL_52;
            v9[1] = p_P;
            *v9 = &P;
            *v30 = v9;
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
          KeLeaveCriticalRegionThread();
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
              goto LABEL_52;
            v26 = *(_QWORD *)P;
            if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
              goto LABEL_52;
            P = *(PVOID *)P;
            *(_QWORD *)(v26 + 8) = &P;
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
  CmpLockRegistry(v13);
  v15 = *(_QWORD **)(a1 + 8);
  if ( v15 )
  {
    if ( *(_DWORD *)a1 == 1803104306 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v16 = (char *)KeAbPreAcquire((__int64)(v15 + 6), 0LL);
        v17 = v16;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v15 + 12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v15 + 6, v16, (__int64)(v15 + 6));
        if ( v17 )
          v17[10] = 1;
        v15[7] = KeGetCurrentThread();
        if ( *(_QWORD *)(a1 + 16) )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
          CmLockHive(v18);
          v21 = *(_QWORD *)(a1 + 16);
          if ( !v21 )
            goto LABEL_99;
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
LABEL_99:
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
            goto LABEL_53;
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
          v44 = (char *)KeAbPreAcquire(v43 + 48, 0LL);
          v45 = v44;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 48), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v43 + 48), v44, v43 + 48);
          if ( v45 )
            v45[10] = 1;
          v23 = 1;
          *(_QWORD *)(v43 + 56) = KeGetCurrentThread();
        }
        v46 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(v46 + 8) != a1 + 32 || (v47 = *(_QWORD **)(a1 + 40), *v47 != a1 + 32) )
LABEL_52:
          __fastfail(3u);
        *v47 = v46;
        *(_QWORD *)(v46 + 8) = v47;
LABEL_53:
        *(_WORD *)(a1 + 48) &= ~0x40u;
        if ( v23 )
          CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      }
      v3 = v15[4];
      _m_prefetchw((const void *)(v3 + 4232));
      v31 = *(_DWORD *)(v3 + 4232);
      if ( v31 )
      {
        do
        {
          v32 = v31;
          v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4232), v31 + 1, v31);
        }
        while ( v32 != v31 && v31 );
      }
      if ( *(_BYTE *)(v3 + 2944) == 1 )
      {
        v2 = 1;
        v63 = 1;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 16;
      }
      v33 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v33 )
      {
        if ( SLOWORD(v33->PrivilegeCount) >= 0 )
        {
          p_Attributes = (ULONG_PTR *)&v33->Privilege[0].Attributes;
          v35 = (unsigned __int16)(LOWORD(v33->PrivilegeCount) + 1);
          do
          {
            if ( *p_Attributes )
              CmpDereferenceKeyControlBlock(*p_Attributes);
            p_Attributes += 3;
            --v35;
          }
          while ( v35 );
          v2 = v63;
        }
        CmSiFreeMemory(v33);
        CmpDrainDelayDerefContext((_QWORD **)&v56);
      }
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
      {
        v36 = *(_QWORD *)(a1 + 104);
        MmUnlockPages((PMDL)(v36 + 64));
        MmUnlockPages((PMDL)v36);
        CmSiFreeMemory((PPRIVILEGE_SET)v36);
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
    v37 = v52;
    if ( (__int128 *)v52 == &v52 )
      break;
    if ( *(__int128 **)(v52 + 8) != &v52 )
      goto LABEL_52;
    v39 = *(_QWORD *)v52;
    if ( *(_QWORD *)(*(_QWORD *)v52 + 8LL) != (_QWORD)v52 )
      goto LABEL_52;
    *(_QWORD *)&v52 = *(_QWORD *)v52;
    v40 = (PVOID **)(v37 - 16);
    *(_QWORD *)(v39 + 8) = &v52;
    v41 = *(_QWORD *)(v37 - 16 + 64);
    if ( (unsigned __int16)*(_DWORD *)(v37 - 16 + 56) != 3 )
    {
      v42 = *(struct _KEVENT **)v41;
      goto LABEL_85;
    }
    v48 = *(struct _WORK_QUEUE_ITEM **)(v41 + 8);
    if ( v48 )
      ExQueueWorkItem(v48, *(WORK_QUEUE_TYPE *)(v41 + 16));
    v42 = (struct _KEVENT *)*v40[8];
    if ( v42 )
    {
LABEL_85:
      KeSetEvent(v42, 0, 0);
      ObfDereferenceObject(*v40[8]);
      CmpFreePostBlock(v40);
    }
    else
    {
      CmpFreePostBlock(v40);
    }
  }
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v53[0] != v53 )
  {
    v57[1] = 0LL;
    v57[2] = v62;
    v60 = 0LL;
    v61 = 0;
    v59 = 0LL;
    v57[0] = 0LL;
    v58 = 0;
    CmpCallCallBacksEx(25, (unsigned int)v57, 0, 0, 25, 0LL, (__int64)v53);
  }
  if ( v2 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker(v3);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v3);
  }
  KeLeaveCriticalRegionThread();
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v54);
}
