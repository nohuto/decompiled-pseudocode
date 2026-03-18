/*
 * XREFs of PiDmObjectRelease @ 0x1408D0A30
 * Callers:
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406FAFD4 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407264C8 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140726634 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140726698 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListInitEnumCallback @ 0x140726E80 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140727138 (PiDmObjectManagerPopulate.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14085C45C (PiUEventFreeClientRegistrationContext.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B41E4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B4894 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B4924 (PiDmAddCacheReferenceForObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408B96C8 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408BA158 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1408BB270 (PiDmCacheDataFree.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408BB2BC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408CB870 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408CC2D0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CF680 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CFC60 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408D0350 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D2A3C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1408D3934 (PiDqQueryActionQueueEntryFree.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409B1000 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmGetObjectConstraintList @ 0x1409D4AD0 (PiDmGetObjectConstraintList.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140A4FE3C (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A60418 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmListRemoveObjectWorker @ 0x140A71708 (PiDmListRemoveObjectWorker.c)
 *     PiDmObjectCreate @ 0x140AC3894 (PiDmObjectCreate.c)
 * Callees:
 *     PiDmCacheDataFree @ 0x1408BB270 (PiDmCacheDataFree.c)
 *     PiDmGetCacheKeys @ 0x1409ED06C (PiDmGetCacheKeys.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
