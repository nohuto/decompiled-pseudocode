/*
 * XREFs of PsGetSessionId @ 0x1403C1560
 * Callers:
 *     PfpLogApplicationEvent @ 0x1402627C0 (PfpLogApplicationEvent.c)
 *     IoRaiseHardError @ 0x1403C1290 (IoRaiseHardError.c)
 *     IoGetRequestorSessionId @ 0x1403C1520 (IoGetRequestorSessionId.c)
 *     IopCheckSessionDeviceAccess @ 0x1403C1594 (IopCheckSessionDeviceAccess.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x14074AD84 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140751E54 (PopSendSuspendResumeApplicationNotification.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407738D8 (PspTerminateSiloSubsystemProcesses.c)
 *     SeExchangePrimaryToken @ 0x140792C70 (SeExchangePrimaryToken.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1408E13DC (ExpWnfGetCurrentScopeInstance.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x1408F0924 (EtwpInitStateChangeInfo.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     EtwTiLogSyscallUsage @ 0x1408F7468 (EtwTiLogSyscallUsage.c)
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 *     PspBindProcessSessionToJob @ 0x14091B844 (PspBindProcessSessionToJob.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     PsGetThreadSessionId @ 0x1409E8C60 (PsGetThreadSessionId.c)
 *     EtwpWriteProcessStarted @ 0x140A2FF1C (EtwpWriteProcessStarted.c)
 *     MiLogReserveVaFailed @ 0x140A8C8DC (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x140AA7460 (MiLogCommitRequestFailed.c)
 *     PspInitializeProcessSecurity @ 0x140ACAA98 (PspInitializeProcessSecurity.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionId(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 744);
  if ( !v1 || (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
