/*
 * XREFs of KeEnumerateNextProcessor @ 0x140405FA0
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x140200F50 (HalGetMessageRoutingInfo.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiIntSteerLogProc @ 0x1403AF60C (KiIntSteerLogProc.c)
 *     PpmHeteroDistributeUtility @ 0x140408490 (PpmHeteroDistributeUtility.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x14044CEC8 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 *     PpmHeteroDetectHgsCores @ 0x140483158 (PpmHeteroDetectHgsCores.c)
 *     PpmEstimateIdleDuration @ 0x1404B28E4 (PpmEstimateIdleDuration.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x1404BB1C8 (PpmParkEvalualteSmtUnparkPolicy.c)
 *     KeFreezeExecution @ 0x1404D6470 (KeFreezeExecution.c)
 *     KiSendThawExecution @ 0x1404D91B0 (KiSendThawExecution.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404EA450 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkComputeUnparkMask @ 0x1404EAC14 (PpmParkComputeUnparkMask.c)
 *     HalSendNMI @ 0x140541990 (HalSendNMI.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x1405435E8 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x140594720 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x140596F50 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405988A0 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059CBDC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiAcquirePrcbLocksForGroupAffinity @ 0x1405AD2A0 (KiAcquirePrcbLocksForGroupAffinity.c)
 *     KiReleasePrcbLocksForGroupAffinity @ 0x1405AD760 (KiReleasePrcbLocksForGroupAffinity.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B0CBC (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405B2148 (KiAssignCooperativeIdleSearchContexts.c)
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405B243C (KiAssignSubNodeSharedReadyQueues.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405B8408 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiCpuPartitionUpdatePrcbs @ 0x1405BC2D4 (KiCpuPartitionUpdatePrcbs.c)
 *     KiSrcuInitializeTopology @ 0x1405BCF88 (KiSrcuInitializeTopology.c)
 *     KiSendFreeze @ 0x1405BDEE4 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C17E0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C5508 (KiAltContextWorkQueueAddItem.c)
 *     PopDetermineBucketFrequencies @ 0x1405C8F58 (PopDetermineBucketFrequencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405C998C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x1405CA464 (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405CA858 (PpmIdleWaitForDependentTransitions.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D23A8 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D2974 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140651E4C (WheaFlushETWEventsAddWorkRtn.c)
 *     MiDbgPteWriteInProgress @ 0x140673798 (MiDbgPteWriteInProgress.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x14072EBAC (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmPerfResizeHistoryAll @ 0x140743B38 (PpmPerfResizeHistoryAll.c)
 *     PpmPerfGetBrandedFrequency @ 0x140AB78D8 (PpmPerfGetBrandedFrequency.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AC46CC (PpmHvEnableQosEnlightenment.c)
 *     PnprQuiesceProcessors @ 0x140B44B74 (PnprQuiesceProcessors.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C190EC (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C239E8 (PspCopyNodeRelativeMaskToAffinityEx.c)
 *     VslConnectSwInterrupt @ 0x140C53D9C (VslConnectSwInterrupt.c)
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
      *a1 = *((_DWORD *)qword_140F216A8 + 64 * v5 + (unsigned int)(unsigned __int8)v6);
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
