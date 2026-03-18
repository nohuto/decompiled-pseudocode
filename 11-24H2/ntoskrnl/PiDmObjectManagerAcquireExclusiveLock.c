/*
 * XREFs of PiDmObjectManagerAcquireExclusiveLock @ 0x1408B5444
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x140759514 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14075FC80 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075FF20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PiDmListAddObjectWorker @ 0x1408B4124 (PiDmListAddObjectWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B4894 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B4924 (PiDmAddCacheReferenceForObject.c)
 *     PopDripsWatchdogStopWatchdog @ 0x140A27D48 (PopDripsWatchdogStopWatchdog.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A27DB4 (PopDripsWatchdogStartWatchdog.c)
 *     PiDmListRemoveObjectWorker @ 0x140A71708 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PiDmObjectManagerAcquireExclusiveLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
