/*
 * XREFs of ZwSetInformationThread @ 0x1406A65B0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402462F8 (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x140648AC0 (DifZwSetInformationThreadWrapper.c)
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B1F9C (EtwpCovSampCaptureContextStart.c)
 *     BiReleasePrivilege @ 0x1409C0C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409C0C90 (BiAcquirePrivilege.c)
 *     RtlAcquirePrivilege @ 0x1409C1C84 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1409C1F04 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x140A5134C (RtlReleasePrivilege.c)
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
  return KiServiceInternal(ThreadHandle, ThreadInformationClass, ThreadInformation);
}
