/*
 * XREFs of IopInterlockedDecrementUlong @ 0x14041F970
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x14041F5D0 (IopDecrementDeviceObjectRefCount.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopInterlockedDecrementUlong(__int64 a1, _DWORD *a2)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rdi
  struct _KPRCB *v6; // rcx
  volatile __int64 *p_Lock; // r8
  struct _KPRCB **v8; // rdx
  unsigned int v9; // ebx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v5 = 16 * a1;
  v6 = (struct _KPRCB *)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + v5);
  p_Lock = (volatile __int64 *)&v6->CurrentThread->Header.Lock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = (struct _KPRCB **)_InterlockedExchange64(p_Lock, (__int64)v6);
    if ( v8 )
      KxWaitForLockOwnerShip(v6, v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v6, p_Lock);
  }
  v9 = --*a2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + v5));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v9;
}
