/*
 * XREFs of NtUnmapViewOfSection @ 0x180160590
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x1800026C0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpLoadNlsData @ 0x1800144AC (RtlpLoadNlsData.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180029600 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpUnmapModule @ 0x1800331C8 (LdrpUnmapModule.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074D00 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1800773E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMinimalMapModule @ 0x18008F820 (LdrpMinimalMapModule.c)
 *     LdrpMapResourceFile @ 0x180093250 (LdrpMapResourceFile.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800A2080 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlReportExceptionHelper @ 0x1800ABF6C (RtlReportExceptionHelper.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800BA890 (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800BCF2C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800BD5E8 (PsspCaptureHandleTrace.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800C7618 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D18C0 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E1430 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F11D0 (RtlCreateQueryDebugBuffer.c)
 *     RtlGetLocaleFileMappingAddress @ 0x1800F50F0 (RtlGetLocaleFileMappingAddress.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     RtlDestroyQueryDebugBuffer @ 0x180105520 (RtlDestroyQueryDebugBuffer.c)
 *     LdrResRelease @ 0x180106520 (LdrResRelease.c)
 *     LdrFlushAlternateResourceModules @ 0x180108D30 (LdrFlushAlternateResourceModules.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010B9E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     PssNtFreeWalkMarker @ 0x18010E6F0 (PssNtFreeWalkMarker.c)
 *     RtlHeapTrkInitialize @ 0x18010E7A0 (RtlHeapTrkInitialize.c)
 *     WerpCreateCrashDataSection @ 0x18010F554 (WerpCreateCrashDataSection.c)
 *     RtlpGetCustomCultureData @ 0x180110BE4 (RtlpGetCustomCultureData.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180111D34 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x180132130 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x180132220 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlReportExceptionEx @ 0x180132500 (RtlReportExceptionEx.c)
 *     RtlComputeImportTableHash @ 0x1801330D0 (RtlComputeImportTableHash.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1801404E0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180140600 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180140AB0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014A590 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015B010 (PsspCaptureIptTrace.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015CE2C (LdrpIsCurrentPatchLatest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  NTSTATUS result; // eax

  result = 42;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
