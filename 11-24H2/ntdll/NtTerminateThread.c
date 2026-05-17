/*
 * XREFs of NtTerminateThread @ 0x1801626F0
 * Callers:
 *     RtlExitUserThread @ 0x1800042C0 (RtlExitUserThread.c)
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     EtwpCreateEtwThread @ 0x18008C220 (EtwpCreateEtwThread.c)
 *     RtlAssert @ 0x1800F28E0 (RtlAssert.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x180133BB0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x180134770 (WerReportExceptionWorker.c)
 * Callees:
 *     <none>
 */

__int64 NtTerminateThread()
{
  __int64 result; // rax

  result = 83LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
