/*
 * XREFs of NtCreateSection @ 0x180163B60
 * Callers:
 *     RtlGetImageFileMachines @ 0x180015120 (RtlGetImageFileMachines.c)
 *     CsrpConnectToServer @ 0x180035EC0 (CsrpConnectToServer.c)
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800983A4 (RtlpQueryExtendedHeapInformation.c)
 *     LdrpMapResourceFile @ 0x1800A2100 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800C73DC (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleTrace @ 0x1800C7D7C (PsspCaptureHandleTrace.c)
 *     PsspCaptureHandleInformation @ 0x1800C8758 (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800CA11C (PsspCaptureVaSpaceInformation2.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800CBEB8 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlReportExceptionHelper @ 0x1800CF388 (RtlReportExceptionHelper.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800E0D80 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F88D0 (RtlCreateQueryDebugBuffer.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180113590 (LdrVerifyImageMatchesChecksumEx.c)
 *     WerpCreateCrashDataSection @ 0x1801172B4 (WerpCreateCrashDataSection.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801189C4 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 *     RtlComputeImportTableHash @ 0x180136750 (RtlComputeImportTableHash.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014D778 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015E1B0 (PsspCaptureIptTrace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  NTSTATUS result; // eax

  result = 74;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
