/*
 * XREFs of KiQueryUnbiasedInterruptTime @ 0x1404251D0
 * Callers:
 *     MiCheckFreeModifiedReservations @ 0x1402D00FC (MiCheckFreeModifiedReservations.c)
 *     MiAdjustModifiedPageLoad @ 0x1402D2864 (MiAdjustModifiedPageLoad.c)
 *     MiLogPeriodicTelemetry @ 0x1402D2E24 (MiLogPeriodicTelemetry.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140399E40 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140494F94 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1404C229C (PopRecordPoIrpBlackboxInformation.c)
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14060B338 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
 *     FsRtlpOplockPerfPrepareToSendData @ 0x14070BD04 (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSummarizeData @ 0x14070C164 (FsRtlpOplockPerfSummarizeData.c)
 *     PopEtEnergyTrackerCreate @ 0x14075DC60 (PopEtEnergyTrackerCreate.c)
 *     sub_1407B85B0 @ 0x1407B85B0 (sub_1407B85B0.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407DDB44 (CmpInitializeDelayedCloseTable.c)
 *     MiGenerateSecureCookie @ 0x1407EDAC4 (MiGenerateSecureCookie.c)
 *     HvMarkBaseBlockDirty @ 0x140931488 (HvMarkBaseBlockDirty.c)
 *     PsFreezeProcess @ 0x14093A750 (PsFreezeProcess.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409D2630 (ObpProcessRemoveObjectQueue.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     PopBlackBoxDirectAccess @ 0x140AB5724 (PopBlackBoxDirectAccess.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     PopEtEnergyTrackerQuery @ 0x140AC9770 (PopEtEnergyTrackerQuery.c)
 *     PspThreadDelete @ 0x140AD1250 (PspThreadDelete.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140B5F640 (PopBroadcastBlameBugcheckCallback.c)
 *     MmVerifierTrimMemory @ 0x140BA47F8 (MmVerifierTrimMemory.c)
 *     FsRtlInitializeOplockPerf @ 0x140C192F4 (FsRtlInitializeOplockPerf.c)
 *     PopDiagInitialize @ 0x140C2EEA0 (PopDiagInitialize.c)
 *     PspInitPhase2 @ 0x140C3516C (PspInitPhase2.c)
 *     ExpWorkerInitialization @ 0x140C42F00 (ExpWorkerInitialization.c)
 *     CmpInitializeTransactions @ 0x140C4A69C (CmpInitializeTransactions.c)
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     <none>
 */

__int64 KiQueryUnbiasedInterruptTime()
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
