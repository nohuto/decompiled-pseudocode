/*
 * XREFs of HalpDmaReturnPageToOwner @ 0x14038A7B4
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140489B60 (HalpDmaAllocateNewTranslationBuffer.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     HalpDmaReturnToContiguousPool @ 0x1402EA454 (HalpDmaReturnToContiguousPool.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     HalpDmaReturnToScatterPool @ 0x14038A920 (HalpDmaReturnToScatterPool.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall HalpDmaReturnPageToOwner(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v9; // bp
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)(a3 + 56) = a3;
  if ( !a1 )
  {
    v11 = a3;
    v13 = a2;
    if ( (*(_BYTE *)(a3 + 48) & 8) != 0 )
      goto LABEL_14;
    goto LABEL_16;
  }
  v6 = *(_QWORD *)(a3 + 48);
  v7 = v6 & 4;
  if ( !*(_BYTE *)(a1 + 442) )
  {
    v11 = a3;
    v13 = a2;
    if ( !v7 )
      v13 = a1;
    goto LABEL_16;
  }
  if ( (v6 & 4) != 0 )
  {
    v11 = a3;
    v12 = (v6 & 8) == 0;
    v13 = a2;
    if ( !v12 )
    {
LABEL_14:
      HalpDmaReturnToScatterPool(v13, v11, 0LL);
      return;
    }
LABEL_16:
    HalpDmaReturnToContiguousPool(v13, v11, 0);
    return;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 128);
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = v9;
      KiRaiseIrqlProcessIrqlFlags(v6, 2LL);
    }
    LockHandle.OldIrql = v9;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 128), (__int64)&LockHandle);
      if ( v10 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v10);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(a1 + 128));
    }
  }
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
  ++*(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = a3;
  if ( CurrentIrql != 15 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
