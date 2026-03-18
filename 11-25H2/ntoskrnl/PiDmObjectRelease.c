/*
 * XREFs of PiDmObjectRelease @ 0x1408CE5E0
 * Callers:
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406EF194 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14071A548 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14071A6B4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14071A718 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListInitEnumCallback @ 0x14071AF00 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14071B1B8 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408368AC (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectProcessPropertyChange @ 0x140837338 (PiDmObjectProcessPropertyChange.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140838C50 (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x140838F9C (PiPnpRtlObjectEventRelease.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140839AA8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CCFCC (PiDmEnumObjectsWithCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD1D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD7B0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDEA0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408D0B70 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408D1380 (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObjectConstraintList @ 0x1408D1930 (PiDmGetObjectConstraintList.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14095A5C0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140967C20 (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140968418 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140968AC8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14096AA90 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmCacheDataFree @ 0x14096ACF4 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A5E044 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmListRemoveObjectWorker @ 0x140A6F6E8 (PiDmListRemoveObjectWorker.c)
 *     PiDmObjectCreate @ 0x140AC0068 (PiDmObjectCreate.c)
 * Callees:
 *     PiDmCacheDataFree @ 0x14096ACF4 (PiDmCacheDataFree.c)
 *     PiDmGetCacheKeys @ 0x1409F24B0 (PiDmGetCacheKeys.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
        PiDmCacheDataFree(v4);
        v4 += 24;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
