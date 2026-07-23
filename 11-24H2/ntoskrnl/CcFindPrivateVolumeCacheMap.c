/*
 * XREFs of CcFindPrivateVolumeCacheMap @ 0x14042FF54
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x14042FE00 (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x140430768 (CcInsertPrivateVolumeCacheMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall CcFindPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  volatile __int64 *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // r14
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // si
  _QWORD *v8; // rdx
  _QWORD *i; // rax
  _QWORD *j; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+48h] [rbp-18h] BYREF
  char v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF

  v2 = (volatile __int64 *)(a1 + 768);
  v20 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 768);
  LockHandle.LockQueue.Next = 0LL;
  memset(&v18, 0, sizeof(v18));
  v19 = 0;
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
    v8 = (_QWORD *)_InterlockedExchange64(v2, (__int64)&LockHandle);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v2);
  }
  for ( i = *(_QWORD **)(v6 + 32); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(v6 + 32) )
    {
      for ( j = *(_QWORD **)(v6 + 112); ; j = (_QWORD *)*j )
      {
        if ( j == (_QWORD *)(v6 + 112) )
          goto LABEL_11;
        v12 = (_QWORD *)*j;
        v3 = j - 72;
        if ( *(j - 70) == a2 )
          break;
      }
      if ( (_QWORD *)v12[1] == j )
      {
        v16 = (_QWORD *)j[1];
        if ( (_QWORD *)*v16 == j )
        {
          *v16 = v12;
          v12[1] = v16;
          ++*((_DWORD *)v3 + 1);
          v4 = j - 72;
          CcInsertPrivateVolumeCacheMap(v6, (_DWORD)v3, (unsigned int)&v20, 1, 1, (__int64)&v19);
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
  if ( v19 )
  {
    v13 = v3[5];
    if ( v13 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v18);
      v14 = v3 + 74;
      v15 = *(_QWORD **)(v13 + 224);
      if ( *v15 == v13 + 216 )
      {
        v14[1] = v15;
        *v14 = v13 + 216;
        *v15 = v14;
        *(_QWORD *)(v13 + 224) = v14;
        KeReleaseInStackQueuedSpinLock(&v18);
        return v4;
      }
LABEL_25:
      __fastfail(3u);
    }
  }
  return v4;
}
