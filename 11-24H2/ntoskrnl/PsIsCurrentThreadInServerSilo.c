/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140421410
 * Callers:
 *     RtlSetSystemGlobalData @ 0x140420C20 (RtlSetSystemGlobalData.c)
 *     RtlGetActiveConsoleId @ 0x140421360 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x1404213A0 (RtlGetNtProductType.c)
 *     RtlGetSystemGlobalData @ 0x14044C5F0 (RtlGetSystemGlobalData.c)
 *     IopLoadDriverImage @ 0x1404DD018 (IopLoadDriverImage.c)
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x140607B30 (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 *     EtwpGetPmcOwnership @ 0x14064AF10 (EtwpGetPmcOwnership.c)
 *     PspInitializeSessionGlobals @ 0x1406F5578 (PspInitializeSessionGlobals.c)
 *     PoUserShutdownCancelled @ 0x1406F9670 (PoUserShutdownCancelled.c)
 *     NtSetInformationSymbolicLink @ 0x140741F60 (NtSetInformationSymbolicLink.c)
 *     NtInitiatePowerAction @ 0x140752F10 (NtInitiatePowerAction.c)
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x14077CE30 (RtlGetConsoleSessionForegroundProcessId.c)
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 *     EtwShutdown @ 0x1407A6910 (EtwShutdown.c)
 *     EtwpGetSoftRestartInformation @ 0x1407AFBC0 (EtwpGetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5C94 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407BDD00 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDE90 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407BE020 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE480 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE730 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BEA00 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407BED00 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407BEEE0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BF0A0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BF3E0 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1407C07E0 (NtSetDefaultHardErrorPort.c)
 *     CmpAcceptBoot @ 0x1407CFA84 (CmpAcceptBoot.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     NtDisableLastKnownGood @ 0x14082AF30 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     NtPlugPlayControl @ 0x1408CD400 (NtPlugPlayControl.c)
 *     ObpParseSymbolicLinkEx @ 0x1408E3460 (ObpParseSymbolicLinkEx.c)
 *     RtlIsMultiSessionSku @ 0x1408E8B20 (RtlIsMultiSessionSku.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     NtSetBootEntryOrder @ 0x14094D880 (NtSetBootEntryOrder.c)
 *     NtTranslateFilePath @ 0x14094D9E0 (NtTranslateFilePath.c)
 *     NtEnumerateBootEntries @ 0x14094DCD0 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x14094E5C0 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14094F250 (NtQuerySystemEnvironmentValueEx.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     RtlGetSuiteMask @ 0x140A05000 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x140A0AB50 (RtlGetNtSystemRoot.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A11520 (PsQueryCurrentApiSetSchema.c)
 *     NtImpersonateAnonymousToken @ 0x140A24050 (NtImpersonateAnonymousToken.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A39DC4 (EtwpSetSoftRestartInformation.c)
 *     ExpRaiseHardError @ 0x140A45514 (ExpRaiseHardError.c)
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140A69A30 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PspCreateSilo @ 0x140A6D570 (PspCreateSilo.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x140A7A0B8 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140A7A4A0 (ExpWriteTimeZoneBiasStartEnd.c)
 *     NtQueryBootOptions @ 0x140A942B0 (NtQueryBootOptions.c)
 *     SepRmSetAuditEventWrkr @ 0x140A96AE0 (SepRmSetAuditEventWrkr.c)
 *     PoUserShutdownInitiated @ 0x140A9C570 (PoUserShutdownInitiated.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     RtlSetActiveConsoleId @ 0x140AAD9D0 (RtlSetActiveConsoleId.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C32AD8 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1403C3570 (PsGetEffectiveServerSilo.c)
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
