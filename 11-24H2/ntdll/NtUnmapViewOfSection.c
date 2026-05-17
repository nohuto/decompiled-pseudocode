/*
 * XREFs of NtUnmapViewOfSection @ 0x1801621D0
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000226C (RtlReportExceptionHelper.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800038F8 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpUnmapModule @ 0x1800067C8 (LdrpUnmapModule.c)
 *     RtlpLoadNlsData @ 0x1800333EC (RtlpLoadNlsData.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800446C4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlDestroyQueryDebugBuffer @ 0x180044B40 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180045670 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18005F120 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180061800 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 *     LdrpMapResourceFile @ 0x180076970 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800B7D40 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800C2CCC (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800C536C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800C5A28 (PsspCaptureHandleTrace.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D6550 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E5F80 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F6C70 (RtlCreateQueryDebugBuffer.c)
 *     RtlGetLocaleFileMappingAddress @ 0x1800FA390 (RtlGetLocaleFileMappingAddress.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     LdrResRelease @ 0x18010BB50 (LdrResRelease.c)
 *     LdrFlushAlternateResourceModules @ 0x18010DE50 (LdrFlushAlternateResourceModules.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180110720 (LdrVerifyImageMatchesChecksumEx.c)
 *     PssNtFreeWalkMarker @ 0x1801133F0 (PssNtFreeWalkMarker.c)
 *     RtlHeapTrkInitialize @ 0x1801134A0 (RtlHeapTrkInitialize.c)
 *     WerpCreateCrashDataSection @ 0x180114304 (WerpCreateCrashDataSection.c)
 *     RtlpGetCustomCultureData @ 0x180115750 (RtlpGetCustomCultureData.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180116C48 (LdrpSpecialCacheTypeHandle.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x180133F00 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x180133FF0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlReportExceptionEx @ 0x1801342D0 (RtlReportExceptionEx.c)
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180142330 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180142450 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180142900 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014C1C8 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015CC50 (PsspCaptureIptTrace.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015EA6C (LdrpIsCurrentPatchLatest.c)
 * Callees:
 *     <none>
 */

__int64 NtUnmapViewOfSection()
{
  __int64 result; // rax

  result = 42LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
