/*
 * XREFs of PsGetCurrentServerSilo @ 0x1403C3490
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x1403C1594 (IopCheckSessionDeviceAccess.c)
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403C2D90 (RtlGetCurrentServiceSessionId.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     EtwpTraceFileName @ 0x1403C2F70 (EtwpTraceFileName.c)
 *     PerfInfoLogSysCallExit @ 0x1403C31F0 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x1403C3340 (PerfInfoLogSysCallEntry.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405E43C8 (PsIsSessionInCurrentServerSilo.c)
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x14071E464 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     RtlpInitCodePageTables @ 0x14077E994 (RtlpInitCodePageTables.c)
 *     SepMakeLogonSessionsSiblings @ 0x1407938A4 (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     ExpWnfGenerateStateName @ 0x140834538 (ExpWnfGenerateStateName.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     NtGetNextProcess @ 0x1408615C0 (NtGetNextProcess.c)
 *     SeCreateClientSecurityEx @ 0x14089FB40 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14089FDF0 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A0FD0 (AlpcpExposeTokenAttribute.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     PspThreadFromTicket @ 0x1408EA5C0 (PspThreadFromTicket.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     sub_14095B190 @ 0x14095B190 (sub_14095B190.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     PsCaptureUserProcessParameters @ 0x1409D8790 (PsCaptureUserProcessParameters.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EC16C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EC4E0 (PnpNotifyTargetDeviceChange.c)
 *     SepIsMinTCB @ 0x1409FA28C (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x1409FA5A0 (SepIsSystemAppTCB.c)
 *     SepCreateLogonSessionTrack @ 0x140A16FEC (SepCreateLogonSessionTrack.c)
 *     NtImpersonateAnonymousToken @ 0x140A24050 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x140A25A7C (SepReferenceLogonSession.c)
 *     SepIsNgenImage @ 0x140A3A5D4 (SepIsNgenImage.c)
 *     SepDeleteLogonSessionTrack @ 0x140A5CE20 (SepDeleteLogonSessionTrack.c)
 *     PopTransitionCheckpoint @ 0x140A71648 (PopTransitionCheckpoint.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     PsGetNextSession @ 0x140A9F8E0 (PsGetNextSession.c)
 *     SepBlockAccessForLogonSession @ 0x140AB6B80 (SepBlockAccessForLogonSession.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 *     NtSetSystemPowerState @ 0x140B61410 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 */

unsigned __int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v2; // rcx

  if ( KeGetPcr()->Prcb.NestingLevel )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    return CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
  if ( !Blink )
    return 0LL;
  if ( (unsigned __int8)PsIsServerSilo(Blink) )
    return v2;
  while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v2 + 1304)) )
    ;
  return v2;
}
