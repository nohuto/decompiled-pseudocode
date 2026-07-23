/*
 * XREFs of ZwQueryInformationThread @ 0x1801636C0
 * Callers:
 *     RtlExitUserThread @ 0x180008DE0 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x180008FC0 (TppIsWorkerThread.c)
 *     RtlpHpEnvThreadSuspend @ 0x180033BC0 (RtlpHpEnvThreadSuspend.c)
 *     LdrpDetectDetour @ 0x18003A320 (LdrpDetectDetour.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     PsspCaptureThreadInformation @ 0x1800C73DC (PsspCaptureThreadInformation.c)
 *     PsspDumpThread @ 0x1800C77C4 (PsspDumpThread.c)
 *     PssNtCaptureSnapshot @ 0x1800C7F80 (PssNtCaptureSnapshot.c)
 *     WerpThreadId @ 0x1800CFB20 (WerpThreadId.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x1800DEB60 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x1800F4D10 (RtlCheckHeldCriticalSections.c)
 *     RtlpWow64SuspendThread @ 0x1800FAB70 (RtlpWow64SuspendThread.c)
 *     PsspDumpObject_Thread @ 0x18010D790 (PsspDumpObject_Thread.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x18010E664 (DbgUiConvertStateChangeStructureWorker.c)
 *     RtlSetThreadIsCritical @ 0x180112F20 (RtlSetThreadIsCritical.c)
 *     PsspSampleCounters @ 0x1801149C4 (PsspSampleCounters.c)
 *     LdrpDoDebuggerBreak @ 0x180120E28 (LdrpDoDebuggerBreak.c)
 *     RtlWow64GetThreadContext @ 0x180133C90 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x180133CC0 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlpWow64SuspendProcess @ 0x180133EC8 (RtlpWow64SuspendProcess.c)
 *     RtlQueryThreadProfiling @ 0x1801344A0 (RtlQueryThreadProfiling.c)
 *     RtlSetProcessDebugInformation @ 0x180135690 (RtlSetProcessDebugInformation.c)
 *     RtlpRcuCurrentThreadData @ 0x1801493F8 (RtlpRcuCurrentThreadData.c)
 *     LdrHotPatchNotify @ 0x18015FB50 (LdrHotPatchNotify.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 37;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
