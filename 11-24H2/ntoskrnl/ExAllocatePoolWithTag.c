/*
 * XREFs of ExAllocatePoolWithTag @ 0x140B72010
 * Callers:
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1402CA5A8 (CcCreatePrivateVolumeCacheMap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1402CA884 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeVolumeCacheMap @ 0x1402CDF18 (CcInitializeVolumeCacheMap.c)
 *     SepAdtMarshallAuditRecord @ 0x1403490B8 (SepAdtMarshallAuditRecord.c)
 *     CcAllocateInitializeBcb @ 0x1403651D8 (CcAllocateInitializeBcb.c)
 *     CBufferAllocate @ 0x1403D16B4 (CBufferAllocate.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403DFD70 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403E0290 (FsRtlAddEntry.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403F03D0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403F0BC0 (RtlInsertElementGenericTableFullAvl.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 *     FsRtlTruncateBaseMcb @ 0x1403F9E10 (FsRtlTruncateBaseMcb.c)
 *     ExAllocatePoolZero @ 0x140437FE0 (ExAllocatePoolZero.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     CcSetDirtyInMask @ 0x1404614E0 (CcSetDirtyInMask.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404946C8 (FsRtlpOplockSendModernAppTermination.c)
 *     CcAllocateInitializeVacbArray @ 0x1404A41CC (CcAllocateInitializeVacbArray.c)
 *     CcPostVolumeTelemetry @ 0x1404C405C (CcPostVolumeTelemetry.c)
 *     CcRegisterExternalCache @ 0x14057A8A0 (CcRegisterExternalCache.c)
 *     CcRegisterExternalCacheEx @ 0x14057A990 (CcRegisterExternalCacheEx.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
 *     CcQueryRegKeyValue @ 0x14057B3AC (CcQueryRegKeyValue.c)
 *     CcSetupWatchForRegistryChanges @ 0x14057B6F0 (CcSetupWatchForRegistryChanges.c)
 *     CcCreatePartition @ 0x14057C660 (CcCreatePartition.c)
 *     CcInitializePartition @ 0x14057CD28 (CcInitializePartition.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14057D6C4 (CcQueueAsyncGetDeviceGuid.c)
 *     FsRtlAllocateAePushLock @ 0x14057FE80 (FsRtlAllocateAePushLock.c)
 *     FsRtlAllocatePool @ 0x140580420 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1405804B0 (FsRtlAllocatePoolWithTag.c)
 *     CcInitializeProcessor @ 0x140706B20 (CcInitializeProcessor.c)
 *     CcAllocateObcb @ 0x140706C1C (CcAllocateObcb.c)
 *     DbgkCaptureLiveDump @ 0x140707A3C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140708144 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpTriageDumpInitialize @ 0x140709374 (DbgkpTriageDumpInitialize.c)
 *     FsRtlpOplockGetAckTimeoutOverride @ 0x14070B880 (FsRtlpOplockGetAckTimeoutOverride.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070DD00 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     IoReadPartitionTable @ 0x14070E170 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x14070E630 (IoWritePartitionTable.c)
 *     RawQueryFileSystemInformation @ 0x14077CCF0 (RawQueryFileSystemInformation.c)
 *     SepCaptureAuditPolicy @ 0x140791FD0 (SepCaptureAuditPolicy.c)
 *     SddlpReAlloc @ 0x140796BF8 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x140796D74 (SddlpUuidToString.c)
 *     ExRegisterHost @ 0x1407C071C (ExRegisterHost.c)
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080A69C (AslPathWildcardFindNext.c)
 *     CreateTlgAggregateSession @ 0x1408246AC (CreateTlgAggregateSession.c)
 *     LkmdTelCreateReport @ 0x14082F62C (LkmdTelCreateReport.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     SddlpAlloc @ 0x1408638C4 (SddlpAlloc.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     ObpAllocateObject @ 0x14089B290 (ObpAllocateObject.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     VrpDestroyNamespaceNode @ 0x140929080 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14092A0C4 (VrpAddNamespaceNodeToList.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140931D50 (FsRtlFindInTunnelCacheEx.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140937E28 (SeCaptureLuidAndAttributesArray.c)
 *     SeCaptureAcl @ 0x14099EADC (SeCaptureAcl.c)
 *     RawInitializeVcb @ 0x1409A40E8 (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1409A4220 (ExAllocateCacheAwareRundownProtection.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1409CA218 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     CcCreateVacbArray @ 0x1409F5A98 (CcCreateVacbArray.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VerifierExAllocatePoolWithTag @ 0x140B915C0 (VerifierExAllocatePoolWithTag.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x140B99920 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     CcInitializeVacbs @ 0x140C15FF8 (CcInitializeVacbs.c)
 *     FsRtlInitSystem @ 0x140C18D7C (FsRtlInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
