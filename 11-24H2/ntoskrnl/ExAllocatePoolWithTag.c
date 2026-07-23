/*
 * XREFs of ExAllocatePoolWithTag @ 0x140B74010
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403BFA60 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403BFF80 (FsRtlAddEntry.c)
 *     SepAdtMarshallAuditRecord @ 0x1403C2AF8 (SepAdtMarshallAuditRecord.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403E48E0 (RtlInsertElementGenericTableFullAvl.c)
 *     CcAllocateInitializeBcb @ 0x1403EA890 (CcAllocateInitializeBcb.c)
 *     CcExtendVacbArray @ 0x1403ED180 (CcExtendVacbArray.c)
 *     FsRtlTruncateBaseMcb @ 0x1403EFD20 (FsRtlTruncateBaseMcb.c)
 *     CcInitializeVolumeCacheMap @ 0x14040BF18 (CcInitializeVolumeCacheMap.c)
 *     CcPostVolumeTelemetry @ 0x14040C990 (CcPostVolumeTelemetry.c)
 *     ExAllocatePoolZero @ 0x14042ABA0 (ExAllocatePoolZero.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x14042FE00 (CcCreatePrivateVolumeCacheMap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1404300DC (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     CBufferAllocate @ 0x1404626A4 (CBufferAllocate.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14048F158 (FsRtlpOplockSendModernAppTermination.c)
 *     CcAllocateInitializeVacbArray @ 0x14049EF5C (CcAllocateInitializeVacbArray.c)
 *     CcRegisterExternalCache @ 0x140577D30 (CcRegisterExternalCache.c)
 *     CcRegisterExternalCacheEx @ 0x140577E20 (CcRegisterExternalCacheEx.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
 *     CcQueryRegKeyValue @ 0x14057883C (CcQueryRegKeyValue.c)
 *     CcSetupWatchForRegistryChanges @ 0x140578B80 (CcSetupWatchForRegistryChanges.c)
 *     CcCreatePartition @ 0x140579AF0 (CcCreatePartition.c)
 *     CcInitializePartition @ 0x14057A1B8 (CcInitializePartition.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14057AB54 (CcQueueAsyncGetDeviceGuid.c)
 *     FsRtlAllocateAePushLock @ 0x14057D2C0 (FsRtlAllocateAePushLock.c)
 *     FsRtlAllocatePool @ 0x14057D860 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x14057D8F0 (FsRtlAllocatePoolWithTag.c)
 *     CcInitializeProcessor @ 0x1407046E0 (CcInitializeProcessor.c)
 *     CcAllocateObcb @ 0x1407047DC (CcAllocateObcb.c)
 *     DbgkCaptureLiveDump @ 0x1407055FC (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140705D04 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpTriageDumpInitialize @ 0x140706F34 (DbgkpTriageDumpInitialize.c)
 *     FsRtlpOplockGetAckTimeoutOverride @ 0x140709414 (FsRtlpOplockGetAckTimeoutOverride.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070B8A0 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     RawQueryFileSystemInformation @ 0x14077CBF4 (RawQueryFileSystemInformation.c)
 *     SepCaptureAuditPolicy @ 0x140791FA0 (SepCaptureAuditPolicy.c)
 *     SddlpReAlloc @ 0x140796D08 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x140796E84 (SddlpUuidToString.c)
 *     ExRegisterHost @ 0x1407C0B6C (ExRegisterHost.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080ADDC (AslPathWildcardFindNext.c)
 *     CreateTlgAggregateSession @ 0x140824E0C (CreateTlgAggregateSession.c)
 *     LkmdTelCreateReport @ 0x14082FE24 (LkmdTelCreateReport.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     RawInitializeVcb @ 0x1408ACE6C (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1408ACFB0 (ExAllocateCacheAwareRundownProtection.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14092C204 (VrpAddNamespaceNodeToList.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140933E90 (FsRtlFindInTunnelCacheEx.c)
 *     SeCaptureAcl @ 0x1409837A4 (SeCaptureAcl.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140984EB8 (SeCaptureLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1409B68D0 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     CcCreateVacbArray @ 0x1409E914C (CcCreateVacbArray.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC (VrpHandleIoctlInitializeJobForVreg.c)
 *     VerifierExAllocatePoolWithTag @ 0x140B935C0 (VerifierExAllocatePoolWithTag.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x140B9B920 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     CcInitializeVacbs @ 0x140C17FF8 (CcInitializeVacbs.c)
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG_PTR v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  ULONG v11; // r9d
  PVOID result; // rax

  v6 = 256LL;
  if ( (PoolType & 1) == 0 )
  {
    v6 = 128LL;
    if ( (PoolType & 0x200) != 0 )
      v6 = 64LL;
  }
  if ( PoolType < NonPagedPool )
    v6 = 64LL;
  v7 = v6 | 4;
  if ( (PoolType & 0x20) == 0 )
    v7 = v6;
  v8 = v7 | 2;
  if ( (PoolType & 0x400) != 0 )
    v8 = v7;
  if ( (PoolType & 0xDE) != 0 )
  {
    v9 = v8 | 8;
    if ( (PoolType & 4) == 0 )
      v9 = v8;
    v10 = v9 | 0x200;
    if ( (PoolType & 0x80u) == 0 )
      v10 = v9;
    v8 = v10 | 0x400;
    if ( (PoolType & 0x40) == 0 )
      v8 = v10;
    if ( (PoolType & 0x10) != 0 )
      v8 |= 0x20uLL;
  }
  v11 = Tag & 0x7FFFFFFF;
  if ( !v11 )
    v11 = 811884866;
  result = (PVOID)ExAllocatePool2(v8, NumberOfBytes, v11);
  if ( !result && (PoolType & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
