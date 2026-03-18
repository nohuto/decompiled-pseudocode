/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x140301310
 * Callers:
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     WmipNotificationIrpCancel @ 0x1404855E0 (WmipNotificationIrpCancel.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405B8150 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1405B81C0 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 */

void __fastcall KxAcquireQueuedSpinLock(struct _KPRCB *a1, volatile __int64 *a2)
{
  struct _KPRCB **v2; // rdx

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v2 = (struct _KPRCB **)_InterlockedExchange64(a2, (__int64)a1);
    if ( v2 )
      KxWaitForLockOwnerShip(a1, v2);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)a1, a2);
  }
}
