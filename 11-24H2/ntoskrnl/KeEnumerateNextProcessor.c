/*
 * XREFs of KeEnumerateNextProcessor @ 0x140405740
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x1402B4240 (HalGetMessageRoutingInfo.c)
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140443850 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 *     PpmHeteroDetectHgsCores @ 0x14047F098 (PpmHeteroDetectHgsCores.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x1404B3B5C (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmEstimateIdleDuration @ 0x1404BC1F4 (PpmEstimateIdleDuration.c)
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     KiSendThawExecution @ 0x1404D1680 (KiSendThawExecution.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1404E26D8 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404E3AD0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1404E3F40 (PpmHeteroDistributeUtility.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404E5250 (PpmParkCalculateCoreParkingMask.c)
 *     HalSendNMI @ 0x140541B10 (HalSendNMI.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140543798 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x140594DB0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x1405975E0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140598F30 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059D2EC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiAcquirePrcbLocksForGroupAffinity @ 0x1405ADBA0 (KiAcquirePrcbLocksForGroupAffinity.c)
 *     KiReleasePrcbLocksForGroupAffinity @ 0x1405AE060 (KiReleasePrcbLocksForGroupAffinity.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B15EC (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405B32DC (KiAssignCooperativeIdleSearchContexts.c)
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405B35D0 (KiAssignSubNodeSharedReadyQueues.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405B98D8 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiCpuPartitionUpdatePrcbs @ 0x1405BD834 (KiCpuPartitionUpdatePrcbs.c)
 *     KiSrcuInitializeTopology @ 0x1405BE5C8 (KiSrcuInitializeTopology.c)
 *     KiSendFreeze @ 0x1405BF500 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C32B0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C7258 (KiAltContextWorkQueueAddItem.c)
 *     PopDetermineBucketFrequencies @ 0x1405CABD8 (PopDetermineBucketFrequencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405CB75C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x1405CC234 (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405CC628 (PpmIdleWaitForDependentTransitions.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D4400 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D49AC (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 *     PpmHeteroComputeCoreParkingUtilitiesEx @ 0x1405DD6A8 (PpmHeteroComputeCoreParkingUtilitiesEx.c)
 *     PpmHeteroDistributeUtilityEx @ 0x1405DDDF4 (PpmHeteroDistributeUtilityEx.c)
 *     PpmHeteroRestrictToFavoredClassEx @ 0x1405DE400 (PpmHeteroRestrictToFavoredClassEx.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E0904 (PpmParkDistributeUtilityEx.c)
 *     PpmParkFindOverUtilizedProcessorsEx @ 0x1405E0D74 (PpmParkFindOverUtilizedProcessorsEx.c)
 *     PpmParkInitParkNode @ 0x1405E0E1C (PpmParkInitParkNode.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065C5A4 (WheaFlushETWEventsAddWorkRtn.c)
 *     MiDbgPteWriteInProgress @ 0x1406801B8 (MiDbgPteWriteInProgress.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140738D6C (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmPerfResizeHistoryAll @ 0x14074DF2C (PpmPerfResizeHistoryAll.c)
 *     PpmPerfGetBrandedFrequency @ 0x140AB6C38 (PpmPerfGetBrandedFrequency.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AC9098 (PpmHvEnableQosEnlightenment.c)
 *     PnprQuiesceProcessors @ 0x140B56BC4 (PnprQuiesceProcessors.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C2C308 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C36DF4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 *     VslConnectSwInterrupt @ 0x140C6722C (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  int v5; // r9d
  unsigned __int64 v6; // r8
  __int64 result; // rax
  unsigned __int16 v8; // r9

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  while ( 1 )
  {
    v4 = (unsigned __int64)a2[1];
    v5 = *((unsigned __int16 *)a2 + 8);
    if ( v4 )
    {
      _BitScanForward64(&v6, v4);
      a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v6));
      result = 0LL;
      *a1 = *((_DWORD *)qword_140F22998 + 64 * v5 + (unsigned int)(unsigned __int8)v6);
      return result;
    }
    v8 = v5 + 1;
    *((_WORD *)a2 + 8) = v8;
    if ( v8 >= v3 )
      break;
    a2[1] = *(unsigned __int16 **)&(*a2)[4 * v8 + 4];
  }
  return 3221226021LL;
}
