/*
 * XREFs of SmAllocEx @ 0x14044AB68
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140246820 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140449D18 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x14044AAA4 (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     SmFpPreAllocate @ 0x1404C3258 (SmFpPreAllocate.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x14060A1D8 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14060ABAC (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060EACC (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14060EBC4 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060F110 (SmRecordDecompressionFailureDumpPayload.c)
 *     SmProcessListRequest @ 0x140797FD8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140798698 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140798E7C (SmcProcessCreateRequest.c)
 *     SmKmKeyGenNewKey @ 0x14079A1C4 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14079A3D4 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B5E8 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14079BA38 (SmCrEncStart.c)
 *     SmHwAcceleratorCreate @ 0x14079BC3C (SmHwAcceleratorCreate.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BE58 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14079C8D8 (SmHwAcceleratorParitionCtxCreate.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14079CCB0 (SmHwAcceleratorPartitionMgrStart.c)
 *     SmcStoreCreate @ 0x14079D7E4 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14079DD30 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14079E1A8 (SmcStoreSlotReserve.c)
 *     SmCreatePartition @ 0x140A3ECF4 (SmCreatePartition.c)
 *     SmpKeyedStoreCreate @ 0x140A42B64 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x140A42DD4 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x140A432D4 (SmKmStoreAdd.c)
 *     SmKmFileInfoDuplicate @ 0x140AB181C (SmKmFileInfoDuplicate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 */

__int64 __fastcall SmAllocEx(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == -1 )
    return ExAllocatePool2(0x40uLL);
  else
    return ExAllocatePool3(0x40uLL, 1);
}
