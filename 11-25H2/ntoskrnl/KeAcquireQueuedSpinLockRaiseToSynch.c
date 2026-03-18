/*
 * XREFs of KeAcquireQueuedSpinLockRaiseToSynch @ 0x1405B81C0
 * Callers:
 *     DifKeAcquireQueuedSpinLockRaiseToSynchWrapper @ 0x1406208A0 (DifKeAcquireQueuedSpinLockRaiseToSynchWrapper.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140301310 (KxAcquireQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall KeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  char *v3; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  v3 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1;
  KxAcquireQueuedSpinLock((struct _KPRCB *)v3, *((volatile __int64 **)v3 + 1));
  return CurrentIrql;
}
