/*
 * XREFs of CcSetParallelFlushFile @ 0x14043D2A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  _QWORD *SharedCacheMap; // rsi
  unsigned __int64 *v4; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rdx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v4 = (unsigned __int64 *)(SharedCacheMap[67] + 768LL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(FileObject) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(FileObject, 2LL);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v4, (__int64)&LockHandle);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v4);
  }
  v7 = *((_DWORD *)SharedCacheMap + 38);
  v8 = v7 | 0x40000;
  v9 = v7 & 0xFFFBFFFF;
  if ( !EnableParallelFlush )
    v8 = v9;
  *((_DWORD *)SharedCacheMap + 38) = v8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
