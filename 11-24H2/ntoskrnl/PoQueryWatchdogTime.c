/*
 * XREFs of PoQueryWatchdogTime @ 0x140437AB0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopComputeWatchdogTimeout @ 0x140314F34 (PopComputeWatchdogTimeout.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rbx
  BOOLEAN v3; // r14
  _QWORD *DeviceNode; // rdi
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v11; // rsi
  KIRQL v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdi
  KIRQL v15; // r8
  unsigned __int64 v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1LL;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &PopIrpLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Pdo) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Pdo, 2LL);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&PopIrpLock, (__int64)&LockHandle);
    if ( v7 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v7);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&PopIrpLock);
  }
  v8 = DeviceNode[33];
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  if ( v8 )
  {
    v11 = *(_QWORD *)(v8 + 72LL * *(char *)(v8 + 66) + 200);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 288));
    if ( *(_DWORD *)(v11 + 296) == 1 )
    {
      v13 = *(_QWORD *)(v11 + 48) + 10000000LL * (unsigned int)PopComputeWatchdogTimeout(v11);
      if ( v13 != -1 )
        v2 = v13;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 288), v12);
  }
  v9 = DeviceNode[35];
  if ( v9 )
  {
    v14 = *(_QWORD *)(v9 + 72LL * *(char *)(v9 + 66) + 200);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 288));
    if ( *(_DWORD *)(v14 + 296) == 1 )
    {
      v16 = *(_QWORD *)(v14 + 48) + 10000000LL * (unsigned int)PopComputeWatchdogTimeout(v14);
      if ( v16 < v2 )
        v2 = v16;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 288), v15);
  }
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 != -1LL )
  {
    v3 = 1;
    if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] > v2 )
      *SecondsRemaining = 0;
    else
      *SecondsRemaining = (v2 - (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0])) / 0x989680;
  }
  return v3;
}
