/*
 * XREFs of KeAddGroupAffinityEx @ 0x140287710
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140286DA0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402B0944 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiIntSteerConnect @ 0x1402B3934 (KiIntSteerConnect.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x1402B3FD8 (KiIntSteerChooseInitialTargetProcessors.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x1402DAC1C (KiAddProcessorToSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140329B04 (KiSoftParkElectionUnparkProcessor.c)
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     PoCopyDeepIdleMask @ 0x14032C648 (PoCopyDeepIdleMask.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1403FC724 (KiPrepareFlushCurrentAffinity.c)
 *     PpmGetIdleConstrainedMask @ 0x1404AD2F4 (PpmGetIdleConstrainedMask.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C003C (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404C80DC (KeRevertToUserMultipleGroupAffinityThread.c)
 *     PpmParkComputeDiff @ 0x1404E5A28 (PpmParkComputeDiff.c)
 *     HvlMapDeviceInterrupt @ 0x140584AD0 (HvlMapDeviceInterrupt.c)
 *     KeCpuSetQueryUnparkRecommendationEx @ 0x1405BCF7C (KeCpuSetQueryUnparkRecommendationEx.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 *     KiExtendProcessAffinity @ 0x1405C6828 (KiExtendProcessAffinity.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1405CC12C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D4400 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     HalAllocateHardwareCounters @ 0x1406FB2B0 (HalAllocateHardwareCounters.c)
 *     NtSetInformationCpuPartition @ 0x1407760E0 (NtSetInformationCpuPartition.c)
 *     ExpProfileCreate @ 0x1407C1A4C (ExpProfileCreate.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140A6B908 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkApplyForcedMask @ 0x140AC893C (PpmParkApplyForcedMask.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     KiSetCacheInformationAmd @ 0x140B5B8F4 (KiSetCacheInformationAmd.c)
 *     KiSetStandardizedCacheInformation @ 0x140B5C570 (KiSetStandardizedCacheInformation.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140C32E38 (PopReadLegacySimulatedArchitecturalClasses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *a1 > a2 )
    goto LABEL_2;
  if ( a1[1] > a2 )
  {
    *a1 = a2 + 1;
LABEL_2:
    result = a2;
    *(_QWORD *)&a1[4 * a2 + 4] |= a3;
  }
  return result;
}
