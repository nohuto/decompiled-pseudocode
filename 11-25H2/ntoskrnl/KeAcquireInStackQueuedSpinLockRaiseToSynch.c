/*
 * XREFs of KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405B8150
 * Callers:
 *     DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper @ 0x1406205C0 (DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140301310 (KxAcquireQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  *(_BYTE *)(a2 + 16) = CurrentIrql;
  KxAcquireQueuedSpinLock((struct _KPRCB *)a2, a1);
}
