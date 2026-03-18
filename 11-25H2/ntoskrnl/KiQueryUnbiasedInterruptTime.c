/*
 * XREFs of KiQueryUnbiasedInterruptTime @ 0x14042F3F0
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14020A790 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     MiCheckFreeModifiedReservations @ 0x1403C0654 (MiCheckFreeModifiedReservations.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiAdjustModifiedPageLoad @ 0x14049364C (MiAdjustModifiedPageLoad.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404959DC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1404C38F0 (PopRecordPoIrpBlackboxInformation.c)
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1405FF240 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 *     FsRtlpOplockPerfPrepareToSendData @ 0x1406FFE24 (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSummarizeData @ 0x140700284 (FsRtlpOplockPerfSummarizeData.c)
 *     PopEtEnergyTrackerCreate @ 0x140751240 (PopEtEnergyTrackerCreate.c)
 *     sub_1407A9100 @ 0x1407A9100 (sub_1407A9100.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407CE384 (CmpInitializeDelayedCloseTable.c)
 *     MiGenerateSecureCookie @ 0x1407DDC24 (MiGenerateSecureCookie.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409CF320 (ObpProcessRemoveObjectQueue.c)
 *     HvMarkBaseBlockDirty @ 0x140A4B658 (HvMarkBaseBlockDirty.c)
 *     PopBlackBoxDirectAccess @ 0x140AB0734 (PopBlackBoxDirectAccess.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     PspThreadDelete @ 0x140AC7750 (PspThreadDelete.c)
 *     PsFreezeProcess @ 0x140AC7BE0 (PsFreezeProcess.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140B4F500 (PopBroadcastBlameBugcheckCallback.c)
 *     MmVerifierTrimMemory @ 0x140B94818 (MmVerifierTrimMemory.c)
 *     FsRtlInitializeOplockPerf @ 0x140C08254 (FsRtlInitializeOplockPerf.c)
 *     PopDiagInitialize @ 0x140C1DDA4 (PopDiagInitialize.c)
 *     PspInitPhase2 @ 0x140C23EA0 (PspInitPhase2.c)
 *     ExpWorkerInitialization @ 0x140C31C34 (ExpWorkerInitialization.c)
 *     CmpInitializeTransactions @ 0x140C393A0 (CmpInitializeTransactions.c)
 *     MiInitializeNonPagedPool @ 0x140C42A74 (MiInitializeNonPagedPool.c)
 * Callees:
 *     <none>
 */

__int64 KiQueryUnbiasedInterruptTime()
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
