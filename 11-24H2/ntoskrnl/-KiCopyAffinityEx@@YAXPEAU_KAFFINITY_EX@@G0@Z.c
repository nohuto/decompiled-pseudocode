/*
 * XREFs of ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x140200488 (PpmParkComputeUnparkMask.c)
 *     KeSetAffinityProcess @ 0x140202B7C (KeSetAffinityProcess.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14021061C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KiComputeThreadAffinity @ 0x14029AC34 (KiComputeThreadAffinity.c)
 *     KiComputeCpuSetAffinity @ 0x14029B010 (KiComputeCpuSetAffinity.c)
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1403528BC (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1403AFA9C (KeFlushProcessWriteBuffers.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1403B0E50 (KxFlushNonGlobalTb.c)
 *     KeQueryAffinityProcess @ 0x1403B1570 (KeQueryAffinityProcess.c)
 *     KiSetAffinityThread @ 0x1403B1A08 (KiSetAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403B2A30 (KeSetUserGroupAffinityThread.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     PpmParkReportMask @ 0x1403C88E0 (PpmParkReportMask.c)
 *     KeChangeMemoryAttributes @ 0x1403CA178 (KeChangeMemoryAttributes.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1403CAED4 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiComputeHeteroConfig @ 0x140438A8C (KiComputeHeteroConfig.c)
 *     KeQueryUserAffinityThread @ 0x14048AFC8 (KeQueryUserAffinityThread.c)
 *     KeSynchronizeAddressPolicy @ 0x14048C814 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A7090 (KeSynchronizeSecurityDomain.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404CEF10 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404E752C (KeGetTopologySiblingAffinityForProcessor.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F4D3C (KiQueryCpuPartitionAffinity.c)
 *     HalpNmiReboot @ 0x140559C54 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x14055A820 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x14056A3A0 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B5474 (KeUpdateProcessorRestrictionsEx.c)
 *     KiStartPrcbThread @ 0x1405B7FCC (KiStartPrcbThread.c)
 *     KeCopyAffinityEx @ 0x1405B8190 (KeCopyAffinityEx.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B82AC (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405B836C (KeQuerySystemAvailableCpus.c)
 *     KeQueryActiveProcessorAffinity @ 0x1405BA9D0 (KeQueryActiveProcessorAffinity.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405BFB24 (KeQueryCpuPartitionAffinity.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405C0050 (KiCpuPartitionCheckAffinitization.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405C40C0 (KeGetAffinitizedInterruptsInfo.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C5B80 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405C9918 (KxFlushSingleTb.c)
 *     PoInitiateProcessorWake @ 0x1405CDBE0 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1405CEFE0 (PpmInstallNewIdleDomains.c)
 *     PpmHeteroHgsGetWpsHint @ 0x1405D72A4 (PpmHeteroHgsGetWpsHint.c)
 *     PpmHeteroRestrictToFavoredClassEx @ 0x1405E0DE0 (PpmHeteroRestrictToFavoredClassEx.c)
 *     PpmParkBuildTopologyCandidatesEx @ 0x1405E1B44 (PpmParkBuildTopologyCandidatesEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkInitParkNode @ 0x1405E3894 (PpmParkInitParkNode.c)
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14060A3F4 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     KeInitializeProfileCallback @ 0x1406F65A0 (KeInitializeProfileCallback.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x14073AE3C (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x14073C878 (KeDeleteCpuPartition.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14074A450 (PpmInstallCoordinatedIdleStates.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407A89A8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 *     NtStartProfile @ 0x1407C4440 (NtStartProfile.c)
 *     PspSetEffectiveJobLimits @ 0x1408E6C38 (PspSetEffectiveJobLimits.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 *     HalpReportResourceUsage @ 0x140C0E954 (HalpReportResourceUsage.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C33C18 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     <none>
 */

void __fastcall KiCopyAffinityEx(struct _KAFFINITY_EX *a1, unsigned __int16 a2, struct _KAFFINITY_EX *a3)
{
  unsigned __int16 Count; // cx
  unsigned __int16 v5; // ax
  __int64 v6; // rcx
  $B38C3B1372D6E954799962D5DD404846 *v7; // rdx
  __int64 v8; // r10
  signed __int64 v9; // r8

  Count = a3->Count;
  if ( a3->Count > a2 )
    Count = a2;
  a1->Count = Count;
  v5 = 0;
  a1->Size = a2;
  a1->Reserved = 0;
  if ( Count )
  {
    v7 = &a1->8;
    v8 = Count;
    v9 = (char *)a3 - (char *)a1;
    v5 = Count;
    do
    {
      v7->Bitmap[0] = *(unsigned __int64 *)((char *)v7->Bitmap + v9);
      v7 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v7 + 8);
      --v8;
    }
    while ( v8 );
  }
  for ( ; v5 < a1->Size; a1->Bitmap[v6] = 0LL )
    v6 = v5++;
}
