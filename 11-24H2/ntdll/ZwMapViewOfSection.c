/*
 * XREFs of ZwMapViewOfSection @ 0x180160550
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x1800026C0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpHeapTrkLeakCallback @ 0x18001ECD0 (RtlpHeapTrkLeakCallback.c)
 *     CsrpConnectToServer @ 0x1800243D4 (CsrpConnectToServer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180029600 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpMinimalMapModule @ 0x18008F820 (LdrpMinimalMapModule.c)
 *     LdrpMapResourceFile @ 0x180093250 (LdrpMapResourceFile.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800A2080 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlReportExceptionHelper @ 0x1800ABF6C (RtlReportExceptionHelper.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800BA890 (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 *     PssNtWalkSnapshot @ 0x1800BC610 (PssNtWalkSnapshot.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x1800BC9A0 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x1800BCAE0 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1800BCC64 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800BCF2C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800BD5E8 (PsspCaptureHandleTrace.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800C7618 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpFcMapSingleBuffer @ 0x1800D1B20 (RtlpFcMapSingleBuffer.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E1430 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F11D0 (RtlCreateQueryDebugBuffer.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     LdrpResMapFile @ 0x180109564 (LdrpResMapFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010B9E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlHeapTrkInitialize @ 0x18010E7A0 (RtlHeapTrkInitialize.c)
 *     WerpCreateCrashDataSection @ 0x18010F554 (WerpCreateCrashDataSection.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180110C68 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 *     RtlComputeImportTableHash @ 0x1801330D0 (RtlComputeImportTableHash.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1801404E0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180140600 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180140AB0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014A590 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015B010 (PsspCaptureIptTrace.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015CE2C (LdrpIsCurrentPatchLatest.c)
 *     LdrpMapCleanModuleView @ 0x18015DDF8 (LdrpMapCleanModuleView.c)
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
