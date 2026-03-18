/*
 * XREFs of PsGetSessionId @ 0x1403D5E10
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x14034A630 (IopCheckSessionDeviceAccess.c)
 *     PfpLogApplicationEvent @ 0x1403D4840 (PfpLogApplicationEvent.c)
 *     IoRaiseHardError @ 0x1403D5B40 (IoRaiseHardError.c)
 *     IoGetRequestorSessionId @ 0x1403D5DD0 (IoGetRequestorSessionId.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x14074CA54 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140753B34 (PopSendSuspendResumeApplicationNotification.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407736B8 (PspTerminateSiloSubsystemProcesses.c)
 *     SeExchangePrimaryToken @ 0x140792C9C (SeExchangePrimaryToken.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     PspEstablishJobHierarchy @ 0x1408E62CC (PspEstablishJobHierarchy.c)
 *     PspBindProcessSessionToJob @ 0x1408E67B0 (PspBindProcessSessionToJob.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140909CBC (ExpWnfGetCurrentScopeInstance.c)
 *     EtwTiLogSyscallUsage @ 0x140934948 (EtwTiLogSyscallUsage.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x14094C3B4 (EtwpInitStateChangeInfo.c)
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 *     EtwpWriteProcessStarted @ 0x14094E248 (EtwpWriteProcessStarted.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PopInvokeWin32Callout @ 0x1409BE358 (PopInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x1409F4900 (PsGetThreadSessionId.c)
 *     PspInitializeProcessSecurity @ 0x140A30A28 (PspInitializeProcessSecurity.c)
 *     MiLogReserveVaFailed @ 0x140A901E0 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x140AAC430 (MiLogCommitRequestFailed.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 *     MmCreatePeb @ 0x140AE79AC (MmCreatePeb.c)
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
