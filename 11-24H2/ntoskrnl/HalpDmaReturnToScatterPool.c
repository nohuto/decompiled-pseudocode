/*
 * XREFs of HalpDmaReturnToScatterPool @ 0x140390FF0
 * Callers:
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaReturnPageToOwner @ 0x140390E84 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnPageToSource @ 0x14054F8CC (HalpDmaReturnPageToSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
