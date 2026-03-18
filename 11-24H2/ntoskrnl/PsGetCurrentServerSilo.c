/*
 * XREFs of PsGetCurrentServerSilo @ 0x140349A50
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     RtlGetCurrentServiceSessionId @ 0x140349350 (RtlGetCurrentServiceSessionId.c)
 *     PsGetSessionById @ 0x140349430 (PsGetSessionById.c)
 *     EtwpTraceFileName @ 0x140349530 (EtwpTraceFileName.c)
 *     PerfInfoLogSysCallExit @ 0x1403497B0 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x140349900 (PerfInfoLogSysCallEntry.c)
 *     IopCheckSessionDeviceAccess @ 0x14034A630 (IopCheckSessionDeviceAccess.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405E6DC8 (PsIsSessionInCurrentServerSilo.c)
 *     PsSessionCreate @ 0x1406F73F8 (PsSessionCreate.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407208D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     RtlpInitCodePageTables @ 0x14077EA64 (RtlpInitCodePageTables.c)
 *     SepMakeLogonSessionsSiblings @ 0x140793804 (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     ExpWnfGenerateStateName @ 0x140836DD8 (ExpWnfGenerateStateName.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     SeCreateClientSecurityEx @ 0x1408974A0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140897750 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     AlpcpExposeTokenAttribute @ 0x140898930 (AlpcpExposeTokenAttribute.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     NtGetNextProcess @ 0x1408EFDC0 (NtGetNextProcess.c)
 *     PspThreadFromTicket @ 0x140912E70 (PspThreadFromTicket.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     sub_140972980 @ 0x140972980 (sub_140972980.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     PsCaptureUserProcessParameters @ 0x1409DE9E0 (PsCaptureUserProcessParameters.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EE72C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EEAA0 (PnpNotifyTargetDeviceChange.c)
 *     SepIsMinTCB @ 0x140A1BD1C (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x140A1C030 (SepIsSystemAppTCB.c)
 *     SepIsNgenImage @ 0x140A1C41C (SepIsNgenImage.c)
 *     SepCreateLogonSessionTrack @ 0x140A22BDC (SepCreateLogonSessionTrack.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x140A31B0C (SepReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140A64520 (SepDeleteLogonSessionTrack.c)
 *     PopTransitionCheckpoint @ 0x140A77528 (PopTransitionCheckpoint.c)
 *     PsGetNextSession @ 0x140AA4550 (PsGetNextSession.c)
 *     SepBlockAccessForLogonSession @ 0x140ABBB60 (SepBlockAccessForLogonSession.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 *     NtManageHotPatch @ 0x140AE7000 (NtManageHotPatch.c)
 *     NtSetSystemPowerState @ 0x140B5F390 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x140B61470 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x140349B68 (PsIsServerSilo.c)
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
