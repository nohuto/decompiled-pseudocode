/*
 * XREFs of KiAcquireThreadLockRaiseToDpc @ 0x140204DB0
 * Callers:
 *     KeSetThreadPpmPolicy @ 0x1402005B4 (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KeRemoveQueueApc @ 0x140203580 (KeRemoveQueueApc.c)
 *     KeAttachProcess @ 0x140203A10 (KeAttachProcess.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KiFlushQueueApc @ 0x1402047F0 (KiFlushQueueApc.c)
 *     KeCleanupThreadState @ 0x140204878 (KeCleanupThreadState.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x140207198 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     KiSchedulerApc @ 0x1402F2C80 (KiSchedulerApc.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B3360 (KeSetIdealProcessorThreadEx.c)
 *     MiDetachFromWorkingSet @ 0x1403C31E0 (MiDetachFromWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1403C41A0 (KeUnstackDetachProcess.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     KeRequestTerminationThread @ 0x14047D128 (KeRequestTerminationThread.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x140489530 (PspSynchronizeThreadIsolationDomains.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404AB900 (KeQueryPrimaryGroupAffinityThread.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B5390 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KeQueryCpuSetsThread @ 0x1404D0084 (KeQueryCpuSetsThread.c)
 *     KeEnumerateQueueApc @ 0x1405B9040 (KeEnumerateQueueApc.c)
 *     KiRequestSchedulerApcThread @ 0x1405BEF64 (KiRequestSchedulerApcThread.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAcquireThreadLockRaiseToDpc(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  unsigned int v6; // edi

  CurrentIrql = KeGetCurrentIrql();
  result = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    result = KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  *a2 = CurrentIrql;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
      result = *(_QWORD *)(a1 + 64);
    }
    while ( result );
  }
  return result;
}
