/*
 * XREFs of ZwReadVirtualMemory @ 0x180160830
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x18002A0F0 (RtlQueryCriticalSectionOwner.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x18007C780 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrpReadMemory @ 0x18007D430 (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18007D4E0 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrpGetModuleName @ 0x18007D870 (LdrpGetModuleName.c)
 *     RtlpQueryReadVirtualMemory @ 0x18007DC50 (RtlpQueryReadVirtualMemory.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18007DCB0 (LdrQueryInLoadOrderModuleList32.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x1800BD4CC (PsspCaptureImageInformation.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E1430 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800F1A30 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64SuspendThread @ 0x1800F3B20 (RtlpWow64SuspendThread.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010D9B0 (PssNtFreeRemoteSnapshot.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1801109D0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpQueryCriticalSectionOwner64 @ 0x180113770 (RtlpQueryCriticalSectionOwner64.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180118A0C (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpQueryCriticalSectionOwner32 @ 0x180131FD0 (RtlpQueryCriticalSectionOwner32.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = 63;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
