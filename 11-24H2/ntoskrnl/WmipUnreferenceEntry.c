/*
 * XREFs of WmipUnreferenceEntry @ 0x1409B31A8
 * Callers:
 *     WmipAddMofResource @ 0x1407A59E8 (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x1407A5F20 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407A5FF8 (WmipUpdateModifyGuid.c)
 *     WmipUpdateDataSource @ 0x1409AF500 (WmipUpdateDataSource.c)
 *     WmipSendEnableDisableRequest @ 0x1409AF934 (WmipSendEnableDisableRequest.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1409AFE8C (WmipDetermineInstanceBaseIndex.c)
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 *     WmipMangleInstanceName @ 0x1409B0854 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B0E04 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipGenerateRegistrationNotification @ 0x1409B1AE4 (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x1409B1C2C (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x1409B1F20 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B20EC (WmipEnableCollectionForNewGuid.c)
 *     WmipQuerySetExecuteSI @ 0x1409B2A54 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409B2D4C (WmipQueryAllData.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409B3E88 (WmipPrepareForWnodeAD.c)
 *     WmipAddProviderIdToPIList @ 0x1409B407C (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x140A2CBD0 (WmipDeleteMethod.c)
 *     WmipDSCleanup @ 0x140A49A00 (WmipDSCleanup.c)
 *     WmipLegacyEtwWorker @ 0x140A876B0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwCallback @ 0x140A8AC08 (WmipProcessLegacyEtwCallback.c)
 *     WmipSendEnableRequest @ 0x140A8D0B0 (WmipSendEnableRequest.c)
 *     WmipRemoveDS @ 0x140A9BBB4 (WmipRemoveDS.c)
 *     WmipDereferenceEvent @ 0x140AB08D8 (WmipDereferenceEvent.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void **v8; // rcx
  __int64 v9; // rdx

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
      guard_dispatch_icall_no_overrides(a2, v9);
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
