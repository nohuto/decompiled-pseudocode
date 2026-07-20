/*
 * XREFs of SmpLogFailure @ 0x14000D7F0
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 *     SmscpLoadSubSystemsForMuSession @ 0x140002580 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpLoadSubSystem @ 0x140002D40 (SmscpLoadSubSystem.c)
 *     SmscpExecuteInitialCommand @ 0x140003B40 (SmscpExecuteInitialCommand.c)
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 *     SmpAllocateControlBlock @ 0x140004B60 (SmpAllocateControlBlock.c)
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpWaitForSingleSubSys @ 0x140006EC0 (SmpWaitForSingleSubSys.c)
 *     SmpExecPgm @ 0x140006F70 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008F30 (SmpInitializeKnownDllsInternal.c)
 *     SmpConfigureSharedSessionData @ 0x14000A3D0 (SmpConfigureSharedSessionData.c)
 *     SmpTranslateSystemPartitionInformation @ 0x14000D19C (SmpTranslateSystemPartitionInformation.c)
 *     SmpBuildFilesStringFromList @ 0x14000D6E8 (SmpBuildFilesStringFromList.c)
 *     SmpInitializeManagedPagefileSupport @ 0x14000EA24 (SmpInitializeManagedPagefileSupport.c)
 *     SmpAsyncMemoryConfiguration @ 0x14000F110 (SmpAsyncMemoryConfiguration.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F56C (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpCreatePagefileOnVolume @ 0x14000FA5C (SmpCreatePagefileOnVolume.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000FE40 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 *     SmpCreateVolumeDescriptor @ 0x1400102D4 (SmpCreateVolumeDescriptor.c)
 *     SmpCreateVolumeDescriptors @ 0x140010624 (SmpCreateVolumeDescriptors.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14001078C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpDeletePagingFile @ 0x140010C88 (SmpDeletePagingFile.c)
 *     SmpPagefileInitialize @ 0x140011310 (SmpPagefileInitialize.c)
 *     SmpParseSwapOrPageFileArguments @ 0x1400115CC (SmpParseSwapOrPageFileArguments.c)
 *     SmpRecordCreatedPageFiles @ 0x1400116E4 (SmpRecordCreatedPageFiles.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x1400143B0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpFinishPFROLogging @ 0x140014ADC (SmpFinishPFROLogging.c)
 *     SmpInit @ 0x1400150FC (SmpInit.c)
 *     SmpInitializeKnownDllsAsync @ 0x140015AF0 (SmpInitializeKnownDllsAsync.c)
 *     SmpInitializeKnownDllsWorker @ 0x140015C10 (SmpInitializeKnownDllsWorker.c)
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     SmpLogPFROError @ 0x140016F38 (SmpLogPFROError.c)
 *     SmpOpenKnownDllsHandles @ 0x140017200 (SmpOpenKnownDllsHandles.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017C5C (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpSetCoreProcessIds @ 0x140018CC4 (SmpSetCoreProcessIds.c)
 *     SmpAdoptJob @ 0x140018DD0 (SmpAdoptJob.c)
 *     SmpStartServerSilo @ 0x140018E80 (SmpStartServerSilo.c)
 *     SmpCreateInitialSession @ 0x140019050 (SmpCreateInitialSession.c)
 * Callees:
 *     SmpInternalLogFailure @ 0x1400036FC (SmpInternalLogFailure.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

_OWORD *__fastcall SmpLogFailure(__int64 a1, int a2, int a3)
{
  _BYTE v7[224]; // [rsp+20h] [rbp-F8h] BYREF

  memset_0(v7, 0, sizeof(v7));
  return SmpInternalLogFailure(a1, a2, a3, (__int64)v7);
}
