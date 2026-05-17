/*
 * XREFs of RtlExitUserThread @ 0x1800042C0
 * Callers:
 *     RtlUserFiberStart @ 0x180003BD0 (RtlUserFiberStart.c)
 *     RtlUserThreadStart @ 0x180004250 (RtlUserThreadStart.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     EtwpLogger @ 0x18008DC40 (EtwpLogger.c)
 *     DbgUiRemoteBreakin @ 0x180132BC0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x180133F00 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x180133FF0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180142450 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x180004410 (TpCheckTerminateWorker.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x1801626F0 (NtTerminateThread.c)
 */

void __fastcall __noreturn RtlExitUserThread(unsigned int a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( (int)ZwQueryInformationThread(-2LL, 12LL, &v2, 4LL, 0LL) < 0 || !v2 )
  {
    LdrShutdownThread();
    TpCheckTerminateWorker(0LL);
    NtTerminateThread(0LL, a1);
  }
  RtlExitUserProcess(a1);
  __debugbreak();
}
