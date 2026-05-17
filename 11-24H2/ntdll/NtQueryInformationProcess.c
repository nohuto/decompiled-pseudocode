/*
 * XREFs of NtQueryInformationProcess @ 0x180161FB0
 * Callers:
 *     WerpIsDebugPortPresent @ 0x180001588 (WerpIsDebugPortPresent.c)
 *     WerpGlobalFlagsForProcess @ 0x1800020A0 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x1800029B4 (WerpProcessId.c)
 *     RtlEncodePointer @ 0x180004AC0 (RtlEncodePointer.c)
 *     RtlDecodePointer @ 0x18001A440 (RtlDecodePointer.c)
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180066194 (LdrpLogLoadFailureEtwEvent.c)
 *     RtlpInitRandomExVector @ 0x180097F1C (RtlpInitRandomExVector.c)
 *     LdrpQueryInformationCurrentProcess @ 0x1800B1560 (LdrpQueryInformationCurrentProcess.c)
 *     PsspCaptureProcessInformation @ 0x1800C3DAC (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 *     PsspCaptureHandleTrace @ 0x1800C5A28 (PsspCaptureHandleTrace.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800D5764 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800E1310 (RtlpCreateExecutionRequiredRequest.c)
 *     SetAssertBufferPtrinPeb @ 0x1800E3B08 (SetAssertBufferPtrinPeb.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E5F80 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800F72E0 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64SuspendThread @ 0x1800F8F50 (RtlpWow64SuspendThread.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800FBBD4 (RtlpGetModifiedProcessCookie.c)
 *     PsspDumpObject_Process @ 0x18010EBA0 (PsspDumpObject_Process.c)
 *     WerpIsProcessNative @ 0x18011DD34 (WerpIsProcessNative.c)
 *     DbgUiIssueRemoteBreakin @ 0x180132A70 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlSetProcessIsCritical @ 0x180145BC0 (RtlSetProcessIsCritical.c)
 *     RtlDecodeRemotePointer @ 0x18015F890 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x18015F900 (RtlEncodeRemotePointer.c)
 *     LdrpMapCleanModuleView @ 0x18015FA38 (LdrpMapCleanModuleView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
