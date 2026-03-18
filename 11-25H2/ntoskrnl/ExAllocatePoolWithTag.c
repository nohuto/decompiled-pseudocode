/*
 * XREFs of ExAllocatePoolWithTag @ 0x140B62010
 * Callers:
 *     CcSetDirtyInMask @ 0x1402D5CB0 (CcSetDirtyInMask.c)
 *     CcAllocateInitializeBcb @ 0x1402D67D4 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     CcInitializeVolumeCacheMap @ 0x1403A5574 (CcInitializeVolumeCacheMap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403A81B8 (CcCreatePrivateVolumeCacheMap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403A84A0 (CcInitializePrivateVolumeCacheMap.c)
 *     CcExtendVacbArray @ 0x1403B6928 (CcExtendVacbArray.c)
 *     CBufferAllocate @ 0x1403BBBEC (CBufferAllocate.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403D28E0 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403D2ED0 (FsRtlAddEntry.c)
 *     SepAdtMarshallAuditRecord @ 0x1403D6A38 (SepAdtMarshallAuditRecord.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403EA890 (RtlInsertElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403EB080 (RtlInsertElementGenericTableFullAvl.c)
 *     FsRtlTruncateBaseMcb @ 0x1403F29F0 (FsRtlTruncateBaseMcb.c)
 *     CcPostVolumeTelemetry @ 0x140421068 (CcPostVolumeTelemetry.c)
 *     ExAllocatePoolZero @ 0x14043AC10 (ExAllocatePoolZero.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404953E4 (FsRtlpOplockSendModernAppTermination.c)
 *     CcAllocateInitializeVacbArray @ 0x1404A3F4C (CcAllocateInitializeVacbArray.c)
 *     CcRegisterExternalCache @ 0x1405775A0 (CcRegisterExternalCache.c)
 *     CcRegisterExternalCacheEx @ 0x140577690 (CcRegisterExternalCacheEx.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 *     CcQueryRegKeyValue @ 0x14057809C (CcQueryRegKeyValue.c)
 *     CcSetupWatchForRegistryChanges @ 0x1405783E0 (CcSetupWatchForRegistryChanges.c)
 *     CcCreatePartition @ 0x140579350 (CcCreatePartition.c)
 *     CcInitializePartition @ 0x140579A18 (CcInitializePartition.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14057A3A4 (CcQueueAsyncGetDeviceGuid.c)
 *     FsRtlAllocateAePushLock @ 0x14057CB60 (FsRtlAllocateAePushLock.c)
 *     FsRtlAllocatePool @ 0x14057D100 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x14057D190 (FsRtlAllocatePoolWithTag.c)
 *     CcInitializeProcessor @ 0x1406FAC40 (CcInitializeProcessor.c)
 *     CcAllocateObcb @ 0x1406FAD3C (CcAllocateObcb.c)
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1406FC264 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpTriageDumpInitialize @ 0x1406FD494 (DbgkpTriageDumpInitialize.c)
 *     FsRtlpOplockGetAckTimeoutOverride @ 0x1406FF9A0 (FsRtlpOplockGetAckTimeoutOverride.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140701E20 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     IoReadPartitionTable @ 0x140702290 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x140702750 (IoWritePartitionTable.c)
 *     RawQueryFileSystemInformation @ 0x14076D9C0 (RawQueryFileSystemInformation.c)
 *     SepCaptureAuditPolicy @ 0x140782D10 (SepCaptureAuditPolicy.c)
 *     SddlpReAlloc @ 0x140787828 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x1407879A4 (SddlpUuidToString.c)
 *     ExRegisterHost @ 0x1407B0F4C (ExRegisterHost.c)
 *     AslPathWildcardFindFirst @ 0x1407FA534 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1407FAB2C (AslPathWildcardFindNext.c)
 *     CreateTlgAggregateSession @ 0x14081488C (CreateTlgAggregateSession.c)
 *     LkmdTelCreateReport @ 0x14081F8EC (LkmdTelCreateReport.c)
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140933B38 (SeCaptureLuidAndAttributesArray.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140939670 (FsRtlFindInTunnelCacheEx.c)
 *     VrpDestroyNamespaceNode @ 0x14094749C (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14094AB48 (VrpAddNamespaceNodeToList.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 *     SeCaptureAcl @ 0x140998F9C (SeCaptureAcl.c)
 *     RawInitializeVcb @ 0x14099F208 (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14099F340 (ExAllocateCacheAwareRundownProtection.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1409B1E98 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     SddlpAlloc @ 0x1409E93A4 (SddlpAlloc.c)
 *     CcCreateVacbArray @ 0x1409F5010 (CcCreateVacbArray.c)
 *     VerifierExAllocatePoolWithTag @ 0x140B815E0 (VerifierExAllocatePoolWithTag.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x140B89940 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     CcInitializeVacbs @ 0x140C04F58 (CcInitializeVacbs.c)
 *     FsRtlInitSystem @ 0x140C07CDC (FsRtlInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG_PTR v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  PVOID result; // rax

  v5 = 256LL;
  if ( (PoolType & 1) == 0 )
  {
    v5 = 128LL;
    if ( (PoolType & 0x200) != 0 )
      v5 = 64LL;
  }
  if ( PoolType < NonPagedPool )
    v5 = 64LL;
  v6 = v5 | 4;
  if ( (PoolType & 0x20) == 0 )
    v6 = v5;
  v7 = v6 | 2;
  if ( (PoolType & 0x400) != 0 )
    v7 = v6;
  if ( (PoolType & 0xDE) != 0 )
  {
    v8 = v7 | 8;
    if ( (PoolType & 4) == 0 )
      v8 = v7;
    v9 = v8 | 0x200;
    if ( (PoolType & 0x80u) == 0 )
      v9 = v8;
    v7 = v9 | 0x400;
    if ( (PoolType & 0x40) == 0 )
      v7 = v9;
    if ( (PoolType & 0x10) != 0 )
      v7 |= 0x20uLL;
  }
  result = (PVOID)ExAllocatePool2(v7);
  if ( !result && (PoolType & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
