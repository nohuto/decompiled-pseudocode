/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x1403BEB10
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140204420 (NtSetInformationWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140493E00 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ExpWorkerFactoryManagerThread @ 0x14065AA40 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ExpWorkerFactoryCreateThread @ 0x1402462F8 (ExpWorkerFactoryCreateThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1403BEA00 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpCheckThreadHistory @ 0x1403BEEC0 (ExpCheckThreadHistory.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140A5327C (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

void __fastcall ExpWorkerFactoryCheckCreate(char *Object, PKLOCK_QUEUE_HANDLE LockHandle, char a3)
{
  struct _KLOCK_QUEUE_HANDLE *v4; // rdi
  volatile __int64 *v6; // rsi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int *v11; // r15
  unsigned int *v12; // rbp
  unsigned int v13; // eax
  int Thread; // esi
  unsigned int v15; // esi
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+30h] [rbp-28h]

  v4 = LockHandle;
  v21 = 0LL;
  v22 = 0LL;
  if ( !LockHandle )
  {
    v6 = (volatile __int64 *)*((_QWORD *)Object + 2);
    v4 = (struct _KLOCK_QUEUE_HANDLE *)&v21;
    *((_QWORD *)&v21 + 1) = v6;
    *(_QWORD *)&v21 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LOBYTE(v22) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v8 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&v21);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)&v21, v8);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v21, v6);
    }
  }
  if ( a3 )
  {
    v20 = *((_DWORD *)Object + 102);
    if ( (((unsigned __int8)v20 | (unsigned __int8)((v20 | (v20 >> 6)) >> 2)) & 0x30) == 0 && (v20 & 0x100) == 0 )
      goto LABEL_12;
  }
  if ( *((_DWORD *)Object + 100)
    || *((_DWORD *)Object + 96) >= *((_DWORD *)Object + 95)
    || (v9 = *((_QWORD *)Object + 2), *(_DWORD *)(v9 + 28))
    || (v10 = *(_QWORD *)(v9 + 8), !*(_DWORD *)(v10 + 4)) && !*(_DWORD *)(v9 + 24) )
  {
    *((_DWORD *)Object + 102) &= 0xFFFFCE0F;
    goto LABEL_12;
  }
  v11 = (unsigned int *)(Object + 408);
  if ( (!a3 || (*v11 & 0xC0) != 0x80) && *(_DWORD *)(v10 + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v16 = *v11;
    v15 = 4;
    if ( (*v11 & 0xC0) == 0 )
    {
      v15 = 3;
      *v11 = v16 & 0xFFFFFF3F | 0x40;
      goto LABEL_38;
    }
    if ( (*v11 & 0xC0) == 0x40 && a3 )
    {
      *v11 = v16 & 0xFFFFFF3F | 0x80;
LABEL_37:
      v15 = 2;
    }
LABEL_38:
    if ( v15 == 4 )
      goto LABEL_12;
LABEL_39:
    v17 = *((_DWORD *)Object + 102);
    if ( (v17 & 8) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(v4);
    }
    else
    {
      *((_DWORD *)Object + 102) = v17 | 8;
      KeReleaseInStackQueuedSpinLock(v4);
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)Object);
    }
    ExpSetWorkerFactoryDeferredCreateTimer(v15);
    return;
  }
  v12 = (unsigned int *)(Object + 408);
  if ( !a3 )
  {
LABEL_21:
    if ( !(unsigned __int8)ExpCheckThreadHistory(Object) )
      goto LABEL_22;
    v19 = *v11;
    v15 = 4;
    if ( (*v11 & 0x30) == 0 )
    {
      v15 = 3;
      *v11 = v19 & 0xFFFFFFCF | 0x10;
      goto LABEL_38;
    }
    if ( (*v11 & 0x30) == 0x10 && a3 )
    {
      *v12 = v19 & 0xFFFFFFCF | 0x20;
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( (*v11 & 0x30) != 0x20 )
  {
    v12 = (unsigned int *)(Object + 408);
    goto LABEL_21;
  }
LABEL_22:
  if ( !a3 || (*v12 & 0x3000) != 0x2000 )
  {
    v13 = *((_DWORD *)Object + 99);
    if ( v13 )
    {
      if ( *((_DWORD *)Object + 96) > v13 )
      {
        v18 = *v12;
        if ( (*v12 & 0x3000) == 0 )
        {
          v15 = 3;
          *v12 = v18 & 0xFFFFCFFF | 0x1000;
          goto LABEL_39;
        }
        if ( (*v12 & 0x3000) == 0x1000 && a3 )
        {
          v15 = 2;
          *((_DWORD *)Object + 102) = v18 & 0xFFFFCFFF | 0x2000;
          goto LABEL_39;
        }
LABEL_12:
        KeReleaseInStackQueuedSpinLock(v4);
        return;
      }
    }
  }
  if ( (*((_DWORD *)Object + 102) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  ++*((_DWORD *)Object + 100);
  *((_DWORD *)Object + 102) &= 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLock(v4);
  Thread = ExpWorkerFactoryCreateThread((__int64)Object);
  if ( Thread < 0 )
  {
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), v4);
    --*((_DWORD *)Object + 100);
    if ( Thread == -1073741814 || Thread == -1073741558 || Thread == -1073741582 || Thread == -1073741823 )
      goto LABEL_12;
    *((_DWORD *)Object + 102) |= 0x100u;
    v15 = 1;
    goto LABEL_39;
  }
}
