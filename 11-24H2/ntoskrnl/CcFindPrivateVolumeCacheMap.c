/*
 * XREFs of CcFindPrivateVolumeCacheMap @ 0x1402CA6FC
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x1402CA5A8 (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1402CAF10 (CcInsertPrivateVolumeCacheMap.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall CcFindPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  volatile __int64 *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // r14
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // si
  _QWORD *i; // rax
  _QWORD *j; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+48h] [rbp-18h] BYREF
  char v18; // [rsp+90h] [rbp+30h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF

  v2 = (volatile __int64 *)(a1 + 768);
  v19 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 768);
  LockHandle.LockQueue.Next = 0LL;
  memset(&v17, 0, sizeof(v17));
  v18 = 0;
  v6 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LockHandle.OldIrql )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v2, (__int64)&LockHandle) )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v2);
  }
  for ( i = *(_QWORD **)(v6 + 32); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(v6 + 32) )
    {
      for ( j = *(_QWORD **)(v6 + 112); ; j = (_QWORD *)*j )
      {
        if ( j == (_QWORD *)(v6 + 112) )
          goto LABEL_11;
        v11 = (_QWORD *)*j;
        v3 = j - 72;
        if ( *(j - 70) == a2 )
          break;
      }
      if ( (_QWORD *)v11[1] == j )
      {
        v15 = (_QWORD *)j[1];
        if ( (_QWORD *)*v15 == j )
        {
          *v15 = v11;
          v11[1] = v15;
          ++*((_DWORD *)v3 + 1);
          v4 = j - 72;
          CcInsertPrivateVolumeCacheMap(v6, (_DWORD)v3, (unsigned int)&v19, 1, 1, (__int64)&v18);
          goto LABEL_11;
        }
      }
      goto LABEL_25;
    }
    v3 = i - 72;
    if ( *(i - 70) == a2 )
      break;
  }
  ++*((_DWORD *)v3 + 1);
  v4 = i - 72;
LABEL_11:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v18 )
  {
    v12 = v3[5];
    if ( v12 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v17);
      v13 = v3 + 74;
      v14 = *(_QWORD **)(v12 + 224);
      if ( *v14 == v12 + 216 )
      {
        v13[1] = v14;
        *v13 = v12 + 216;
        *v14 = v13;
        *(_QWORD *)(v12 + 224) = v13;
        KeReleaseInStackQueuedSpinLock(&v17);
        return v4;
      }
LABEL_25:
      __fastfail(3u);
    }
  }
  return v4;
}
