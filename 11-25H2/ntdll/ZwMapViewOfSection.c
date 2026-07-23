/*
 * XREFs of ZwMapViewOfSection @ 0x180163720
 * Callers:
 *     CsrpConnectToServer @ 0x180035EC0 (CsrpConnectToServer.c)
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     RtlpHeapTrkLeakCallback @ 0x180092440 (RtlpHeapTrkLeakCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800983A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180099350 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpFcMapSingleBuffer @ 0x18009FA80 (RtlpFcMapSingleBuffer.c)
 *     LdrpMapResourceFile @ 0x1800A2100 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800C73DC (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleTrace @ 0x1800C7D7C (PsspCaptureHandleTrace.c)
 *     PsspCaptureHandleInformation @ 0x1800C8758 (PsspCaptureHandleInformation.c)
 *     PssNtWalkSnapshot @ 0x1800C9800 (PssNtWalkSnapshot.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x1800C9B90 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x1800C9CD0 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1800C9E54 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800CA11C (PsspCaptureVaSpaceInformation2.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800CBEB8 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlReportExceptionHelper @ 0x1800CF388 (RtlReportExceptionHelper.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800E0D80 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E4F50 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F88D0 (RtlCreateQueryDebugBuffer.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180113590 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlHeapTrkInitialize @ 0x180116430 (RtlHeapTrkInitialize.c)
 *     WerpCreateCrashDataSection @ 0x1801172B4 (WerpCreateCrashDataSection.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801189C4 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 *     RtlComputeImportTableHash @ 0x180136750 (RtlComputeImportTableHash.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180143A20 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180143B40 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180143FF0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014D778 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015E1B0 (PsspCaptureIptTrace.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015FF2C (LdrpIsCurrentPatchLatest.c)
 *     LdrpMapCleanModuleView @ 0x180160F8C (LdrpMapCleanModuleView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  NTSTATUS result; // eax

  result = 40;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
