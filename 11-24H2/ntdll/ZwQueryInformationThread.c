/*
 * XREFs of ZwQueryInformationThread @ 0x1801604F0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpDetectDetour @ 0x180089480 (LdrpDetectDetour.c)
 *     RtlExitUserThread @ 0x1800AADB0 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x1800AAF90 (TppIsWorkerThread.c)
 *     WerpThreadId @ 0x1800AC704 (WerpThreadId.c)
 *     PsspCaptureThreadInformation @ 0x1800BA890 (PsspCaptureThreadInformation.c)
 *     PsspDumpThread @ 0x1800BAC78 (PsspDumpThread.c)
 *     PssNtCaptureSnapshot @ 0x1800BB350 (PssNtCaptureSnapshot.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x1800DCB30 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlpHpEnvThreadSuspend @ 0x1800E4250 (RtlpHpEnvThreadSuspend.c)
 *     RtlCheckHeldCriticalSections @ 0x1800EDA90 (RtlCheckHeldCriticalSections.c)
 *     RtlpWow64SuspendThread @ 0x1800F3B20 (RtlpWow64SuspendThread.c)
 *     PsspDumpObject_Thread @ 0x180105E90 (PsspDumpObject_Thread.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x180107224 (DbgUiConvertStateChangeStructureWorker.c)
 *     RtlSetThreadIsCritical @ 0x18010B250 (RtlSetThreadIsCritical.c)
 *     PsspSampleCounters @ 0x18010CCD4 (PsspSampleCounters.c)
 *     LdrpDoDebuggerBreak @ 0x18011D788 (LdrpDoDebuggerBreak.c)
 *     RtlWow64GetThreadContext @ 0x1801303E0 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x180130410 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlpWow64SuspendProcess @ 0x180130618 (RtlpWow64SuspendProcess.c)
 *     RtlQueryThreadProfiling @ 0x180130BF0 (RtlQueryThreadProfiling.c)
 *     RtlSetProcessDebugInformation @ 0x180131DE0 (RtlSetProcessDebugInformation.c)
 *     RtlpRcuCurrentThreadData @ 0x1801461F8 (RtlpRcuCurrentThreadData.c)
 *     LdrHotPatchNotify @ 0x18015CA50 (LdrHotPatchNotify.c)
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
