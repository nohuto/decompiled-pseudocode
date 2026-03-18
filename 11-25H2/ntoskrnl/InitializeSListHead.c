/*
 * XREFs of InitializeSListHead @ 0x140460EA0
 * Callers:
 *     EtwpInitializeApcPool @ 0x14046029C (EtwpInitializeApcPool.c)
 *     ExInitializePagedLookasideListInternal @ 0x140460340 (ExInitializePagedLookasideListInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140460560 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140460CA0 (ExInitializeLookasideListExInternal.c)
 *     HvlpSetupCachedHypercallPages @ 0x140581D54 (HvlpSetupCachedHypercallPages.c)
 *     RtlpHpVsSlotCreate @ 0x1405FB1BC (RtlpHpVsSlotCreate.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x1405FDCE8 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1405FE19C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiInitializeNuma @ 0x14065D29C (MiInitializeNuma.c)
 *     MiInitializePageFaultResources @ 0x14066CCBC (MiInitializePageFaultResources.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x14067482C (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1406837B4 (MiAbsorbPossibleEngineChanges.c)
 *     RtlpDynamicLookasideInitialize @ 0x140696998 (RtlpDynamicLookasideInitialize.c)
 *     PfTInitialize @ 0x14073A894 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x14073CA6C (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14076FEEC (RtlStdInitializeStackDatabase.c)
 *     WdipSemInitializeGlobalState @ 0x140791A54 (WdipSemInitializeGlobalState.c)
 *     WdipSemFreePool @ 0x140793420 (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407A2BCC (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1407A3254 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1407A32E8 (EtwpCovSampLookasideInitialize.c)
 *     MiInitializeSections @ 0x1407DB908 (MiInitializeSections.c)
 *     MiInitializePartition @ 0x1407DC8B8 (MiInitializePartition.c)
 *     MiInitializePartitionFreeZeroLists @ 0x1407DCF4C (MiInitializePartitionFreeZeroLists.c)
 *     MiCreatePagefile @ 0x1407DE100 (MiCreatePagefile.c)
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     EtwpEnableStackCaching @ 0x140A3FABC (EtwpEnableStackCaching.c)
 *     KiInitPrcb @ 0x140B46260 (KiInitPrcb.c)
 *     PfTAccessTracingInitialize @ 0x140B4B5E0 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140B5F310 (ExInitializeSystemLookasideList.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140B7B9B4 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140B8A410 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C4B004 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
