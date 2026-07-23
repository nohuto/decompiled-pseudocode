/*
 * XREFs of HalpDmaReturnToScatterPool @ 0x14038A920
 * Callers:
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaReturnPageToOwner @ 0x14038A7B4 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnPageToSource @ 0x14054D20C (HalpDmaReturnPageToSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall HalpDmaReturnToScatterPool(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  volatile __int64 *v7; // rdi
  unsigned __int8 v8; // si
  _QWORD *v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
  {
    LockHandle.LockQueue.Next = 0LL;
    v7 = (volatile __int64 *)(a1 + 128);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 128);
    v8 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = v8;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    LockHandle.OldIrql = v8;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = (_QWORD *)_InterlockedExchange64(v7, (__int64)&LockHandle);
      if ( v9 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v9);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v7);
    }
  }
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v5 + 32);
  ++*(_DWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 32) = a2;
  if ( a3 )
    ++*(_DWORD *)(v5 + 224);
  if ( CurrentIrql != 15 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
