/*
 * XREFs of NtCreateSection @ 0x180160990
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x1800026C0 (RtlpFileIsWin32WithRCManifest.c)
 *     CsrpConnectToServer @ 0x1800243D4 (CsrpConnectToServer.c)
 *     RtlGetImageFileMachines @ 0x18006F0C0 (RtlGetImageFileMachines.c)
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 *     LdrpMapResourceFile @ 0x180093250 (LdrpMapResourceFile.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800A2080 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlReportExceptionHelper @ 0x1800ABF6C (RtlReportExceptionHelper.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800BA890 (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800BCF2C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800BD5E8 (PsspCaptureHandleTrace.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800C7618 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F11D0 (RtlCreateQueryDebugBuffer.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     LdrpResMapFile @ 0x180109564 (LdrpResMapFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010B9E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     WerpCreateCrashDataSection @ 0x18010F554 (WerpCreateCrashDataSection.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180110C68 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 *     RtlComputeImportTableHash @ 0x1801330D0 (RtlComputeImportTableHash.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014A590 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015B010 (PsspCaptureIptTrace.c)
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
