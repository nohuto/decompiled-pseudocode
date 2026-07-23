/*
 * XREFs of IoThreadToProcess @ 0x140438740
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x140704FC4 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1407051D0 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x1407055FC (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14073F800 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PspThreadFromTicket @ 0x1408EA5C0 (PspThreadFromTicket.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409C1630 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtSetContextThread @ 0x140A6A7E0 (NtSetContextThread.c)
 *     NtGetCurrentProcessorNumber @ 0x140A78080 (NtGetCurrentProcessorNumber.c)
 *     PsSyscallProviderDispatch @ 0x140A98970 (PsSyscallProviderDispatch.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB11E8 (MiForceCrashForInvalidAccess.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140B613B0 (PopFlushVolumeBlameResolverCallback.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
