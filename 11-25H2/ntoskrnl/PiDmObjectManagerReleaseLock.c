/*
 * XREFs of PiDmObjectManagerReleaseLock @ 0x140968CC0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1408CCFCC (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x1408D1A38 (PiDqQueryAppendActionEntry.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PiUEventHandleRegistration @ 0x14096747C (PiUEventHandleRegistration.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140968418 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140968AC8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x140969C78 (PiDmListAddObjectWorker.c)
 *     PiDmListRemoveObjectWorker @ 0x140A6F6E8 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PiDmObjectManagerReleaseLock(struct _ERESOURCE *a1)
{
  ExReleaseResourceLite(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
