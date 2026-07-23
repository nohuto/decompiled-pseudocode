/*
 * XREFs of RtlExitUserThread @ 0x180008DE0
 * Callers:
 *     RtlUserThreadStart @ 0x180008D70 (RtlUserThreadStart.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     EtwpLogger @ 0x1800B6AE0 (EtwpLogger.c)
 *     RtlUserFiberStart @ 0x18010D150 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1801346A0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1801359E0 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x180135AD0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180143B40 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlExitUserProcess @ 0x180008E40 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x180008F30 (TpCheckTerminateWorker.c)
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x180163C80 (NtTerminateThread.c)
 */

void __cdecl __noreturn RtlExitUserThread(NTSTATUS ExitStatus)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  ThreadInformation = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread, &ThreadInformation, 4u, 0LL) >= 0 )
  {
    if ( ThreadInformation )
      RtlExitUserProcess(ExitStatus);
  }
  LdrShutdownThread();
}
