/*
 * XREFs of ZwQueryInformationThread @ 0x180162130
 * Callers:
 *     WerpThreadId @ 0x180002A04 (WerpThreadId.c)
 *     RtlExitUserThread @ 0x1800042C0 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x1800044A0 (TppIsWorkerThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     LdrpDetectDetour @ 0x18006CBA0 (LdrpDetectDetour.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     PsspCaptureThreadInformation @ 0x1800C2CCC (PsspCaptureThreadInformation.c)
 *     PsspDumpThread @ 0x1800C30B4 (PsspDumpThread.c)
 *     PssNtCaptureSnapshot @ 0x1800C3790 (PssNtCaptureSnapshot.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x1800E15E0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlpHpEnvThreadSuspend @ 0x1800E8B60 (RtlpHpEnvThreadSuspend.c)
 *     RtlCheckHeldCriticalSections @ 0x1800F31A0 (RtlCheckHeldCriticalSections.c)
 *     RtlpWow64SuspendThread @ 0x1800F8F50 (RtlpWow64SuspendThread.c)
 *     PsspDumpObject_Thread @ 0x18010B0F0 (PsspDumpObject_Thread.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x18010C4E4 (DbgUiConvertStateChangeStructureWorker.c)
 *     RtlSetThreadIsCritical @ 0x1801101B0 (RtlSetThreadIsCritical.c)
 *     PsspSampleCounters @ 0x1801118C4 (PsspSampleCounters.c)
 *     LdrpDoDebuggerBreak @ 0x18011F558 (LdrpDoDebuggerBreak.c)
 *     RtlWow64GetThreadContext @ 0x1801321B0 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1801321E0 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlpWow64SuspendProcess @ 0x1801323E8 (RtlpWow64SuspendProcess.c)
 *     RtlQueryThreadProfiling @ 0x1801329C0 (RtlQueryThreadProfiling.c)
 *     RtlSetProcessDebugInformation @ 0x180133BB0 (RtlSetProcessDebugInformation.c)
 *     RtlpRcuCurrentThreadData @ 0x180147E48 (RtlpRcuCurrentThreadData.c)
 *     LdrHotPatchNotify @ 0x18015E690 (LdrHotPatchNotify.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationThread()
{
  __int64 result; // rax

  result = 37LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
