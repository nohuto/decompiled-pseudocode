/*
 * XREFs of IopInterlockedDecrementUlong @ 0x1403E56B0
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x1403E5630 (IopDecrementDeviceObjectRefCount.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopInterlockedDecrementUlong(__int64 a1, _DWORD *a2)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rdi
  char *v6; // rcx
  volatile __int64 *v7; // rdx
  _QWORD *v8; // rax
  unsigned int v9; // ebx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v5 = 16 * a1;
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + v5;
  v7 = (volatile __int64 *)*((_QWORD *)v6 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = (_QWORD *)_InterlockedExchange64(v7, (__int64)v6);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)v6, v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v6, v7);
  }
  v9 = --*a2;
  KxReleaseQueuedSpinLock(
    (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + v5),
    (__int64)v7);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v9;
}
