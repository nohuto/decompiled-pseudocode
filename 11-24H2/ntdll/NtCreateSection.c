/*
 * XREFs of NtCreateSection @ 0x1801625D0
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000226C (RtlReportExceptionHelper.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800038F8 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800446C4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlGetImageFileMachines @ 0x1800594E0 (RtlGetImageFileMachines.c)
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 *     LdrpMapResourceFile @ 0x180076970 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     CsrpConnectToServer @ 0x1800A7080 (CsrpConnectToServer.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800B7D40 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800C2CCC (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800C536C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800C5A28 (PsspCaptureHandleTrace.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F6C70 (RtlCreateQueryDebugBuffer.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     LdrpResMapFile @ 0x18010E614 (LdrpResMapFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180110720 (LdrVerifyImageMatchesChecksumEx.c)
 *     WerpCreateCrashDataSection @ 0x180114304 (WerpCreateCrashDataSection.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801157D4 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014C1C8 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015CC50 (PsspCaptureIptTrace.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateSection()
{
  __int64 result; // rax

  result = 74LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
