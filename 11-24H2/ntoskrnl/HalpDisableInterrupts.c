/*
 * XREFs of HalpDisableInterrupts @ 0x140320790
 * Callers:
 *     KiInsertQueueDpc @ 0x140254310 (KiInsertQueueDpc.c)
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     KiRequestSoftwareInterrupt @ 0x140297BA0 (KiRequestSoftwareInterrupt.c)
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 *     KiCheckForTimerExpiration @ 0x14029CAE0 (KiCheckForTimerExpiration.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x14030BC30 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140322730 (KeUnstackDetachProcess.c)
 *     HalpCollectPmcCounters @ 0x140328500 (HalpCollectPmcCounters.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     HalRequestSoftwareInterrupt @ 0x14034AB60 (HalRequestSoftwareInterrupt.c)
 *     MiDetachFromWorkingSet @ 0x140379390 (MiDetachFromWorkingSet.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     KiRequestTimer2Expiration @ 0x14041B550 (KiRequestTimer2Expiration.c)
 *     HalpAcquireCmosSpinLock @ 0x140425EE8 (HalpAcquireCmosSpinLock.c)
 *     HalpTimerSetProfilingTarget @ 0x1404BF240 (HalpTimerSetProfilingTarget.c)
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HalpFlushTLB @ 0x1404F50C4 (HalpFlushTLB.c)
 *     HalpInterruptResetThisProcessor @ 0x140541D10 (HalpInterruptResetThisProcessor.c)
 *     HalSendNMI @ 0x1405441C0 (HalSendNMI.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x1405447F0 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpReboot @ 0x140544C40 (HalpReboot.c)
 *     HalpTimerClockActivate @ 0x140546980 (HalpTimerClockActivate.c)
 *     HalpTscCompatibilitySynchronization @ 0x1405493E4 (HalpTscCompatibilitySynchronization.c)
 *     HalpTscFallback @ 0x140549510 (HalpTscFallback.c)
 *     HalpTscSynchronizationWorker @ 0x140549960 (HalpTscSynchronizationWorker.c)
 *     HalpTimerResetProfileAdjustment @ 0x140549F30 (HalpTimerResetProfileAdjustment.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14054C1E0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalEfiResetSystem @ 0x14054C6B8 (HalEfiResetSystem.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1405565EC (HalpInterruptInitializeLocalUnit.c)
 *     HalpTimerUpdateApiConsumers @ 0x1405616F8 (HalpTimerUpdateApiConsumers.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 *     HalpInterruptStartProcessor @ 0x140B4BED0 (HalpInterruptStartProcessor.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140B4F7D0 (HalpDpOfflineProcessorForReplace.c)
 *     HalpInterruptReinitialize @ 0x140B6A818 (HalpInterruptReinitialize.c)
 * Callees:
 *     <none>
 */

bool HalpDisableInterrupts()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  return (v1 & 0x200) != 0;
}
