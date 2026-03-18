/*
 * XREFs of PiDmObjectManagerAcquireExclusiveLock @ 0x140968EE4
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x14074D254 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x140753080 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x140753350 (PopDripsWatchdogDiagnosticWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140968AC8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x140969C78 (PiDmListAddObjectWorker.c)
 *     PopDripsWatchdogStopWatchdog @ 0x140A1EDA8 (PopDripsWatchdogStopWatchdog.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A1EE1C (PopDripsWatchdogStartWatchdog.c)
 *     PiDmListRemoveObjectWorker @ 0x140A6F6E8 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PiDmObjectManagerAcquireExclusiveLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
