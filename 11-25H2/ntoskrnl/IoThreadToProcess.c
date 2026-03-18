/*
 * XREFs of IoThreadToProcess @ 0x140442EB0
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x1406FB524 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1406FB730 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407358B0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PspThreadFromTicket @ 0x1408B93E0 (PspThreadFromTicket.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409CE840 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtSetContextThread @ 0x140A6F400 (NtSetContextThread.c)
 *     NtGetCurrentProcessorNumber @ 0x140A7B5E0 (NtGetCurrentProcessorNumber.c)
 *     PsSyscallProviderDispatch @ 0x140A978D0 (PsSyscallProviderDispatch.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB2078 (MiForceCrashForInvalidAccess.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140B4F1F0 (PopFlushVolumeBlameResolverCallback.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
