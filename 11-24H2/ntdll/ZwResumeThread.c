/*
 * XREFs of ZwResumeThread @ 0x1801626D0
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 *     EtwpCreateEtwThread @ 0x18008C220 (EtwpCreateEtwThread.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E8930 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpEnvThreadSuspend @ 0x1800E8B60 (RtlpHpEnvThreadSuspend.c)
 *     RtlpWow64SuspendThread @ 0x1800F8F50 (RtlpWow64SuspendThread.c)
 *     RtlSetProcessDebugInformation @ 0x180133BB0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x180134770 (WerReportExceptionWorker.c)
 *     RtlRemoteCall @ 0x1801469B0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeThread()
{
  __int64 result; // rax

  result = 82LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
