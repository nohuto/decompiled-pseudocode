/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140377880
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x140268694 (PPmHeteroHgsUpdateOrderValue.c)
 *     KiStopProfileTarget @ 0x140269F30 (KiStopProfileTarget.c)
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     KiComputeCpuSetAffinity @ 0x1402724D0 (KiComputeCpuSetAffinity.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402777C0 (KiSendClockInterruptToTargetProcessor.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     KeSetUserAffinityThread @ 0x1403060E4 (KeSetUserAffinityThread.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140377540 (KiIntRedirectQueueRequestOnProcessor.c)
 *     HalpQueryProfileSourceList @ 0x140377670 (HalpQueryProfileSourceList.c)
 *     HalRequestClockInterrupt @ 0x1403777C0 (HalRequestClockInterrupt.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140428DE0 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x14044CEC8 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 *     KiComputeHeteroSet @ 0x1404A598C (KiComputeHeteroSet.c)
 *     HalpQueryProfileSource @ 0x1404BCB50 (HalpQueryProfileSource.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404CF0AC (KeRevertToUserMultipleGroupAffinityThread.c)
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 *     PpmParkComputeUnparkMask @ 0x1404EAC14 (PpmParkComputeUnparkMask.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055AFD4 (EmonReleaseProfileResourcesInternal.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405B7D10 (KiGetNextTimerExpirationDueTime.c)
 *     PoInitiateProcessorWake @ 0x1405C9530 (PoInitiateProcessorWake.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x14072EBAC (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x1407305E8 (KeDeleteCpuPartition.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407658B8 (PspSetProcessAffinityUpdateMode.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407992C4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A21A4C (PpmHeteroComputeRelativePerformance.c)
 *     RtlUpdateSwapReference @ 0x140A308D0 (RtlUpdateSwapReference.c)
 *     PspSetEffectiveJobLimits @ 0x140A33B68 (PspSetEffectiveJobLimits.c)
 *     PpmParkParkingAvailable @ 0x140A4D7C8 (PpmParkParkingAvailable.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     PsInitializeBootCpuPartitions @ 0x140C235D0 (PsInitializeBootCpuPartitions.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C239E8 (PspCopyNodeRelativeMaskToAffinityEx.c)
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
