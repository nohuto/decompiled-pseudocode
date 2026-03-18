/*
 * XREFs of SmAllocEx @ 0x14039350C
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140207EA4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreEntryGet @ 0x1403243B0 (SmpKeyedStoreEntryGet.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x140393448 (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x140393D00 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403941C8 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmFpPreAllocate @ 0x1404C4BB8 (SmFpPreAllocate.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x1405FDCE8 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1405FEA9C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140602B0C (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140602C04 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140603150 (SmRecordDecompressionFailureDumpPayload.c)
 *     SmProcessListRequest @ 0x140788C08 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1407892C8 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140789AAC (SmcProcessCreateRequest.c)
 *     SmKmKeyGenNewKey @ 0x14078ADFC (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14078B00C (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14078C220 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14078C678 (SmCrEncStart.c)
 *     SmHwAcceleratorCreate @ 0x14078C87C (SmHwAcceleratorCreate.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14078CA98 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14078D518 (SmHwAcceleratorParitionCtxCreate.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14078D8F0 (SmHwAcceleratorPartitionMgrStart.c)
 *     SmcStoreCreate @ 0x14078E424 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14078E970 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14078EDE8 (SmcStoreSlotReserve.c)
 *     SmpKeyedStoreCreate @ 0x1409C1434 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x1409C16A4 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x1409C1B9C (SmKmStoreAdd.c)
 *     SmCreatePartition @ 0x140A3D854 (SmCreatePartition.c)
 *     SmKmFileInfoDuplicate @ 0x140AAC5AC (SmKmFileInfoDuplicate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B64430 (ExAllocatePool3.c)
 */

__int64 __fastcall SmAllocEx(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == -1 )
    return ExAllocatePool2(0x40uLL);
  else
    return ExAllocatePool3(0x40uLL, 1);
}
