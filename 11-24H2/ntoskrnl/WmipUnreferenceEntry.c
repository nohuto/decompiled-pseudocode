/*
 * XREFs of WmipUnreferenceEntry @ 0x1409CE1D4
 * Callers:
 *     WmipAddMofResource @ 0x1407A58A8 (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x1407A5DE0 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407A5EB8 (WmipUpdateModifyGuid.c)
 *     WmipDereferenceEvent @ 0x1409C9CE0 (WmipDereferenceEvent.c)
 *     WmipGenerateRegistrationNotification @ 0x1409CB3C4 (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x1409CB50C (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x1409CB800 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409CB9CC (WmipEnableCollectionForNewGuid.c)
 *     WmipQuerySetExecuteSI @ 0x1409CDA80 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409CDD78 (WmipQueryAllData.c)
 *     WmipPrepareWnodeSI @ 0x1409CEBB0 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409CEEB8 (WmipPrepareForWnodeAD.c)
 *     WmipAddProviderIdToPIList @ 0x1409CF0AC (WmipAddProviderIdToPIList.c)
 *     WmipDSCleanup @ 0x1409CF8B0 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409CFA88 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDeleteMethod @ 0x1409CFC00 (WmipDeleteMethod.c)
 *     WmipAddDataSource @ 0x1409CFD60 (WmipAddDataSource.c)
 *     WmipMangleInstanceName @ 0x1409D040C (WmipMangleInstanceName.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1409D0A48 (WmipDetermineInstanceBaseIndex.c)
 *     WmipLegacyEtwWorker @ 0x1409D0ED0 (WmipLegacyEtwWorker.c)
 *     WmipSendEnableDisableRequest @ 0x1409D12AC (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1409D1534 (WmipUpdateDataSource.c)
 *     WmipProcessLegacyEtwCallback @ 0x140A8E598 (WmipProcessLegacyEtwCallback.c)
 *     WmipSendEnableRequest @ 0x140A909B4 (WmipSendEnableRequest.c)
 *     WmipRemoveDS @ 0x140AA0824 (WmipRemoveDS.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void **v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  }
  else
  {
    v6 = *a2;
    v7 = *((_DWORD *)a2 + 4) | 0x20000000;
    *((_DWORD *)a2 + 4) = v7;
    if ( v6 && (v7 & 0x10000000) != 0 )
    {
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || (v8 = (void **)*((_QWORD *)a2 + 1), *v8 != a2) )
        __fastfail(3u);
      *v8 = (void *)v6;
      *(_QWORD *)(v6 + 8) = v8;
    }
    KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
    if ( *(_QWORD *)(a1 + 16) )
      guard_dispatch_icall_no_overrides(a2, v9, v10, v11);
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
