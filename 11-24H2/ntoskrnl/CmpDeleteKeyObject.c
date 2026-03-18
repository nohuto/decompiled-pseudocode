/*
 * XREFs of CmpDeleteKeyObject @ 0x140847360
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402C8600 (CmpWaitForLateUnloadWorker.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpReferenceHive @ 0x140844680 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x14084475C (CmpDeleteHive.c)
 *     CmLockHive @ 0x140845C74 (CmLockHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmUnlockHive @ 0x140846740 (CmUnlockHive.c)
 *     CmpFireCleanupNotifications @ 0x140846780 (CmpFireCleanupNotifications.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     CmpPostNotify @ 0x140868D58 (CmpPostNotify.c)
 *     CmpFreePostBlock @ 0x14086A740 (CmpFreePostBlock.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // r12
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID ***v8; // rdi
  struct _KTHREAD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  PVOID **v12; // rax
  signed __int64 v13; // rdx
  ULONG_PTR v14; // rtt
  PVOID v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rsi
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rcx
  char *v25; // rdi
  char v26; // r9
  unsigned int i; // r8d
  signed __int64 v28; // rax
  __int64 v29; // rax
  PVOID **v30; // rcx
  PVOID *v31; // r8
  PVOID ***v32; // rdx
  PVOID *v33; // rcx
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  struct _PRIVILEGE_SET *v36; // rdi
  ULONG_PTR *p_Attributes; // r15
  __int64 v38; // r12
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v42; // rcx
  PVOID **v43; // rdi
  __int64 v44; // r9
  struct _KEVENT *v45; // rcx
  __int64 v46; // r13
  _QWORD *v47; // rax
  _QWORD *v48; // rsi
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  struct _WORK_QUEUE_ITEM *v51; // rcx
  signed __int32 v52[8]; // [rsp+0h] [rbp-B9h] BYREF
  PVOID P; // [rsp+40h] [rbp-79h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-71h]
  __int128 v55; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v56[2]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v57; // [rsp+70h] [rbp-49h] BYREF
  __int64 v58; // [rsp+80h] [rbp-39h]
  __int128 v59; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v60[3]; // [rsp+98h] [rbp-21h] BYREF
  int v61; // [rsp+B0h] [rbp-9h]
  __int128 v62; // [rsp+B4h] [rbp-5h]
  __int64 v63; // [rsp+C4h] [rbp+Bh]
  int v64; // [rsp+CCh] [rbp+13h]
  _OWORD v65[4]; // [rsp+D0h] [rbp+17h] BYREF
  char v66; // [rsp+120h] [rbp+67h]

  v58 = 0LL;
  v2 = 0;
  v57 = 0LL;
  v3 = 0LL;
  v66 = 0;
  v55 = 0LL;
  memset(v65, 0, 32);
  v59 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v57);
  v56[1] = v56;
  v56[0] = v56;
  CmpInitializeDelayDerefContext(&v59);
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v57);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v65[0] = a1;
      CmpCallCallBacksEx(14, (unsigned int)v65, 0, 1, 25, a1, (__int64)v56);
      if ( *(_DWORD *)a1 == 1803104306 )
      {
        v8 = (PVOID ***)(a1 + 72);
        if ( *v8 != (PVOID **)v8 )
        {
          CmpFireCleanupNotifications(a1, v5, v6, v7);
          p_P = &P;
          P = &P;
          v9 = KeGetCurrentThread();
          --v9->KernelApcDisable;
          v10 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
          v11 = v10;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
            ExfAcquirePushLockExclusiveEx(&CmpContextListLock, (__int64)v10, (__int64)&CmpContextListLock);
          if ( v11 )
            *((_BYTE *)v11 + 10) = 1;
          while ( 1 )
          {
            v12 = *v8;
            if ( *v8 == (PVOID **)v8 )
              break;
            if ( v12[1] != (PVOID *)v8 )
              goto LABEL_52;
            v30 = (PVOID **)*v12;
            if ( (*v12)[1] != v12 )
              goto LABEL_52;
            *v8 = v30;
            v30[1] = (PVOID *)v8;
            v31 = v12[2];
            if ( v31[1] != v12 + 2 )
              goto LABEL_52;
            v32 = (PVOID ***)v12[3];
            if ( *v32 != v12 + 2 )
              goto LABEL_52;
            *v32 = (PVOID **)v31;
            v31[1] = v32;
            v33 = p_P;
            if ( v32 == (PVOID ***)v31 )
              v2 = 1;
            if ( *p_P != &P )
              goto LABEL_52;
            v12[1] = p_P;
            *v12 = &P;
            *v33 = v12;
            p_P = (PVOID *)v12;
          }
          _m_prefetchw(&CmpContextListLock);
          v13 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v13 = 0LL;
          if ( (CmpContextListLock & 2) != 0
            || (v14 = CmpContextListLock,
                v14 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v13,
                         CmpContextListLock)) )
          {
            ExfReleasePushLock(&CmpContextListLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
          KeLeaveCriticalRegionThread();
          if ( v2 )
          {
            _InterlockedOr(v52, 0);
            if ( CallbackListDeleteEvent )
              ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
          }
          while ( 1 )
          {
            v15 = P;
            if ( P == &P )
              break;
            if ( *((PVOID **)P + 1) != &P )
              goto LABEL_52;
            v29 = *(_QWORD *)P;
            if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
              goto LABEL_52;
            P = *(PVOID *)P;
            *(_QWORD *)(v29 + 8) = &P;
            ExFreePoolWithTag(v15, 0x63634D43u);
          }
          v2 = 0;
        }
      }
    }
  }
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 )
    ObfDereferenceObject((PVOID)(v16 & 0xFFFFFFFFFFFFFFFEuLL));
  *((_QWORD *)&v55 + 1) = &v55;
  *(_QWORD *)&v55 = &v55;
  CmpLockRegistry();
  v18 = *(_QWORD **)(a1 + 8);
  if ( v18 )
  {
    if ( *(_DWORD *)a1 == 1803104306 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v19 = KeAbPreAcquire((__int64)(v18 + 6), 0LL);
        v20 = v19;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v18 + 12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v18 + 6, (__int64)v19, (__int64)(v18 + 6));
        if ( v20 )
          *((_BYTE *)v20 + 10) = 1;
        v18[7] = KeGetCurrentThread();
        if ( *(_QWORD *)(a1 + 16) )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
          CmLockHive(v21);
          v24 = *(_QWORD *)(a1 + 16);
          if ( !v24 )
            goto LABEL_99;
          if ( *(_QWORD *)(v24 + 16) != v24 + 16 )
            CmpPostNotify(v24, v22, v23, 267, 0, 0LL, (__int64)&v55);
          v25 = *(char **)(a1 + 16);
          if ( v25 )
          {
            SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v25 + 56));
            **((_QWORD **)v25 + 1) = *(_QWORD *)v25;
            if ( *(_QWORD *)v25 )
              *(_QWORD *)(*(_QWORD *)v25 + 8LL) = *((_QWORD *)v25 + 1);
            *(_QWORD *)(a1 + 16) = 0LL;
            CmUnlockHive(v21);
            ExFreePoolWithTag(v25, 0);
          }
          else
          {
LABEL_99:
            CmUnlockHive(v21);
          }
        }
        CmpUnlockKcb((ULONG_PTR)v18);
      }
      v26 = 0;
      if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
LABEL_37:
        for ( i = 0; i < 4; ++i )
        {
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i + 136), 0LL, a1);
          if ( a1 == v28 )
            goto LABEL_53;
          if ( (unsigned __int64)(v28 - 1) <= 1 )
          {
            CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
            v26 = 1;
            goto LABEL_37;
          }
        }
        if ( !v26 )
        {
          v46 = *(_QWORD *)(a1 + 8);
          v47 = KeAbPreAcquire(v46 + 48, 0LL);
          v48 = v47;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 48), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v46 + 48), (__int64)v47, v46 + 48);
          if ( v48 )
            *((_BYTE *)v48 + 10) = 1;
          v26 = 1;
          *(_QWORD *)(v46 + 56) = KeGetCurrentThread();
        }
        v49 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(v49 + 8) != a1 + 32 || (v50 = *(_QWORD **)(a1 + 40), *v50 != a1 + 32) )
LABEL_52:
          __fastfail(3u);
        *v50 = v49;
        *(_QWORD *)(v49 + 8) = v50;
LABEL_53:
        *(_WORD *)(a1 + 48) &= ~0x40u;
        if ( v26 )
          CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      }
      v3 = v18[4];
      _m_prefetchw((const void *)(v3 + 4232));
      v34 = *(_DWORD *)(v3 + 4232);
      if ( v34 )
      {
        do
        {
          v35 = v34;
          v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4232), v34 + 1, v34);
        }
        while ( v35 != v34 && v34 );
      }
      if ( *(_BYTE *)(v3 + 2944) == 1 )
      {
        v2 = 1;
        v66 = 1;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 16;
      }
      v36 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v36 )
      {
        if ( SLOWORD(v36->PrivilegeCount) >= 0 )
        {
          p_Attributes = (ULONG_PTR *)&v36->Privilege[0].Attributes;
          v38 = (unsigned __int16)(LOWORD(v36->PrivilegeCount) + 1);
          do
          {
            if ( *p_Attributes )
              CmpDereferenceKeyControlBlock(*p_Attributes);
            p_Attributes += 3;
            --v38;
          }
          while ( v38 );
          v2 = v66;
        }
        CmSiFreeMemory(v36);
        CmpDrainDelayDerefContext((_QWORD **)&v59);
      }
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
      {
        v39 = *(_QWORD *)(a1 + 104);
        MmUnlockPages((PMDL)(v39 + 64));
        MmUnlockPages((PMDL)v39);
        CmSiFreeMemory((PPRIVILEGE_SET)v39);
        *(_QWORD *)(a1 + 104) = 0LL;
        *(_WORD *)(a1 + 48) &= ~0x20u;
      }
    }
    else
    {
      v3 = v18[4];
      CmpReferenceHive(v3);
      if ( *(_BYTE *)(v3 + 2944) == 1 )
      {
        v2 = 1;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 17;
      }
    }
    CmpDereferenceKeyControlBlock((ULONG_PTR)v18);
  }
  CmpUnlockRegistry(v17);
  while ( 1 )
  {
    v40 = v55;
    if ( (__int128 *)v55 == &v55 )
      break;
    if ( *(__int128 **)(v55 + 8) != &v55 )
      goto LABEL_52;
    v42 = *(_QWORD *)v55;
    if ( *(_QWORD *)(*(_QWORD *)v55 + 8LL) != (_QWORD)v55 )
      goto LABEL_52;
    *(_QWORD *)&v55 = *(_QWORD *)v55;
    v43 = (PVOID **)(v40 - 16);
    *(_QWORD *)(v42 + 8) = &v55;
    v44 = *(_QWORD *)(v40 - 16 + 64);
    if ( (unsigned __int16)*(_DWORD *)(v40 - 16 + 56) != 3 )
    {
      v45 = *(struct _KEVENT **)v44;
      goto LABEL_85;
    }
    v51 = *(struct _WORK_QUEUE_ITEM **)(v44 + 8);
    if ( v51 )
      ExQueueWorkItem(v51, *(WORK_QUEUE_TYPE *)(v44 + 16));
    v45 = (struct _KEVENT *)*v43[8];
    if ( v45 )
    {
LABEL_85:
      KeSetEvent(v45, 0, 0);
      ObfDereferenceObject(*v43[8]);
      CmpFreePostBlock(v43);
    }
    else
    {
      CmpFreePostBlock(v43);
    }
  }
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v56[0] != v56 )
  {
    v60[1] = 0LL;
    v60[2] = v65;
    v63 = 0LL;
    v64 = 0;
    v62 = 0LL;
    v60[0] = 0LL;
    v61 = 0;
    CmpCallCallBacksEx(25, (unsigned int)v60, 0, 0, 25, 0LL, (__int64)v56);
  }
  if ( v2 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker(v3);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v3);
  }
  KeLeaveCriticalRegionThread();
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v57);
}
