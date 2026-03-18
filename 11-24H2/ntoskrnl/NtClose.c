/*
 * XREFs of NtClose @ 0x14084AA00
 * Callers:
 *     SepRmCallLsa @ 0x14034A120 (SepRmCallLsa.c)
 *     RtlQueryValidationRunlevel @ 0x1405EFE10 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1406A26DC (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1406A2910 (_RtlpRemovePendingDeleteLanguages.c)
 *     IopConnectLinkTrackingPort @ 0x140711D30 (IopConnectLinkTrackingPort.c)
 *     PopEtEnergyTrackerCreate @ 0x14075DC60 (PopEtEnergyTrackerCreate.c)
 *     NtCreateProcessStateChange @ 0x140775A70 (NtCreateProcessStateChange.c)
 *     RtlInitFunctionalityCache @ 0x14077CF38 (RtlInitFunctionalityCache.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407837C0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x140783F78 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B3064 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B73B0 (ExpWatchLicenseInfoWork.c)
 *     NtOpenRegistryTransaction @ 0x1407CFE60 (NtOpenRegistryTransaction.c)
 *     CmpInitializeLazyWriters @ 0x1407DF164 (CmpInitializeLazyWriters.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E54D8 (CmpHiveCacheEntryCleanup.c)
 *     AdtpObjsInitialize @ 0x1408114B8 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1408119E0 (AdtpInitializeDriveLetters.c)
 *     RtlpLoadLanguageConfigList @ 0x14082B5F0 (RtlpLoadLanguageConfigList.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     AlpcpCreateConnectionPort @ 0x14086210C (AlpcpCreateConnectionPort.c)
 *     AlpcpConnectPort @ 0x1408645A0 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x14088AF50 (NtSecureConnectPort.c)
 *     PfpVolumeOpenAndVerify @ 0x140950C88 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchPrivatePages @ 0x14095328C (PfpPrefetchPrivatePages.c)
 *     PfpFileBuildReadSupport @ 0x140953F94 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140954370 (PfpReadSupportCleanup.c)
 *     PfSnPrefetchMetadata @ 0x140954444 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x14096AFAC (PfSnGetSectionObject.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14096BF6C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x14096C58C (PfSnIsVolumeMounted.c)
 *     PfSnGetPrefetchInstructions @ 0x140970C24 (PfSnGetPrefetchInstructions.c)
 *     PnpPrepareDriverLoading @ 0x1409C7848 (PnpPrepareDriverLoading.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 *     NtCreateRegistryTransaction @ 0x140A4C5C0 (NtCreateRegistryTransaction.c)
 *     NtCreateThreadStateChange @ 0x140A5FDF0 (NtCreateThreadStateChange.c)
 *     PfpSourceGetPrefetchSupport @ 0x140AB7630 (PfpSourceGetPrefetchSupport.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     sub_140C086B4 @ 0x140C086B4 (sub_140C086B4.c)
 *     CreateSystemRootLink @ 0x140C0A3F8 (CreateSystemRootLink.c)
 *     InitSafeBoot @ 0x140C0B900 (InitSafeBoot.c)
 *     FsRtlInitializeSmssEvent @ 0x140C18ECC (FsRtlInitializeSmssEvent.c)
 *     IopInitCrashDumpRegCallback @ 0x140C1CA50 (IopInitCrashDumpRegCallback.c)
 *     IopApplySystemPartitionProt @ 0x140C1E168 (IopApplySystemPartitionProt.c)
 *     IopProtectSystemPartition @ 0x140C1E3BC (IopProtectSystemPartition.c)
 *     SepAdtInitializeAuditingOptions @ 0x140C3B150 (SepAdtInitializeAuditingOptions.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 *     ExpInitializeCallbacks @ 0x140C42828 (ExpInitializeCallbacks.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x14040E6A0 (ObpIsKernelHandle.c)
 *     ExHandleLogBadReference @ 0x14043AC30 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1404528F4 (ExQueryHandleExceptionsPermanency.c)
 *     KeRaiseUserException @ 0x1404CDA80 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140940570 (ObReferenceProcessHandleTable.c)
 *     VfCheckUserHandle @ 0x140BA9228 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rbp
  char v4; // r12
  signed __int64 v5; // rsi
  _KPROCESS *Process; // r14
  struct _EX_RUNDOWN_REF *v7; // r13
  __int64 KernelTime; // rdi
  signed __int64 *v9; // rbx
  signed __int64 v10; // r8
  NTSTATUS v11; // ebx
  unsigned __int64 v12; // rtt
  __int64 v14; // rdx
  ULONG_PTR v15; // rcx
  char v16; // [rsp+70h] [rbp+8h] BYREF
  char v17; // [rsp+78h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) == 0 || PreviousMode || ObpIsKernelHandle((__int64)Handle, 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0;
    v16 = 0;
    v5 = (signed __int64)Handle;
    Process = CurrentThread->ApcState.Process;
    if ( PreviousMode )
      goto LABEL_3;
  }
  else
  {
    VfCheckUserHandle(v15);
    CurrentThread = KeGetCurrentThread();
    v5 = (signed __int64)Handle;
    v16 = 0;
    v4 = 0;
    Process = CurrentThread->ApcState.Process;
  }
  if ( ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL
    && (unsigned __int64)Handle <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    KernelTime = ObpKernelHandleTable;
    v7 = (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess;
    v5 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
    goto LABEL_5;
  }
LABEL_3:
  v7 = (struct _EX_RUNDOWN_REF *)Process;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    KernelTime = ObReferenceProcessHandleTable(Process);
    if ( KernelTime )
    {
      v4 = 1;
      goto LABEL_5;
    }
    return -1073741816;
  }
  KernelTime = Process[1].KernelTime;
  if ( KernelTime == ObpKernelHandleTable )
    return -1073741816;
LABEL_5:
  --CurrentThread->KernelApcDisable;
  if ( (v5 & 0x3FC) != 0 )
  {
    v9 = (signed __int64 *)ExpLookupHandleTableEntry(KernelTime, v5);
    if ( v9 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v9);
          v10 = *v9;
          if ( (*v9 & 1) != 0 )
            break;
          if ( !v10 )
            goto LABEL_19;
          ExpBlockOnLockedHandleEntry(KernelTime, v9);
        }
      }
      while ( v10 != _InterlockedCompareExchange64(v9, v10 - 1, v10) );
      v11 = ObCloseHandleTableEntry(KernelTime, v9, v7, v5, PreviousMode, 0);
      goto LABEL_10;
    }
  }
LABEL_19:
  KeLeaveCriticalRegionThread();
  if ( v5 <= 0 && v5 >= -6 )
    goto LABEL_21;
  ExQueryHandleExceptionsPermanency(KernelTime, &v17, &v16);
  if ( (*(_BYTE *)(KernelTime + 44) & 0x10) != 0 && v16 )
    ExHandleLogBadReference(KernelTime, v5, PreviousMode);
  if ( !PreviousMode )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
      && Process[1].ProcessListEntry.Blink
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v5, 1uLL, 0LL, 0LL);
    }
    goto LABEL_21;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].UserTime && !*(_QWORD *)(KernelTime + 96) )
  {
LABEL_21:
    v11 = -1073741816;
    if ( (unsigned __int64)v5 >= 0xFFFFFFFFFFFFFFFAuLL )
      v11 = 0;
    goto LABEL_10;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v11 = -1073741816;
  else
    v11 = KeRaiseUserException(0xC0000008, v14);
LABEL_10:
  if ( v4 )
  {
    _m_prefetchw(&v7[61]);
    v12 = v7[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&v7[61], v12 - 2, v12) )
      ExfReleaseRundownProtection(v7 + 61);
  }
  return v11;
}
