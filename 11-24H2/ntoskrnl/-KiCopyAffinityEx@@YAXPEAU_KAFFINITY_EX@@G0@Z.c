/*
 * XREFs of ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30
 * Callers:
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 *     KiComputeCpuSetAffinity @ 0x1402A9B00 (KiComputeCpuSetAffinity.c)
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402B0944 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14033997C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     KxFlushEntireTb @ 0x14039EFB4 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x14039F660 (KxFlushNonGlobalTb.c)
 *     KeQueryAffinityProcess @ 0x14039FD80 (KeQueryAffinityProcess.c)
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A1240 (KeSetUserGroupAffinityThread.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     PpmParkReportMask @ 0x1403A3480 (PpmParkReportMask.c)
 *     KeChangeMemoryAttributes @ 0x1403A4D48 (KeChangeMemoryAttributes.c)
 *     KiComputeHeteroConfig @ 0x14042B64C (KiComputeHeteroConfig.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KeQueryUserAffinityThread @ 0x140485DF8 (KeQueryUserAffinityThread.c)
 *     KeSynchronizeAddressPolicy @ 0x140487534 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A1ABC (KeSynchronizeSecurityDomain.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404C80DC (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404DE1EC (KeGetTopologySiblingAffinityForProcessor.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F263C (KiQueryCpuPartitionAffinity.c)
 *     HalpNmiReboot @ 0x140557884 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x140558450 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x140567830 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 *     KiStartPrcbThread @ 0x1405B55AC (KiStartPrcbThread.c)
 *     KeCopyAffinityEx @ 0x1405B5770 (KeCopyAffinityEx.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B588C (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405B594C (KeQuerySystemAvailableCpus.c)
 *     KeQueryActiveProcessorAffinity @ 0x1405B8000 (KeQueryActiveProcessorAffinity.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405BD154 (KeQueryCpuPartitionAffinity.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405C16E4 (KeGetAffinitizedInterruptsInfo.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C32B0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405C7048 (KxFlushSingleTb.c)
 *     PoInitiateProcessorWake @ 0x1405CB300 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1405CC700 (PpmInstallNewIdleDomains.c)
 *     PpmHeteroHgsGetWpsHint @ 0x1405D4848 (PpmHeteroHgsGetWpsHint.c)
 *     PpmHeteroRestrictToFavoredClassEx @ 0x1405DE400 (PpmHeteroRestrictToFavoredClassEx.c)
 *     PpmParkBuildTopologyCandidatesEx @ 0x1405DF150 (PpmParkBuildTopologyCandidatesEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkInitParkNode @ 0x1405E0E1C (PpmParkInitParkNode.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1406089B4 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     KeInitializeProfileCallback @ 0x1406F45A0 (KeInitializeProfileCallback.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140738D6C (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x14073A7A8 (KeDeleteCpuPartition.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140748780 (PpmInstallCoordinatedIdleStates.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407A8AE8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x1407C1A4C (ExpProfileCreate.c)
 *     NtStartProfile @ 0x1407C2260 (NtStartProfile.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PspSetEffectiveJobLimits @ 0x140A2C888 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 *     HalpReportResourceUsage @ 0x140C10954 (HalpReportResourceUsage.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C35D58 (PpmHeteroInitializeIntelWpsSupport.c)
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
