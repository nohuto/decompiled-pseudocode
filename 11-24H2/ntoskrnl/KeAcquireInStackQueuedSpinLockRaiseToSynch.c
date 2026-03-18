/*
 * XREFs of KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405BBFF0
 * Callers:
 *     DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper @ 0x14062C580 (DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1402D6B90 (KxAcquireQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall KeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  *(_BYTE *)(a2 + 16) = CurrentIrql;
  return KxAcquireQueuedSpinLock(a2, a1);
}
