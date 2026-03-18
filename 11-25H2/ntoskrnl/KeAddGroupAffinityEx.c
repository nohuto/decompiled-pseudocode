/*
 * XREFs of KeAddGroupAffinityEx @ 0x140256130
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140201794 (KiIntSteerChooseInitialTargetProcessors.c)
 *     KiIntSteerConnect @ 0x14020213C (KiIntSteerConnect.c)
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 *     PoCopyDeepIdleMask @ 0x14026728C (PoCopyDeepIdleMask.c)
 *     KeSetAffinityProcess @ 0x140269780 (KeSetAffinityProcess.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140313EBC (KiSoftParkElectionUnparkProcessor.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x140314F38 (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1403B0BF4 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1403FA0C0 (KiPrepareFlushCurrentAffinity.c)
 *     PpmGetIdleConstrainedMask @ 0x1404B1924 (PpmGetIdleConstrainedMask.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C641C (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404CF0AC (KeRevertToUserMultipleGroupAffinityThread.c)
 *     PpmParkComputeUnparkMask @ 0x1404EAC14 (PpmParkComputeUnparkMask.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     HvlMapDeviceInterrupt @ 0x140583FD0 (HvlMapDeviceInterrupt.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BC120 (KiCpuPartitionCheckAffinitization.c)
 *     KiExtendProcessAffinity @ 0x1405C4C24 (KiExtendProcessAffinity.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1405CA35C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D23A8 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 *     HalAllocateHardwareCounters @ 0x1406F1880 (HalAllocateHardwareCounters.c)
 *     NtSetInformationCpuPartition @ 0x1407664F0 (NtSetInformationCpuPartition.c)
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     KiSetCacheInformationAmd @ 0x140B49850 (KiSetCacheInformationAmd.c)
 *     KiSetStandardizedCacheInformation @ 0x140B4A594 (KiSetStandardizedCacheInformation.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140C1FC18 (PopReadLegacySimulatedArchitecturalClasses.c)
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
