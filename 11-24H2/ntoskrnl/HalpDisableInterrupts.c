/*
 * XREFs of HalpDisableInterrupts @ 0x1402C9320
 * Callers:
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     KiCheckForTimerExpiration @ 0x1402AB5D0 (KiCheckForTimerExpiration.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402CB2C0 (KeUnstackDetachProcess.c)
 *     HalpCollectPmcCounters @ 0x1402D1090 (HalpCollectPmcCounters.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x1402DAC90 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiRequestSoftwareInterrupt @ 0x1402DC510 (KiRequestSoftwareInterrupt.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     HalRequestSoftwareInterrupt @ 0x140369040 (HalRequestSoftwareInterrupt.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     MiDetachFromWorkingSet @ 0x1403E1C30 (MiDetachFromWorkingSet.c)
 *     KiRequestTimer2Expiration @ 0x14040F090 (KiRequestTimer2Expiration.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 *     HalpTimerSetProfilingTarget @ 0x1404BA774 (HalpTimerSetProfilingTarget.c)
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 *     HalpFlushTLB @ 0x1404F29C4 (HalpFlushTLB.c)
 *     HalpInterruptResetThisProcessor @ 0x14053F610 (HalpInterruptResetThisProcessor.c)
 *     HalSendNMI @ 0x140541B10 (HalSendNMI.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x140542140 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpReboot @ 0x140542500 (HalpReboot.c)
 *     HalpTimerClockActivate @ 0x140544240 (HalpTimerClockActivate.c)
 *     HalpTscCompatibilitySynchronization @ 0x140546CA4 (HalpTscCompatibilitySynchronization.c)
 *     HalpTscFallback @ 0x140546DD0 (HalpTscFallback.c)
 *     HalpTscSynchronizationWorker @ 0x140547220 (HalpTscSynchronizationWorker.c)
 *     HalpTimerResetProfileAdjustment @ 0x1405477F0 (HalpTimerResetProfileAdjustment.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140549AA0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalEfiResetSystem @ 0x140549F78 (HalEfiResetSystem.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553F2C (HalpInterruptInitializeLocalUnit.c)
 *     HalpTimerUpdateApiConsumers @ 0x14055F328 (HalpTimerUpdateApiConsumers.c)
 *     HalpInterruptStartProcessor @ 0x140B4DF10 (HalpInterruptStartProcessor.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140B51820 (HalpDpOfflineProcessorForReplace.c)
 *     HalpInterruptReinitialize @ 0x140B6C0DC (HalpInterruptReinitialize.c)
 * Callees:
 *     <none>
 */

bool HalpDisableInterrupts()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  return (v1 & 0x200) != 0;
}
