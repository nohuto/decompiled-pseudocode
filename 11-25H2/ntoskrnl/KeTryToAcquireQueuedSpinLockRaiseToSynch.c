/*
 * XREFs of KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1405B82B0
 * Callers:
 *     DifKeTryToAcquireQueuedSpinLockRaiseToSynchWrapper @ 0x1406250E0 (DifKeTryToAcquireQueuedSpinLockRaiseToSynchWrapper.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1402B03EC (KxTryToAcquireQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  char *v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1;
  if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v5, *((_DWORD **)v5 + 1)) )
  {
    *a2 = CurrentIrql;
    return 1LL;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
}
