/*
 * XREFs of InitializeSListHead @ 0x14045FE80
 * Callers:
 *     EtwpInitializeApcPool @ 0x14045F280 (EtwpInitializeApcPool.c)
 *     ExInitializePagedLookasideListInternal @ 0x14045F320 (ExInitializePagedLookasideListInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14045F540 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14045FB10 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x14045FC80 (ExInitializeLookasideListExInternal.c)
 *     HvlpSetupCachedHypercallPages @ 0x140585504 (HvlpSetupCachedHypercallPages.c)
 *     RtlpHpVsSlotCreate @ 0x1406074FC (RtlpHpVsSlotCreate.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x14060A1D8 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14060A68C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiInitializeNuma @ 0x140668DC0 (MiInitializeNuma.c)
 *     MiInitializePageFaultResources @ 0x1406785C8 (MiInitializePageFaultResources.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x14068004C (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiAbsorbPossibleEngineChanges @ 0x14068F0A4 (MiAbsorbPossibleEngineChanges.c)
 *     RtlpDynamicLookasideInitialize @ 0x1406A1B78 (RtlpDynamicLookasideInitialize.c)
 *     PfTInitialize @ 0x1407468B4 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140748A7C (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14077F13C (RtlStdInitializeStackDatabase.c)
 *     WdipSemInitializeGlobalState @ 0x1407A0E2C (WdipSemInitializeGlobalState.c)
 *     WdipSemFreePool @ 0x1407A27F8 (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B1F9C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1407B2624 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1407B26B8 (EtwpCovSampLookasideInitialize.c)
 *     MiInitializeSections @ 0x1407EB7A8 (MiInitializeSections.c)
 *     MiInitializePartition @ 0x1407EC758 (MiInitializePartition.c)
 *     MiInitializePartitionFreeZeroLists @ 0x1407ECDEC (MiInitializePartitionFreeZeroLists.c)
 *     MiCreatePagefile @ 0x1407EDFA0 (MiCreatePagefile.c)
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 *     EtwpEnableStackCaching @ 0x140A443E8 (EtwpEnableStackCaching.c)
 *     KiInitPrcb @ 0x140B56204 (KiInitPrcb.c)
 *     PfTAccessTracingInitialize @ 0x140B5B550 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140B6E3BC (ExInitializeSystemLookasideList.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140B8B994 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140B9A3F0 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C5C384 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
