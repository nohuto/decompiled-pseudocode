/*
 * XREFs of ZwSetInformationThread @ 0x1406A7550
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14020F0C8 (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x140647080 (DifZwSetInformationThreadWrapper.c)
 *     DbgkUserReportWorkRoutine @ 0x1407051D0 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B23EC (EtwpCovSampCaptureContextStart.c)
 *     BiReleasePrivilege @ 0x1409A7288 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409A72E0 (BiAcquirePrivilege.c)
 *     RtlAcquirePrivilege @ 0x1409A82D4 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1409A8554 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x140A4850C (RtlReleasePrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
