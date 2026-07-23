/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140371960
 * Callers:
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     KiComputeCpuSetAffinity @ 0x1402A9B00 (KiComputeCpuSetAffinity.c)
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1403179A4 (KiSendClockInterruptToTargetProcessor.c)
 *     KeSetUserAffinityThread @ 0x140330B44 (KeSetUserAffinityThread.c)
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140371618 (KiIntRedirectQueueRequestOnProcessor.c)
 *     HalpQueryProfileSourceList @ 0x140371748 (HalpQueryProfileSourceList.c)
 *     HalRequestClockInterrupt @ 0x1403718A0 (HalRequestClockInterrupt.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14037342C (KiConfigureCpuSetSchedulingInformation.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     KiStopProfileTarget @ 0x1403A55C0 (KiStopProfileTarget.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140443850 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14047BAB4 (PPmHeteroHgsUpdateOrderValue.c)
 *     KiComputeHeteroSet @ 0x1404A7EBC (KiComputeHeteroSet.c)
 *     HalpQueryProfileSource @ 0x1404B6BC0 (HalpQueryProfileSource.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404C80DC (KeRevertToUserMultipleGroupAffinityThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055B504 (EmonReleaseProfileResourcesInternal.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405B91E0 (KiGetNextTimerExpirationDueTime.c)
 *     PoInitiateProcessorWake @ 0x1405CB300 (PoInitiateProcessorWake.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140738D6C (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x14073A7A8 (KeDeleteCpuPartition.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407754A8 (PspSetProcessAffinityUpdateMode.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A87D4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     RtlUpdateSwapReference @ 0x140A2B6A0 (RtlUpdateSwapReference.c)
 *     PspSetEffectiveJobLimits @ 0x140A2C888 (PspSetEffectiveJobLimits.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A65B9C (PpmHeteroComputeRelativePerformance.c)
 *     PpmParkParkingAvailable @ 0x140A6B7A0 (PpmParkParkingAvailable.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     PsInitializeBootCpuPartitions @ 0x140C369DC (PsInitializeBootCpuPartitions.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C36DF4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyAffinityEx(unsigned __int16 *a1)
{
  unsigned __int16 i; // ax

  for ( i = 0; ; ++i )
  {
    if ( i >= *a1 )
      return 1LL;
    if ( *(_QWORD *)&a1[4 * i + 4] )
      break;
  }
  return 0LL;
}
