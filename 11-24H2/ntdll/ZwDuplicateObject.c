/*
 * XREFs of ZwDuplicateObject @ 0x180162410
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000226C (RtlReportExceptionHelper.c)
 *     RtlReportSilentProcessExit @ 0x180002F20 (RtlReportSilentProcessExit.c)
 *     TppIsWorkerThread @ 0x1800044A0 (TppIsWorkerThread.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     PsspWalkHandleTable @ 0x1800C425C (PsspWalkHandleTable.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E5F80 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800F3DB4 (TppPoolUpdateTrimmedWorker.c)
 *     RtlpWow64SuspendThread @ 0x1800F8F50 (RtlpWow64SuspendThread.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801126D0 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18011A228 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011A7DC (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpWow64SuspendProcess @ 0x1801323E8 (RtlpWow64SuspendProcess.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1801342D0 (RtlReportExceptionEx.c)
 * Callees:
 *     <none>
 */

__int64 ZwDuplicateObject()
{
  __int64 result; // rax

  result = 60LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
