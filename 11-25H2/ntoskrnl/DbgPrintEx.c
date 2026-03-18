/*
 * XREFs of DbgPrintEx @ 0x1403A9690
 * Callers:
 *     ExpWaitForFastResource @ 0x140293C60 (ExpWaitForFastResource.c)
 *     CcFlushCachePriv @ 0x1402DA4E0 (CcFlushCachePriv.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F2AFC (LdrLoadAlternateResourceModuleEx.c)
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403A53D0 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403A7DF4 (CcReapPrivateVolumeCachemap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403A84A0 (CcInitializePrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 *     CcInitializeNumaNodeForVolume @ 0x1403A8E0C (CcInitializeNumaNodeForVolume.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403A92B4 (CcInsertPrivateVolumeCacheMap.c)
 *     CcWriteBehindAsync @ 0x1403AB04C (CcWriteBehindAsync.c)
 *     CcWriteBehindInternal @ 0x1403AC840 (CcWriteBehindInternal.c)
 *     ExpWaitForResource @ 0x14041F0A0 (ExpWaitForResource.c)
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     BgpTxtDisplayCharacter @ 0x140473A88 (BgpTxtDisplayCharacter.c)
 *     BgpRasPrintGlyph @ 0x140473D1C (BgpRasPrintGlyph.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     ExpCheckForResource @ 0x140492604 (ExpCheckForResource.c)
 *     ExpCheckForLookasideList @ 0x140499B80 (ExpCheckForLookasideList.c)
 *     PopQueryPowerButtonConfiguration @ 0x1404C039C (PopQueryPowerButtonConfiguration.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C8A30 (CcAsyncLazywriteWorkerMulti.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DCD80 (CcAcquireByteRangeForWrite.c)
 *     HalpInterruptSpuriousService @ 0x140557920 (HalpInterruptSpuriousService.c)
 *     HalpInterruptStubService @ 0x140557950 (HalpInterruptStubService.c)
 *     CcCheckContainerWaitForRestore @ 0x1405768F4 (CcCheckContainerWaitForRestore.c)
 *     CcContainerRestoreCallBack @ 0x140576A10 (CcContainerRestoreCallBack.c)
 *     CcRegisterForContainerRestore @ 0x140576C30 (CcRegisterForContainerRestore.c)
 *     CcRegistryChangeCallback @ 0x1405781F0 (CcRegistryChangeCallback.c)
 *     CcSetupWatchForRegistryChanges @ 0x1405783E0 (CcSetupWatchForRegistryChanges.c)
 *     CcUpdateDynamicRegistrySettings @ 0x140578590 (CcUpdateDynamicRegistrySettings.c)
 *     CcCreatePartition @ 0x140579350 (CcCreatePartition.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 *     CcExitPartition @ 0x140579880 (CcExitPartition.c)
 *     CcInitializePartition @ 0x140579A18 (CcInitializePartition.c)
 *     CcInitPerVolumeParameters @ 0x14057A458 (CcInitPerVolumeParameters.c)
 *     CcInitializeNumaNode @ 0x14057A7DC (CcInitializeNumaNode.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057AD54 (CcCompleteAsyncWriteBehind.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057B09C (CcWriteBehindAsyncPreProcess.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057B7B8 (DbgkCaptureLiveKernelDump.c)
 *     IoRetryAsMiniDump @ 0x14058E570 (IoRetryAsMiniDump.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiAddTriageDumpDataBlock @ 0x1405AF0D4 (KiAddTriageDumpDataBlock.c)
 *     KiCheckRangeOverlap @ 0x1405AF918 (KiCheckRangeOverlap.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405AFD10 (KiDeduplicateTriageDumpDataArrays.c)
 *     KiPassiveIsrWatchdog @ 0x1405BE020 (KiPassiveIsrWatchdog.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 *     PopPowerButtonWorkCallback @ 0x1405D39C0 (PopPowerButtonWorkCallback.c)
 *     RtlAssert @ 0x1405DD1F0 (RtlAssert.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 *     DbgkWerAddSecondaryData @ 0x1406FC8A0 (DbgkWerAddSecondaryData.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x1406FCA20 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpWerCleanupContext @ 0x1406FCB98 (DbgkpWerCleanupContext.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1406FCD60 (DbgkpWerDeferredWriteRoutine.c)
 *     DbgkpWerProcessPolicyResult @ 0x1406FCF98 (DbgkpWerProcessPolicyResult.c)
 *     DbgkpWerStartDeferredLiveDump @ 0x1406FCFF0 (DbgkpWerStartDeferredLiveDump.c)
 *     DbgkpWerUpdateTriageDumpHeader @ 0x1406FD088 (DbgkpWerUpdateTriageDumpHeader.c)
 *     DbgkpWerWriteTriageDump @ 0x1406FD280 (DbgkpWerWriteTriageDump.c)
 *     ObpPushRefDerefInfo @ 0x140739208 (ObpPushRefDerefInfo.c)
 *     PopPublishPowerButtonState @ 0x1407503B4 (PopPublishPowerButtonState.c)
 *     PspCatchCriticalBreak @ 0x140769208 (PspCatchCriticalBreak.c)
 *     EtwWmitraceWorker @ 0x14079D46C (EtwWmitraceWorker.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407B2BE4 (ExpKdPullRemoteFileForUser.c)
 *     LkmdTelCreateReport @ 0x14081F8EC (LkmdTelCreateReport.c)
 *     LkmdTelSubmitReport @ 0x14081FB04 (LkmdTelSubmitReport.c)
 *     LkmdTelpWriteDumpFile @ 0x14081FBFC (LkmdTelpWriteDumpFile.c)
 *     AlpcpCleanupProcessViews @ 0x1408E10E0 (AlpcpCleanupProcessViews.c)
 *     MiCreateSectionForDriver @ 0x140A1340C (MiCreateSectionForDriver.c)
 *     PopSpoilBatteryEstimate @ 0x140A1E050 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140A659E8 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryInitialize @ 0x140A68504 (PopBatteryInitialize.c)
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 *     PopPepUnregisterDevice @ 0x140A72A18 (PopPepUnregisterDevice.c)
 *     PopEstimateChargeTime @ 0x140A7ECB4 (PopEstimateChargeTime.c)
 *     PopBatteryEstimatesSpoiled @ 0x140A7EE40 (PopBatteryEstimatesSpoiled.c)
 *     MiCaptureImageExceptionValues @ 0x140A8EB18 (MiCaptureImageExceptionValues.c)
 *     PopPepRegisterDevice @ 0x140A929B0 (PopPepRegisterDevice.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140A9519C (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140A953B4 (DbgkpWerInvokeCallbacks.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A95478 (DbgkpWerInitializeDeferredLiveDump.c)
 *     ObCreateObjectTypeEx @ 0x140A97FF0 (ObCreateObjectTypeEx.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C10 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AAD190 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 *     PopBatteryQueryStatus @ 0x140AC26B4 (PopBatteryQueryStatus.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     HaliSetWakeAlarm @ 0x140B5E690 (HaliSetWakeAlarm.c)
 *     KdpCreateFileCallback @ 0x140B66830 (KdpCreateFileCallback.c)
 *     KdpPullRemoteFile @ 0x140B66B48 (KdpPullRemoteFile.c)
 *     KdpWriteFileCallback @ 0x140B66EC0 (KdpWriteFileCallback.c)
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 *     ViDeadlockPreprocessOptions @ 0x140B89BE4 (ViDeadlockPreprocessOptions.c)
 *     VfPnpDumpIrpStack @ 0x140B95340 (VfPnpDumpIrpStack.c)
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 *     ViDeadlockCheckStackLimits @ 0x140B97C28 (ViDeadlockCheckStackLimits.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BA1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BA21B0 (AnFwpBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x140BA43FC (LogFwReport.c)
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 *     HalpExtInitExtensions @ 0x140BFE11C (HalpExtInitExtensions.c)
 *     PipResetDevice @ 0x140C10C10 (PipResetDevice.c)
 *     PipResetMatchingFilteredDevices @ 0x140C10EE0 (PipResetMatchingFilteredDevices.c)
 *     KiInitializeMTRR @ 0x140C1873C (KiInitializeMTRR.c)
 *     VfTriageSystem @ 0x140C2AD88 (VfTriageSystem.c)
 *     ViFindTriageRule @ 0x140C2B0F0 (ViFindTriageRule.c)
 *     ViMakeVerifierSettings @ 0x140C2B190 (ViMakeVerifierSettings.c)
 *     ViTriageSameDriversFromDump @ 0x140C2B280 (ViTriageSameDriversFromDump.c)
 *     ViValidateTriageRules @ 0x140C2B338 (ViValidateTriageRules.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403A97C0 (vDbgPrintExWithPrefixInternalHelper.c)
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
