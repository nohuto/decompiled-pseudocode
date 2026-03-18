/*
 * XREFs of PsGetSessionId @ 0x140433C80
 * Callers:
 *     PfpLogApplicationEvent @ 0x1403BE670 (PfpLogApplicationEvent.c)
 *     IopCheckSessionDeviceAccess @ 0x140433938 (IopCheckSessionDeviceAccess.c)
 *     IoRaiseHardError @ 0x1404339B0 (IoRaiseHardError.c)
 *     IoGetRequestorSessionId @ 0x140433C40 (IoGetRequestorSessionId.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140740984 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140747A44 (PopSendSuspendResumeApplicationNotification.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140763CE8 (PspTerminateSiloSubsystemProcesses.c)
 *     SeExchangePrimaryToken @ 0x14078384C (SeExchangePrimaryToken.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x14083DF28 (ExpWnfGetCurrentScopeInstance.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTiLogSyscallUsage @ 0x1408EA178 (EtwTiLogSyscallUsage.c)
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     PspEstablishJobHierarchy @ 0x1409040C0 (PspEstablishJobHierarchy.c)
 *     PspBindProcessSessionToJob @ 0x1409045A0 (PspBindProcessSessionToJob.c)
 *     EtwpInitStateChangeInfo @ 0x1409202A8 (EtwpInitStateChangeInfo.c)
 *     EtwpPsProvTraceProcess @ 0x140921388 (EtwpPsProvTraceProcess.c)
 *     EtwpWriteProcessStarted @ 0x1409221D8 (EtwpWriteProcessStarted.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     PsGetThreadSessionId @ 0x1409FDD20 (PsGetThreadSessionId.c)
 *     PspInitializeProcessSecurity @ 0x140A0C7EC (PspInitializeProcessSecurity.c)
 *     PopInvokeWin32Callout @ 0x140A2C928 (PopInvokeWin32Callout.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     MiLogReserveVaFailed @ 0x140A8B44C (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x140AA6FF0 (MiLogCommitRequestFailed.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
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
