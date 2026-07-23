/*
 * XREFs of RtlExitUserThread @ 0x1800AADB0
 * Callers:
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     EtwpLogger @ 0x1800A9700 (EtwpLogger.c)
 *     RtlUserFiberStart @ 0x1800AAD10 (RtlUserFiberStart.c)
 *     RtlUserThreadStart @ 0x1800AAD40 (RtlUserThreadStart.c)
 *     DbgUiRemoteBreakin @ 0x180130DF0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x180132130 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x180132220 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180140600 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlExitUserProcess @ 0x1800AAE10 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x1800AAF00 (TpCheckTerminateWorker.c)
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x180160AB0 (NtTerminateThread.c)
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
