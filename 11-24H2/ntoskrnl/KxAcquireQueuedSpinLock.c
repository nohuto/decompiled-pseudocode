/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x140357E10
 * Callers:
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     WmipNotificationIrpCancel @ 0x1403CB730 (WmipNotificationIrpCancel.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405B9620 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1405B9690 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 */

_QWORD *__fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  _QWORD *result; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    return (_QWORD *)KiAcquireQueuedSpinLockInstrumented(a1, a2);
  result = (_QWORD *)_InterlockedExchange64(a2, a1);
  if ( result )
    return (_QWORD *)KxWaitForLockOwnerShip(a1, result);
  return result;
}
