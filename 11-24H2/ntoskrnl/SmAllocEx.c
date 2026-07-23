/*
 * XREFs of SmAllocEx @ 0x1402F5228
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402F5B40 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x140375CAC (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403767E4 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmFpPreAllocate @ 0x1404BE790 (SmFpPreAllocate.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140608798 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14060916C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060D08C (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14060D184 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060D6D0 (SmRecordDecompressionFailureDumpPayload.c)
 *     SmProcessListRequest @ 0x1407980E8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140798F8C (SmcProcessCreateRequest.c)
 *     SmKmKeyGenNewKey @ 0x14079A2D4 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14079A4E4 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14079BB48 (SmCrEncStart.c)
 *     SmHwAcceleratorCreate @ 0x14079BD4C (SmHwAcceleratorCreate.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BF68 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14079C9E8 (SmHwAcceleratorParitionCtxCreate.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14079CDC0 (SmHwAcceleratorPartitionMgrStart.c)
 *     SmcStoreCreate @ 0x14079D8F4 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14079DE40 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14079E2B8 (SmcStoreSlotReserve.c)
 *     SmCreatePartition @ 0x140A34664 (SmCreatePartition.c)
 *     SmpKeyedStoreCreate @ 0x140A383F4 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x140A38664 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x140A38B64 (SmKmStoreAdd.c)
 *     SmKmFileInfoDuplicate @ 0x140AAC78C (SmKmFileInfoDuplicate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

__int64 __fastcall SmAllocEx(ULONG_PTR a1, ULONG a2, int a3)
{
  if ( a3 == -1 )
    return ExAllocatePool2(0x40uLL, a1, a2);
  else
    return ExAllocatePool3(0x40uLL, 1);
}
