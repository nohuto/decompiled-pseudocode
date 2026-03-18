/*
 * XREFs of PsGetCurrentServerSilo @ 0x1403D73D0
 * Callers:
 *     SepAdtLogAuditRecord @ 0x1403D67CC (SepAdtLogAuditRecord.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403D6CD0 (RtlGetCurrentServiceSessionId.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     EtwpTraceFileName @ 0x1403D6EB0 (EtwpTraceFileName.c)
 *     PerfInfoLogSysCallExit @ 0x1403D7130 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x1403D7280 (PerfInfoLogSysCallEntry.c)
 *     IopCheckSessionDeviceAccess @ 0x140433938 (IopCheckSessionDeviceAccess.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405DAC78 (PsIsSessionInCurrentServerSilo.c)
 *     SepIsSystemAppTCB @ 0x1406E9498 (SepIsSystemAppTCB.c)
 *     PsSessionCreate @ 0x1406EBB94 (PsSessionCreate.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407147D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     RtlpInitCodePageTables @ 0x14076F814 (RtlpInitCodePageTables.c)
 *     SepMakeLogonSessionsSiblings @ 0x140784434 (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     ExpWnfGenerateStateName @ 0x140897858 (ExpWnfGenerateStateName.c)
 *     SeCreateClientSecurityEx @ 0x1408A64C0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1408A6770 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A82D0 (AlpcpExposeTokenAttribute.c)
 *     PspThreadFromTicket @ 0x1408B93E0 (PspThreadFromTicket.c)
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14096CC3C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x14096CFB0 (PnpNotifyTargetDeviceChange.c)
 *     sub_140978BA4 @ 0x140978BA4 (sub_140978BA4.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 *     SepIsMinTCB @ 0x1409BB9B4 (SepIsMinTCB.c)
 *     PsCaptureUserProcessParameters @ 0x1409BD480 (PsCaptureUserProcessParameters.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     SepCreateLogonSessionTrack @ 0x140A1862C (SepCreateLogonSessionTrack.c)
 *     PopTransitionCheckpoint @ 0x140A1C604 (PopTransitionCheckpoint.c)
 *     NtManageHotPatch @ 0x140A1D5D0 (NtManageHotPatch.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x140A2B0BC (SepReferenceLogonSession.c)
 *     PsGetNextSession @ 0x140A2CC00 (PsGetNextSession.c)
 *     NtGetNextProcess @ 0x140A32180 (NtGetNextProcess.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     SepIsNgenImage @ 0x140A408D4 (SepIsNgenImage.c)
 *     SepDeleteLogonSessionTrack @ 0x140A62490 (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x140AB7820 (SepBlockAccessForLogonSession.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 *     NtSetSystemPowerState @ 0x140B4F250 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x140B51340 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 */

unsigned __int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  __int64 v2; // rcx

  if ( KeGetPcr()->Prcb.NestingLevel )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
    return CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
  if ( !Blink )
    return 0LL;
  if ( PsIsServerSilo(Blink) )
    return v2;
  while ( !PsIsServerSilo(*(_QWORD *)(v2 + 1304)) )
    ;
  return v2;
}
