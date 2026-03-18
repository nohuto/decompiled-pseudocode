/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140311890
 * Callers:
 *     RtlGetActiveConsoleId @ 0x1403117E0 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x140311820 (RtlGetNtProductType.c)
 *     RtlSetSystemGlobalData @ 0x140311A40 (RtlSetSystemGlobalData.c)
 *     RtlGetSystemGlobalData @ 0x140456950 (RtlGetSystemGlobalData.c)
 *     IopLoadDriverImage @ 0x1404E6A70 (IopLoadDriverImage.c)
 *     EtwpGetPmcOwnership @ 0x1406408E0 (EtwpGetPmcOwnership.c)
 *     PspInitializeSessionGlobals @ 0x1406EBD14 (PspInitializeSessionGlobals.c)
 *     PoUserShutdownCancelled @ 0x1406EFBC0 (PoUserShutdownCancelled.c)
 *     NtSetInformationSymbolicLink @ 0x140738010 (NtSetInformationSymbolicLink.c)
 *     NtInitiatePowerAction @ 0x140748B20 (NtInitiatePowerAction.c)
 *     PspConvertSiloToServerSilo @ 0x140762D94 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x14076DBD0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlIsEnclaveFeaturePresent @ 0x14076DD4C (RtlIsEnclaveFeaturePresent.c)
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 *     EtwShutdown @ 0x140797400 (EtwShutdown.c)
 *     EtwpGetSoftRestartInformation @ 0x1407A03A0 (EtwpGetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1407A63A4 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407AE0E0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407AE270 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407AE400 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407AE860 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407AEB10 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407AEDE0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407AF0E0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407AF2C0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407AF480 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407AF7C0 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1407B0BC0 (NtSetDefaultHardErrorPort.c)
 *     CmpAcceptBoot @ 0x1407BFEA8 (CmpAcceptBoot.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     NtDisableLastKnownGood @ 0x14081A9C0 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x14081AAE0 (NtEnableLastKnownGood.c)
 *     NtSetBootEntryOrder @ 0x140820520 (NtSetBootEntryOrder.c)
 *     NtTranslateFilePath @ 0x140820680 (NtTranslateFilePath.c)
 *     NtEnumerateBootEntries @ 0x140820970 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140821260 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140821EF0 (NtQuerySystemEnvironmentValueEx.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     ObpParseSymbolicLinkEx @ 0x14083FD90 (ObpParseSymbolicLinkEx.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     NtPlugPlayControl @ 0x1408CD560 (NtPlugPlayControl.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     TtmIsEnabled @ 0x140964038 (TtmIsEnabled.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x1409942B0 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140994698 (ExpWriteTimeZoneBiasStartEnd.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     RtlGetNtSystemRoot @ 0x140A08650 (RtlGetNtSystemRoot.c)
 *     RtlCapabilityCheck @ 0x140A09AE0 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x140A09E70 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x140A0BA60 (RtlGetSuiteMask.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A12F90 (PsQueryCurrentApiSetSchema.c)
 *     NtManageHotPatch @ 0x140A1D5D0 (NtManageHotPatch.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A3FC08 (EtwpSetSoftRestartInformation.c)
 *     ExpRaiseHardError @ 0x140A4C224 (ExpRaiseHardError.c)
 *     NtSystemDebugControl @ 0x140A53910 (NtSystemDebugControl.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140A6E670 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PspCreateSilo @ 0x140A7183C (PspCreateSilo.c)
 *     NtQueryBootOptions @ 0x140A937F0 (NtQueryBootOptions.c)
 *     SepRmSetAuditEventWrkr @ 0x140A95960 (SepRmSetAuditEventWrkr.c)
 *     PoUserShutdownInitiated @ 0x140A9B420 (PoUserShutdownInitiated.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     RtlSetActiveConsoleId @ 0x140AAD9C0 (RtlSetActiveConsoleId.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C1F8B8 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 */

bool PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  unsigned __int64 v2; // rcx

  if ( KeGetPcr()->Prcb.NestingLevel )
    return 0;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
  {
    v2 = CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
    return v2 != 0;
  }
  if ( !Blink )
    return 0;
  if ( PsIsServerSilo(Blink) )
    return v2 != 0;
  while ( !PsIsServerSilo(*(_QWORD *)(v2 + 1304)) )
    ;
  return v2 != 0;
}
