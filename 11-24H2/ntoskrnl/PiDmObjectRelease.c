/*
 * XREFs of PiDmObjectRelease @ 0x1408CE420
 * Callers:
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406F8C14 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140724058 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x1407241C4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140724228 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListInitEnumCallback @ 0x140724A10 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140724CC8 (PiDmObjectManagerPopulate.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1408581CC (PiUEventFreeClientRegistrationContext.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B1AD4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408B7070 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408B7B08 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1408B8C20 (PiDmCacheDataFree.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408B8C6C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408C92A0 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408C9D00 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD070 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD650 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDD40 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D042C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1408D1324 (PiDqQueryActionQueueEntryFree.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14099AAC0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmGetObjectConstraintList @ 0x1409C4900 (PiDmGetObjectConstraintList.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140A46BEC (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A58968 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmListRemoveObjectWorker @ 0x140A6AAE8 (PiDmListRemoveObjectWorker.c)
 *     PiDmObjectCreate @ 0x140ABF218 (PiDmObjectCreate.c)
 * Callees:
 *     PiDmCacheDataFree @ 0x1408B8C20 (PiDmCacheDataFree.c)
 *     PiDmGetCacheKeys @ 0x1409E639C (PiDmGetCacheKeys.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectRelease(unsigned int *P)
{
  void *v2; // rcx
  __int64 v3; // rsi
  char *v4; // rdi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    PiDmGetCacheKeys(P[7], &v6, &v5);
    if ( v5 )
    {
      v3 = v5;
      v4 = (char *)(P + 28);
      do
      {
        PiDmCacheDataFree((__int64)v4);
        v4 += 24;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
