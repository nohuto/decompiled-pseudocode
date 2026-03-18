/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1402D6B90
 * Callers:
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     WmipNotificationIrpCancel @ 0x1403DCA30 (WmipNotificationIrpCancel.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405BBFF0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1405BC060 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
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
