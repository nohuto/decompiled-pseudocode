/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x14044A240
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rdi
  _QWORD *v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h]

  v2 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  LockHandle.LockQueue.Lock = &CcMasterLock;
  v4 = a1;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&LockHandle);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&CcMasterLock);
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
      *(_QWORD *)&v13 = 0LL;
      *((_QWORD *)&v13 + 1) = v8 + 768;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v8 + 768), (__int64)&v13);
        if ( v10 )
          KxWaitForLockOwnerShip((__int64)&v13, v10);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&v13, (volatile __int64 *)(v8 + 768));
      }
      if ( v9[9] || *((_DWORD *)v9 + 52) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v9 + 18) + *((_DWORD *)v9 + 52);
        v2 = 1;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v13, (__int64)v10);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
