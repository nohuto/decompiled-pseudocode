/*
 * XREFs of KeIsEmptyAffinityEx @ 0x1403B55D0
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x140203D90 (PPmHeteroHgsUpdateOrderValue.c)
 *     KeSetUserAffinityThread @ 0x140209564 (KeSetUserAffinityThread.c)
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     KiComputeCpuSetAffinity @ 0x14029B010 (KiComputeCpuSetAffinity.c)
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402A0034 (KiSendClockInterruptToTargetProcessor.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1403B5288 (KiIntRedirectQueueRequestOnProcessor.c)
 *     HalpQueryProfileSourceList @ 0x1403B53B8 (HalpQueryProfileSourceList.c)
 *     HalRequestClockInterrupt @ 0x1403B5510 (HalRequestClockInterrupt.c)
 *     KiStopProfileTarget @ 0x1403C8500 (KiStopProfileTarget.c)
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140439E44 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x14044C950 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x140464090 (KeRemoveQueueDpcEx.c)
 *     KiComputeHeteroSet @ 0x1404AD7DC (KiComputeHeteroSet.c)
 *     HalpQueryProfileSource @ 0x1404BBCB0 (HalpQueryProfileSource.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404CEF10 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055D8D4 (EmonReleaseProfileResourcesInternal.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405BBBB0 (KiGetNextTimerExpirationDueTime.c)
 *     PoInitiateProcessorWake @ 0x1405CDBE0 (PoInitiateProcessorWake.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x14073AE3C (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x14073C878 (KeDeleteCpuPartition.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140775288 (PspSetProcessAffinityUpdateMode.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A8694 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     PspSetEffectiveJobLimits @ 0x1408E6C38 (PspSetEffectiveJobLimits.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A2B570 (PpmHeteroComputeRelativePerformance.c)
 *     RtlUpdateSwapReference @ 0x140A36190 (RtlUpdateSwapReference.c)
 *     PpmParkParkingAvailable @ 0x140A723C0 (PpmParkParkingAvailable.c)
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     PsInitializeBootCpuPartitions @ 0x140C3489C (PsInitializeBootCpuPartitions.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C34CB4 (PspCopyNodeRelativeMaskToAffinityEx.c)
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
