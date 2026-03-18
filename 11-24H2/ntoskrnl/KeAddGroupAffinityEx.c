/*
 * XREFs of KeAddGroupAffinityEx @ 0x140257100
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x140200488 (PpmParkComputeUnparkMask.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140201414 (KiSoftParkElectionUnparkProcessor.c)
 *     KeSetAffinityProcess @ 0x140202B7C (KeSetAffinityProcess.c)
 *     PoCopyDeepIdleMask @ 0x140205068 (PoCopyDeepIdleMask.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140256790 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14029726C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402979F0 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x14030BBBC (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1403528BC (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiIntSteerConnect @ 0x1403B7680 (KiIntSteerConnect.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x1403B7F18 (KiIntSteerChooseInitialTargetProcessors.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1404021A4 (KiPrepareFlushCurrentAffinity.c)
 *     PpmGetIdleConstrainedMask @ 0x1404B2AEC (PpmGetIdleConstrainedMask.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C6BDC (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404CEF10 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     PpmParkComputeDiff @ 0x1404EE290 (PpmParkComputeDiff.c)
 *     HvlMapDeviceInterrupt @ 0x140587750 (HvlMapDeviceInterrupt.c)
 *     KeCpuSetQueryUnparkRecommendationEx @ 0x1405BF94C (KeCpuSetQueryUnparkRecommendationEx.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405C0050 (KiCpuPartitionCheckAffinitization.c)
 *     KiExtendProcessAffinity @ 0x1405C90F8 (KiExtendProcessAffinity.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1405CEA0C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D6E5C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 *     HalAllocateHardwareCounters @ 0x1406FD670 (HalAllocateHardwareCounters.c)
 *     NtSetInformationCpuPartition @ 0x140775EC0 (NtSetInformationCpuPartition.c)
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140A72528 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkApplyForcedMask @ 0x140ACAD80 (PpmParkApplyForcedMask.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     KiSetCacheInformationAmd @ 0x140B59874 (KiSetCacheInformationAmd.c)
 *     KiSetStandardizedCacheInformation @ 0x140B5A508 (KiSetStandardizedCacheInformation.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140C30D18 (PopReadLegacySimulatedArchitecturalClasses.c)
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
