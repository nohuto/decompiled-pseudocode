/*
 * XREFs of DbgPrintEx @ 0x1402CB2F0
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 *     ExpWaitForResource @ 0x140277840 (ExpWaitForResource.c)
 *     CcWriteBehindInternal @ 0x1402A81F0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1402A91A8 (CcWriteBehindAsync.c)
 *     CcFlushCachePriv @ 0x1402AC810 (CcFlushCachePriv.c)
 *     PopQueryPowerButtonConfiguration @ 0x1402C9F64 (PopQueryPowerButtonConfiguration.c)
 *     CcReapPrivateVolumeCachemap @ 0x1402CA344 (CcReapPrivateVolumeCachemap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1402CA884 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1402CAF10 (CcInsertPrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     CcInitializeNumaNodeForVolume @ 0x1402CBA5C (CcInitializeNumaNodeForVolume.c)
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402CD480 (CcDecrementVolumeUseCountWithDelete.c)
 *     ExpWaitForFastResource @ 0x1403DD7C0 (ExpWaitForFastResource.c)
 *     ExHandleLogBadReference @ 0x14043AC30 (ExHandleLogBadReference.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x14044EDC4 (LdrLoadAlternateResourceModuleEx.c)
 *     BgpTxtDisplayCharacter @ 0x140472A28 (BgpTxtDisplayCharacter.c)
 *     BgpRasPrintGlyph @ 0x140472CBC (BgpRasPrintGlyph.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     ExpCheckForResource @ 0x140491810 (ExpCheckForResource.c)
 *     ExpCheckForLookasideList @ 0x140499C58 (ExpCheckForLookasideList.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C768C (CcAsyncLazywriteWorkerMulti.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DC470 (CcAcquireByteRangeForWrite.c)
 *     HalpInterruptSpuriousService @ 0x14055A220 (HalpInterruptSpuriousService.c)
 *     HalpInterruptStubService @ 0x14055A250 (HalpInterruptStubService.c)
 *     CcCheckContainerWaitForRestore @ 0x140579BF4 (CcCheckContainerWaitForRestore.c)
 *     CcContainerRestoreCallBack @ 0x140579D10 (CcContainerRestoreCallBack.c)
 *     CcRegisterForContainerRestore @ 0x140579F30 (CcRegisterForContainerRestore.c)
 *     CcRegistryChangeCallback @ 0x14057B500 (CcRegistryChangeCallback.c)
 *     CcSetupWatchForRegistryChanges @ 0x14057B6F0 (CcSetupWatchForRegistryChanges.c)
 *     CcUpdateDynamicRegistrySettings @ 0x14057B8A0 (CcUpdateDynamicRegistrySettings.c)
 *     CcCreatePartition @ 0x14057C660 (CcCreatePartition.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 *     CcExitPartition @ 0x14057CB90 (CcExitPartition.c)
 *     CcInitializePartition @ 0x14057CD28 (CcInitializePartition.c)
 *     CcInitPerVolumeParameters @ 0x14057D778 (CcInitPerVolumeParameters.c)
 *     CcInitializeNumaNode @ 0x14057DAFC (CcInitializeNumaNode.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057E074 (CcCompleteAsyncWriteBehind.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057E3BC (CcWriteBehindAsyncPreProcess.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057EAD8 (DbgkCaptureLiveKernelDump.c)
 *     IoRetryAsMiniDump @ 0x140591DA0 (IoRetryAsMiniDump.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiAddTriageDumpDataBlock @ 0x1405B2A64 (KiAddTriageDumpDataBlock.c)
 *     KiCheckRangeOverlap @ 0x1405B32A8 (KiCheckRangeOverlap.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405B36BC (KiDeduplicateTriageDumpDataArrays.c)
 *     KiPassiveIsrWatchdog @ 0x1405C2060 (KiPassiveIsrWatchdog.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 *     PopPowerButtonWorkCallback @ 0x1405D83A0 (PopPowerButtonWorkCallback.c)
 *     RtlAssert @ 0x1405E9340 (RtlAssert.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
 *     DbgkWerAddSecondaryData @ 0x140708780 (DbgkWerAddSecondaryData.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x140708900 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpWerCleanupContext @ 0x140708A78 (DbgkpWerCleanupContext.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140708C40 (DbgkpWerDeferredWriteRoutine.c)
 *     DbgkpWerProcessPolicyResult @ 0x140708E78 (DbgkpWerProcessPolicyResult.c)
 *     DbgkpWerStartDeferredLiveDump @ 0x140708ED0 (DbgkpWerStartDeferredLiveDump.c)
 *     DbgkpWerUpdateTriageDumpHeader @ 0x140708F68 (DbgkpWerUpdateTriageDumpHeader.c)
 *     DbgkpWerWriteTriageDump @ 0x140709160 (DbgkpWerWriteTriageDump.c)
 *     ObpPushRefDerefInfo @ 0x140745228 (ObpPushRefDerefInfo.c)
 *     PopBatteryQueryStatus @ 0x14075ADC4 (PopBatteryQueryStatus.c)
 *     PopPublishPowerButtonState @ 0x14075CCE4 (PopPublishPowerButtonState.c)
 *     PspCatchCriticalBreak @ 0x140778EB8 (PspCatchCriticalBreak.c)
 *     EtwWmitraceWorker @ 0x1407AC83C (EtwWmitraceWorker.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407C4CB4 (ExpKdPullRemoteFileForUser.c)
 *     LkmdTelCreateReport @ 0x14082F62C (LkmdTelCreateReport.c)
 *     LkmdTelSubmitReport @ 0x14082F844 (LkmdTelSubmitReport.c)
 *     LkmdTelpWriteDumpFile @ 0x14082F93C (LkmdTelpWriteDumpFile.c)
 *     AlpcpCleanupProcessViews @ 0x1408A977C (AlpcpCleanupProcessViews.c)
 *     MiCreateSectionForDriver @ 0x140A1882C (MiCreateSectionForDriver.c)
 *     PopSpoilBatteryEstimate @ 0x140A26FF0 (PopSpoilBatteryEstimate.c)
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140A68738 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryInitialize @ 0x140A6AF9C (PopBatteryInitialize.c)
 *     ExpSetPendingUILanguage @ 0x140A70D00 (ExpSetPendingUILanguage.c)
 *     PopPepUnregisterDevice @ 0x140A74D78 (PopPepUnregisterDevice.c)
 *     PopEstimateChargeTime @ 0x140A82794 (PopEstimateChargeTime.c)
 *     PopBatteryEstimatesSpoiled @ 0x140A82920 (PopBatteryEstimatesSpoiled.c)
 *     MiCaptureImageExceptionValues @ 0x140A93608 (MiCaptureImageExceptionValues.c)
 *     PopPepRegisterDevice @ 0x140A96C70 (PopPepRegisterDevice.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140A9AEBC (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140A9B0D4 (DbgkpWerInvokeCallbacks.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A9B198 (DbgkpWerInitializeDeferredLiveDump.c)
 *     ObCreateObjectTypeEx @ 0x140A9DB20 (ObCreateObjectTypeEx.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA9BA0 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AB2400 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     HaliSetWakeAlarm @ 0x140B6D740 (HaliSetWakeAlarm.c)
 *     KdpCreateFileCallback @ 0x140B76830 (KdpCreateFileCallback.c)
 *     KdpPullRemoteFile @ 0x140B76B48 (KdpPullRemoteFile.c)
 *     KdpWriteFileCallback @ 0x140B76EC0 (KdpWriteFileCallback.c)
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
 *     ViDeadlockPreprocessOptions @ 0x140B99BC4 (ViDeadlockPreprocessOptions.c)
 *     VfPnpDumpIrpStack @ 0x140BA5320 (VfPnpDumpIrpStack.c)
 *     VfDeadlockReleaseResource @ 0x140BA75AC (VfDeadlockReleaseResource.c)
 *     ViDeadlockCheckStackLimits @ 0x140BA7C08 (ViDeadlockCheckStackLimits.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB21B0 (AnFwpBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x140BB43FC (LogFwReport.c)
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 *     HalpExtInitExtensions @ 0x140C0F11C (HalpExtInitExtensions.c)
 *     PipResetDevice @ 0x140C21D70 (PipResetDevice.c)
 *     PipResetMatchingFilteredDevices @ 0x140C22040 (PipResetMatchingFilteredDevices.c)
 *     KiInitializeMTRR @ 0x140C2984C (KiInitializeMTRR.c)
 *     VfTriageSystem @ 0x140C3C068 (VfTriageSystem.c)
 *     ViFindTriageRule @ 0x140C3C3D0 (ViFindTriageRule.c)
 *     ViMakeVerifierSettings @ 0x140C3C470 (ViMakeVerifierSettings.c)
 *     ViTriageSameDriversFromDump @ 0x140C3C560 (ViTriageSameDriversFromDump.c)
 *     ViValidateTriageRules @ 0x140C3C618 (ViValidateTriageRules.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1402CB420 (vDbgPrintExWithPrefixInternalHelper.c)
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
