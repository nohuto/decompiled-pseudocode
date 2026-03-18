/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x14042F240
 * Callers:
 *     RtlSetSystemGlobalData @ 0x14042EEF0 (RtlSetSystemGlobalData.c)
 *     RtlGetActiveConsoleId @ 0x14042F190 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x14042F1D0 (RtlGetNtProductType.c)
 *     RtlGetSystemGlobalData @ 0x140456DB0 (RtlGetSystemGlobalData.c)
 *     IopLoadDriverImage @ 0x1404E691C (IopLoadDriverImage.c)
 *     EtwpGetPmcOwnership @ 0x14064C900 (EtwpGetPmcOwnership.c)
 *     PspInitializeSessionGlobals @ 0x1406F7578 (PspInitializeSessionGlobals.c)
 *     PoUserShutdownCancelled @ 0x1406FBA30 (PoUserShutdownCancelled.c)
 *     NtSetInformationSymbolicLink @ 0x140744030 (NtSetInformationSymbolicLink.c)
 *     NtInitiatePowerAction @ 0x140754BF0 (NtInitiatePowerAction.c)
 *     PspConvertSiloToServerSilo @ 0x140772754 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x14077CF00 (RtlGetConsoleSessionForegroundProcessId.c)
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 *     EtwShutdown @ 0x1407A67D0 (EtwShutdown.c)
 *     EtwpGetSoftRestartInformation @ 0x1407AF770 (EtwpGetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5844 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     ExpSetBootEntry @ 0x1407BC32C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407BD8B0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDA40 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407BDBD0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE030 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE2E0 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BE5B0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407BE8B0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407BEA90 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BEC50 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BEF90 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1407C0390 (NtSetDefaultHardErrorPort.c)
 *     CmpAcceptBoot @ 0x1407CF594 (CmpAcceptBoot.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     NtDisableLastKnownGood @ 0x14082A700 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     NtPlugPlayControl @ 0x1408CFA10 (NtPlugPlayControl.c)
 *     ObpParseSymbolicLinkEx @ 0x14090BD40 (ObpParseSymbolicLinkEx.c)
 *     RtlIsMultiSessionSku @ 0x1409113D0 (RtlIsMultiSessionSku.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     NtSetBootEntryOrder @ 0x140964DF0 (NtSetBootEntryOrder.c)
 *     NtTranslateFilePath @ 0x140964F50 (NtTranslateFilePath.c)
 *     NtEnumerateBootEntries @ 0x140965240 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140965B30 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     TtmIsEnabled @ 0x1409BBDE8 (TtmIsEnabled.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x1409DCE5C (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1409DD244 (ExpWriteTimeZoneBiasStartEnd.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     RtlGetSuiteMask @ 0x140A08AD0 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x140A0B910 (RtlGetNtSystemRoot.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A183B0 (PsQueryCurrentApiSetSchema.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A44534 (EtwpSetSoftRestartInformation.c)
 *     ExpRaiseHardError @ 0x140A4E894 (ExpRaiseHardError.c)
 *     NtSystemDebugControl @ 0x140A571F0 (NtSystemDebugControl.c)
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140A705A0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PspCreateSilo @ 0x140A73C18 (PspCreateSilo.c)
 *     NtQueryBootOptions @ 0x140A97A60 (NtQueryBootOptions.c)
 *     SepRmSetAuditEventWrkr @ 0x140A9B570 (SepRmSetAuditEventWrkr.c)
 *     PoUserShutdownInitiated @ 0x140AA11E0 (PoUserShutdownInitiated.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     RtlSetActiveConsoleId @ 0x140AB2A60 (RtlSetActiveConsoleId.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C309B8 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140349B30 (PsGetEffectiveServerSilo.c)
 */

bool PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  __int64 EffectiveServerSilo; // rax

  if ( KeGetPcr()->Prcb.NestingLevel )
    return 0;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
    EffectiveServerSilo = CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(Blink);
  return EffectiveServerSilo != 0;
}
