/*
 * XREFs of ZwMapViewOfSection @ 0x180162190
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000226C (RtlReportExceptionHelper.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800038F8 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpHeapTrkLeakCallback @ 0x18003EA50 (RtlpHeapTrkLeakCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800446C4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180045670 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 *     LdrpMapResourceFile @ 0x180076970 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     CsrpConnectToServer @ 0x1800A7080 (CsrpConnectToServer.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800B7D40 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800C2CCC (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 *     PssNtWalkSnapshot @ 0x1800C4A50 (PssNtWalkSnapshot.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x1800C4DE0 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x1800C4F20 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1800C50A4 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800C536C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800C5A28 (PsspCaptureHandleTrace.c)
 *     RtlpFcMapSingleBuffer @ 0x1800D67B0 (RtlpFcMapSingleBuffer.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E5F80 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F6C70 (RtlCreateQueryDebugBuffer.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     LdrpResMapFile @ 0x18010E614 (LdrpResMapFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180110720 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlHeapTrkInitialize @ 0x1801134A0 (RtlHeapTrkInitialize.c)
 *     WerpCreateCrashDataSection @ 0x180114304 (WerpCreateCrashDataSection.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801157D4 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180142330 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180142450 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180142900 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014C1C8 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015CC50 (PsspCaptureIptTrace.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015EA6C (LdrpIsCurrentPatchLatest.c)
 *     LdrpMapCleanModuleView @ 0x18015FA38 (LdrpMapCleanModuleView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwMapViewOfSection()
{
  __int64 result; // rax

  result = 40LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
