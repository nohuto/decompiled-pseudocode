/*
 * XREFs of NtQueryInformationProcess @ 0x180160370
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     RtlpInitRandomExVector @ 0x18002CD6C (RtlpInitRandomExVector.c)
 *     RtlEncodePointer @ 0x1800314C0 (RtlEncodePointer.c)
 *     RtlDecodePointer @ 0x180046E40 (RtlDecodePointer.c)
 *     LdrpQueryInformationCurrentProcess @ 0x18007DE00 (LdrpQueryInformationCurrentProcess.c)
 *     WerpProcessId @ 0x1800AC6B4 (WerpProcessId.c)
 *     WerpGlobalFlagsForProcess @ 0x1800AC868 (WerpGlobalFlagsForProcess.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800AE370 (LdrpLogLoadFailureEtwEvent.c)
 *     PsspCaptureProcessInformation @ 0x1800BB96C (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 *     PsspCaptureHandleTrace @ 0x1800BD5E8 (PsspCaptureHandleTrace.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800D0AD4 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800DC860 (RtlpCreateExecutionRequiredRequest.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DF0D8 (SetAssertBufferPtrinPeb.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E1430 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800F1A30 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64SuspendThread @ 0x1800F3B20 (RtlpWow64SuspendThread.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800F6B04 (RtlpGetModifiedProcessCookie.c)
 *     PsspDumpObject_Process @ 0x180109B80 (PsspDumpObject_Process.c)
 *     WerpIsDebugPortPresent @ 0x18010B5E8 (WerpIsDebugPortPresent.c)
 *     WerpIsProcessNative @ 0x18011BF64 (WerpIsProcessNative.c)
 *     DbgUiIssueRemoteBreakin @ 0x180130CA0 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 *     RtlSetProcessIsCritical @ 0x180143F70 (RtlSetProcessIsCritical.c)
 *     RtlDecodeRemotePointer @ 0x18015DC50 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x18015DCC0 (RtlEncodeRemotePointer.c)
 *     LdrpMapCleanModuleView @ 0x18015DDF8 (LdrpMapCleanModuleView.c)
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
