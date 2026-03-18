/*
 * XREFs of IoThreadToProcess @ 0x140441CC0
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x140707404 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x140707A3C (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407418D0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     NtAlpcCreateSecurityContext @ 0x140894C50 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     PspThreadFromTicket @ 0x140912E70 (PspThreadFromTicket.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409C4310 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtSetContextThread @ 0x140A71400 (NtSetContextThread.c)
 *     NtGetCurrentProcessorNumber @ 0x140A7DD80 (NtGetCurrentProcessorNumber.c)
 *     PsSyscallProviderDispatch @ 0x140A9D400 (PsSyscallProviderDispatch.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB6F10 (MiForceCrashForInvalidAccess.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140B5F330 (PopFlushVolumeBlameResolverCallback.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
