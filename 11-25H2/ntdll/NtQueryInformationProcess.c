/*
 * XREFs of NtQueryInformationProcess @ 0x180163540
 * Callers:
 *     RtlpInitRandomExVector @ 0x18000358C (RtlpInitRandomExVector.c)
 *     LdrpQueryInformationCurrentProcess @ 0x18006AF20 (LdrpQueryInformationCurrentProcess.c)
 *     RtlDecodePointer @ 0x180075450 (RtlDecodePointer.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800A0AF8 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 *     PsspCaptureHandleTrace @ 0x1800C7D7C (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x1800C859C (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800C8758 (PsspCaptureHandleInformation.c)
 *     WerpIsDebugPortPresent @ 0x1800CF148 (WerpIsDebugPortPresent.c)
 *     WerpProcessId @ 0x1800CFAD0 (WerpProcessId.c)
 *     WerpGlobalFlagsForProcess @ 0x1800CFC84 (WerpGlobalFlagsForProcess.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800D1E14 (LdrpLogLoadFailureEtwEvent.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800DE890 (RtlpCreateExecutionRequiredRequest.c)
 *     SetAssertBufferPtrinPeb @ 0x1800E07B8 (SetAssertBufferPtrinPeb.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E4F50 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlEncodePointer @ 0x1800EBB00 (RtlEncodePointer.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800F8F40 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64SuspendThread @ 0x1800FAB70 (RtlpWow64SuspendThread.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800FDE04 (RtlpGetModifiedProcessCookie.c)
 *     PsspDumpObject_Process @ 0x180111670 (PsspDumpObject_Process.c)
 *     WerpIsProcessNative @ 0x18011F604 (WerpIsProcessNative.c)
 *     DbgUiIssueRemoteBreakin @ 0x180134550 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 *     RtlSetProcessIsCritical @ 0x180147170 (RtlSetProcessIsCritical.c)
 *     RtlDecodeRemotePointer @ 0x180160DA0 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x180160E10 (RtlEncodeRemotePointer.c)
 *     LdrpMapCleanModuleView @ 0x180160F8C (LdrpMapCleanModuleView.c)
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
