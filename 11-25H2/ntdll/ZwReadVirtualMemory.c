/*
 * XREFs of ZwReadVirtualMemory @ 0x180163A00
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800698A0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrpReadMemory @ 0x18006A550 (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006A600 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 *     RtlpQueryReadVirtualMemory @ 0x18006AD70 (RtlpQueryReadVirtualMemory.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18006ADD0 (LdrQueryInLoadOrderModuleList32.c)
 *     RtlpQueryCriticalSectionOwner64 @ 0x180097FC0 (RtlpQueryCriticalSectionOwner64.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x180099E40 (RtlQueryCriticalSectionOwner.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x1800CA6BC (PsspCaptureImageInformation.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E4F50 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800F8F40 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64SuspendThread @ 0x1800FAB70 (RtlpWow64SuspendThread.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18010EEFC (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010F670 (PssNtFreeRemoteSnapshot.c)
 *     RtlpQueryCriticalSectionOwner32 @ 0x180135880 (RtlpQueryCriticalSectionOwner32.c)
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
