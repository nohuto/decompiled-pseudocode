/*
 * XREFs of ZwReadVirtualMemory @ 0x180162470
 * Callers:
 *     RtlpQueryCriticalSectionOwner64 @ 0x1800442E0 (RtlpQueryCriticalSectionOwner64.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x180046160 (RtlQueryCriticalSectionOwner.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800AFEE0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrpReadMemory @ 0x1800B0B90 (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x1800B0C40 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrpGetModuleName @ 0x1800B0FD0 (LdrpGetModuleName.c)
 *     RtlpQueryReadVirtualMemory @ 0x1800B13B0 (RtlpQueryReadVirtualMemory.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x1800B1410 (LdrQueryInLoadOrderModuleList32.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x1800C590C (PsspCaptureImageInformation.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E5F80 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800F72E0 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64SuspendThread @ 0x1800F8F50 (RtlpWow64SuspendThread.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801126D0 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011A7DC (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpQueryCriticalSectionOwner32 @ 0x180133DA0 (RtlpQueryCriticalSectionOwner32.c)
 * Callees:
 *     <none>
 */

__int64 ZwReadVirtualMemory()
{
  __int64 result; // rax

  result = 63LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
