/*
 * XREFs of NtClose @ 0x14084EC50
 * Callers:
 *     SepRmCallLsa @ 0x1403D8550 (SepRmCallLsa.c)
 *     RtlQueryValidationRunlevel @ 0x1405E3B00 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1406974FC (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140697730 (_RtlpRemovePendingDeleteLanguages.c)
 *     IopConnectLinkTrackingPort @ 0x140705C30 (IopConnectLinkTrackingPort.c)
 *     PopEtEnergyTrackerCreate @ 0x140751240 (PopEtEnergyTrackerCreate.c)
 *     NtCreateProcessStateChange @ 0x1407660A0 (NtCreateProcessStateChange.c)
 *     RtlInitFunctionalityCache @ 0x14076DC08 (RtlInitFunctionalityCache.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140774510 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x140774CC8 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407A3C94 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1407A7F10 (ExpWatchLicenseInfoWork.c)
 *     NtOpenRegistryTransaction @ 0x1407C0760 (NtOpenRegistryTransaction.c)
 *     CmpInitializeLazyWriters @ 0x1407CF88C (CmpInitializeLazyWriters.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407D5668 (CmpHiveCacheEntryCleanup.c)
 *     AdtpObjsInitialize @ 0x140801948 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140801E68 (AdtpInitializeDriveLetters.c)
 *     RtlpLoadLanguageConfigList @ 0x14081B8B0 (RtlpLoadLanguageConfigList.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     PfSnPopulateReadList @ 0x1408C1D90 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x1408C237C (PfSnGetSectionObject.c)
 *     PfpVolumeOpenAndVerify @ 0x1408E9330 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1408ECD5C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x1408ED378 (PfSnIsVolumeMounted.c)
 *     AlpcpConnectPort @ 0x140916470 (AlpcpConnectPort.c)
 *     PfSnGetPrefetchInstructions @ 0x140987464 (PfSnGetPrefetchInstructions.c)
 *     NtSecureConnectPort @ 0x14098DB40 (NtSecureConnectPort.c)
 *     PnpPrepareDriverLoading @ 0x1409AFA84 (PnpPrepareDriverLoading.c)
 *     PfpSourceGetPrefetchSupport @ 0x1409C6350 (PfpSourceGetPrefetchSupport.c)
 *     PfpPrefetchPrivatePages @ 0x1409C6B5C (PfpPrefetchPrivatePages.c)
 *     PfpFileBuildReadSupport @ 0x1409C7864 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x1409C7C40 (PfpReadSupportCleanup.c)
 *     PfSnPrefetchMetadata @ 0x1409C7D14 (PfSnPrefetchMetadata.c)
 *     AlpcpCreateConnectionPort @ 0x1409DFF40 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 *     NtCreateRegistryTransaction @ 0x140A4ADE0 (NtCreateRegistryTransaction.c)
 *     NtCreateThreadStateChange @ 0x140A5DB20 (NtCreateThreadStateChange.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     sub_140BF76B4 @ 0x140BF76B4 (sub_140BF76B4.c)
 *     CreateSystemRootLink @ 0x140BF93F8 (CreateSystemRootLink.c)
 *     InitSafeBoot @ 0x140BFA900 (InitSafeBoot.c)
 *     FsRtlInitializeSmssEvent @ 0x140C07E2C (FsRtlInitializeSmssEvent.c)
 *     IopInitCrashDumpRegCallback @ 0x140C0B880 (IopInitCrashDumpRegCallback.c)
 *     IopApplySystemPartitionProt @ 0x140C0D000 (IopApplySystemPartitionProt.c)
 *     IopProtectSystemPartition @ 0x140C0D254 (IopProtectSystemPartition.c)
 *     SepAdtInitializeAuditingOptions @ 0x140C29E70 (SepAdtInitializeAuditingOptions.c)
 *     ExpWatchProductTypeInitialization @ 0x140C303BC (ExpWatchProductTypeInitialization.c)
 *     ExpInitializeCallbacks @ 0x140C31518 (ExpInitializeCallbacks.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1403D772C (ExQueryHandleExceptionsPermanency.c)
 *     ObpIsKernelHandle @ 0x140410650 (ObpIsKernelHandle.c)
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     KeRaiseUserException @ 0x1404CDCA0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     VfCheckUserHandle @ 0x140B99248 (VfCheckUserHandle.c)
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
