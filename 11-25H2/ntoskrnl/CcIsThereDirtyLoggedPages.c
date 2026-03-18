/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x140454E50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB **v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rdi
  struct _KPRCB **v10; // rdx
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0;
  *(_QWORD *)&v12.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v12.LockQueue.Lock = &CcMasterLock;
  v4 = a1;
  v12.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(v12.LockQueue.Next) )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v12.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v12);
    if ( v6 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&v12, v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v12, (volatile __int64 *)&CcMasterLock);
  }
  v7 = (__int64 *)CcVolumeCacheMapList;
  v8 = *((_QWORD *)PspSystemPartition + 1);
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    do
    {
      v9 = v7 - 3;
      if ( *(v7 - 1) == v4 )
        break;
      v7 = (__int64 *)*v7;
      v9 = 0LL;
    }
    while ( v7 != &CcVolumeCacheMapList );
    if ( v9 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 768);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v10 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)(v8 + 768), (__int64)&LockHandle);
        if ( v10 )
          KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v10);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v8 + 768));
      }
      if ( v9[9] || *((_DWORD *)v9 + 52) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v9 + 18) + *((_DWORD *)v9 + 52);
        v2 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  KeReleaseInStackQueuedSpinLock(&v12);
  return v2;
}
