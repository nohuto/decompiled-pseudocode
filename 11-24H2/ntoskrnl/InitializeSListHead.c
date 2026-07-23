/*
 * XREFs of InitializeSListHead @ 0x140454D40
 * Callers:
 *     EtwpInitializeApcPool @ 0x140454140 (EtwpInitializeApcPool.c)
 *     ExInitializePagedLookasideListInternal @ 0x1404541E0 (ExInitializePagedLookasideListInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140454400 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140454B40 (ExInitializeLookasideListExInternal.c)
 *     HvlpSetupCachedHypercallPages @ 0x140582884 (HvlpSetupCachedHypercallPages.c)
 *     RtlpHpVsSlotCreate @ 0x140604AFC (RtlpHpVsSlotCreate.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140608798 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140608C4C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiInitializeNuma @ 0x140669F98 (MiInitializeNuma.c)
 *     MiInitializePageFaultResources @ 0x140679754 (MiInitializePageFaultResources.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x14068124C (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 *     RtlpDynamicLookasideInitialize @ 0x1406A2BC8 (RtlpDynamicLookasideInitialize.c)
 *     PfTInitialize @ 0x140744BA4 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140746D6C (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14077F06C (RtlStdInitializeStackDatabase.c)
 *     WdipSemInitializeGlobalState @ 0x1407A0F3C (WdipSemInitializeGlobalState.c)
 *     WdipSemFreePool @ 0x1407A2908 (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B23EC (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1407B2A74 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1407B2B08 (EtwpCovSampLookasideInitialize.c)
 *     MiInitializeSections @ 0x1407EBD78 (MiInitializeSections.c)
 *     MiInitializePartition @ 0x1407ECD28 (MiInitializePartition.c)
 *     MiInitializePartitionFreeZeroLists @ 0x1407ED3BC (MiInitializePartitionFreeZeroLists.c)
 *     MiCreatePagefile @ 0x1407EE570 (MiCreatePagefile.c)
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     EtwpEnableStackCaching @ 0x140A39C78 (EtwpEnableStackCaching.c)
 *     KiInitPrcb @ 0x140B58254 (KiInitPrcb.c)
 *     PfTAccessTracingInitialize @ 0x140B5D5C0 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140B6FF6C (ExInitializeSystemLookasideList.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140B8D994 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140B9C3F0 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C5E514 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
