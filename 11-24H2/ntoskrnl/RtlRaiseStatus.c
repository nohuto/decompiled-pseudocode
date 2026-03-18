/*
 * XREFs of RtlRaiseStatus @ 0x140280B30
 * Callers:
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     FsRtlPrivateLock @ 0x140248460 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402491EC (FsRtlPrivateInitializeFileLock.c)
 *     CcZeroDataInCache @ 0x140267564 (CcZeroDataInCache.c)
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     RtlDispatchException @ 0x14027C1C0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     RtlpxVirtualUnwind @ 0x14027F030 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x140280090 (RtlpUnwindPrologue.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     CcMapAndRead @ 0x140280CF0 (CcMapAndRead.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x140281D74 (RtlpLookupDynamicUserFunctionTable.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140286070 (MmProbeAndLockSelectedPages.c)
 *     KeReleaseSemaphoreEx @ 0x1402A1600 (KeReleaseSemaphoreEx.c)
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     CcZeroData @ 0x1402CC9B0 (CcZeroData.c)
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     RtlIsNameInExpression @ 0x1403474C0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x140347540 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140347600 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x140348070 (RtlAreNamesEqual.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403DFD70 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403E0290 (FsRtlAddEntry.c)
 *     KiInitializeUserApc @ 0x1403E5264 (KiInitializeUserApc.c)
 *     PsChargePoolQuota @ 0x1403EEFD0 (PsChargePoolQuota.c)
 *     FsRtlInitializeLargeMcb @ 0x1403F9FF0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1403FA060 (FsRtlInitializeBaseMcbEx.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140401030 (IopAllocateAndPopulateWriteIrp.c)
 *     CcCopyToCacheHelper @ 0x14040C830 (CcCopyToCacheHelper.c)
 *     MiProbeAndLockPages @ 0x140420120 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x140438384 (IopProbeAndLockPages_0.c)
 *     RtlpUnwindOpSlots @ 0x140442430 (RtlpUnwindOpSlots.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     InitializeSListHead @ 0x14045FE80 (InitializeSListHead.c)
 *     CcMdlWriteComplete2 @ 0x140461194 (CcMdlWriteComplete2.c)
 *     KeSuspendThread @ 0x140483128 (KeSuspendThread.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140483AB0 (RtlpLookupPrimaryFunctionEntry.c)
 *     CcZeroDataOnDisk @ 0x14048BF20 (CcZeroDataOnDisk.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     CcReferenceFileOffset @ 0x1404CFBE0 (CcReferenceFileOffset.c)
 *     CcCopyReadEx @ 0x1404DBF70 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     FsRtlAllocatePool @ 0x140580420 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithQuota @ 0x140580450 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x140580480 (FsRtlAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithTag @ 0x1405804B0 (FsRtlAllocatePoolWithTag.c)
 *     FsRtlpPostStackOverflow @ 0x1405821AC (FsRtlpPostStackOverflow.c)
 *     RtlRaiseException @ 0x1405E88F0 (RtlRaiseException.c)
 *     DifExRaiseStatusWrapper @ 0x14061FC30 (DifExRaiseStatusWrapper.c)
 *     _purecall @ 0x140658550 (_purecall.c)
 *     MiZeroPageCalibrate @ 0x140693E8C (MiZeroPageCalibrate.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407129A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     ObpInitStackAndObjectTables @ 0x140745058 (ObpInitStackAndObjectTables.c)
 *     EtwpInitializeStackLookasideList @ 0x1407AB448 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializeLastBranchTracing @ 0x1407B18F4 (EtwpInitializeLastBranchTracing.c)
 *     NtSetUuidSeed @ 0x1407C0E20 (NtSetUuidSeed.c)
 *     CmpInitCallbacks @ 0x1407D19C0 (CmpInitCallbacks.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C48F0 (BuildQueryDirectoryIrp.c)
 *     RtlRunOnceExecuteOnce @ 0x14095F8F0 (RtlRunOnceExecuteOnce.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     NtQueryEaFile @ 0x14096E890 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x14096EFA0 (NtQueryVolumeInformationFile.c)
 *     NtQueryMultipleValueKey @ 0x1409790C0 (NtQueryMultipleValueKey.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1409A4390 (IoCreateStreamFileObjectEx2.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0BC30 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A60FA0 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A8E968 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A958BC (IopWriteFileGather.c)
 *     CcMapAndCopyFromCache @ 0x140AC2F00 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140AC3350 (CcMdlRead.c)
 *     PopEndMirroring @ 0x140B64660 (PopEndMirroring.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 *     VerifierExAllocatePool @ 0x140B91070 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140B91190 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x140B912E0 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140B91480 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140B91520 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x140B915C0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140B916E0 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140B9F7D0 (ViRlrsMmProbeAndLockProcessPages_Entry.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140BA0B40 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140C10394 (HalpDmaAllocateReservedMappingArray.c)
 *     ExpWorkerFactoryInitialization @ 0x140C436D8 (ExpWorkerFactoryInitialization.c)
 *     WheapInitializeEventing @ 0x140C44B04 (WheapInitializeEventing.c)
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 *     MiInitializeSystemPteTracker @ 0x140C5C288 (MiInitializeSystemPteTracker.c)
 *     MiInitializeDecayPfns @ 0x140C5C2D8 (MiInitializeDecayPfns.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x1404FD070 (RtlRaiseNoncontinuableException.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall __noreturn RtlRaiseStatus(int a1)
{
  __int64 v2; // r8
  char v3; // bl
  unsigned int v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-578h] BYREF
  __int64 v6; // [rsp+28h] [rbp-570h]
  __int64 v7; // [rsp+30h] [rbp-568h]
  int v8; // [rsp+38h] [rbp-560h]
  _BYTE v9[132]; // [rsp+3Ch] [rbp-55Ch] BYREF
  _BYTE v10[1240]; // [rsp+C0h] [rbp-4D8h] BYREF

  memset_0(v9, 0, 0x7CuLL);
  v6 = 0LL;
  v8 = 0;
  v7 = -1LL;
  v5[0] = a1;
  v3 = 1;
  v5[1] = 129;
  do
  {
    LOBYTE(v2) = v3;
    v4 = RtlRaiseNoncontinuableException(v5, v10, v2);
    --v3;
  }
  while ( !v3 );
  RtlRaiseStatus(v4);
}
