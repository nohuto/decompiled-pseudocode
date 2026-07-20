/*
 * XREFs of memset_0 @ 0x14001EF9F
 * Callers:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     wmain @ 0x140001510 (wmain.c)
 *     SmscpLoadSubSystemsForMuSession @ 0x140002580 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpLoadSubSystem @ 0x140002D40 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmpSelectNodeNumber @ 0x140003810 (SmpSelectNodeNumber.c)
 *     SmscpExecuteInitialCommand @ 0x140003B40 (SmscpExecuteInitialCommand.c)
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 *     SmpAllocateControlBlock @ 0x140004B60 (SmpAllocateControlBlock.c)
 *     SmpApiCallback @ 0x140005960 (SmpApiCallback.c)
 *     SmpReleaseControlBlock @ 0x140005FF0 (SmpReleaseControlBlock.c)
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpExecPgm @ 0x140006F70 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpGetProcessMuSessionId @ 0x140007D90 (SmpGetProcessMuSessionId.c)
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     SmpUpdatePagefileUsageCallback @ 0x1400082B0 (SmpUpdatePagefileUsageCallback.c)
 *     SmExecPgmEx @ 0x140009920 (SmExecPgmEx.c)
 *     SmpSaveOldPageFiles @ 0x140009FD0 (SmpSaveOldPageFiles.c)
 *     RtlStringCbPrintfExW @ 0x14000C8F4 (RtlStringCbPrintfExW.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F56C (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpEnableCachingOnDedicatedMemoryWorker @ 0x140010D7C (SmpEnableCachingOnDedicatedMemoryWorker.c)
 *     SmpPagefileInitialize @ 0x140011310 (SmpPagefileInitialize.c)
 *     SmpCheckForCrashDump @ 0x1400119EC (SmpCheckForCrashDump.c)
 *     SmpQuerySameVolume @ 0x1400129A0 (SmpQuerySameVolume.c)
 *     SmpSavePageFile @ 0x140012E7C (SmpSavePageFile.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140013308 (RtlStringExHandleOtherFlagsW.c)
 *     SmpInit @ 0x1400150FC (SmpInit.c)
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x140017B28 (SmpRenameTargetFile.c)
 *     SmpRunSecureKernelTrustlets @ 0x140017E00 (SmpRunSecureKernelTrustlets.c)
 *     SmpStartServerSilo @ 0x140018E80 (SmpStartServerSilo.c)
 *     SmpCreateInitialSession @ 0x140019050 (SmpCreateInitialSession.c)
 *     SmscpNotifySmOfFailure @ 0x140019884 (SmscpNotifySmOfFailure.c)
 *     GetLongPathNameW @ 0x14001CE70 (GetLongPathNameW.c)
 *     BasepGetFileRedirectionStatus @ 0x14001D50C (BasepGetFileRedirectionStatus.c)
 *     InternalFindFirstFileExW @ 0x14001DDF8 (InternalFindFirstFileExW.c)
 *     NtPnpGetObjectProperty @ 0x14001E870 (NtPnpGetObjectProperty.c)
 *     NtPnpInitializeInputPropertyData @ 0x14001EA04 (NtPnpInitializeInputPropertyData.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
