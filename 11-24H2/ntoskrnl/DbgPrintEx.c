/*
 * XREFs of DbgPrintEx @ 0x140275B40
 * Callers:
 *     ExpWaitForResource @ 0x14022CDD0 (ExpWaitForResource.c)
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x140279FE0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402DCE08 (LdrLoadAlternateResourceModuleEx.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402E6180 (CcDecrementVolumeUseCountWithDelete.c)
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 *     ExpWaitForFastResource @ 0x1403BD4B0 (ExpWaitForFastResource.c)
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     CcReapPrivateVolumeCachemap @ 0x14042FCA4 (CcReapPrivateVolumeCachemap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1404300DC (CcInitializePrivateVolumeCacheMap.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x140430768 (CcInsertPrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1404309A4 (CcDeletePrivateVolumeCacheMap.c)
 *     CcInitializeNumaNodeForVolume @ 0x140430C98 (CcInitializeNumaNodeForVolume.c)
 *     BgpTxtDisplayCharacter @ 0x14046ECF8 (BgpTxtDisplayCharacter.c)
 *     BgpRasPrintGlyph @ 0x14046EF8C (BgpRasPrintGlyph.c)
 *     ExpCheckForResource @ 0x14048C4AC (ExpCheckForResource.c)
 *     ExpCheckForLookasideList @ 0x1404946B8 (ExpCheckForLookasideList.c)
 *     PopQueryPowerButtonConfiguration @ 0x1404B9FDC (PopQueryPowerButtonConfiguration.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1404D5E90 (CcAcquireByteRangeForWrite.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     HalpInterruptSpuriousService @ 0x140557E50 (HalpInterruptSpuriousService.c)
 *     HalpInterruptStubService @ 0x140557E80 (HalpInterruptStubService.c)
 *     CcCheckContainerWaitForRestore @ 0x140577084 (CcCheckContainerWaitForRestore.c)
 *     CcContainerRestoreCallBack @ 0x1405771A0 (CcContainerRestoreCallBack.c)
 *     CcRegisterForContainerRestore @ 0x1405773C0 (CcRegisterForContainerRestore.c)
 *     CcRegistryChangeCallback @ 0x140578990 (CcRegistryChangeCallback.c)
 *     CcSetupWatchForRegistryChanges @ 0x140578B80 (CcSetupWatchForRegistryChanges.c)
 *     CcUpdateDynamicRegistrySettings @ 0x140578D30 (CcUpdateDynamicRegistrySettings.c)
 *     CcCreatePartition @ 0x140579AF0 (CcCreatePartition.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 *     CcExitPartition @ 0x14057A020 (CcExitPartition.c)
 *     CcInitializePartition @ 0x14057A1B8 (CcInitializePartition.c)
 *     CcInitPerVolumeParameters @ 0x14057AC08 (CcInitPerVolumeParameters.c)
 *     CcInitializeNumaNode @ 0x14057AF8C (CcInitializeNumaNode.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057B504 (CcCompleteAsyncWriteBehind.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057B84C (CcWriteBehindAsyncPreProcess.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057BF68 (DbgkCaptureLiveKernelDump.c)
 *     IoRetryAsMiniDump @ 0x14058EDC0 (IoRetryAsMiniDump.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiAddTriageDumpDataBlock @ 0x1405AF9D8 (KiAddTriageDumpDataBlock.c)
 *     KiCheckRangeOverlap @ 0x1405B0218 (KiCheckRangeOverlap.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405B0630 (KiDeduplicateTriageDumpDataArrays.c)
 *     KiPassiveIsrWatchdog @ 0x1405BF630 (KiPassiveIsrWatchdog.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 *     PopPowerButtonWorkCallback @ 0x1405D58C0 (PopPowerButtonWorkCallback.c)
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 *     DbgkWerAddSecondaryData @ 0x140706340 (DbgkWerAddSecondaryData.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x1407064C0 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpWerCleanupContext @ 0x140706638 (DbgkpWerCleanupContext.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140706800 (DbgkpWerDeferredWriteRoutine.c)
 *     DbgkpWerProcessPolicyResult @ 0x140706A38 (DbgkpWerProcessPolicyResult.c)
 *     DbgkpWerStartDeferredLiveDump @ 0x140706A90 (DbgkpWerStartDeferredLiveDump.c)
 *     DbgkpWerUpdateTriageDumpHeader @ 0x140706B28 (DbgkpWerUpdateTriageDumpHeader.c)
 *     DbgkpWerWriteTriageDump @ 0x140706D20 (DbgkpWerWriteTriageDump.c)
 *     ObpPushRefDerefInfo @ 0x140743518 (ObpPushRefDerefInfo.c)
 *     PopBatteryQueryStatus @ 0x1407594B4 (PopBatteryQueryStatus.c)
 *     PopPublishPowerButtonState @ 0x14075BC84 (PopPublishPowerButtonState.c)
 *     PspCatchCriticalBreak @ 0x140778FB8 (PspCatchCriticalBreak.c)
 *     EtwWmitraceWorker @ 0x1407ACD0C (EtwWmitraceWorker.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407C4C90 (ExpKdPullRemoteFileForUser.c)
 *     LkmdTelCreateReport @ 0x14082FE24 (LkmdTelCreateReport.c)
 *     LkmdTelSubmitReport @ 0x14083003C (LkmdTelSubmitReport.c)
 *     LkmdTelpWriteDumpFile @ 0x140830134 (LkmdTelpWriteDumpFile.c)
 *     AlpcpCleanupProcessViews @ 0x1408FF9DC (AlpcpCleanupProcessViews.c)
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 *     PopSpoilBatteryEstimate @ 0x140A1BA70 (PopSpoilBatteryEstimate.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140A61AE8 (PopBatteryUpdateCompositeInformation.c)
 *     ExpSetPendingUILanguage @ 0x140A6A190 (ExpSetPendingUILanguage.c)
 *     PopPepUnregisterDevice @ 0x140A6F098 (PopPepUnregisterDevice.c)
 *     PopEstimateChargeTime @ 0x140A7D338 (PopEstimateChargeTime.c)
 *     PopBatteryEstimatesSpoiled @ 0x140A7D4C4 (PopBatteryEstimatesSpoiled.c)
 *     MiCaptureImageExceptionValues @ 0x140A8FDB8 (MiCaptureImageExceptionValues.c)
 *     PopPepRegisterDevice @ 0x140A934A0 (PopPepRegisterDevice.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140A9642C (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140A96644 (DbgkpWerInvokeCallbacks.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A96708 (DbgkpWerInitializeDeferredLiveDump.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C50 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AAD370 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBatteryInitialize @ 0x140AC5B8C (PopBatteryInitialize.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     HaliSetWakeAlarm @ 0x140B6EFE0 (HaliSetWakeAlarm.c)
 *     KdpCreateFileCallback @ 0x140B78830 (KdpCreateFileCallback.c)
 *     KdpPullRemoteFile @ 0x140B78B48 (KdpPullRemoteFile.c)
 *     KdpWriteFileCallback @ 0x140B78EC0 (KdpWriteFileCallback.c)
 *     ExpDebuggerWorker @ 0x140B7BF70 (ExpDebuggerWorker.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 *     ViDeadlockPreprocessOptions @ 0x140B9BBC4 (ViDeadlockPreprocessOptions.c)
 *     VfPnpDumpIrpStack @ 0x140BA7320 (VfPnpDumpIrpStack.c)
 *     VfDeadlockReleaseResource @ 0x140BA95AC (VfDeadlockReleaseResource.c)
 *     ViDeadlockCheckStackLimits @ 0x140BA9C08 (ViDeadlockCheckStackLimits.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB3E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB41B0 (AnFwpBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x140BB63FC (LogFwReport.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 *     HalpExtInitExtensions @ 0x140C1111C (HalpExtInitExtensions.c)
 *     PipResetDevice @ 0x140C23DB0 (PipResetDevice.c)
 *     PipResetMatchingFilteredDevices @ 0x140C24080 (PipResetMatchingFilteredDevices.c)
 *     KiInitializeMTRR @ 0x140C2B8EC (KiInitializeMTRR.c)
 *     VfTriageSystem @ 0x140C3E1C0 (VfTriageSystem.c)
 *     ViFindTriageRule @ 0x140C3E528 (ViFindTriageRule.c)
 *     ViMakeVerifierSettings @ 0x140C3E5C8 (ViMakeVerifierSettings.c)
 *     ViTriageSameDriversFromDump @ 0x140C3E6B8 (ViTriageSameDriversFromDump.c)
 *     ViValidateTriageRules @ 0x140C3E770 (ViValidateTriageRules.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140275C70 (vDbgPrintExWithPrefixInternalHelper.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  unsigned int v3; // ebx
  char v4; // cf
  int v5; // edi
  ULONG result; // eax
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, Format);
  v3 = 128;
  v4 = 1;
  v5 = (int)Format;
  do
  {
    result = vDbgPrintExWithPrefixInternalHelper((int)&File, ComponentId, Level, v5, va, 1, v3, v4);
    if ( result != -2147483643 )
      break;
    if ( v3 >= 0x200 )
      break;
    v3 += 128;
    v4 = v3 < 0x200;
  }
  while ( v3 <= 0x200 );
  return result;
}
