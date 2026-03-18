/*
 * XREFs of KeEnumerateNextProcessor @ 0x14040D4F0
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x140200488 (PpmParkComputeUnparkMask.c)
 *     HalGetMessageRoutingInfo @ 0x1403B81B0 (HalGetMessageRoutingInfo.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1403CAED4 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x14044C950 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x140464090 (KeRemoveQueueDpcEx.c)
 *     PpmHeteroDetectHgsCores @ 0x140483B78 (PpmHeteroDetectHgsCores.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x1404B8EA0 (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmEstimateIdleDuration @ 0x1404C0C0C (PpmEstimateIdleDuration.c)
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     KiSendThawExecution @ 0x1404D8230 (KiSendThawExecution.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1404EB798 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404EC390 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1404EC800 (PpmHeteroDistributeUtility.c)
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404EDA40 (PpmParkCalculateCoreParkingMask.c)
 *     HalSendNMI @ 0x1405441C0 (HalSendNMI.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140545ED8 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x140597E30 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x14059A660 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x14059BFB0 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405A03BC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiAcquirePrcbLocksForGroupAffinity @ 0x1405B0C30 (KiAcquirePrcbLocksForGroupAffinity.c)
 *     KiReleasePrcbLocksForGroupAffinity @ 0x1405B10F0 (KiReleasePrcbLocksForGroupAffinity.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B4668 (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405B6014 (KiAssignCooperativeIdleSearchContexts.c)
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405B6308 (KiAssignSubNodeSharedReadyQueues.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405BC2A8 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiCpuPartitionUpdatePrcbs @ 0x1405C0204 (KiCpuPartitionUpdatePrcbs.c)
 *     KiSrcuInitializeTopology @ 0x1405C0FF8 (KiSrcuInitializeTopology.c)
 *     KiSendFreeze @ 0x1405C1F30 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C5B80 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C9B28 (KiAltContextWorkQueueAddItem.c)
 *     PopDetermineBucketFrequencies @ 0x1405CD468 (PopDetermineBucketFrequencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405CE03C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x1405CEB14 (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405CEF08 (PpmIdleWaitForDependentTransitions.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D6E5C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D7408 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DF774 (PpmCheckComputeHeteroResponseEx.c)
 *     PpmHeteroComputeCoreParkingUtilitiesEx @ 0x1405E0088 (PpmHeteroComputeCoreParkingUtilitiesEx.c)
 *     PpmHeteroDistributeUtilityEx @ 0x1405E07D4 (PpmHeteroDistributeUtilityEx.c)
 *     PpmHeteroRestrictToFavoredClassEx @ 0x1405E0DE0 (PpmHeteroRestrictToFavoredClassEx.c)
 *     PpmParkApplyPolicyEx @ 0x1405E1344 (PpmParkApplyPolicyEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E337C (PpmParkDistributeUtilityEx.c)
 *     PpmParkFindOverUtilizedProcessorsEx @ 0x1405E37EC (PpmParkFindOverUtilizedProcessorsEx.c)
 *     PpmParkInitParkNode @ 0x1405E3894 (PpmParkInitParkNode.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065DDDC (WheaFlushETWEventsAddWorkRtn.c)
 *     MiDbgPteWriteInProgress @ 0x14067EFB8 (MiDbgPteWriteInProgress.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x14073AE3C (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmPerfResizeHistoryAll @ 0x14074FC08 (PpmPerfResizeHistoryAll.c)
 *     PpmPerfGetBrandedFrequency @ 0x140ABBC18 (PpmPerfGetBrandedFrequency.c)
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 *     PpmHvEnableQosEnlightenment @ 0x140ACB488 (PpmHvEnableQosEnlightenment.c)
 *     PnprQuiesceProcessors @ 0x140B54B74 (PnprQuiesceProcessors.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C2A1E8 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C34CB4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 *     VslConnectSwInterrupt @ 0x140C650B0 (VslConnectSwInterrupt.c)
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
      *a1 = *((_DWORD *)qword_140F21E78 + 64 * v5 + (unsigned int)(unsigned __int8)v6);
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
