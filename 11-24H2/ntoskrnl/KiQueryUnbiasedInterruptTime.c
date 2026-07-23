/*
 * XREFs of KiQueryUnbiasedInterruptTime @ 0x140419080
 * Callers:
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     MiAdjustModifiedPageLoad @ 0x140353ADC (MiAdjustModifiedPageLoad.c)
 *     MiLogPeriodicTelemetry @ 0x14035409C (MiLogPeriodicTelemetry.c)
 *     MiCheckFreeModifiedReservations @ 0x14046FF1C (MiCheckFreeModifiedReservations.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14048F854 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1404BD7D4 (PopRecordPoIrpBlackboxInformation.c)
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1406098F8 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 *     FsRtlpOplockPerfPrepareToSendData @ 0x140709898 (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSummarizeData @ 0x140709CF8 (FsRtlpOplockPerfSummarizeData.c)
 *     PopEtEnergyTrackerCreate @ 0x14075CC00 (PopEtEnergyTrackerCreate.c)
 *     sub_1407B8A00 @ 0x1407B8A00 (sub_1407B8A00.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407DE094 (CmpInitializeDelayedCloseTable.c)
 *     MiGenerateSecureCookie @ 0x1407EE094 (MiGenerateSecureCookie.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409C2460 (ObpProcessRemoveObjectQueue.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PopBlackBoxDirectAccess @ 0x140AAFBB4 (PopBlackBoxDirectAccess.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     PopEtEnergyTrackerQuery @ 0x140AC7690 (PopEtEnergyTrackerQuery.c)
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140B616C0 (PopBroadcastBlameBugcheckCallback.c)
 *     MmVerifierTrimMemory @ 0x140BA67F8 (MmVerifierTrimMemory.c)
 *     FsRtlInitializeOplockPerf @ 0x140C1B2E8 (FsRtlInitializeOplockPerf.c)
 *     PopDiagInitialize @ 0x140C30FC0 (PopDiagInitialize.c)
 *     PspInitPhase2 @ 0x140C372AC (PspInitPhase2.c)
 *     ExpWorkerInitialization @ 0x140C45050 (ExpWorkerInitialization.c)
 *     CmpInitializeTransactions @ 0x140C4C838 (CmpInitializeTransactions.c)
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 * Callees:
 *     <none>
 */

__int64 KiQueryUnbiasedInterruptTime()
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
