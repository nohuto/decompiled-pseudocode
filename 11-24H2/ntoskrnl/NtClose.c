/*
 * XREFs of NtClose @ 0x140846CC0
 * Callers:
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     RtlQueryValidationRunlevel @ 0x1405ED3F0 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1406A372C (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1406A3960 (_RtlpRemovePendingDeleteLanguages.c)
 *     IopConnectLinkTrackingPort @ 0x14070F8C0 (IopConnectLinkTrackingPort.c)
 *     PopEtEnergyTrackerCreate @ 0x14075CC00 (PopEtEnergyTrackerCreate.c)
 *     NtCreateProcessStateChange @ 0x140775C90 (NtCreateProcessStateChange.c)
 *     RtlInitFunctionalityCache @ 0x14077CE68 (RtlInitFunctionalityCache.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407836F0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x140783EA8 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B34B4 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B7800 (ExpWatchLicenseInfoWork.c)
 *     NtOpenRegistryTransaction @ 0x1407D0350 (NtOpenRegistryTransaction.c)
 *     CmpInitializeLazyWriters @ 0x1407DF6B4 (CmpInitializeLazyWriters.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E5AA8 (CmpHiveCacheEntryCleanup.c)
 *     AdtpObjsInitialize @ 0x140811BF8 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140812120 (AdtpInitializeDriveLetters.c)
 *     RtlpLoadLanguageConfigList @ 0x14082BE20 (RtlpLoadLanguageConfigList.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     AlpcpCreateConnectionPort @ 0x14086671C (AlpcpCreateConnectionPort.c)
 *     AlpcpConnectPort @ 0x140868BB0 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x140890D60 (NtSecureConnectPort.c)
 *     PfpVolumeOpenAndVerify @ 0x140934634 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchPrivatePages @ 0x140936C3C (PfpPrefetchPrivatePages.c)
 *     PfpFileBuildReadSupport @ 0x140937944 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140937D20 (PfpReadSupportCleanup.c)
 *     PfSnPrefetchMetadata @ 0x140937DF4 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x140953450 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x140953A3C (PfSnGetSectionObject.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409549CC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x140954FEC (PfSnIsVolumeMounted.c)
 *     PfSnGetPrefetchInstructions @ 0x140959434 (PfSnGetPrefetchInstructions.c)
 *     PnpPrepareDriverLoading @ 0x1409B8F8C (PnpPrepareDriverLoading.c)
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 *     NtCreateRegistryTransaction @ 0x140A43150 (NtCreateRegistryTransaction.c)
 *     NtCreateThreadStateChange @ 0x140A58340 (NtCreateThreadStateChange.c)
 *     PfpSourceGetPrefetchSupport @ 0x140AB1900 (PfpSourceGetPrefetchSupport.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     sub_140C0A6B4 @ 0x140C0A6B4 (sub_140C0A6B4.c)
 *     CreateSystemRootLink @ 0x140C0C3F8 (CreateSystemRootLink.c)
 *     InitSafeBoot @ 0x140C0D900 (InitSafeBoot.c)
 *     FsRtlInitializeSmssEvent @ 0x140C1AEC0 (FsRtlInitializeSmssEvent.c)
 *     IopInitCrashDumpRegCallback @ 0x140C1EA90 (IopInitCrashDumpRegCallback.c)
 *     IopApplySystemPartitionProt @ 0x140C201A8 (IopApplySystemPartitionProt.c)
 *     IopProtectSystemPartition @ 0x140C203FC (IopProtectSystemPartition.c)
 *     SepAdtInitializeAuditingOptions @ 0x140C3D2A8 (SepAdtInitializeAuditingOptions.c)
 *     ExpWatchProductTypeInitialization @ 0x140C4381C (ExpWatchProductTypeInitialization.c)
 *     ExpInitializeCallbacks @ 0x140C44978 (ExpInitializeCallbacks.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x1404068A0 (ObpIsKernelHandle.c)
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1404479A4 (ExQueryHandleExceptionsPermanency.c)
 *     KeRaiseUserException @ 0x1404C6E50 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     VfCheckUserHandle @ 0x140BAB228 (VfCheckUserHandle.c)
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
