/*
 * XREFs of HalpDisableInterrupts @ 0x140288F50
 * Callers:
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     KiInsertQueueDpc @ 0x140252DA0 (KiInsertQueueDpc.c)
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     KiCheckForTimerExpiration @ 0x140273F20 (KiCheckForTimerExpiration.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     HalRequestSoftwareInterrupt @ 0x14028F270 (HalRequestSoftwareInterrupt.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F3D40 (KiRequestSoftwareInterrupt.c)
 *     HalpCollectPmcCounters @ 0x14030CF90 (HalpCollectPmcCounters.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140350FB0 (KiStartThreadCycleAccumulationContextSwap.c)
 *     MiDetachFromWorkingSet @ 0x1403C31E0 (MiDetachFromWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1403C41A0 (KeUnstackDetachProcess.c)
 *     KiRequestTimer2Expiration @ 0x14041E04C (KiRequestTimer2Expiration.c)
 *     HalpAcquireCmosSpinLock @ 0x14042DE18 (HalpAcquireCmosSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x140445BA4 (HalpInterruptSetLineStateInternal.c)
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 *     HalpTimerSetProfilingTarget @ 0x1404C0B34 (HalpTimerSetProfilingTarget.c)
 *     HalpFlushTLB @ 0x1404F281C (HalpFlushTLB.c)
 *     HalpInterruptResetThisProcessor @ 0x14053F4E0 (HalpInterruptResetThisProcessor.c)
 *     HalSendNMI @ 0x140541990 (HalSendNMI.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x140541FC4 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpReboot @ 0x14054237C (HalpReboot.c)
 *     HalpTimerClockActivate @ 0x140544090 (HalpTimerClockActivate.c)
 *     HalpTscCompatibilitySynchronization @ 0x140546AF4 (HalpTscCompatibilitySynchronization.c)
 *     HalpTscFallback @ 0x140546C20 (HalpTscFallback.c)
 *     HalpTscSynchronizationWorker @ 0x140547070 (HalpTscSynchronizationWorker.c)
 *     HalpTimerResetProfileAdjustment @ 0x140547640 (HalpTimerResetProfileAdjustment.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1405498F0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalEfiResetSystem @ 0x140549DC8 (HalEfiResetSystem.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553CEC (HalpInterruptInitializeLocalUnit.c)
 *     HalpTimerUpdateApiConsumers @ 0x14055EDF8 (HalpTimerUpdateApiConsumers.c)
 *     HalpInterruptStartProcessor @ 0x140B3BED0 (HalpInterruptStartProcessor.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140B3F7D0 (HalpDpOfflineProcessorForReplace.c)
 *     HalpInterruptReinitialize @ 0x140B5AD18 (HalpInterruptReinitialize.c)
 * Callees:
 *     <none>
 */

bool HalpDisableInterrupts()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  return (v1 & 0x200) != 0;
}
