/*
 * XREFs of ZwResumeThread @ 0x180160A90
 * Callers:
 *     EtwpCreateEtwThread @ 0x1800A7CE0 (EtwpCreateEtwThread.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E4020 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpEnvThreadSuspend @ 0x1800E4250 (RtlpHpEnvThreadSuspend.c)
 *     RtlpWow64SuspendThread @ 0x1800F3B20 (RtlpWow64SuspendThread.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1801109D0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlSetProcessDebugInformation @ 0x180131DE0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1801329A0 (WerReportExceptionWorker.c)
 *     RtlRemoteCall @ 0x180144D60 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 82;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
