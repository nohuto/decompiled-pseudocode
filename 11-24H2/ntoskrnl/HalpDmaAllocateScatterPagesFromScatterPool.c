/*
 * XREFs of HalpDmaAllocateScatterPagesFromScatterPool @ 0x140386FA0
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140489B60 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FD694 (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     HalpDmaGetMasterAdapterVersion @ 0x140387164 (HalpDmaGetMasterAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x14038718C (HalpDmaAllocateScatterPagesFromScatterPoolV3.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromScatterPool(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        unsigned int *a6)
{
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // ebx
  __int64 v13; // r14
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 result; // rax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)HalpDmaGetMasterAdapterVersion(a2) == 2 )
  {
    v12 = 0;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    v13 = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a2 + 128);
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    {
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9, 2LL);
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a2 + 128), (__int64)&LockHandle);
      if ( v15 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v15);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(a2 + 128));
    }
    if ( a5 )
    {
      v21 = *(_DWORD *)(a2 + 224);
      v13 = a2;
      v22 = *(_DWORD *)(a2 + 228);
      if ( v21 <= v22 )
        goto LABEL_19;
      v23 = v21 - v22;
      if ( a3 > v23 )
        a3 = v23;
    }
    v16 = *(_DWORD *)(a2 + 40);
    if ( a3 > v16 )
    {
      if ( a4 )
        goto LABEL_19;
      a3 = *(_DWORD *)(a2 + 40);
    }
    if ( a3 )
    {
      v17 = *(_QWORD *)(a2 + 32);
      v18 = v17;
      v19 = a3;
      do
      {
        v18 = *(_QWORD *)(v18 + 8);
        --v19;
      }
      while ( v19 );
      *(_QWORD *)(a2 + 32) = v18;
      *(_DWORD *)(a2 + 40) = v16 - a3;
      if ( a5 )
        *(_DWORD *)(v13 + 224) -= a3;
      v12 = a3;
      goto LABEL_15;
    }
LABEL_19:
    v17 = 0LL;
LABEL_15:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    result = v17;
    *a6 = v12;
    return result;
  }
  return HalpDmaAllocateScatterPagesFromScatterPoolV3(v9, a2, v10, v11, a5, (__int64)a6);
}
