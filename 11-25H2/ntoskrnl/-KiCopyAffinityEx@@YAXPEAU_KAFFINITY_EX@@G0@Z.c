/*
 * XREFs of ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetAffinityProcess @ 0x140269780 (KeSetAffinityProcess.c)
 *     KeChangeMemoryAttributes @ 0x14026A684 (KeChangeMemoryAttributes.c)
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     PpmParkReportMask @ 0x14026BAE0 (PpmParkReportMask.c)
 *     KxFlushEntireTb @ 0x14027043C (KxFlushEntireTb.c)
 *     KeQueryAffinityProcess @ 0x140270FC0 (KeQueryAffinityProcess.c)
 *     KeFlushProcessWriteBuffers @ 0x14027118C (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x14027139C (KxFlushNonGlobalTb.c)
 *     KiSetAffinityThread @ 0x140271884 (KiSetAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1402720F8 (KiComputeThreadAffinity.c)
 *     KiComputeCpuSetAffinity @ 0x1402724D0 (KiComputeCpuSetAffinity.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x1403AE6F4 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1403B0BF4 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiComputeHeteroConfig @ 0x1404283A8 (KiComputeHeteroConfig.c)
 *     KeSetUserGroupAffinityThread @ 0x140469728 (KeSetUserGroupAffinityThread.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404808CC (KeGetTopologySiblingAffinityForProcessor.c)
 *     KeQueryUserAffinityThread @ 0x14048BD38 (KeQueryUserAffinityThread.c)
 *     KeSynchronizeAddressPolicy @ 0x14048D178 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A67FC (KeSynchronizeSecurityDomain.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404CF0AC (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeFreezeExecution @ 0x1404D6470 (KeFreezeExecution.c)
 *     PpmParkComputeUnparkMask @ 0x1404EAC14 (PpmParkComputeUnparkMask.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F0D2C (KiQueryCpuPartitionAffinity.c)
 *     HalpNmiReboot @ 0x140557354 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x140557F20 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405670A0 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiStartPrcbThread @ 0x1405B40DC (KiStartPrcbThread.c)
 *     KeCopyAffinityEx @ 0x1405B42A0 (KeCopyAffinityEx.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B43BC (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405B447C (KeQuerySystemAvailableCpus.c)
 *     KeQueryActiveProcessorAffinity @ 0x1405B6B40 (KeQueryActiveProcessorAffinity.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405BBBF8 (KeQueryCpuPartitionAffinity.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BC120 (KiCpuPartitionCheckAffinitization.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405C0034 (KeGetAffinitizedInterruptsInfo.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C17E0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405C52F8 (KxFlushSingleTb.c)
 *     PoInitiateProcessorWake @ 0x1405C9530 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1405CA930 (PpmInstallNewIdleDomains.c)
 *     PpmHeteroHgsGetWpsHint @ 0x1405D2810 (PpmHeteroHgsGetWpsHint.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1405FDF04 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     KeInitializeProfileCallback @ 0x1406EAD3C (KeInitializeProfileCallback.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x14072EBAC (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x1407305E8 (KeDeleteCpuPartition.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14073E380 (PpmInstallCoordinatedIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407995D8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 *     NtStartProfile @ 0x1407B2640 (NtStartProfile.c)
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 *     PspSetEffectiveJobLimits @ 0x140A33B68 (PspSetEffectiveJobLimits.c)
 *     HalpReportResourceUsage @ 0x140BFD954 (HalpReportResourceUsage.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C229DC (PpmHeteroInitializeIntelWpsSupport.c)
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
